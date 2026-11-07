//! In-circuit hybrid compression gadget.

use ark_crypto_primitives::crh::{CRHScheme, constraints::CRHSchemeGadget};
use ark_ff::PrimeField;
use ark_r1cs_std::{eq::EqGadget, fields::fp::FpVar};
use ark_relations::gr1cs::SynthesisError;

use crate::uhf::constraints::uhf_gadget;

/// Enforces that `(alpha, beta, gamma)` is the hybrid compression of `stmt`
/// (see [`super::compress`]).
///
/// # Security
/// `alpha`, `beta`, and `gamma` must be allocated as public inputs. `stmt` may
/// be allocated as a private witness. The compression binds `stmt` only for a
/// fixed statement length, which verifiers must check.
pub fn enforce<H, F, CRH>(
    params: &CRH::ParametersVar,
    alpha: &FpVar<F>,
    beta: &FpVar<F>,
    gamma: &FpVar<F>,
    stmt: &[FpVar<F>],
) -> Result<(), SynthesisError>
where
    H: CRHScheme,
    F: PrimeField,
    CRH: CRHSchemeGadget<H, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    let (beta_computed, gamma_computed) = prover::<H, F, CRH>(params, alpha.clone(), stmt)?;
    beta.enforce_equal(&beta_computed)?;
    gamma.enforce_equal(&gamma_computed)
}

/// In-circuit counterpart of [`super::prover`], computing `(beta, gamma)`.
pub fn prover<H, F, CRH>(
    params: &CRH::ParametersVar,
    alpha: CRH::OutputVar,
    stmt: &CRH::InputVar,
) -> Result<(CRH::OutputVar, CRH::OutputVar), SynthesisError>
where
    H: CRHScheme,
    F: PrimeField,
    CRH: CRHSchemeGadget<H, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    let beta = CRH::evaluate(params, stmt)?;
    let sigma = alpha + beta.clone();
    let gamma = uhf_gadget(sigma, stmt);
    Ok((beta, gamma))
}

#[cfg(test)]
mod test {
    use ark_crypto_primitives::crh::poseidon::{
        CRH,
        constraints::{CRHGadget, CRHParametersVar},
    };
    use ark_ed_on_bn254::Fr;
    use ark_ff::UniformRand;
    use ark_r1cs_std::alloc::AllocVar;
    use ark_relations::gr1cs::ConstraintSystem;

    use super::*;
    use crate::{hybrid_compression::compress, test_utils::poseidon_params};

    fn synthesize(stmt: &[Fr], public_inputs: (Fr, Fr, Fr)) -> bool {
        let cs = ConstraintSystem::<Fr>::new_ref();
        let params = CRHParametersVar::new_constant(cs.clone(), poseidon_params()).unwrap();
        let alpha = FpVar::new_input(cs.clone(), || Ok(public_inputs.0)).unwrap();
        let beta = FpVar::new_input(cs.clone(), || Ok(public_inputs.1)).unwrap();
        let gamma = FpVar::new_input(cs.clone(), || Ok(public_inputs.2)).unwrap();
        let stmt: Vec<FpVar<Fr>> = stmt
            .iter()
            .map(|x| FpVar::new_witness(cs.clone(), || Ok(*x)).unwrap())
            .collect();

        enforce::<CRH<Fr>, Fr, CRHGadget<Fr>>(&params, &alpha, &beta, &gamma, &stmt).unwrap();
        cs.is_satisfied().unwrap()
    }

    #[test]
    fn test_enforce_accepts_compressed_statement() {
        let mut rng = ark_std::test_rng();
        let stmt: Vec<Fr> = (0..4).map(|_| Fr::rand(&mut rng)).collect();
        let public_inputs =
            compress::<CRH<Fr>, CRH<Fr>, Fr>(&poseidon_params(), &poseidon_params(), &stmt)
                .unwrap();

        assert!(synthesize(&stmt, public_inputs));
    }

    #[test]
    fn test_enforce_rejects_other_statement() {
        let mut rng = ark_std::test_rng();
        let stmt: Vec<Fr> = (0..4).map(|_| Fr::rand(&mut rng)).collect();
        let public_inputs =
            compress::<CRH<Fr>, CRH<Fr>, Fr>(&poseidon_params(), &poseidon_params(), &stmt)
                .unwrap();

        let mut other = stmt.clone();
        other[0] += Fr::from(1u64);
        assert!(!synthesize(&other, public_inputs));
    }
}
