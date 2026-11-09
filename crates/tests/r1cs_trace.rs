//! Differential test of the Lean model in `lean/` against arkworks.
//!
//! Requires the rendered trace from `lean/Traces.lean` before being run.

use std::borrow::Borrow;

use ark_crypto_primitives::crh::{CRHScheme, constraints::CRHSchemeGadget};
use ark_hybrid_compression::{
    hybrid_compression::{self, compress},
    test_utils::{uhf, uhf_gadget},
};
use ark_r1cs_std::{
    alloc::AllocVar,
    fields::{FieldVar, fp::FpVar},
};
use ark_r1cs_trace::{F17, read_traces, render_trace};
use ark_relations::gr1cs::{ConstraintSystem, OptimizationGoal, SynthesisError};

/// Seed of the toy hash, `uhf(SEED, ·)`.
const SEED: u64 = 2;

/// Toy hash: the UHF at a fixed public seed. Mirrors `uhfCRH 2` in the Lean
/// model.
struct UhfCRH;

impl CRHScheme for UhfCRH {
    type Input = [F17];
    type Output = F17;
    type Parameters = ();

    fn setup<R: ark_std::rand::Rng>(
        _r: &mut R,
    ) -> Result<Self::Parameters, ark_crypto_primitives::Error> {
        Ok(())
    }

    fn evaluate<T: Borrow<Self::Input>>(
        _parameters: &Self::Parameters,
        input: T,
    ) -> Result<Self::Output, ark_crypto_primitives::Error> {
        Ok(uhf(F17::from(SEED), input.borrow()))
    }
}

/// In-circuit `UhfCRH`: multiplies only by the constant seed, so it emits no
/// constraints.
struct UhfCRHGadget;

impl CRHSchemeGadget<UhfCRH, F17> for UhfCRHGadget {
    type InputVar = [FpVar<F17>];
    type OutputVar = FpVar<F17>;
    type ParametersVar = ();

    fn evaluate(
        _parameters: &Self::ParametersVar,
        input: &Self::InputVar,
    ) -> Result<Self::OutputVar, SynthesisError> {
        Ok(uhf_gadget(FpVar::constant(F17::from(SEED)), input))
    }
}

#[test]
#[ignore = "needs the traces rendered by `lean/Traces.lean`; run `just verify`"]
fn trace_matches_lean_model() {
    let expected = read_traces(concat!(env!("CARGO_MANIFEST_DIR"), "/target/traces"))
        .expect("traces written by `lake env lean --run Traces.lean` (see `just verify`)");

    // Mirrors `exampleTrace` in the Lean model: witness the statement, then
    // compress it with the toy hash for both `alpha` and `beta`.
    let statement = [1u64, 2, 3, 4].map(F17::from);
    let (alpha, beta, gamma) = compress::<UhfCRH, UhfCRH, F17>(&(), &(), &statement).unwrap();

    let cs = ConstraintSystem::<F17>::new_ref();
    cs.set_optimization_goal(OptimizationGoal::Constraints);
    let statement_var = Vec::<FpVar<F17>>::new_witness(cs.clone(), || Ok(statement)).unwrap();
    let alpha_var = FpVar::new_input(cs.clone(), || Ok(alpha)).unwrap();
    let beta_var = FpVar::new_input(cs.clone(), || Ok(beta)).unwrap();
    let gamma_var = FpVar::new_input(cs.clone(), || Ok(gamma)).unwrap();
    hybrid_compression::enforce::<UhfCRH, F17, UhfCRHGadget>(
        &(),
        &alpha_var,
        &beta_var,
        &gamma_var,
        &statement_var,
    )
    .unwrap();
    assert!(cs.is_satisfied().unwrap());

    assert_eq!(
        render_trace(&cs).unwrap(),
        expected["example"],
        "arkworks trace differs from the Lean model"
    );
}
