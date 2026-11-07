# ark-hybrid-compression

Ark-compatible implementation of the hybrid compression algorithm described in [Data Matching in Unequal Worlds and Applications to Smart Contracts](https://eprint.iacr.org/2025/1500.pdf).

This algorithm is designed to cheaply compress arbitrarily large public statements for zk proofs into three field elements. Since the gas cost to verify a zk proof scales with the number of public inputs, this can significantly reduce verification costs.

See [khovratovich/two-worlds-ref](https://github.com/khovratovich/two-worlds-ref) for the reference implementation in circom / js.

## Examples

### Compressing an arkworks circuit

Computes the public inputs `(alpha, beta, gamma)` from the statement with `hybrid_compression::compress` and enforces the compression with `hybrid_compression::enforce`.

```rust
use ark_crypto_primitives::{
    crh::poseidon::{CRH, constraints::{CRHGadget, CRHParametersVar}},
    sponge::poseidon::{PoseidonConfig, find_poseidon_ark_and_mds},
};
use ark_ed_on_bn254::Fr;
use ark_ff::PrimeField;
use ark_hybrid_compression::{KeccakCRH, hybrid_compression};
use ark_r1cs_std::{alloc::AllocVar, fields::fp::FpVar};
use ark_relations::gr1cs::ConstraintSystem;

let stmt: Vec<Fr> = (0..9).map(Fr::from).collect();
let (ark, mds) = find_poseidon_ark_and_mds::<Fr>(Fr::MODULUS_BIT_SIZE as u64, 2, 8, 24, 0);
let beta_params = PoseidonConfig::new(8, 24, 31, mds, ark, 2, 1);

// Compress the 9 statement elements into 3 public inputs, with keccak256 for
// `alpha` (matching the Solidity verifier) and Poseidon for `beta`.
let (alpha, beta, gamma) =
    hybrid_compression::compress::<KeccakCRH<Fr>, CRH<Fr>, Fr>(&(), &beta_params, &stmt).unwrap();

let cs = ConstraintSystem::<Fr>::new_ref();
// The statement variables, as witnessed (or computed) by the rest of the circuit.
let stmt_var = Vec::<FpVar<Fr>>::new_witness(cs.clone(), || Ok(stmt)).unwrap();

let alpha_var = FpVar::new_input(cs.clone(), || Ok(alpha)).unwrap();
let beta_var = FpVar::new_input(cs.clone(), || Ok(beta)).unwrap();
let gamma_var = FpVar::new_input(cs.clone(), || Ok(gamma)).unwrap();
let params = CRHParametersVar::new_constant(cs.clone(), &beta_params).unwrap();
hybrid_compression::enforce::<CRH<Fr>, Fr, CRHGadget<Fr>>(
    &params, &alpha_var, &beta_var, &gamma_var, &stmt_var,
)
.unwrap();

assert!(cs.is_satisfied().unwrap());
assert_eq!(cs.instance_assignment().unwrap(), vec![Fr::from(1u64), alpha, beta, gamma]);
```

### Verifying a compressed statement in Rust

A verifier holding (`beta`, `stmt`) can recover the compressed public inputs (`alpha`, `beta`, `gamma`) and use that to verify the zk proof. 

```rust
use ark_ed_on_bn254::Fr;
use ark_hybrid_compression::{KeccakCRH, hybrid_compression};

let beta = Fr::from(12345u64);
let stmt: Vec<Fr> = (0..9).map(Fr::from).collect();

let (alpha, gamma) =
    hybrid_compression::verifier::<KeccakCRH<Fr>, Fr>(&(), beta, &stmt).unwrap();
let public_inputs = [alpha, beta, gamma];

// Verify the zk proof against the compressed public inputs.
```

### Verifying a compressed statement in Solidity

A solidity verifier contract can use `LibHybridCompression.verifier` to recover the compressed public inputs (`alpha`, `beta`, `gamma`).

NOTE: `LibHybridCompression` assumes that `keccak256` was used to compress the statement.

```solidity
import {LibHybridCompression} from "path/to/LibHybridCompression.sol";

contract Verifier {
    // Arbitrary prime field modulus for the zk proof system.
    uint256 public constant FIELD = 255;

    function submit(uint256[] stmt, uint256 beta, bytes proof) external view {
        (uint256 alpha, uint256 gamma) = LibHybridCompression.verifier(beta, stmt, field);

        uint256[] memory publicInputs = new uint256[](3);
        publicInputs[0] = alpha;
        publicInputs[1] = beta;
        publicInputs[2] = gamma;

        // Verify the zk proof against the compressed public inputs.
    }
}
```

A working version is at `contracts/src/examples/HybridCompressionExample.sol`, exercised
end-to-end against the Rust prover by `crates/tests/circuit_integration.rs`.

## Formal verification

`lean/` contains a Lean 4 model of the circuit with machine-checked proofs
that, for any black-box hash gadget and any inner circuit, the public inputs
`(alpha, beta, gamma)` bind the in-circuit statement to the one the verifier
recomputes. See [`lean/README.md`](lean/README.md).
