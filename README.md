# ark-hybrid-compression

Ark-compatible implementation of the hybrid compression algorithm described in [Data Matching in Unequal Worlds and Applications to Smart Contracts](https://eprint.iacr.org/2025/1500.pdf).

This algorithm is designed to cheaply compress arbitrarily large public statements for zk proofs into three field elements. Since the gas cost to verify a zk proof scales with the number of public inputs, this can significantly reduce verification costs.

## Examples

### Compressing an inner arkworks circuit

Arkworks circuits can be compressed by implementing the [`CompressibleCircuit`] trait.

```rust
use ark_crypto_primitives::{
    crh::poseidon::{CRH, constraints::CRHGadget},
    sponge::poseidon::{PoseidonConfig, find_poseidon_ark_and_mds},
};
use ark_ed_on_bn254::Fr;
use ark_ff::PrimeField;
use ark_hybrid_compression::circuit::{CompressedCircuit, CompressibleCircuit, Flatten};
use ark_r1cs_std::{
    alloc::AllocVar,
    eq::EqGadget,
    fields::{FieldVar, fp::FpVar},
};
use ark_relations::gr1cs::{
    ConstraintSynthesizer, ConstraintSystem, ConstraintSystemRef, SynthesisError,
};

/// Toy circuit that claims `total` is the sum of eight values.
struct SumCircuit { values: [Fr; 8], total: Fr }
struct SumStatement { values: Vec<FpVar<Fr>>, total: FpVar<Fr> }

impl CompressibleCircuit<Fr> for SumCircuit {
    type Statement = SumStatement;

    fn verify(&self, cs: &ConstraintSystemRef<Fr>) -> Result<SumStatement, SynthesisError> {
        let values: Vec<FpVar<Fr>> = self
            .values
            .iter()
            .map(|v| FpVar::new_witness(cs.clone(), || Ok(*v)))
            .collect::<Result<_, _>>()?;
        let total = FpVar::new_witness(cs.clone(), || Ok(self.total))?;

        values
            .iter()
            .fold(FpVar::zero(), |acc, v| acc + v)
            .enforce_equal(&total)?;

        Ok(SumStatement { values, total })
    }
}

impl Flatten<Fr> for SumStatement {
    fn flatten(&self) -> Result<Vec<FpVar<Fr>>, SynthesisError> {
        let mut stmt = self.values.clone();
        stmt.push(self.total.clone());
        Ok(stmt)
    }
}

// Arbitrary values to sum
let values: [Fr; 8] = core::array::from_fn(|i| Fr::from(i as u64));
let inner = SumCircuit { values, total: Fr::from(28u64) };

// Poseidon parameters for the in-circuit `beta` hash.
let (ark, mds) = find_poseidon_ark_and_mds::<Fr>(Fr::MODULUS_BIT_SIZE as u64, 2, 8, 24, 0);
let beta_params = PoseidonConfig::new(8, 24, 31, mds, ark, 2, 1);

// Wrap the inner circuit to compress its statement.
let mut circuit =
    CompressedCircuit::<Fr, _, _, CRH<Fr>, CRHGadget<Fr>>::new_keccak(beta_params, inner);

// Synthesize the constraint system (or generate a real proof).
let cs = ConstraintSystem::<Fr>::new_ref();
circuit.generate_constraints(cs.clone()).unwrap();
assert!(cs.is_satisfied().unwrap());

// The inner circuit's 9 instance variables are compressed down to 3!
let compressed = circuit.compress().unwrap();
assert_eq!(compressed.statement_var.len(), 9);
assert_eq!(
    cs.instance_assignment().unwrap(),
    vec![Fr::from(1u64), compressed.alpha, compressed.beta, compressed.gamma],
);
```

### Verifying a compressed statement

```

```
