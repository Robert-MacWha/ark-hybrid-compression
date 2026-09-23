//! Circuit abstraction for hybrid compression.

use std::marker::PhantomData;

use ark_crypto_primitives::crh::{CRHScheme, constraints::CRHSchemeGadget};
use ark_ff::PrimeField;
use ark_r1cs_std::{alloc::AllocVar, eq::EqGadget, fields::fp::FpVar, prelude::GR1CSVar};
use ark_relations::gr1cs::{
    ConstraintSynthesizer, ConstraintSystem, ConstraintSystemRef, OptimizationGoal, SynthesisError,
};

use crate::hybrid_compression::constraints;

/// A circuit whose public inputs can be compressed.
pub trait CompressibleCircuit<F: PrimeField> {
    /// The circuit's public statement.
    type Statement: Flatten<F>;

    /// Witness the circuit and enforce its relations, returning a structured statement.
    fn verify(&self, cs: &ConstraintSystemRef<F>) -> Result<Self::Statement, SynthesisError>;
}

/// A circuit's flattened public statement.
///
/// The returned list of values is compressed into `(alpha, beta, gamma)`.
pub trait Flatten<F: PrimeField> {
    fn flatten(&self) -> Result<Vec<FpVar<F>>, SynthesisError>;
}

/// A compressed public statement.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct Compressed<F, S> {
    /// Public: the out-of-circuit hash of the statement.
    pub alpha: F,
    /// Public: the circuit-friendly hash of the statement.
    pub beta: F,
    /// Public: the UHF of the statement, seeded with `alpha + beta`.
    pub gamma: F,

    /// The statement as flat field values, in [`Flatten`] order.
    pub statement_raw: Vec<F>,

    /// The inner circuit's structured statement.
    pub statement: S,
}

/// Compressed circuit wrapping an inner compressible circuit.
#[derive(Clone, Debug, Default)]
pub struct CompressedCircuit<F, C, AlphaCRH, BetaCRH, BetaCRHGadget>
where
    F: PrimeField,
    C: CompressibleCircuit<F>,
    AlphaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRHGadget: CRHSchemeGadget<BetaCRH, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    pub alpha_params: AlphaCRH::Parameters,
    pub beta_params: BetaCRH::Parameters,
    pub inner: C,
    _beta_crh_gadget: PhantomData<BetaCRHGadget>,
}

#[derive(Debug, thiserror::Error)]
pub enum CompressError {
    #[error(transparent)]
    Synthesis(#[from] SynthesisError),
    /// Stringified `ark_crypto_primitives::Error` because that type isn't `Sync`.
    #[error("hybrid compression: {0}")]
    Compression(String),
}

#[cfg(feature = "alloy")]
impl<F, C, BetaCRH, BetaCRHGadget>
    CompressedCircuit<F, C, crate::KeccakCRH<F>, BetaCRH, BetaCRHGadget>
where
    F: PrimeField,
    C: CompressibleCircuit<F>,
    BetaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRHGadget: CRHSchemeGadget<BetaCRH, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    /// Constructs a circuit using [`KeccakCRH`](crate::KeccakCRH) as the alpha hash.
    ///
    /// Matches Solidity's `LibHybridCompression.hash`.
    pub fn new_keccak(beta_params: BetaCRH::Parameters, inner: C) -> Self {
        Self::new((), beta_params, inner)
    }
}

impl<F, C, AlphaCRH, BetaCRH, BetaCRHGadget>
    CompressedCircuit<F, C, AlphaCRH, BetaCRH, BetaCRHGadget>
where
    F: PrimeField,
    C: CompressibleCircuit<F>,
    AlphaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRHGadget: CRHSchemeGadget<BetaCRH, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    /// Constructs a circuit using the given alpha and beta CRHs.
    pub fn new(
        alpha_params: AlphaCRH::Parameters,
        beta_params: BetaCRH::Parameters,
        inner: C,
    ) -> Self {
        Self {
            alpha_params,
            beta_params,
            inner,
            _beta_crh_gadget: PhantomData,
        }
    }

    /// Runs inner's `verify` method to witness the circuit, then flattens and
    /// compresses its statement.
    pub fn compress(&self) -> Result<Compressed<F, C::Statement>, CompressError> {
        let cs = ConstraintSystem::new_ref();
        cs.set_optimization_goal(OptimizationGoal::Constraints);
        let statement = self.inner.verify(&cs)?;
        cs.finalize();

        self.compress_with_statement(statement)
    }

    fn compress_with_statement(
        &self,
        statement: C::Statement,
    ) -> Result<Compressed<F, C::Statement>, CompressError> {
        let statement_raw: Vec<F> = statement
            .flatten()?
            .iter()
            .map(GR1CSVar::value)
            .collect::<Result<_, _>>()?;

        let (alpha, beta, gamma) =
            compress::<F, AlphaCRH, BetaCRH>(&self.alpha_params, &self.beta_params, &statement_raw)
                .map_err(|e| CompressError::Compression(e.to_string()))?;

        Ok(Compressed {
            alpha,
            beta,
            gamma,
            statement_raw,
            statement,
        })
    }
}

