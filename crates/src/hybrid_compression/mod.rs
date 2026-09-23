//! Native hybrid compression implementation.

use ark_crypto_primitives::crh::CRHScheme;
use ark_ff::PrimeField;

use crate::uhf::uhf;

pub mod constraints;

/// Computes `(beta, gamma)` for the given `alpha`.
///
/// See [`constraints::prover`] for the in-circuit gadget.
///
/// <https://eprint.iacr.org/2025/1500.pdf>
pub fn prover<BetaCRH, F>(
    beta_params: &BetaCRH::Parameters,
    alpha: F,
    stmt: &[F],
) -> Result<(F, F), ark_crypto_primitives::Error>
where
    BetaCRH: CRHScheme<Input = [F], Output = F>,
    F: PrimeField,
{
    hybrid_compression::<BetaCRH, F>(beta_params, alpha, stmt)
}

/// Computes `(alpha, gamma)` from the `beta` the prover sent.
///
/// <https://eprint.iacr.org/2025/1500.pdf>
pub fn verifier<AlphaCRH, F>(
    alpha_params: &AlphaCRH::Parameters,
    beta: F,
    stmt: &[F],
) -> Result<(F, F), ark_crypto_primitives::Error>
where
    AlphaCRH: CRHScheme<Input = [F], Output = F>,
    F: PrimeField,
{
    hybrid_compression::<AlphaCRH, F>(alpha_params, beta, stmt)
}

fn hybrid_compression<CRH, F>(
    params: &CRH::Parameters,
    known: F,
    stmt: &[F],
) -> Result<(F, F), ark_crypto_primitives::Error>
where
    CRH: CRHScheme<Input = [F], Output = F>,
    F: PrimeField,
{
    let computed = CRH::evaluate(params, stmt)?;
    let gamma = uhf(known + computed, stmt);
    Ok((computed, gamma))
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
            prover::<ark_crypto_primitives::crh::poseidon::CRH<Fr>, Fr>(&params, alpha, &x)
                .unwrap();

        let (beta_var, gamma_var) = constraints::prover::<
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
