//! Worked example of a circuit using hybrid compression. See the security note on
//! [`ark_hybrid_compression::hybrid_compression::constraints::hybrid_compression`].

use ark_crypto_primitives::{
    crh::{
        CRHScheme,
        poseidon::{
            CRH,
            constraints::{CRHGadget, CRHParametersVar},
        },
    },
    sponge::poseidon::PoseidonConfig,
};
use ark_ed_on_bn254::Fr;
use ark_hybrid_compression::{hybrid_compression::constraints, keccak::KeccakCRH};
use ark_r1cs_std::{GR1CSVar, alloc::AllocVar, eq::EqGadget, fields::fp::FpVar};
use ark_relations::gr1cs::{
    ConstraintSynthesizer, ConstraintSystem, ConstraintSystemRef, OptimizationGoal,
};

/// Toy circuit around a statement `stmt`. A real relation would check
/// something meaningful about `stmt` (see Construction 2 in the
/// paper).
pub struct ExampleCircuit {
    /// Public: computed off-circuit as `KeccakCRH(stmt)`.
    pub alpha: Fr,

    /// Witness: `stmt` itself is never sent to the SNARK verifier, only
    /// its hybrid-compressed form (alpha, beta, gamma) is.
    pub stmt: Vec<Fr>,

    /// Witness: Poseidon parameters used in the hybrid compression.
    pub poseidon_params: PoseidonConfig<Fr>,
}

pub struct ExampleCircuitResult {
    /// Public
    pub beta: Fr,
    /// Public
    pub gamma: Fr,
}

impl ExampleCircuit {
    pub fn new(stmt: &[Fr], poseidon_params: PoseidonConfig<Fr>) -> Self {
        let alpha = KeccakCRH::evaluate(&(), stmt).unwrap();
        Self {
            alpha,
            stmt: stmt.to_vec(),
            poseidon_params,
        }
    }

    /// Runs the off-circuit computation `Usr` performs before proving (see
    /// Construction 2) and checks it's satisfied.
    /// Returns the resulting `(alpha, beta, gamma)` public inputs.
    pub fn prove(self) -> (Fr, Fr, Fr) {
        let cs = ConstraintSystem::<Fr>::new_ref();

        let alpha = self.alpha;
        let result = self.synthesize_outputs().unwrap();
        self.generate_constraints(cs.clone()).unwrap();
        assert!(cs.is_satisfied().unwrap());

        (alpha, result.beta, result.gamma)
    }

    pub fn synthesize_outputs(&self) -> ark_relations::gr1cs::Result<ExampleCircuitResult> {
        let cs = ConstraintSystem::new_ref();
        cs.set_optimization_goal(OptimizationGoal::Constraints);

        let result = self.synthesize(cs.clone())?;
        cs.finalize();

        Ok(result)
    }

    fn synthesize(
        &self,
        cs: ConstraintSystemRef<Fr>,
    ) -> ark_relations::gr1cs::Result<ExampleCircuitResult> {
        let alpha_var = FpVar::new_input(cs.clone(), || Ok(self.alpha))?;
        let stmt_var: Vec<_> = self
            .stmt
            .iter()
            .map(|x| FpVar::new_witness(cs.clone(), || Ok(*x)))
            .collect::<Result<_, _>>()?;

        let params_var = CRHParametersVar::new_input(cs.clone(), || Ok(&self.poseidon_params))?;

        let (beta_var, gamma_var) = constraints::hybrid_compression::<CRH<Fr>, Fr, CRHGadget<Fr>>(
            &params_var,
            alpha_var,
            &stmt_var,
        )?;

        let beta_pub = FpVar::new_input(cs.clone(), || Ok(beta_var.value()?))?;
        beta_var.enforce_equal(&beta_pub)?;

        let gamma_pub = FpVar::new_input(cs.clone(), || Ok(gamma_var.value()?))?;
        gamma_var.enforce_equal(&gamma_pub)?;

        Ok(ExampleCircuitResult {
            beta: beta_var.value()?,
            gamma: gamma_var.value()?,
        })
    }
}

impl ConstraintSynthesizer<Fr> for ExampleCircuit {
    fn generate_constraints(self, cs: ConstraintSystemRef<Fr>) -> ark_relations::gr1cs::Result<()> {
        let _ = self.synthesize(cs)?;
        Ok(())
    }
}
