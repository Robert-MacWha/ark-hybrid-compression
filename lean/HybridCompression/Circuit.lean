/-
# Compressing a statement in a circuit (the pattern in the README)

`compressStatement H Hα stmt` is what a circuit does to compress the statement
variables `stmt` it has witnessed: compute `(α, β, γ) = compress(stmt values)`
natively, allocate the three as public inputs, and call
`constraints::enforce` (`enforceGadget`).

Main theorem `compressStatement_sound`: for *any* satisfying assignment, with
`(α, β, γ)` the three public inputs allocated at the current
`num_instance_variables`, `(β, γ) = prover H α s` where `s` is the evaluation
of `stmt`, i.e. `β = H(s)` and `γ = uhf (α + β) s`. The circuit that produced
`stmt` is arbitrary: its own relation on `s` is its own theorem, and the two
compose by `constraintsHold_append`.
-/
import HybridCompression.HybridCompression

namespace HybridCompression

open ArkR1CS

variable {F : Type} [Field F] [DecidableEq F]

/-- Allocates `(alpha, beta, gamma)` from `compress` as public inputs and calls
`enforce`, as in the README example. -/
def compressStatement (H : CRHSchemeGadget F) (Hα : List F → F) (stmt : List (FpVar F)) :
    CS F Unit := do
  let raw := stmt.map FpVar.value
  let pub := proverNative H.evaluate_native (Hα raw) raw
  let alpha ← FpVar.new_input (Hα raw)
  let beta ← FpVar.new_input pub.1
  let gamma ← FpVar.new_input pub.2
  enforceGadget H alpha beta gamma stmt

/-- The public inputs `(beta, gamma)` are `prover` of `alpha` and the evaluated
statement. -/
theorem compressStatement_sound (H : CRHSchemeGadget F) (Hα : List F → F)
    (stmt : List (FpVar F)) (k : Counters) (a : Assignment F)
    (h : ConstraintsHold a ((compressStatement H Hα stmt).run k).2) :
    (a.instance_assignment (k.num_instance_variables + 1),
      a.instance_assignment (k.num_instance_variables + 2)) =
      proverNative H.evaluate_native (a.instance_assignment k.num_instance_variables)
        (stmt.map (·.eval a)) := by
  simp only [compressStatement, cs_run] at h
  have hs := enforceGadget_sound H _ _ _ stmt _ a (by simp [FpVar.isConstant])
    (by simp [FpVar.isConstant]) h
  simp only [cs_run, cs_eval] at hs
  rw [show k.num_instance_variables + 2 = k.num_instance_variables + 1 + 1 from rfl]
  exact hs

theorem compressStatement_inputCount (H : CRHSchemeGadget F) (Hα : List F → F)
    (stmt : List (FpVar F)) (k : Counters) :
    Op.inputCount ((compressStatement H Hα stmt).run k).2 = 3 := by
  simp only [compressStatement, cs_run, enforceGadget_inputCount]

end HybridCompression
