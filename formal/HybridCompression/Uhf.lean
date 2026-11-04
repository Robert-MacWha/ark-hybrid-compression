/-
# Universal hash function (`src/uhf`)

`uhf σ [x₀, …, xₙ₋₁] = ∑ xᵢ σ^i`, evaluated by Horner's rule from the last
element, exactly as `uhf::uhf` does natively and `uhf::constraints::uhf_gadget`
does in-circuit. The gadget uses `FpVar::zero()` as the accumulator, so the
first multiplication is by a constant and only `n - 1` constraints are emitted.
-/
import ArkR1CS

namespace HybridCompression

open ArkR1CS

variable {F : Type} [Field F]

/-- Native UHF (`uhf::uhf`). -/
def uhf (σ : F) (x : List F) : F := x.foldr (fun xi acc => acc * σ + xi) 0

@[simp] theorem uhf_nil (σ : F) : uhf σ [] = 0 := rfl

@[simp] theorem uhf_cons (σ : F) (xi : F) (rest : List F) :
    uhf σ (xi :: rest) = uhf σ rest * σ + xi := rfl

/-- Trailing zeros are invisible to the UHF. The compression is therefore
only binding for statements of a *fixed* length: a verifier must know `n`
and reject statements of any other length. -/
theorem uhf_append_zero (σ : F) (x : List F) : uhf σ (x ++ [0]) = uhf σ x := by
  induction x with
  | nil => simp
  | cons xi rest ih => simp [ih]

/-- In-circuit UHF (`uhf::constraints::uhf_gadget`). -/
def uhfGadget (σ : FpVar F) : List (FpVar F) → Circuit F (FpVar F)
  | [] => pure FpVar.zero
  | xi :: rest => do
    let acc ← uhfGadget σ rest
    let prod ← acc.mul σ
    pure (prod.add xi)

theorem uhfGadget_sound (σ : FpVar F) (x : List (FpVar F)) (off : Offsets) (a : Assignment F)
    (h : ConstraintsHold a ((uhfGadget σ x).run off).2) :
    ((uhfGadget σ x).run off).1.eval a = uhf (σ.eval a) (x.map (·.eval a)) := by
  induction x generalizing off with
  | nil => simp [uhfGadget, FpVar.zero]
  | cons xi rest ih =>
    simp only [uhfGadget, Circuit.run_bind, Circuit.run_pure, List.append_nil,
      constraintsHold_append] at h ⊢
    obtain ⟨h₁, h₂⟩ := h
    rw [FpVar.eval_add, FpVar.mul_sound _ _ _ _ h₂, ih _ h₁, List.map_cons, uhf_cons]

theorem uhfGadget_inputCount (σ : FpVar F) (x : List (FpVar F)) (off : Offsets) :
    Op.inputCount ((uhfGadget σ x).run off).2 = 0 := by
  induction x generalizing off with
  | nil => simp [uhfGadget, Op.inputCount]
  | cons xi rest ih =>
    simp only [uhfGadget, Circuit.run_bind, Circuit.run_pure, List.append_nil,
      Op.inputCount_append, ih, FpVar.mul_inputCount, Nat.add_zero]

theorem uhfGadget_complete (σ : FpVar F) (x : List (FpVar F)) (off : Offsets) (a₀ : Assignment F)
    (hσ : σ.below off) (hσc : Consistent a₀ σ)
    (hx : ∀ xi ∈ x, xi.below off ∧ Consistent a₀ xi) :
    Complete (uhfGadget σ x) off a₀ := by
  induction x generalizing off a₀ with
  | nil => exact Complete.pure trivial rfl
  | cons xi rest ih =>
    have hrest := ih off a₀ hσ hσc fun y hy => hx y (List.mem_cons_of_mem _ hy)
    have hxi := hx xi (by simp)
    simp only [uhfGadget]
    refine Complete.bind hrest ?_
    have hle₁ := Offsets.le_advance off ((uhfGadget σ rest).run off).2
    have hσ₁ := FpVar.below_mono hle₁ hσ
    have hσc₁ : Consistent (extend off a₀ ((uhfGadget σ rest).run off).2) σ :=
      Consistent.extend hσ hσc
    have hmul := FpVar.mul_complete _ _ _ _ hrest.below hσ₁ hrest.consistent hσc₁
    refine Complete.bind hmul ?_
    have hle₂ := Offsets.le_advance (off.advance ((uhfGadget σ rest).run off).2)
      ((((uhfGadget σ rest).run off).1.mul σ).run (off.advance ((uhfGadget σ rest).run off).2)).2
    refine Complete.pure ?_ ?_
    · exact FpVar.below_add hmul.below (FpVar.below_mono (Offsets.le_trans hle₁ hle₂) hxi.1)
    · exact FpVar.consistent_add hmul.consistent
        (Consistent.extend (FpVar.below_mono hle₁ hxi.1) (Consistent.extend hxi.1 hxi.2))

end HybridCompression
