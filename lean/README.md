# hybrid-compression

Lean 4 proofs that the hybrid compression circuit is sound.

Any assignment that satisfies the circuit has public inputs `(alpha, beta, gamma)` equal to the compression of the witnessed statement. This holds for any hash gadget and any circuit around it. A verifier that accepts a different statement of the same length must have hit one of at most `n - 1` seeds. The arkworks model comes from [lean-ark-r1cs](https://github.com/Robert-MacWha/lean-ark-r1cs).

## Usage

```bash
lake exe cache get
lake build
```

`just verify` from the repository root also renders the model's trace and checks it against the arkworks constraint system.
