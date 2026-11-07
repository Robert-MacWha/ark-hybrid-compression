//! Differential test of the Lean model in `lean/` against arkworks.
//!
//! `lean/Traces.lean` renders the constraint system of `exampleTrace` (witness
//! a statement, then compress it) over `𝔽₁₇`, with a toy "sum" hash for both
//! `alpha` and `beta`, into `target/traces`. This test builds the same circuit
//! with arkworks, renders
//! its matrices and honest assignment the same way, and checks they match. Any
//! divergence between the model's `FpVar` semantics and `ark-r1cs-std` shows up
//! here as a different trace. Needs the traces rendered first, so it is ignored
//! by default: `just verify`.

use std::borrow::Borrow;

use ark_crypto_primitives::crh::{CRHScheme, constraints::CRHSchemeGadget};
use ark_hybrid_compression::hybrid_compression::{self, compress};
use ark_r1cs_std::{
    alloc::AllocVar,
    fields::{FieldVar, fp::FpVar},
};
use ark_r1cs_trace::{F17, read_traces, render_trace};
use ark_relations::gr1cs::{ConstraintSystem, OptimizationGoal, SynthesisError};

/// Toy hash: the sum of the inputs. Mirrors `sumCRH` in the Lean model.
struct SumCRH;

impl CRHScheme for SumCRH {
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
        Ok(input.borrow().iter().sum())
    }
}

/// Mirrors `sumGadget`: `x₀ + (x₁ + (… + 0))`, emitting no constraints.
struct SumCRHGadget;

impl CRHSchemeGadget<SumCRH, F17> for SumCRHGadget {
    type InputVar = [FpVar<F17>];
    type OutputVar = FpVar<F17>;
    type ParametersVar = ();

    fn evaluate(
        _parameters: &Self::ParametersVar,
        input: &Self::InputVar,
    ) -> Result<Self::OutputVar, SynthesisError> {
        Ok(input.iter().rev().fold(FpVar::zero(), |acc, x| x + &acc))
    }
}

#[test]
#[ignore = "needs the traces rendered by `lean/Traces.lean`; run `just verify`"]
fn trace_matches_lean_model() {
    let expected = read_traces(concat!(env!("CARGO_MANIFEST_DIR"), "/target/traces"))
        .expect("traces written by `lake env lean --run Traces.lean` (see `just verify`)");

    // Mirrors `exampleTrace` in the Lean model: witness the statement, then
    // compress it with the toy hash for both `alpha` and `beta`.
    let statement = [1u64, 2, 3, 6].map(F17::from);
    let (alpha, beta, gamma) = compress::<SumCRH, SumCRH, F17>(&(), &(), &statement).unwrap();

    let cs = ConstraintSystem::<F17>::new_ref();
    cs.set_optimization_goal(OptimizationGoal::Constraints);
    let statement_var = Vec::<FpVar<F17>>::new_witness(cs.clone(), || Ok(statement)).unwrap();
    let alpha_var = FpVar::new_input(cs.clone(), || Ok(alpha)).unwrap();
    let beta_var = FpVar::new_input(cs.clone(), || Ok(beta)).unwrap();
    let gamma_var = FpVar::new_input(cs.clone(), || Ok(gamma)).unwrap();
    hybrid_compression::enforce::<SumCRH, F17, SumCRHGadget>(
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
