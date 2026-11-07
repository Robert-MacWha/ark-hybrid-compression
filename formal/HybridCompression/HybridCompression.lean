/-
# Hybrid compression (`src/hybrid_compression`)

Native: `hybridCompression H known stmt = (H stmt, uhf (known + H stmt) stmt)`.
The prover knows `α` and computes `(β, γ)`; the verifier knows `β` and
computes `(α, γ)`.

In-circuit (`hybrid_compression::constraints::prover`): the prover gadget
for an arbitrary black-box hash gadget `H`.
-/
import HybridCompression.Uhf

namespace HybridCompression

open ArkR1CS

variable {F : Type} [Field F] [DecidableEq F]

/-- `hybrid_compression::hybrid_compression`. -/
def hybridCompression (H : List F → F) (known : F) (stmt : List F) : F × F :=
  let computed := H stmt
  (computed, uhf (known + computed) stmt)

/-- `hybrid_compression::prover`: `(β, γ)` from `α`. -/
def proverNative (Hβ : List F → F) (α : F) (stmt : List F) : F × F :=
  hybridCompression Hβ α stmt

/-- `hybrid_compression::verifier`: `(α, γ)` from `β`. -/
def verifierNative (Hα : List F → F) (β : F) (stmt : List F) : F × F :=
  hybridCompression Hα β stmt

/-- `hybrid_compression::constraints::prover`. -/
def proverGadget (H : CRHSchemeGadget F) (alpha : FpVar F) (stmt : List (FpVar F)) :
    CS F (FpVar F × FpVar F) := do
  let beta ← H.evaluate stmt
  let sigma := alpha.add beta
  let gamma ← uhfGadget sigma stmt
  pure (beta, gamma)

/-- Soundness: whatever assignment satisfies the gadget's constraints, the
in-circuit `(β, γ)` are the native `(β, γ)` of the in-circuit statement. -/
theorem proverGadget_sound (H : CRHSchemeGadget F) (alpha : FpVar F) (stmt : List (FpVar F))
    (k : Counters) (a : Assignment F)
    (h : ConstraintsHold a ((proverGadget H alpha stmt).run k).2) :
    (((proverGadget H alpha stmt).run k).1.1.eval a,
      ((proverGadget H alpha stmt).run k).1.2.eval a) =
      proverNative H.evaluate_native (alpha.eval a) (stmt.map (·.eval a)) := by
  simp only [proverGadget, CS.run_bind, CS.run_pure, List.append_nil, constraintsHold_append] at h ⊢
  obtain ⟨h₁, h₂⟩ := h
  rw [uhfGadget_sound _ _ _ _ h₂, FpVar.eval_add, H.sound _ _ _ h₁]
  rfl

theorem proverGadget_inputCount (H : CRHSchemeGadget F) (alpha : FpVar F) (stmt : List (FpVar F))
    (k : Counters) : Op.inputCount ((proverGadget H alpha stmt).run k).2 = 0 := by
  simp only [proverGadget, CS.run_bind, CS.run_pure, List.append_nil, Op.inputCount_append,
    H.noInputs, uhfGadget_inputCount]

end HybridCompression
