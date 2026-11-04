/-
# The compressed circuit (`src/circuit.rs`)

`CompressibleCircuit` is an arbitrary inner circuit that returns its
flattened statement (`verify` followed by `Flatten::flatten`), together with
the relation `rel` it is sound for. `compressedCircuit` is
`CompressedCircuit::generate_constraints`:

1. run the inner circuit, obtaining the statement variables;
2. compute `α = Hα(statement_raw)` natively and allocate it as a public input;
3. run the hybrid-compression prover gadget, obtaining `(β, γ)`;
4. allocate `β` and `γ` as public inputs and enforce equality with the
   gadget outputs (`exposeOutput`).

The main theorems:

* `compressedCircuit_sound` — for *any* satisfying assignment, with public
  inputs `(α, β, γ)` at positions `i, i+1, i+2`, the in-circuit statement
  `s` satisfies the inner relation and `(β, γ) = prover H α s`, i.e.
  `β = H(s)` and `γ = uhf (α + β) s`. This holds for any black-box hash
  gadget and any inner circuit.
* `compressedCircuit_complete` — the honest prover's assignment satisfies
  every constraint and its public inputs are exactly the natively computed
  `(α, β, γ)` of `statement_raw` (what `CompressedCircuit::compress` returns).
-/
import HybridCompression.HybridCompression

namespace HybridCompression

open ArkR1CS

variable {F : Type} [Field F]

/-- `CompressibleCircuit` + `Flatten`: the inner circuit returns its flattened
statement; `sound` is the relation it enforces on that statement. -/
structure CompressibleCircuit (F : Type) [Field F] where
  verify : Circuit F (List (FpVar F))
  rel : List F → Prop
  sound : ∀ (off : Offsets) (a : Assignment F),
    ConstraintsHold a (verify.run off).2 → rel ((verify.run off).1.map (·.eval a))

/-- `CompressedCircuit::generate_constraints`. -/
def compressedCircuit (H : CRHGadget F) (Hα : List F → F)
    (inner : Circuit F (List (FpVar F))) : Circuit F Unit := do
  let stmt ← inner
  -- `compress_with_statement`: α is computed natively from `statement_raw`.
  let alphaVar ← FpVar.newInput (Hα (stmt.map FpVar.val))
  let bg ← proverGadget H alphaVar stmt
  FpVar.exposeOutput bg.1
  FpVar.exposeOutput bg.2

/-- Index of the public input `α`; `β` and `γ` follow at `+1` and `+2`. -/
def alphaIndex (inner : Circuit F (List (FpVar F))) (off : Offsets) : Nat :=
  (off.advance (inner.run off).2).inputs

/-- The in-circuit statement: the inner circuit's output evaluated under `a`. -/
def statementOf (inner : Circuit F (List (FpVar F))) (off : Offsets) (a : Assignment F) : List F :=
  (inner.run off).1.map (·.eval a)

/-- Soundness of the compression layer alone: for any satisfying assignment,
the public inputs `(β, γ)` are the native compression of the in-circuit
statement under `α`. -/
theorem compressedCircuit_sound' (H : CRHGadget F) (Hα : List F → F)
    (inner : Circuit F (List (FpVar F))) (off : Offsets) (a : Assignment F)
    (h : ConstraintsHold a ((compressedCircuit H Hα inner).run off).2) :
    (a.input (alphaIndex inner off + 1), a.input (alphaIndex inner off + 2)) =
      proverNative H.native (a.input (alphaIndex inner off)) (statementOf inner off a) := by
  simp only [compressedCircuit, Circuit.run_bind, FpVar.run_newInput, List.singleton_append,
    constraintsHold_append, constraintsHold_input] at h
  obtain ⟨-, h₂, h₃, h₄⟩ := h
  have hp := proverGadget_sound H _ _ _ a h₂
  have hβ := FpVar.exposeOutput_sound _ _ _ h₃
  have hγ := FpVar.exposeOutput_sound _ _ _ h₄
  simp only [FpVar.eval_lin, LC.eval_cons, LC.eval_nil, Variable.eval_input, one_mul, add_zero,
    Offsets.advance_inputs, Op.inputCount, proverGadget_inputCount, FpVar.exposeOutput_inputCount,
    Nat.add_zero, Nat.zero_add] at hp hβ hγ
  simp only [alphaIndex, statementOf, Offsets.advance_inputs]
  rw [show off.inputs + Op.inputCount (inner.run off).2 + 2 =
    off.inputs + Op.inputCount (inner.run off).2 + 1 + 1 from rfl, hβ, hγ]
  exact hp

/-- **Soundness.** Any assignment satisfying the compressed circuit has public
inputs `(α, β, γ)` with `(β, γ) = prover H α s`, where `s` is the in-circuit
statement, which satisfies the inner relation. -/
theorem compressedCircuit_sound (H : CRHGadget F) (Hα : List F → F)
    (inner : CompressibleCircuit F) (off : Offsets) (a : Assignment F)
    (h : ConstraintsHold a ((compressedCircuit H Hα inner.verify).run off).2) :
    inner.rel (statementOf inner.verify off a) ∧
      (a.input (alphaIndex inner.verify off + 1), a.input (alphaIndex inner.verify off + 2)) =
        proverNative H.native (a.input (alphaIndex inner.verify off))
          (statementOf inner.verify off a) := by
  refine ⟨?_, compressedCircuit_sound' H Hα inner.verify off a h⟩
  simp only [compressedCircuit, Circuit.run_bind, constraintsHold_append] at h
  exact inner.sound off a h.1

