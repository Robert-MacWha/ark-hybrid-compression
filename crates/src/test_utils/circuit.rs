use ark_ff::PrimeField;
use ark_r1cs_std::{alloc::AllocVar, eq::EqGadget, fields::fp::FpVar};
use ark_relations::gr1cs::{ConstraintSystemRef, SynthesisError};

use crate::circuit::{CompressibleCircuit, Flatten};

/// Reference implementor of [`CompressibleCircuit`]
///
/// Toy relation: knowledge of `a, b, c` summing to a claimed `sum`.
pub struct ExampleCircuit<F: PrimeField> {
    pub a: F,
    pub b: F,
    pub c: F,
    pub sum: F,
}

/// Public statement for [`ExampleCircuit`]
pub struct ExampleStatement<F: PrimeField> {
    pub a: FpVar<F>,
    pub b: FpVar<F>,
    pub c: FpVar<F>,
    pub sum: FpVar<F>,
}

impl<F: PrimeField> CompressibleCircuit<F, 4> for ExampleCircuit<F> {
    type Statement = ExampleStatement<F>;

    fn verify(&self, cs: &ConstraintSystemRef<F>) -> Result<ExampleStatement<F>, SynthesisError> {
        let a = FpVar::new_witness(cs.clone(), || Ok(self.a))?;
        let b = FpVar::new_witness(cs.clone(), || Ok(self.b))?;
        let c = FpVar::new_witness(cs.clone(), || Ok(self.c))?;
        let sum = FpVar::new_witness(cs.clone(), || Ok(self.sum))?;

        (&a + &b + &c).enforce_equal(&sum)?;

        Ok(ExampleStatement { a, b, c, sum })
    }
}

impl<F: PrimeField> Flatten<F, 4> for ExampleStatement<F> {
    fn flatten(&self) -> Result<[FpVar<F>; 4], SynthesisError> {
        Ok([
            self.a.clone(),
            self.b.clone(),
            self.c.clone(),
            self.sum.clone(),
        ])
    }
}
