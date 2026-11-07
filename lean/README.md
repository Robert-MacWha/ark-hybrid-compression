# Formal verification of `ark-hybrid-compression`

Lean 4 / Mathlib proofs that the hybrid compression binds the in-circuit statement to the values the verifier recomputes out of circuit, for **any** black-box hash gadget and **any** inner circuit. Only *soundness* is proved (no satisfying assignment can exist with mismatched values); completeness (the honest prover can always produce one) is covered by the crate's tests.

The model of `ark-relations` / `ark-r1cs-std` lives in [lean-ark-r1cs](https://github.com/Robert-MacWha/lean-ark-r1cs) and is pulled in as the `ark-r1cs` dependency; `HybridCompression/` mirrors this crate's modules (`Uhf`, `HybridCompression`), plus `Circuit` for the compression pattern of the README, `Security` for the binding theorem and `Examples` for the trace check.

## Building

```bash
cd lean
lake exe cache get   # prebuilt Mathlib
lake build
```

or `just verify` from the repository root. CI runs the same via `leanprover/lean-action`.

## How the model follows arkworks

The model is written method by method against `ark-relations` 0.6 and `ark-r1cs-std` 0.6, with the Rust names kept:

* `Variable::{Zero, One, Instance(i), Witness(i)}`; `One` is instance variable 0, so `ConstraintSystem::new()` starts at `num_instance_variables = 1`. `SymbolicLc` is not modelled: `new_lc` returns the linear combination itself, i.e. the form `finalize()` inlines to.
* A gadget is a `CS F α`: given the counters of the constraint system, its output and the list of operations it performs (`new_input_variable`, `new_witness_variable`, `enforce_r1cs_constraint`). `do` notation threads the counters like a `ConstraintSystemRef`.
* `AllocatedFp { value, variable }` and `FpVar::{Constant, Var}` with the `impl_ops!` dispatch for `Add`, `Sub`, `Mul`, the `is_zero()` / `is_one()` shortcuts in `add_constant` / `mul_constant`, `double`, `negate`, `square`, `inverse`, `is_neq` (two constraints; `is_eq` is its negation), `conditional_enforce_equal`, `conditional_enforce_not_equal`, and `EqGadget`'s default `enforce_equal = conditional_enforce_equal(_, TRUE)`. `value: Option<F>` is modelled as always present (proving mode).

Every constraint-emitting operation has a soundness lemma stated for an *arbitrary* assignment satisfying its rows. Two arkworks quirks the mirror makes visible: `enforce_equal` on two `Constant`s emits nothing (so `FpVar.enforce_equal_sound` requires one side to be a variable), and `is_neq` allocates its bit without a booleanity check (its soundness lemma still pins the bit to the indicator).

## Main results

With `H` any `CRHSchemeGadget`, `Hα` any native function, `stmt` any list of statement variables (produced by an arbitrary circuit), and `s` the in-circuit statement (`stmt` evaluated under the assignment):

* `compressStatement_sound` (`HybridCompression/Circuit.lean`): every assignment satisfying the README's compression pattern (allocate `(α, β, γ)` from the native `compress`, then `constraints::enforce`) has public inputs `(α, β, γ)` with `(β, γ) = prover H α s`, i.e. `β = H(s)` and `γ = uhf (α + β) s`. The circuit that produced `stmt` contributes its own relation on `s`, which composes with this via `constraintsHold_append`.
* `binding` (`HybridCompression/Security.lean`): if the verifier accepts `(β, s')`, i.e. the circuit is satisfied with the public inputs `verifier Hα β s'`, then either `s = s'` or `Hα s' + β` is a root of the non-zero polynomial `uhfPoly s - uhfPoly s'`.
* `uhf_collision_shift_card_le`: for fixed `s ≠ s'` of length `n` and fixed `t`, at most `n - 1` values `x ∈ F` satisfy `uhf (x + t) s = uhf (x + t) s'`. With `t = β` this bounds the bad values of `α = Hα(s')`; with `t = α` the bad values of `β = Hβ(s)`.

Together: a proof for a statement `s' ≠ s` verifies only if the seed `α + β` lands on one of at most `n - 1` roots. If either hash behaves as a random oracle the seed is uniformly random per attempt, so each attempt succeeds with probability at most `(n - 1) / |F|`. That last probabilistic sentence is the only step not machine-checked.

### Caveat made explicit by the proof

`uhf σ (s ++ [0]) = uhf σ s` (`uhf_append_zero`): the UHF is not length-binding, so the binding theorem assumes `s'.length = s.length`. The R1CS fixes `n` for the circuit; a verifier (Rust or Solidity) must reject a submitted statement whose length differs from the circuit's `n`.

## Trust boundary

The proofs are about the Lean model, not the Rust source. Two things keep the gap small:

1. The model follows `ark-r1cs-std` method by method (above). Not modelled: setup mode (`value = None`), `OptimizationGoal::Weight` outlining in `finalize()`, and GR1CS predicates other than R1CS. None of these change which assignments satisfy the system.
2. **Differential testing.** `ArkR1CS.renderTrace` renders the model's constraint matrices and prover assignment in the canonical form of `ConstraintSystem::to_matrices()`. `Traces.lean` renders the model's trace of witnessing a statement and compressing it (`exampleTrace`) over `𝔽₁₇`, and `crates/tests/r1cs_trace.rs` builds the same circuit with arkworks and checks the two match (`just verify` does both). Any semantic drift between the model and `ark-r1cs-std` fails it. The rendering comes from the `ark-r1cs-trace` crate of lean-ark-r1cs.

## Adding a verified gadget

1. Write the gadget in `CS F` with the `FpVar` operations, keeping the same structure as the Rust.
2. Prove `*_sound` by unfolding with `simp only [gadget, CS.run_bind, CS.run_pure, constraintsHold_append, …]` and applying the `*_sound` lemmas of the operations used (see `uhfGadget_sound`).
3. If the gadget has an arkworks counterpart, add it to the differential trace test.
