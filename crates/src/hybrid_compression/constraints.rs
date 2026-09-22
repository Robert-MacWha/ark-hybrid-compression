//! In-circuit hybrid compression gadget.

use ark_crypto_primitives::crh::{CRHScheme, constraints::CRHSchemeGadget};
use ark_ff::PrimeField;
use ark_r1cs_std::fields::fp::FpVar;
use ark_relations::gr1cs::SynthesisError;

use crate::uhf::constraints::uhf_gadget;

/// In-circuit for hybrid compression gadget (Construction 2).
///
/// Returns the pair `(beta, gamma)`.
///
/// # Security:
/// `alpha`, `beta`, and `gamma` must be allocated as public inputs. `stmt` may be
/// allocated as a private witness.
///
/// `alpha` is the counterpart hash computed *outside* the circuit. `beta` is
/// used by the counterparty to compute `sigma`, which is then used to compute
/// `gamma` via the universal hash function. By asserting that both `gamma`
/// values are equal, both parties can be assured that they are operating on
/// the same `stmt`.
///
/// See [`crate::hybrid_compression`] for more information.
pub fn hybrid_compression<H, F, CRH>(
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
