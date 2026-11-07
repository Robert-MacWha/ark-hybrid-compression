//! Hybrid compression of a circuit's public statement.
//!
//! A circuit witnesses its statement as `FpVar`s however it likes, then calls
//! [`enforce_compression`] once. That allocates `(alpha, beta, gamma)` as the
//! circuit's public inputs and enforces the hybrid compression of the
//! statement, so the statement itself stays private. The prover computes the
//! same public inputs natively with [`compress`]; a verifier recomputes them
//! from `(beta, statement)` with [`hybrid_compression::verifier`] (Rust) or
//! `LibHybridCompression.verifier` (Solidity).
//!
//! # Security
//! The statement elements passed to [`enforce_compression`] must be the
//! circuit's *entire* public statement, and the circuit must allocate no other
//! public inputs. The compression binds the statement only for a fixed
//! statement length, which the verifier has to check.

use ark_crypto_primitives::crh::{CRHScheme, constraints::CRHSchemeGadget};
use ark_ff::PrimeField;
use ark_r1cs_std::{alloc::AllocVar, eq::EqGadget, fields::fp::FpVar, prelude::GR1CSVar};
use ark_relations::gr1cs::{ConstraintSystemRef, SynthesisError};

use crate::hybrid_compression::{constraints, prover};

/// The compressed public inputs as allocated in the circuit, in instance order.
#[derive(Clone, Debug)]
pub struct PublicInputs<F: PrimeField> {
    /// The out-of-circuit hash of the statement.
    pub alpha: FpVar<F>,
    /// The circuit-friendly hash of the statement.
    pub beta: FpVar<F>,
    /// The UHF of the statement, seeded with `alpha + beta`.
    pub gamma: FpVar<F>,
}

/// Allocates `(alpha, beta, gamma)` as public inputs and enforces the hybrid
/// compression of `stmt`.
///
/// `alpha` is computed natively from the statement's assigned values with
/// `AlphaCRH` (only in proving mode; in setup mode no values are needed),
/// `beta` and `gamma` are computed in-circuit with `BetaCRHGadget`.
pub fn enforce_compression<F, AlphaCRH, BetaCRH, BetaCRHGadget>(
    cs: ConstraintSystemRef<F>,
    alpha_params: &AlphaCRH::Parameters,
    beta_params: &BetaCRH::Parameters,
    stmt: &[FpVar<F>],
) -> Result<PublicInputs<F>, SynthesisError>
where
    F: PrimeField,
    AlphaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRHGadget: CRHSchemeGadget<BetaCRH, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    let alpha = FpVar::new_input(cs.clone(), || {
        let stmt_raw: Vec<F> = stmt.iter().map(GR1CSVar::value).collect::<Result<_, _>>()?;
        AlphaCRH::evaluate(alpha_params, stmt_raw.as_slice())
            .map_err(|_| SynthesisError::Unsatisfiable)
    })?;

    let params_var = BetaCRHGadget::ParametersVar::new_constant(cs.clone(), beta_params)?;
    let (beta_var, gamma_var) =
        constraints::prover::<BetaCRH, F, BetaCRHGadget>(&params_var, alpha.clone(), stmt)?;

    // Expose `beta` and `gamma` as public outputs, enforcing equality with the
    // computed values.
    let beta = FpVar::new_input(cs.clone(), || beta_var.value())?;
    beta.enforce_equal(&beta_var)?;

    let gamma = FpVar::new_input(cs, || gamma_var.value())?;
    gamma.enforce_equal(&gamma_var)?;

    Ok(PublicInputs { alpha, beta, gamma })
}

/// Off-circuit hybrid compression: the public inputs `(alpha, beta, gamma)`
/// of `stmt`, as [`enforce_compression`] allocates them.
pub fn compress<F, AlphaCRH, BetaCRH>(
    alpha_params: &AlphaCRH::Parameters,
    beta_params: &BetaCRH::Parameters,
    stmt: &[F],
) -> Result<(F, F, F), ark_crypto_primitives::Error>
where
    F: PrimeField,
    AlphaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRH: CRHScheme<Input = [F], Output = F>,
{
    let alpha = AlphaCRH::evaluate(alpha_params, stmt)?;
    let (beta, gamma) = prover::<BetaCRH, F>(beta_params, alpha, stmt)?;
    Ok((alpha, beta, gamma))
}

#[cfg(test)]
mod test {
    use ark_crypto_primitives::crh::poseidon::{CRH, constraints::CRHGadget};
    use ark_ed_on_bn254::Fr;
    use ark_ff::UniformRand;
    use ark_relations::gr1cs::{ConstraintSynthesizer, ConstraintSystem, SynthesisMode};

    use crate::test_utils::{ExampleCircuit, poseidon_params};

    type TestCircuit = ExampleCircuit<Fr, CRH<Fr>, CRH<Fr>, CRHGadget<Fr>>;

    fn test_circuit(rng: &mut impl ark_std::rand::Rng) -> TestCircuit {
        let a = Fr::rand(rng);
        let b = Fr::rand(rng);
        let c = Fr::rand(rng);
        let params = poseidon_params();
        ExampleCircuit::new(a, b, c, a + b + c, params.clone(), params)
    }

    #[test]
    fn test_public_inputs_are_alpha_beta_gamma() {
        let mut rng = ark_std::test_rng();
        let circuit = test_circuit(&mut rng);
        let (alpha, beta, gamma) = circuit.public_inputs().unwrap();

        let cs = ConstraintSystem::<Fr>::new_ref();
        circuit.generate_constraints(cs.clone()).unwrap();
        assert!(cs.is_satisfied().unwrap());

        // The statement stays witnessed: only the compressed form is public.
        assert_eq!(
            cs.instance_assignment().unwrap(),
            vec![Fr::from(1u64), alpha, beta, gamma]
        );
    }

    #[test]
    fn test_setup_mode_needs_no_values() {
        let mut rng = ark_std::test_rng();

        let prove = ConstraintSystem::<Fr>::new_ref();
        test_circuit(&mut rng)
            .generate_constraints(prove.clone())
            .unwrap();

        let setup = ConstraintSystem::<Fr>::new_ref();
        setup.set_mode(SynthesisMode::Setup);
        test_circuit(&mut rng)
            .generate_constraints(setup.clone())
            .unwrap();

        assert_eq!(setup.num_constraints(), prove.num_constraints());
        assert_eq!(
            setup.num_instance_variables(),
            prove.num_instance_variables()
        );
        assert_eq!(setup.num_witness_variables(), prove.num_witness_variables());
    }

    #[test]
    fn test_bad_witness_unsatisfied() {
        let params = poseidon_params();
        let circuit = TestCircuit::new(
            Fr::from(3u64),
            Fr::from(5u64),
            Fr::from(7u64),
            Fr::from(16u64),
            params.clone(),
            params,
        );

        let cs = ConstraintSystem::<Fr>::new_ref();
        circuit.generate_constraints(cs.clone()).unwrap();
        assert!(!cs.is_satisfied().unwrap());
    }
}
