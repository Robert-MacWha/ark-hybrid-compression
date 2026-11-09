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

/-- `ark_hybrid_compression::hybrid_compression::hybrid_compression`. -/
def hybridCompression (H : List F → F) (known : F) (stmt : List F) : F × F :=
  let computed := H stmt
  (computed, uhf (known + computed) stmt)

/-- `ark_hybrid_compression::hybrid_compression::prover`. -/
def proverNative (Hβ : List F → F) (α : F) (stmt : List F) : F × F :=
  hybridCompression Hβ α stmt

/-- `ark_hybrid_compression::hybrid_compression::verifier`. -/
def verifierNative (Hα : List F → F) (β : F) (stmt : List F) : F × F :=
  hybridCompression Hα β stmt

/-- `ark_hybrid_compression::hybrid_compression::constraints::prover`. -/
def proverGadget (H : CRHSchemeGadget F) (alpha : FpVar F) (stmt : List (FpVar F)) :
    CS F (FpVar F × FpVar F) := do
  let beta ← H.evaluate stmt
  let sigma := alpha + beta
  let gamma ← uhfGadget sigma stmt
  pure (beta, gamma)

/-- The gadget's output is `prover` of the evaluated inputs. -/
theorem proverGadget_sound (H : CRHSchemeGadget F) (alpha : FpVar F) (stmt : List (FpVar F))
    (k : Counters) (a : Assignment F)
    (h : ConstraintsHold a ((proverGadget H alpha stmt).run k).2) :
    (((proverGadget H alpha stmt).run k).1.1.eval a,
      ((proverGadget H alpha stmt).run k).1.2.eval a) =
      proverNative H.evaluate_native (alpha.eval a) (stmt.map (·.eval a)) := by
  simp only [proverGadget, cs_run] at h ⊢
  obtain ⟨h₁, h₂⟩ := h
  rw [uhfGadget_sound _ _ _ _ h₂, FpVar.eval_hAdd, H.sound _ _ _ h₁]
  rfl

theorem proverGadget_inputCount (H : CRHSchemeGadget F) (alpha : FpVar F) (stmt : List (FpVar F))
    (k : Counters) : Op.inputCount ((proverGadget H alpha stmt).run k).2 = 0 := by
  simp only [proverGadget, cs_run, H.noInputs, uhfGadget_inputCount]

/-- `ark_hybrid_compression::hybrid_compression::enforce`. -/
def enforceGadget (H : CRHSchemeGadget F) (alpha beta gamma : FpVar F) (stmt : List (FpVar F)) :
    CS F Unit := do
  let bg ← proverGadget H alpha stmt
  beta.enforce_equal bg.1
  gamma.enforce_equal bg.2

/-- `(beta, gamma)` are `prover` of `alpha` and the evaluated statement. `beta` and
`gamma` must be variables, since `enforce_equal` on two constants emits nothing. -/
theorem enforceGadget_sound (H : CRHSchemeGadget F) (alpha beta gamma : FpVar F)
    (stmt : List (FpVar F)) (k : Counters) (a : Assignment F)
    (hβ : ¬ beta.isConstant) (hγ : ¬ gamma.isConstant)
    (h : ConstraintsHold a ((enforceGadget H alpha beta gamma stmt).run k).2) :
    (beta.eval a, gamma.eval a) =
      proverNative H.evaluate_native (alpha.eval a) (stmt.map (·.eval a)) := by
  simp only [enforceGadget, cs_run] at h
  obtain ⟨h₁, h₂, h₃⟩ := h
  have hp := proverGadget_sound H alpha stmt k a h₁
  rw [FpVar.enforce_equal_sound _ _ (fun hc => hβ hc.1) _ a h₂,
    FpVar.enforce_equal_sound _ _ (fun hc => hγ hc.1) _ a h₃]
  exact hp

theorem enforceGadget_inputCount (H : CRHSchemeGadget F) (alpha beta gamma : FpVar F)
    (stmt : List (FpVar F)) (k : Counters) :
    Op.inputCount ((enforceGadget H alpha beta gamma stmt).run k).2 = 0 := by
  simp only [enforceGadget, cs_run, proverGadget_inputCount, FpVar.enforce_equal_inputCount]

end HybridCompression
