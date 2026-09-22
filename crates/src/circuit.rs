//! Circuit abstraction for hybrid compression.

use std::marker::PhantomData;

use ark_crypto_primitives::crh::{CRHScheme, constraints::CRHSchemeGadget};
use ark_ff::PrimeField;
use ark_r1cs_std::{alloc::AllocVar, eq::EqGadget, fields::fp::FpVar, prelude::GR1CSVar};
use ark_relations::gr1cs::{
    ConstraintSynthesizer, ConstraintSystem, ConstraintSystemRef, OptimizationGoal, SynthesisError,
};

use crate::hybrid_compression::constraints::hybrid_compression;

/// A circuit whose public inputs can be compressed.
///
/// `verify` should witness `self` and enforce its relations, returning a structured
/// `Statement` that can be flattened for compression.
///
/// Wrap an implementor in [`CompressedCircuit`] to fold its flattened statement into
/// the three public inputs `(alpha, beta, gamma)`.
pub trait CompressibleCircuit<F: PrimeField, const N: usize> {
    /// The circuit's public statement: the arguments a verifier is shown, as
    /// opposed to the witness. Hybrid compression keeps these out of the
    /// constraint system's instance assignment, replacing them with
    /// `(alpha, beta, gamma)`.
    type Statement: Flatten<F, N>;

    fn verify(&self, cs: &ConstraintSystemRef<F>) -> Result<Self::Statement, SynthesisError>;
}

/// A circuit's flattened public statement.
///
/// The returned list of values is folded into `(alpha, beta, gamma)`.
pub trait Flatten<F: PrimeField, const N: usize> {
    fn flatten(&self) -> Result<[FpVar<F>; N], SynthesisError>;
}

/// The result of compressing a circuit: the three public inputs the SNARK
/// verifier sees, plus both forms of the statement they were folded from.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct Compressed<F, S> {
    /// Public: the out-of-circuit hash of the statement.
    pub alpha: F,
    /// Public: the circuit-friendly hash of the statement.
    pub beta: F,
    /// Public: the UHF of the statement, seeded with `alpha + beta`.
    pub gamma: F,

    /// The statement as flat field values, in [`Flatten`] order.
    ///
    /// This is the form an on-chain verifier is given so it can recompute
    /// `alpha` and `gamma`.
    pub statement_var: Vec<F>,

    /// The statement as the inner circuit's own structured type.
    pub statement: S,
}

/// Compressed circuit wrapping an inner compressible circuit, folding its
/// public statement via hybrid compression.
#[derive(Clone, Debug, Default)]
pub struct CompressedCircuit<F, C, CRH, CRHGadget, const N: usize>
where
    F: PrimeField,
    C: CompressibleCircuit<F, N>,
    CRH: CRHScheme<Input = [F], Output = F>,
    CRHGadget: CRHSchemeGadget<CRH, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    pub alpha: F,
    pub crh_params: CRH::Parameters,
    pub inner: C,
    _crh_gadget: PhantomData<CRHGadget>,
}

#[derive(Debug, thiserror::Error)]
pub enum CompressError {
    #[error(transparent)]
    Synthesis(#[from] SynthesisError),
    /// Stringified `ark_crypto_primitives::Error`: that type isn't `Sync`,
    /// so it's laundered into a `String` at the point it's produced.
    #[error("hybrid compression: {0}")]
    Compression(String),
}

impl<F, C, CRH, CRHGadget, const N: usize> CompressedCircuit<F, C, CRH, CRHGadget, N>
where
    F: PrimeField,
    C: CompressibleCircuit<F, N>,
    CRH: CRHScheme<Input = [F], Output = F>,
    CRHGadget: CRHSchemeGadget<CRH, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    pub fn new(crh_params: CRH::Parameters, inner: C) -> Self {
        Self {
            alpha: F::default(),
            crh_params,
            inner,
            _crh_gadget: PhantomData,
        }
    }

    /// Runs inner's `verify` method to witness the circuit, then flattens and
    /// compresses its statement.
    pub fn compress(&mut self) -> Result<Compressed<F, C::Statement>, CompressError> {
        let cs = ConstraintSystem::new_ref();
        cs.set_optimization_goal(OptimizationGoal::Constraints);
        let statement = self.inner.verify(&cs)?;
        cs.finalize();

        let statement_var: Vec<F> = statement
            .flatten()?
            .iter()
            .map(GR1CSVar::value)
            .collect::<Result<_, _>>()?;
        let (alpha, beta, gamma) = compress::<F, CRH>(&self.crh_params, &statement_var)
            .map_err(|e| CompressError::Compression(e.to_string()))?;

        self.alpha = alpha;
        Ok(Compressed {
            alpha,
            beta,
            gamma,
            statement_var,
            statement,
        })
    }
}

impl<F, C, CRH, CRHGadget, const N: usize> ConstraintSynthesizer<F>
    for CompressedCircuit<F, C, CRH, CRHGadget, N>
