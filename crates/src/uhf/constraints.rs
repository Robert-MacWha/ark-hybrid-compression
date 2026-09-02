use ark_ff::PrimeField;
use ark_r1cs_std::fields::{FieldVar, fp::FpVar};

pub fn uhf_gadget<F: PrimeField>(sigma: FpVar<F>, x: &[FpVar<F>]) -> FpVar<F> {
    let mut acc = FpVar::zero();
    for xi in x.iter().rev() {
        acc = acc * sigma.clone() + xi;
    }
    acc
}
