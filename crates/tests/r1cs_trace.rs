//! Differential test of the Lean model in `formal/` against arkworks.
//!
//! The Lean model (`formal/HybridCompression/Examples.lean`) renders the
//! constraint system of `exampleCircuit` over `𝔽₁₇`, with a toy "sum" hash for
//! both `alpha` and `beta`, into `formal/traces/example.trace`.
//! This test builds the same circuit with arkworks, renders its matrices and
//! honest assignment in the same canonical format, and checks they match.
//! Any divergence between the model's `FpVar` semantics and `ark-r1cs-std`
//! shows up here as a different trace.

use std::{borrow::Borrow, collections::BTreeMap, fmt::Write};

use ark_crypto_primitives::crh::{CRHScheme, constraints::CRHSchemeGadget};
use ark_ff::{Fp64, MontBackend, MontConfig, PrimeField, Zero};
use ark_hybrid_compression::hybrid_compression;
use ark_r1cs_std::{
    alloc::AllocVar,
    eq::EqGadget,
    fields::{FieldVar, fp::FpVar},
    prelude::GR1CSVar,
};
use ark_relations::gr1cs::{
    ConstraintSynthesizer, ConstraintSystem, ConstraintSystemRef, OptimizationGoal,
    R1CS_PREDICATE_LABEL, SynthesisError,
};

/// The tiny prime field used by the Lean trace (`ZMod 17`).
#[derive(MontConfig)]
#[modulus = "17"]
#[generator = "3"]
pub struct F17Config;
pub type F17 = Fp64<MontBackend<F17Config, 1>>;

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

/// Mirrors `exampleCircuit` in the Lean model: witnesses `a, b, c, sum`,
/// enforces `a + b + c = sum`, and compresses the statement `[a, b, c, sum]`
/// with the toy hash for both `alpha` and `beta`.
struct SumCircuit {
    a: F17,
    b: F17,
    c: F17,
    sum: F17,
}

impl ConstraintSynthesizer<F17> for SumCircuit {
    fn generate_constraints(self, cs: ConstraintSystemRef<F17>) -> Result<(), SynthesisError> {
        let a = FpVar::new_witness(cs.clone(), || Ok(self.a))?;
        let b = FpVar::new_witness(cs.clone(), || Ok(self.b))?;
        let c = FpVar::new_witness(cs.clone(), || Ok(self.c))?;
        let sum = FpVar::new_witness(cs.clone(), || Ok(self.sum))?;
        (&a + &b + &c).enforce_equal(&sum)?;
        let stmt = [a, b, c, sum];

        let alpha = FpVar::new_input(cs.clone(), || {
            let stmt: Vec<F17> = stmt.iter().map(|x| x.value()).collect::<Result<_, _>>()?;
            SumCRH::evaluate(&(), stmt).map_err(|_| SynthesisError::Unsatisfiable)
        })?;
        let (beta, gamma) = hybrid_compression::constraints::prover::<SumCRH, F17, SumCRHGadget>(
            &(),
            alpha,
            &stmt,
        )?;
        FpVar::new_input(cs.clone(), || beta.value())?.enforce_equal(&beta)?;
        FpVar::new_input(cs, || gamma.value())?.enforce_equal(&gamma)?;
        Ok(())
    }
}

fn render_lc(row: &[(F17, usize)]) -> String {
    let mut merged: BTreeMap<usize, F17> = BTreeMap::new();
    for (coeff, col) in row {
        *merged.entry(*col).or_insert_with(F17::zero) += coeff;
    }
    let terms: Vec<String> = merged
        .iter()
        .filter(|(_, c)| !c.is_zero())
        .map(|(col, c)| format!("{col}:{}", c.into_bigint()))
        .collect();
    if terms.is_empty() {
        "-".to_string()
    } else {
        terms.join(" ")
    }
}

fn render_values(values: &[F17]) -> String {
    values
        .iter()
        .map(|v| v.into_bigint().to_string())
        .collect::<Vec<_>>()
        .join(" ")
}

/// Renders a finalized constraint system like `ArkR1CS.renderTrace`.
fn render_trace(cs: &ConstraintSystemRef<F17>) -> String {
    let matrices = cs.to_matrices().unwrap();
    let r1cs = &matrices[R1CS_PREDICATE_LABEL];
    let (a, b, c) = (&r1cs[0], &r1cs[1], &r1cs[2]);

    // `instance_assignment` starts with the constant `one`, which the model
    // does not count as an input.
    let instance = cs.instance_assignment().unwrap();
    let witness = cs.witness_assignment().unwrap();

    let mut out = String::new();
    writeln!(
        out,
        "inputs={} witnesses={} constraints={}",
        instance.len() - 1,
        witness.len(),
        a.len()
    )
    .unwrap();
    writeln!(out, "instance: {}", render_values(&instance[1..])).unwrap();
    writeln!(out, "witness: {}", render_values(&witness)).unwrap();
    for i in 0..a.len() {
        writeln!(
            out,
            "{i}: {} | {} | {}",
            render_lc(&a[i]),
            render_lc(&b[i]),
            render_lc(&c[i])
        )
        .unwrap();
    }
    out
}

#[test]
fn trace_matches_lean_model() {
    let circuit = SumCircuit {
        a: F17::from(1u64),
        b: F17::from(2u64),
        c: F17::from(3u64),
        sum: F17::from(6u64),
    };

    let cs = ConstraintSystem::<F17>::new_ref();
    cs.set_optimization_goal(OptimizationGoal::Constraints);
    circuit.generate_constraints(cs.clone()).unwrap();
    cs.finalize();
    assert!(cs.is_satisfied().unwrap());

    let actual = render_trace(&cs);
    let expected = std::fs::read_to_string(concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/../formal/traces/example.trace"
    ))
    .expect("formal/traces/example.trace (generated by the Lean model)");

    assert_eq!(
        actual, expected,
        "arkworks trace differs from the Lean model"
    );
}
