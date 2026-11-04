# Formal verification of `ark-hybrid-compression`

Lean 4 / Mathlib model of the crate's circuits, with machine-checked proofs
that the hybrid compression binds the in-circuit statement to the values the
verifier recomputes out of circuit, for **any** black-box hash gadget and
**any** inner circuit.

```
formal/
├── ArkR1CS/                 reusable model of ark-relations / ark-r1cs-std
│   ├── Basic.lean           variables, LCs, constraints, ops, honest assignment
│   ├── Circuit.lean         gadget monad, Eval, Sound / Complete, bind lemmas
│   ├── FpVar.lean           FpVar: add, neg, sub, mul, enforce_equal, alloc (+ proofs)
│   ├── CRH.lean             black-box hash gadget interface (CRHScheme + gadget)
│   └── Trace.lean           canonical trace rendering for differential tests
├── HybridCompression/       the crate, module for module
│   ├── Uhf.lean             src/uhf: native uhf, uhf_gadget, soundness/completeness
│   ├── HybridCompression.lean  src/hybrid_compression: prover/verifier, prover gadget
│   ├── Circuit.lean         src/circuit.rs: CompressibleCircuit, CompressedCircuit
│   ├── Security.lean        binding theorem and the (n-1)/|F| collision bound
│   └── Examples.lean        src/test_utils: ExampleCircuit, toy hash, trace check
└── traces/example.trace     expected trace, shared with crates/tests/r1cs_trace.rs
```

## Building

```bash
cd formal
lake exe cache get   # prebuilt Mathlib
lake build
```

or `just verify` from the repository root. CI runs the same via
`leanprover/lean-action`.

## How circuits are modelled

A gadget is a `Circuit F α`: a function from the current allocation offsets
to an output plus the list of operations it performs on the constraint
system (`Op.input v`, `Op.witness v`, `Op.constrain (a * b = c)`). `bind`
threads the offsets exactly like a `ConstraintSystemRef` threads allocation
indices, so gadgets are written in `do` notation and read like the Rust:

```lean
def uhfGadget (σ : FpVar F) : List (FpVar F) → Circuit F (FpVar F)
  | [] => pure FpVar.zero
  | xi :: rest => do
    let acc ← uhfGadget σ rest
    let prod ← acc.mul σ
    pure (prod.add xi)
```

`FpVar` mirrors `ark_r1cs_std::fields::fp::FpVar`: `const c` is
`FpVar::Constant`, `lin lc v` is `FpVar::Var` with its symbolic linear
combination and the value cached by the prover. Addition builds an LC,
constant multiplication scales it, variable multiplication allocates one
witness and one row, `enforce_equal` emits `(lhs - rhs) * 1 = 0`.

Two properties are proved for every gadget, in the compositional form
needed to chain gadgets:

* **Soundness** (`*_sound`): for *every* assignment that satisfies the
  constraints the gadget emitted, its output evaluates to the specified
  function of its inputs. Nothing is assumed about how the assignment was
  produced, so this rules out under-constrained gadgets.
* **Completeness** (`Complete c off a₀`): the honest prover's assignment
  (`extend`: give each fresh variable the value the gadget computed)
  satisfies the emitted constraints, the constraints only mention allocated
  variables, and the output is well-scoped and *consistent* (its cached
  value agrees with its evaluation). `Complete.bind` / `Complete.pure` let
  completeness proofs follow the `do` block line by line.

Black boxes are structures bundling a definition with these two properties:
`CRHGadget` (a `CRHScheme` with its `CRHSchemeGadget`, plus the assumption
that it allocates no public inputs) and `CompressibleCircuit` (an inner
circuit returning its flattened statement, with the relation it is sound for).

## Main results

With `H` any `CRHGadget`, `Hα` any native function, `inner` any
`CompressibleCircuit`, and `s` the in-circuit statement (the inner circuit's
output evaluated under the assignment):

* `compressedCircuit_sound` (`HybridCompression/Circuit.lean`): every
  assignment satisfying `CompressedCircuit::generate_constraints` has public
  inputs `(α, β, γ)` with `inner.rel s`, `β = H.native s` and
  `γ = uhf (α + β) s`.
* `compressedCircuit_complete`: the honest prover's assignment satisfies all
  constraints and its public inputs are exactly
  `(Hα raw, H.native raw, uhf (Hα raw + H.native raw) raw)` for
  `raw = statement_raw`, i.e. what `CompressedCircuit::compress` returns.
* `binding` (`HybridCompression/Security.lean`): if the verifier accepts
  `(β, s')`, i.e. the circuit is satisfied with the public inputs
  `verifier Hα β s'`, then either `s = s'` or `Hα s' + β` is a root of the
  non-zero polynomial `uhfPoly s - uhfPoly s'`.
* `uhf_collision_shift_card_le`: for fixed `s ≠ s'` of length `n` and fixed
  `t`, at most `n - 1` values `x ∈ F` satisfy
  `uhf (x + t) s = uhf (x + t) s'`. With `t = β` this bounds the bad values
  of `α = Hα(s')`, with `t = α` the bad values of `β = Hβ(s)`.

Together: a proof for a statement `s' ≠ s` verifies only if the seed
`α + β` lands on one of `≤ n - 1` roots. If either hash behaves as a random
oracle the seed is uniformly random per attempt, so each attempt succeeds
with probability at most `(n - 1) / |F|`. That last probabilistic sentence
is the only step not machine-checked.

### Caveat made explicit by the proof

`uhf σ (s ++ [0]) = uhf σ s` (`uhf_append_zero`): the UHF is not
length-binding, so the binding theorem assumes `s'.length = s.length`. The
R1CS fixes `n` for the circuit; a verifier (Rust or Solidity) must reject a
submitted statement whose length differs from the circuit's `n`.

## Trust boundary

The proofs are about the Lean model, not the Rust source. The model gap is
kept small in two ways:

1. The model follows `ark-r1cs-std` operation by operation (see the doc
   comments in `ArkR1CS/FpVar.lean` for the exact `impl_ops!` cases). Known
   divergence: `FpVar::enforce_equal` on two *constants* is a no-op in
   arkworks, while the model emits an (unsatisfiable, if unequal) row. The
   compressed circuit never hits this case.
2. **Differential testing.** `ArkR1CS.renderTrace` renders the model's
   constraint matrices and honest assignment in the same canonical form as
   `ConstraintSystem::to_matrices()`. `Examples.lean` checks the compressed
   `ExampleCircuit` over `𝔽₁₇` against `traces/example.trace`, and
   `crates/tests/r1cs_trace.rs` builds the same circuit with arkworks and
   checks it against the same file. Any semantic drift between the model and
   `ark-r1cs-std` fails one of the two checks.

## Adding a verified gadget

1. Write the gadget in `Circuit F` using the `FpVar` operations, keeping the
   same structure as the Rust.
2. Prove `*_sound` by `simp only [gadget, Circuit.run_bind, Circuit.run_pure,
   constraintsHold_append, …]` and the `*_sound` lemmas of the operations
   used.
3. Prove completeness with `Complete.bind` once per `←` and `Complete.pure`
   at the end, discharging the `below` / `Consistent` side conditions with
   `FpVar.below_mono`, `Consistent.extend` and the operations' lemmas.
4. If the gadget has an arkworks counterpart, add it to the differential
   trace test.
