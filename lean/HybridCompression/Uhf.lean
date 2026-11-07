/-
# Universal hash function (`src/uhf`)

`uhf σ [x₀, …, xₙ₋₁] = ∑ xᵢ σ^i`, evaluated by Horner's rule from the last
element, exactly as `uhf::uhf` does natively and `uhf::constraints::uhf_gadget`
does in-circuit. The gadget starts from `FpVar::zero()` (a constant), so the
first multiplication is by a constant and only `n - 1` constraints are emitted.
-/
import ArkR1CS

namespace HybridCompression

open ArkR1CS

variable {F : Type} [Field F]

/-- Native UHF (`uhf::uhf`):
`acc = 0; for xi in x.rev() { acc = acc * sigma + xi }`. -/
def uhf (σ : F) : List F → F
  | [] => 0
  | xi :: rest => uhf σ rest * σ + xi

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

variable [DecidableEq F]

/-- In-circuit UHF (`uhf::constraints::uhf_gadget`), the same recursion with
`acc * sigma` emitting a constraint. -/
def uhfGadget (σ : FpVar F) : List (FpVar F) → CS F (FpVar F)
  | [] => pure FpVar.zero
  | xi :: rest => do
    let acc ← uhfGadget σ rest
    let prod ← acc.mul σ
    pure (prod + xi)

theorem uhfGadget_sound (σ : FpVar F) (x : List (FpVar F)) (k : Counters) (a : Assignment F)
    (h : ConstraintsHold a ((uhfGadget σ x).run k).2) :
    ((uhfGadget σ x).run k).1.eval a = uhf (σ.eval a) (x.map (·.eval a)) := by
  induction x generalizing k with
  | nil => simp [uhfGadget]
  | cons xi rest ih =>
    simp only [uhfGadget, cs_run] at h ⊢
    obtain ⟨h₁, h₂⟩ := h
    rw [FpVar.eval_hAdd, FpVar.mul_sound _ _ _ _ h₂, ih _ h₁, List.map_cons, uhf_cons]

theorem uhfGadget_inputCount (σ : FpVar F) (x : List (FpVar F)) (k : Counters) :
    Op.inputCount ((uhfGadget σ x).run k).2 = 0 := by
  induction x generalizing k with
  | nil => simp [uhfGadget, Op.inputCount]
  | cons xi rest ih =>
    simp only [uhfGadget, cs_run, ih, FpVar.mul_inputCount]

end HybridCompression
