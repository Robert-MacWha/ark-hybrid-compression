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

variable {F : Type} [Field F]

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
def proverGadget (H : CRHGadget F) (alpha : FpVar F) (stmt : List (FpVar F)) :
    Circuit F (FpVar F × FpVar F) := do
  let beta ← H.gadget stmt
  let sigma := alpha.add beta
  let gamma ← uhfGadget sigma stmt
  pure (beta, gamma)

/-- Soundness: whatever assignment satisfies the gadget's constraints, the
in-circuit `(β, γ)` are the native `(β, γ)` of the in-circuit statement. -/
theorem proverGadget_sound (H : CRHGadget F) (alpha : FpVar F) (stmt : List (FpVar F))
    (off : Offsets) (a : Assignment F)
    (h : ConstraintsHold a ((proverGadget H alpha stmt).run off).2) :
    (((proverGadget H alpha stmt).run off).1.1.eval a,
      ((proverGadget H alpha stmt).run off).1.2.eval a) =
      proverNative H.native (alpha.eval a) (stmt.map (·.eval a)) := by
  simp only [proverGadget, Circuit.run_bind, Circuit.run_pure, List.append_nil,
    constraintsHold_append] at h ⊢
  obtain ⟨h₁, h₂⟩ := h
  rw [uhfGadget_sound _ _ _ _ h₂, FpVar.eval_add, H.sound _ _ _ h₁]
  rfl

theorem proverGadget_inputCount (H : CRHGadget F) (alpha : FpVar F) (stmt : List (FpVar F))
    (off : Offsets) : Op.inputCount ((proverGadget H alpha stmt).run off).2 = 0 := by
  simp only [proverGadget, Circuit.run_bind, Circuit.run_pure, List.append_nil,
    Op.inputCount_append, H.noInputs, uhfGadget_inputCount]

theorem proverGadget_complete (H : CRHGadget F) (alpha : FpVar F) (stmt : List (FpVar F))
    (off : Offsets) (a₀ : Assignment F) (hα : alpha.below off) (hαc : Consistent a₀ alpha)
    (hs : ∀ x ∈ stmt, x.below off ∧ Consistent a₀ x) :
    Complete (proverGadget H alpha stmt) off a₀ := by
  unfold proverGadget
  have h₁ := H.complete stmt off a₀ hs
  refine Complete.bind h₁ ?_
  have hle₁ := Offsets.le_advance off ((H.gadget stmt).run off).2
  have hs₁ : ∀ x ∈ stmt, x.below (off.advance ((H.gadget stmt).run off).2) ∧
      Consistent (extend off a₀ ((H.gadget stmt).run off).2) x :=
    fun x hx => ⟨FpVar.below_mono hle₁ (hs x hx).1, Consistent.extend (hs x hx).1 (hs x hx).2⟩
  have hσ := FpVar.below_add (FpVar.below_mono hle₁ hα) h₁.below
  have hσc := FpVar.consistent_add (Consistent.extend hα hαc) h₁.consistent
  have h₂ := uhfGadget_complete _ stmt _ _ hσ hσc hs₁
  refine Complete.bind h₂ ?_
  have hle₂ := Offsets.le_advance (off.advance ((H.gadget stmt).run off).2)
    ((uhfGadget (alpha.add ((H.gadget stmt).run off).1) stmt).run
      (off.advance ((H.gadget stmt).run off).2)).2
  exact Complete.pure ⟨FpVar.below_mono hle₂ h₁.below, h₂.below⟩
    (Consistent.prod (Consistent.extend h₁.below h₁.consistent) h₂.consistent)

end HybridCompression
