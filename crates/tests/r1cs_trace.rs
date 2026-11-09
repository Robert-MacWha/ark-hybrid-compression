//! Differential test of the Lean model in `lean/` against arkworks.
//!
//! Requires the rendered trace from `lean/Traces.lean` before being run.

use std::borrow::Borrow;

use ark_crypto_primitives::crh::{CRHScheme, constraints::CRHSchemeGadget};
use ark_hybrid_compression::hybrid_compression::{self, compress};
use ark_r1cs_std::{
    alloc::AllocVar,
    fields::{FieldVar, fp::FpVar},
};
use ark_r1cs_trace::{F17, read_traces, render_trace};
use ark_relations::gr1cs::{
    ConstraintSynthesizer, ConstraintSystem, ConstraintSystemRef, OptimizationGoal, SynthesisError,
};

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

/// Mirrors `exampleTrace` in the Lean model: witnesses each value of the
/// statement and compresses it with the toy hash for both `alpha` and `beta`.
struct CompressCircuit {
    statement: Vec<F17>,
}

impl ConstraintSynthesizer<F17> for CompressCircuit {
    fn generate_constraints(self, cs: ConstraintSystemRef<F17>) -> Result<(), SynthesisError> {
        let statement = self
            .statement
            .iter()
            .map(|v| FpVar::new_witness(cs.clone(), || Ok(*v)))
            .collect::<Result<Vec<_>, _>>()?;

        let public_inputs = compress::<SumCRH, SumCRH, F17>(&(), &(), &self.statement)
            .map_err(|_| SynthesisError::Unsatisfiable)?;
        let alpha = FpVar::new_input(cs.clone(), || Ok(public_inputs.0))?;
        let beta = FpVar::new_input(cs.clone(), || Ok(public_inputs.1))?;
        let gamma = FpVar::new_input(cs, || Ok(public_inputs.2))?;
        hybrid_compression::enforce::<SumCRH, F17, SumCRHGadget>(
            &(),
            &alpha,
            &beta,
            &gamma,
            &statement,
        )
    }
}

#[test]
#[ignore = "needs the traces rendered by `lean/Traces.lean`; run `just verify`"]
fn trace_matches_lean_model() {
    let expected = read_traces(concat!(env!("CARGO_MANIFEST_DIR"), "/target/traces"))
        .expect("traces written by `lake env lean --run Traces.lean` (see `just verify`)");

    let circuit = CompressCircuit {
        statement: [1u64, 2, 3, 6].map(F17::from).to_vec(),
    };
    let cs = ConstraintSystem::<F17>::new_ref();
    cs.set_optimization_goal(OptimizationGoal::Constraints);
    circuit.generate_constraints(cs.clone()).unwrap();
    assert!(cs.is_satisfied().unwrap());

    assert_eq!(
        render_trace(&cs).unwrap(),
        expected["example"],
        "arkworks trace differs from the Lean model"
    );
}