where
    F: PrimeField,
    C: CompressibleCircuit<F, N>,
    CRH: CRHScheme<Input = [F], Output = F>,
    CRHGadget: CRHSchemeGadget<CRH, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    fn generate_constraints(self, cs: ConstraintSystemRef<F>) -> Result<(), SynthesisError> {
        //? Compute and flatten the statement
        let statement = self.inner.verify(&cs)?;
        let stmt = statement.flatten()?;

        //? Enforce hybrid compression of the flattened statement
        let alpha_var = FpVar::new_input(cs.clone(), || Ok(self.alpha))?;
        let params_var = CRHGadget::ParametersVar::new_constant(cs.clone(), &self.crh_params)?;

        let (beta_var, gamma_var) =
            hybrid_compression::<CRH, F, CRHGadget>(&params_var, alpha_var, &stmt)?;

        //? Expose the `beta` and `gamma` outputs as public outputs, enforcing equality with the
        //? computed values.
        let beta_pub = FpVar::new_input(cs.clone(), || beta_var.value())?;
        beta_pub.enforce_equal(&beta_var)?;

        let gamma_pub = FpVar::new_input(cs, || gamma_var.value())?;
        gamma_pub.enforce_equal(&gamma_var)?;

        Ok(())
    }
}

/// Off-circuit hybrid compression: folds `stmt` into `(alpha, beta,
/// gamma)`.
#[cfg(feature = "alloy")]
pub fn compress<F, CRH>(
    crh_params: &CRH::Parameters,
    stmt: &[F],
) -> Result<(F, F, F), ark_crypto_primitives::Error>
where
    F: PrimeField,
    CRH: CRHScheme<Input = [F], Output = F>,
{
    use crate::hybrid_compression::hybrid_compression;

    let alpha = crate::KeccakCRH::<F>::evaluate(&(), stmt)?;
    let (beta, gamma) = hybrid_compression::<CRH, F>(crh_params, alpha, stmt)?;
    Ok((alpha, beta, gamma))
}

#[cfg(test)]
mod test {
    use ark_crypto_primitives::crh::poseidon::{CRH, constraints::CRHGadget};
    use ark_ed_on_bn254::Fr;
    use ark_ff::UniformRand;

    use super::*;
    use crate::test_utils::{ExampleCircuit, poseidon_params};

    type TestCompressed = CompressedCircuit<Fr, ExampleCircuit<Fr>, CRH<Fr>, CRHGadget<Fr>, 4>;

    fn test_circuit(rng: &mut impl ark_std::rand::Rng) -> ExampleCircuit<Fr> {
        let a = Fr::rand(rng);
        let b = Fr::rand(rng);
        let c = Fr::rand(rng);
        ExampleCircuit {
            a,
            b,
            c,
            sum: a + b + c,
        }
    }

    #[test]
    fn test_compress_matches_native() {
        let mut rng = ark_std::test_rng();
        let params = poseidon_params(&mut rng);
        let inner = test_circuit(&mut rng);
        let stmt = vec![inner.a, inner.b, inner.c, inner.sum];

        let mut circuit = TestCompressed::new(params.clone(), inner);
        let compressed = circuit.compress().unwrap();

        let (alpha, beta, gamma) = compress::<Fr, CRH<Fr>>(&params, &stmt).unwrap();
        assert_eq!(compressed.statement_var, stmt);
        assert_eq!(compressed.alpha, alpha);
        assert_eq!(compressed.beta, beta);
        assert_eq!(compressed.gamma, gamma);
        assert_eq!(circuit.alpha, alpha);
    }

    #[test]
    fn test_constraints_satisfied() {
        let mut rng = ark_std::test_rng();
        let params = poseidon_params(&mut rng);
        let mut circuit = TestCompressed::new(params, test_circuit(&mut rng));
        circuit.compress().unwrap();

        let cs = ConstraintSystem::<Fr>::new_ref();
        circuit.generate_constraints(cs.clone()).unwrap();

        assert!(cs.is_satisfied().unwrap());
    }

    #[test]
    fn test_public_inputs_are_alpha_beta_gamma() {
        let mut rng = ark_std::test_rng();
        let params = poseidon_params(&mut rng);
        let mut circuit = TestCompressed::new(params, test_circuit(&mut rng));
        let compressed = circuit.compress().unwrap();

        let cs = ConstraintSystem::<Fr>::new_ref();
        circuit.generate_constraints(cs.clone()).unwrap();

        // The statement stays witnessed: only the compressed form is public.
        assert_eq!(
            cs.instance_assignment().unwrap(),
            vec![
                Fr::from(1u64),
                compressed.alpha,
                compressed.beta,
                compressed.gamma
            ]
        );
    }

    #[test]
    fn test_bad_witness_unsatisfied() {
        let mut rng = ark_std::test_rng();
        let params = poseidon_params(&mut rng);
        let inner = ExampleCircuit {
            a: Fr::from(3u64),
            b: Fr::from(5u64),
            c: Fr::from(7u64),
            sum: Fr::from(16u64),
        };

        // Compression only reads the flattened values, so it still succeeds.
        let mut circuit = TestCompressed::new(params, inner);
        circuit.compress().unwrap();

        let cs = ConstraintSystem::<Fr>::new_ref();
        circuit.generate_constraints(cs.clone()).unwrap();

        assert!(!cs.is_satisfied().unwrap());
    }
}
