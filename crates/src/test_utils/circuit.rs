use std::marker::PhantomData;

use ark_crypto_primitives::crh::{CRHScheme, constraints::CRHSchemeGadget};
use ark_ff::PrimeField;
use ark_r1cs_std::{alloc::AllocVar, eq::EqGadget, fields::fp::FpVar};
use ark_relations::gr1cs::{ConstraintSynthesizer, ConstraintSystemRef, SynthesisError};

use crate::circuit::{compress, enforce_compression};

/// Reference circuit using [`enforce_compression`].
///
/// Toy relation: knowledge of `a, b, c` summing to a claimed `sum`, with the
/// statement `[a, b, c, sum]` compressed into `(alpha, beta, gamma)`.
pub struct ExampleCircuit<F, AlphaCRH, BetaCRH, BetaCRHGadget>
where
    F: PrimeField,
    AlphaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRHGadget: CRHSchemeGadget<BetaCRH, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    pub a: F,
    pub b: F,
    pub c: F,
    pub sum: F,
    pub alpha_params: AlphaCRH::Parameters,
    pub beta_params: BetaCRH::Parameters,
    _gadget: PhantomData<BetaCRHGadget>,
}

impl<F, AlphaCRH, BetaCRH, BetaCRHGadget> ExampleCircuit<F, AlphaCRH, BetaCRH, BetaCRHGadget>
where
    F: PrimeField,
    AlphaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRHGadget: CRHSchemeGadget<BetaCRH, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    pub fn new(
        a: F,
        b: F,
        c: F,
        sum: F,
        alpha_params: AlphaCRH::Parameters,
        beta_params: BetaCRH::Parameters,
    ) -> Self {
        Self {
            a,
            b,
            c,
            sum,
            alpha_params,
            beta_params,
            _gadget: PhantomData,
        }
    }

    /// The flattened statement.
    pub fn statement(&self) -> [F; 4] {
        [self.a, self.b, self.c, self.sum]
    }

    /// The public inputs `(alpha, beta, gamma)`, computed natively.
    pub fn public_inputs(&self) -> Result<(F, F, F), ark_crypto_primitives::Error> {
        compress::<F, AlphaCRH, BetaCRH>(&self.alpha_params, &self.beta_params, &self.statement())
    }
}

impl<F, AlphaCRH, BetaCRH, BetaCRHGadget> ConstraintSynthesizer<F>
    for ExampleCircuit<F, AlphaCRH, BetaCRH, BetaCRHGadget>
where
    F: PrimeField,
    AlphaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRH: CRHScheme<Input = [F], Output = F>,
    BetaCRHGadget: CRHSchemeGadget<BetaCRH, F, InputVar = [FpVar<F>], OutputVar = FpVar<F>>,
{
    fn generate_constraints(self, cs: ConstraintSystemRef<F>) -> Result<(), SynthesisError> {
        let a = FpVar::new_witness(cs.clone(), || Ok(self.a))?;
        let b = FpVar::new_witness(cs.clone(), || Ok(self.b))?;
        let c = FpVar::new_witness(cs.clone(), || Ok(self.c))?;
        let sum = FpVar::new_witness(cs.clone(), || Ok(self.sum))?;

        (&a + &b + &c).enforce_equal(&sum)?;

        enforce_compression::<F, AlphaCRH, BetaCRH, BetaCRHGadget>(
            cs,
            &self.alpha_params,
            &self.beta_params,
            &[a, b, c, sum],
        )?;
        Ok(())
    }
}