/-- The honest run of the compressed circuit is complete whenever the honest
run of the inner circuit is. -/
theorem compressedCircuit_isComplete (H : CRHGadget F) (Hα : List F → F)
    (inner : Circuit F (List (FpVar F))) (off : Offsets) (a₀ : Assignment F)
    (hinner : Complete inner off a₀) :
    Complete (compressedCircuit H Hα inner) off a₀ := by
  unfold compressedCircuit
  refine Complete.bind hinner ?_
  refine Complete.bind (FpVar.newInput_complete _ _ _) ?_
  have hαin := FpVar.newInput_complete (Hα ((inner.run off).1.map FpVar.val))
    (off.advance (inner.run off).2) (extend off a₀ (inner.run off).2)
  have hle₂ := Offsets.le_advance (off.advance (inner.run off).2)
    ((FpVar.newInput (Hα ((inner.run off).1.map FpVar.val))).run (off.advance (inner.run off).2)).2
  have hstmt : ∀ x ∈ (inner.run off).1,
      x.below ((off.advance (inner.run off).2).advance
        ((FpVar.newInput (Hα ((inner.run off).1.map FpVar.val))).run
          (off.advance (inner.run off).2)).2) ∧
      Consistent (extend (off.advance (inner.run off).2) (extend off a₀ (inner.run off).2)
        ((FpVar.newInput (Hα ((inner.run off).1.map FpVar.val))).run
          (off.advance (inner.run off).2)).2) x :=
    fun x hx => ⟨FpVar.below_mono hle₂ (hinner.below x hx),
      Consistent.extend (hinner.below x hx) (Consistent.list_mem hinner.consistent hx)⟩
  have hp := proverGadget_complete H _ (inner.run off).1 _ _ hαin.below hαin.consistent hstmt
  refine Complete.bind hp ?_
  refine Complete.bind (FpVar.exposeOutput_complete _ _ _ hp.below.1 hp.consistent.fst) ?_
  exact FpVar.exposeOutput_complete _ _ _
    (FpVar.below_mono (Offsets.le_advance _ _) hp.below.2)
    (Consistent.extend hp.below.2 hp.consistent.snd)

/-- The honest assignment gives `α` the natively computed `Hα statement_raw`. -/
theorem compressedCircuit_alpha (H : CRHGadget F) (Hα : List F → F)
    (inner : Circuit F (List (FpVar F))) (off : Offsets) (a₀ : Assignment F) :
    (extend off a₀ ((compressedCircuit H Hα inner).run off).2).input (alphaIndex inner off) =
      Hα ((inner.run off).1.map FpVar.val) := by
  simp only [compressedCircuit, Circuit.run_bind, FpVar.run_newInput, List.singleton_append,
    extend_append, alphaIndex]
  exact extend_input_fresh _ _ _ _

/-- Under the honest assignment the in-circuit statement is `statement_raw`. -/
theorem compressedCircuit_statement (H : CRHGadget F) (Hα : List F → F)
    (inner : Circuit F (List (FpVar F))) (off : Offsets) (a₀ : Assignment F)
    (hinner : Complete inner off a₀) :
    statementOf inner off (extend off a₀ ((compressedCircuit H Hα inner).run off).2) =
      (inner.run off).1.map FpVar.val := by
  simp only [compressedCircuit, Circuit.run_bind, FpVar.run_newInput, List.singleton_append,
    extend_append, statementOf]
  exact Consistent.extend hinner.below hinner.consistent

/-- **Completeness.** The honest prover's assignment satisfies every
constraint, and its public inputs are the natively compressed
`(α, β, γ) = compress(statement_raw)`. -/
theorem compressedCircuit_complete (H : CRHGadget F) (Hα : List F → F)
    (inner : Circuit F (List (FpVar F))) (off : Offsets) (a₀ : Assignment F)
    (hinner : Complete inner off a₀) :
    ConstraintsHold (extend off a₀ ((compressedCircuit H Hα inner).run off).2)
        ((compressedCircuit H Hα inner).run off).2 ∧
      (extend off a₀ ((compressedCircuit H Hα inner).run off).2).input (alphaIndex inner off) =
        Hα ((inner.run off).1.map FpVar.val) ∧
      ((extend off a₀ ((compressedCircuit H Hα inner).run off).2).input (alphaIndex inner off + 1),
        (extend off a₀ ((compressedCircuit H Hα inner).run off).2).input (alphaIndex inner off + 2)) =
        proverNative H.native (Hα ((inner.run off).1.map FpVar.val))
          ((inner.run off).1.map FpVar.val) := by
  have hc := compressedCircuit_isComplete H Hα inner off a₀ hinner
  have hα := compressedCircuit_alpha H Hα inner off a₀
  have hs := compressedCircuit_statement H Hα inner off a₀ hinner
  have hsound := compressedCircuit_sound' H Hα inner off _ hc.holds
  rw [hα, hs] at hsound
  exact ⟨hc.holds, hα, hsound⟩

end HybridCompression
