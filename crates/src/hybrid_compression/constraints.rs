//! In-circuit hybrid compression gadget.

use ark_crypto_primitives::crh::{CRHScheme, constraints::CRHSchemeGadget};
use ark_ff::PrimeField;
use ark_r1cs_std::fields::fp::FpVar;
use ark_relations::gr1cs::SynthesisError;

use crate::uhf::constraints::uhf_gadget;

/// In-circuit counterpart of [`super::prover`], computing `(beta, gamma)`.
///
/// # Security
/// `alpha`, `beta`, and `gamma` must be allocated as public inputs. `stmt` may
/// be allocated as a private witness.
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
