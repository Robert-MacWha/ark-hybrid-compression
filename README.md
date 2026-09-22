# ark-hybrid-compression

Ark-compatible implementation of the hybrid compression algorithm described in [Data Matching in Unequal Worlds and Applications to Smart Contracts](https://eprint.iacr.org/2025/1500.pdf).

This algorithm is designed to compress data for zk proofs into three public field elements. By using a hybrid approach, it can use circuit-friendly hash functions in-circuit and more efficient hash functions out-of-circuit. For example, using Poseidon in-circuit and keccak256 in a smart contract.

## Examples

### Compressing a statement

```rust
use ark_ed_on_bn254::Fr;
use ark_hybrid_compression::circuit::{CompressibleCircuit, Flatten};
use ark_r1cs_std::{alloc::AllocVar, eq::EqGadget, fields::fp::FpVar};
use ark_relations::gr1cs::{ConstraintSystem, ConstraintSystemRef, SynthesisError};

/// Knowledge of an `x` whose square is `x_squared`.
struct SquareCircuit {
    x: Fr,
    x_squared: Fr,
}

struct SquareStatement {
    x: FpVar<Fr>,
    x_squared: FpVar<Fr>,
}

impl CompressibleCircuit<Fr, 2> for SquareCircuit {
    type Statement = SquareStatement;

    fn verify(&self, cs: &ConstraintSystemRef<Fr>) -> Result<SquareStatement, SynthesisError> {
        let x = FpVar::new_witness(cs.clone(), || Ok(self.x))?;
        let x_squared = FpVar::new_witness(cs.clone(), || Ok(self.x_squared))?;

        (&x * &x).enforce_equal(&x_squared)?;

        Ok(SquareStatement { x, x_squared })
    }
}

impl Flatten<Fr, 2> for SquareStatement {
    fn flatten(&self) -> Result<[FpVar<Fr>; 2], SynthesisError> {
        Ok([self.x.clone(), self.x_squared.clone()])
    }
}

let cs = ConstraintSystem::<Fr>::new_ref();
let circuit = SquareCircuit { x: Fr::from(7u64), x_squared: Fr::from(49u64) };

let statement = circuit.verify(&cs).unwrap();
let stmt = statement.flatten().unwrap();

assert_eq!(stmt.len(), 2);
assert!(cs.is_satisfied().unwrap());
```
