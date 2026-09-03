use ark_ff::PrimeField;

pub mod constraints;

/// Universal Hash Function (UHF) implementation.
///
/// Cheap polynomial-evaluation hash function both parties can compute
/// using a shared seed. See Definition 3 for more details.
///
/// See [`constraints::uhf_gadget`] for the in-circuit gadget.
///
/// <https://eprint.iacr.org/2025/1500.pdf>
pub fn uhf<F: PrimeField>(sigma: F, x: &[F]) -> F {
    let mut acc = F::zero();
    for xi in x.iter().rev() {
        acc = acc * sigma + xi;
    }

    acc
}

#[cfg(test)]
mod test {
    use std::array::from_fn;

    use ark_ed_on_bn254::Fr;
    use ark_ff::{UniformRand, Zero};
    use ark_r1cs_std::{GR1CSVar, alloc::AllocVar, fields::fp::FpVar};
    use ark_relations::gr1cs::ConstraintSystem;

    use crate::uhf::constraints::uhf_gadget;

    use super::*;

    #[test]
    fn test_impls_agree() {
        let mut rng = ark_std::test_rng();
        let cs = ConstraintSystem::<Fr>::new_ref();

        let sigma = Fr::rand(&mut rng);
        let x: [Fr; 10] = from_fn(|_| Fr::rand(&mut rng));

        let sigma_var = FpVar::new_input(cs.clone(), || Ok(sigma)).unwrap();
        let x_var = x
            .iter()
            .map(|xi| FpVar::new_input(cs.clone(), || Ok(*xi)).unwrap())
            .collect::<Vec<_>>();

        let uhf_val = uhf(sigma, &x);
        let uhf_var = uhf_gadget(sigma_var, &x_var);

        assert_eq!(uhf_val, uhf_var.value().unwrap());
        assert!(cs.is_satisfied().unwrap());
    }

    #[test]
    fn test_empty_input() {
        let sigma = Fr::from(7u64);
        assert_eq!(uhf(sigma, &[]), Fr::zero());
    }

    #[test]
    fn test_known_vector() {
        // UHF(sigma, [x1, x2, x3]) = x1 + x2*sigma + x3*sigma^2
        let sigma = Fr::from(2u64);
        let x = [Fr::from(3u64), Fr::from(5u64), Fr::from(7u64)];
        assert_eq!(uhf(sigma, &x), Fr::from(3u64 + 5 * 2 + 7 * 4));
    }
}
