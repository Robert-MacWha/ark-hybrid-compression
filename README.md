# ark-hybrid-compression

Ark-compatible implementation of the hybrid compression algorithm described in [Data Matching in Unequal Worlds and Applications to Smart Contracts](https://eprint.iacr.org/2025/1500.pdf).

This algorithm is designed to cheaply compress arbitrarily large public statements for zk proofs into three field elements. Since the gas cost to verify a zk proof scales with the number of public inputs, this can significantly reduce verification costs.

See [khovratovich/two-worlds-ref](https://github.com/khovratovich/two-worlds-ref) for the reference implementation in circom / js.

## Examples

### Compressing an arkworks circuit

Computes the public inputs `(alpha, beta, gamma)` from the statement with `hybrid_compression::compress` and enforces the compression with `hybrid_compression::enforce`.

```rust
# use ark_crypto_primitives::{
#     crh::poseidon::{CRH, constraints::{CRHGadget, CRHParametersVar}},
#     sponge::poseidon::{PoseidonConfig, find_poseidon_ark_and_mds},
# };
# use ark_ed_on_bn254::Fr;
# use ark_ff::PrimeField;
# use ark_r1cs_std::{alloc::AllocVar, eq::EqGadget, fields::{FieldVar, fp::FpVar}};
# use ark_relations::gr1cs::{
#     ConstraintSynthesizer, ConstraintSystem, ConstraintSystemRef, SynthesisError,
# };
use ark_hybrid_compression::{KeccakCRH, hybrid_compression};

/// Toy circuit that claims `total` is the sum of eight values, with the
/// statement `[values.., total]` compressed into `(alpha, beta, gamma)`.
struct SumCircuit {
    values: [Fr; 8],
    total: Fr,
    public_inputs: (Fr, Fr, Fr),
    beta_params: PoseidonConfig<Fr>,
}

impl ConstraintSynthesizer<Fr> for SumCircuit {
    fn generate_constraints(self, cs: ConstraintSystemRef<Fr>) -> Result<(), SynthesisError> {
        let values: Vec<FpVar<Fr>> = self
            .values
            .iter()
            .map(|v| FpVar::new_witness(cs.clone(), || Ok(*v)))
            .collect::<Result<_, _>>()?;
        let total = FpVar::new_witness(cs.clone(), || Ok(self.total))?;
        values.iter().fold(FpVar::zero(), |acc, v| acc + v).enforce_equal(&total)?;

        let alpha = FpVar::new_input(cs.clone(), || Ok(self.public_inputs.0))?;
        let beta = FpVar::new_input(cs.clone(), || Ok(self.public_inputs.1))?;
        let gamma = FpVar::new_input(cs.clone(), || Ok(self.public_inputs.2))?;
        let params = CRHParametersVar::new_constant(cs, &self.beta_params)?;
        let mut stmt = values;
        stmt.push(total);
        hybrid_compression::enforce::<CRH<Fr>, Fr, CRHGadget<Fr>>(&params, &alpha, &beta, &gamma, &stmt)
    }
}

let values: [Fr; 8] = core::array::from_fn(|i| Fr::from(i as u64));
let total = Fr::from(28u64);
# let (ark, mds) = find_poseidon_ark_and_mds::<Fr>(Fr::MODULUS_BIT_SIZE as u64, 2, 8, 24, 0);
# let beta_params = PoseidonConfig::new(8, 24, 31, mds, ark, 2, 1);

// Compress the 9 statement elements into 3 public inputs, with keccak256 for
// `alpha` (matching the Solidity verifier) and Poseidon for `beta`.
let mut stmt = values.to_vec();
stmt.push(total);
let public_inputs =
    hybrid_compression::compress::<KeccakCRH<Fr>, CRH<Fr>, Fr>(&(), &beta_params, &stmt).unwrap();

let cs = ConstraintSystem::<Fr>::new_ref();
SumCircuit { values, total, public_inputs, beta_params }.generate_constraints(cs.clone()).unwrap();
assert!(cs.is_satisfied().unwrap());
assert_eq!(
    cs.instance_assignment().unwrap(),
    vec![Fr::from(1u64), public_inputs.0, public_inputs.1, public_inputs.2],
);
```

### Verifying a compressed statement in Rust

A verifier holding `beta` and the statement recovers the public inputs with `hybrid_compression::verifier` and checks the zk proof against them.

```rust
# use ark_ed_on_bn254::Fr;
use ark_hybrid_compression::{KeccakCRH, hybrid_compression};

let beta = Fr::from(12345u64);
let stmt: Vec<Fr> = (0..9).map(Fr::from).collect();

let (alpha, gamma) =
    hybrid_compression::verifier::<KeccakCRH<Fr>, Fr>(&(), beta, &stmt).unwrap();
let public_inputs = [alpha, beta, gamma];

// Verify the zk proof against the compressed public inputs.
```

### Verifying a compressed statement in Solidity

A Solidity verifier contract recovers the public inputs with `LibHybridCompression.verifier`. The library assumes `keccak256` was used for `alpha`.

```solidity
import {LibHybridCompression} from "path/to/LibHybridCompression.sol";

contract SumVerifier {
    // The scalar field of the zk proof system, here BN254.
    uint256 public constant FIELD =
        21888242871839275222246405745257275088548364400416034343698204186575808495617;

    function submit(uint256[] calldata stmt, uint256 beta, bytes calldata proof) external view {
        (uint256 alpha, uint256 gamma) = LibHybridCompression.verifier(beta, stmt, FIELD);

        uint256[] memory publicInputs = new uint256[](3);
        publicInputs[0] = alpha;
        publicInputs[1] = beta;
        publicInputs[2] = gamma;

        // Verify the zk proof against the compressed public inputs.
    }
}
```

See [`HybridCompressionExample.sol`](contracts/src/examples/HybridCompressionExample.sol) for a working contract. [`circuit_integration.rs`](crates/tests/circuit_integration.rs) exercises it against the Rust prover.

## Formal verification

`lean/` contains a Lean 4 model of the circuit with proofs that the public inputs `(alpha, beta, gamma)` bind the statement in the circuit to the one the verifier recomputes. See [`lean/README.md`](lean/README.md).