impl<F, C, AlphaCRH, BetaCRH, BetaCRHGadget> ConstraintSynthesizer<F>
    for CompressedCircuit<F, C, AlphaCRH, BetaCRH, BetaCRHGadget>
where
    F: PrimeField,
    C: CompressibleCircuit<F>,
    AlphaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRHGadget: CRHSchemeGadget<BetaCRH, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    fn generate_constraints(self, cs: ConstraintSystemRef<F>) -> Result<(), SynthesisError> {
        //? Compute and flatten the statement
        let statement = self.inner.verify(&cs)?;
        let stmt = statement.flatten()?;
        let compressed = self.compress_with_statement(statement)?;

        //? Enforce hybrid compression of the flattened statement
        let alpha_var = FpVar::new_input(cs.clone(), || Ok(compressed.alpha))?;
        let params_var = BetaCRHGadget::ParametersVar::new_constant(cs.clone(), &self.beta_params)?;

        let (beta_var, gamma_var) =
            constraints::prover::<BetaCRH, F, BetaCRHGadget>(&params_var, alpha_var, &stmt)?;

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
fn compress<F, AlphaCRH, BetaCRH>(
    alpha_params: &AlphaCRH::Parameters,
    beta_params: &BetaCRH::Parameters,
    stmt: &[F],
) -> Result<(F, F, F), ark_crypto_primitives::Error>
where
    F: PrimeField,
    AlphaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRH: CRHScheme<Input = [F], Output = F>,
{
    use crate::hybrid_compression::prover;

    let alpha = AlphaCRH::evaluate(alpha_params, stmt)?;
    let (beta, gamma) = prover::<BetaCRH, F>(beta_params, alpha, stmt)?;
    Ok((alpha, beta, gamma))
}

impl From<CompressError> for SynthesisError {
    fn from(value: CompressError) -> Self {
        match value {
            CompressError::Synthesis(s) => s,
            CompressError::Compression(_) => SynthesisError::Unsatisfiable,
        }
    }
}

#[cfg(test)]
mod test {
    use ark_crypto_primitives::crh::poseidon::{CRH, constraints::CRHGadget};
    use ark_ed_on_bn254::Fr;
    use ark_ff::UniformRand;

    use super::*;
    use crate::test_utils::{ExampleCircuit, poseidon_params};

    type TestCompressed =
        CompressedCircuit<Fr, ExampleCircuit<Fr>, CRH<Fr>, CRH<Fr>, CRHGadget<Fr>>;

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
        let params = poseidon_params();
        let inner = test_circuit(&mut rng);
        let stmt = vec![inner.a, inner.b, inner.c, inner.sum];

        let circuit = TestCompressed::new(params.clone(), params.clone(), inner);
        let compressed = circuit.compress().unwrap();

        let (alpha, beta, gamma) =
            compress::<Fr, CRH<Fr>, CRH<Fr>>(&params, &params, &stmt).unwrap();
        assert_eq!(compressed.statement_raw, stmt);
        assert_eq!(compressed.alpha, alpha);
        assert_eq!(compressed.beta, beta);
        assert_eq!(compressed.gamma, gamma);
    }

    #[test]
    fn test_public_inputs_are_alpha_beta_gamma() {
        let mut rng = ark_std::test_rng();
        let params = poseidon_params();
        let circuit = TestCompressed::new(params.clone(), params, test_circuit(&mut rng));
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
    fn test_constraints_satisfied() {
        let mut rng = ark_std::test_rng();
        let params = poseidon_params();
        let circuit = TestCompressed::new(params.clone(), params, test_circuit(&mut rng));

        let cs = ConstraintSystem::<Fr>::new_ref();
        circuit.generate_constraints(cs.clone()).unwrap();
        assert!(cs.is_satisfied().unwrap());
    }

    #[test]
    fn test_bad_witness_unsatisfied() {
        let params = poseidon_params();
        let inner = ExampleCircuit {
            a: Fr::from(3u64),
            b: Fr::from(5u64),
            c: Fr::from(7u64),
            sum: Fr::from(16u64),
        };

        // Compression only reads the flattened values, so it still succeeds.
        let circuit = TestCompressed::new(params.clone(), params, inner);

        let cs = ConstraintSystem::<Fr>::new_ref();
        circuit.generate_constraints(cs.clone()).unwrap();
        assert!(!cs.is_satisfied().unwrap());
    }
}
