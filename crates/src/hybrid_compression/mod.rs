use ark_crypto_primitives::crh::CRHScheme;
use ark_ff::PrimeField;

use crate::uhf::uhf;

pub mod constraints;

/// Computes the values used by the circuit-side of hybrid compression
/// (Construction 2). Returns the pair `(beta, gamma)`.
///
/// `alpha` is the counterpart hash computed *outside* the circuit (e.g. by
/// [`crate::keccak::KeccakCRH`] / `LibHybridCompression.hash` in Solidity)
/// over the same `stmt`. `CRH` computes `beta`, the circuit-friendly hash
/// (e.g. Poseidon) over `stmt`.
///
/// See [`constraints::hybrid_compression`] for the in-circuit gadget.
///
/// <https://eprint.iacr.org/2025/1500.pdf>
pub fn hybrid_compression<CRH, F>(
    params: &CRH::Parameters,
    alpha: CRH::Output,
    stmt: &CRH::Input,
) -> Result<(CRH::Output, CRH::Output), ark_crypto_primitives::Error>
where
    CRH: CRHScheme<Input = [F], Output = F>,
    F: PrimeField,
{
    let beta = CRH::evaluate(params, stmt)?;
    let sigma = alpha + beta;
    let gamma = uhf(sigma, stmt);
    Ok((beta, gamma))
}

#[cfg(test)]
mod test {
    use std::array::from_fn;

    use ark_crypto_primitives::{
        crh::poseidon::constraints::CRHParametersVar, sponge::poseidon::PoseidonConfig,
    };
    use ark_ed_on_bn254::Fr;
    use ark_ff::UniformRand;
    use ark_r1cs_std::{GR1CSVar, alloc::AllocVar, fields::fp::FpVar};
    use ark_relations::gr1cs::ConstraintSystem;

    use super::*;

    #[test]
    fn test_impls_agree() {
        let mut rng = ark_std::test_rng();
        let cs = ConstraintSystem::<Fr>::new_ref();

        let mut mds = vec![vec![]; 3];
        for i in 0..3 {
            for _ in 0..3 {
                mds[i].push(Fr::rand(&mut rng));
            }
        }

        let mut ark = vec![vec![]; 8 + 24];
        for i in 0..8 + 24 {
            for _ in 0..3 {
                ark[i].push(Fr::rand(&mut rng));
            }
        }

        let params = PoseidonConfig::<Fr>::new(8, 24, 31, mds, ark, 2, 1);
        let params_var = CRHParametersVar::new_input(cs.clone(), || Ok(&params)).unwrap();

        let alpha = Fr::rand(&mut rng);
        let x: [Fr; 10] = from_fn(|_| Fr::rand(&mut rng));
        let alpha_var = FpVar::<Fr>::new_input(cs.clone(), || Ok(alpha)).unwrap();
        let x_var = x
            .iter()
            .map(|x| FpVar::<Fr>::new_input(cs.clone(), || Ok(*x)).unwrap())
            .collect::<Vec<_>>();

        let (beta, gamma) =
            hybrid_compression::<ark_crypto_primitives::crh::poseidon::CRH<Fr>, Fr>(
                &params, alpha, &x,
            )
            .unwrap();

        let (beta_var, gamma_var) = constraints::hybrid_compression::<
            ark_crypto_primitives::crh::poseidon::CRH<Fr>,
            Fr,
            ark_crypto_primitives::crh::poseidon::constraints::CRHGadget<Fr>,
        >(&params_var, alpha_var, &x_var)
        .unwrap();

        assert_eq!(beta, beta_var.value().unwrap());
        assert_eq!(gamma, gamma_var.value().unwrap());
        assert!(cs.is_satisfied().unwrap());
    }
}
