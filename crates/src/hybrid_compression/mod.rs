//! Native hybrid compression implementation.

use ark_crypto_primitives::crh::CRHScheme;
use ark_ff::PrimeField;

use crate::uhf::uhf;

pub mod constraints;

/// Computes the values used by the circuit-side of hybrid compression
/// (Construction 2). Returns the pair `(beta, gamma)`.
///
/// `alpha` is the counterpart hash computed *outside* the circuit (e.g. by
/// `KeccakCRH` / `LibHybridCompression.hash` in Solidity)
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

    use ark_crypto_primitives::crh::poseidon::constraints::CRHParametersVar;
    use ark_ed_on_bn254::Fr;
    use ark_r1cs_std::{GR1CSVar, alloc::AllocVar, fields::fp::FpVar};
    use ark_relations::gr1cs::ConstraintSystem;

    use super::*;
    use crate::test_utils::poseidon_params;

    #[test]
    fn test_impls_agree() {
        let cs = ConstraintSystem::<Fr>::new_ref();

        let params = poseidon_params::<Fr>();
        let params_var = CRHParametersVar::new_input(cs.clone(), || Ok(&params)).unwrap();

        let alpha = Fr::from(42u64);
        let x: [Fr; 10] = from_fn(|i| Fr::from(i as u64));
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
