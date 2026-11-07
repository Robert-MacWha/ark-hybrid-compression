/-
# Compressing a statement in a circuit (the pattern in the README)

`compressStatement H Hα stmt` is what a circuit does to compress the statement
variables `stmt` it has witnessed:

1. compute `α = Hα(stmt values)` natively and allocate it as a public input;
2. run the hybrid-compression prover gadget, obtaining `(β, γ)`;
3. allocate `β` and `γ` as public inputs and `enforce_equal` them to the gadget
   outputs (`exposeOutput`).

Main theorem `compressStatement_sound`: for *any* satisfying assignment, with
`(α, β, γ)` the three public inputs allocated at the current
`num_instance_variables`, `(β, γ) = prover H α s` where `s` is the evaluation
of `stmt`, i.e. `β = H(s)` and `γ = uhf (α + β) s`. The circuit that produced
`stmt` is arbitrary: its own relation on `s` is its own theorem, and the two
compose by `constraintsHold_append` (see `exampleCircuit_sound` in
`Examples.lean`).
-/
import HybridCompression.HybridCompression

namespace HybridCompression

open ArkR1CS

variable {F : Type} [Field F] [DecidableEq F]

/-- Expose `x` as a public output:
`let pub = FpVar::new_input(cs, || x.value())?; pub.enforce_equal(&x)?`. -/
def exposeOutput (x : FpVar F) : CS F Unit := do
  let pub ← FpVar.new_input x.value
  EqGadget.enforce_equal pub x

theorem exposeOutput_sound (x : FpVar F) (k : Counters) (a : Assignment F)
    (h : ConstraintsHold a ((exposeOutput x).run k).2) :
    a.instance_assignment k.num_instance_variables = x.eval a := by
  simp only [exposeOutput, CS.run_bind, FpVar.run_new_input, List.singleton_append,
    constraintsHold_input] at h
  have := FpVar.enforce_equal_sound _ x (fun hc => by simpa [FpVar.isConstant] using hc.1) _ a h
  simpa using this

theorem exposeOutput_inputCount (x : FpVar F) (k : Counters) :
    Op.inputCount ((exposeOutput x).run k).2 = 1 := by
  simp only [exposeOutput, CS.run_bind, FpVar.run_new_input, List.singleton_append, Op.inputCount,
    FpVar.enforce_equal_inputCount]

/-- The compression pattern: allocate `α`, run the prover gadget, expose `β` and `γ`. -/
def compressStatement (H : CRHSchemeGadget F) (Hα : List F → F) (stmt : List (FpVar F)) :
    CS F Unit := do
  -- `alpha` is computed natively from the statement's assigned values.
  let alpha ← FpVar.new_input (Hα (stmt.map FpVar.value))
  let bg ← proverGadget H alpha stmt
  exposeOutput bg.1
  exposeOutput bg.2

/-- **Soundness.** Any assignment satisfying the compression pattern has public
inputs `(α, β, γ)` with `(β, γ) = prover H α s`, where `s` is the in-circuit
statement. -/
theorem compressStatement_sound (H : CRHSchemeGadget F) (Hα : List F → F)
    (stmt : List (FpVar F)) (k : Counters) (a : Assignment F)
    (h : ConstraintsHold a ((compressStatement H Hα stmt).run k).2) :
    (a.instance_assignment (k.num_instance_variables + 1),
      a.instance_assignment (k.num_instance_variables + 2)) =
      proverNative H.evaluate_native (a.instance_assignment k.num_instance_variables)
        (stmt.map (·.eval a)) := by
  simp only [compressStatement, CS.run_bind, FpVar.run_new_input, List.singleton_append,
    constraintsHold_append, constraintsHold_input] at h
  obtain ⟨h₂, h₃, h₄⟩ := h
  have hp := proverGadget_sound H _ _ _ a h₂
  have hβ := exposeOutput_sound _ _ _ h₃
  have hγ := exposeOutput_sound _ _ _ h₄
  simp only [FpVar.eval_Var, AllocatedFp.eval_new, LinearCombination.eval_ofVar,
    Variable.eval_Instance, Counters.advance_num_instance_variables, Op.inputCount,
    proverGadget_inputCount, exposeOutput_inputCount, Nat.zero_add, Nat.add_zero] at hp hβ hγ
  rw [show k.num_instance_variables + 2 = k.num_instance_variables + 1 + 1 from rfl, hβ, hγ]
  exact hp

theorem compressStatement_inputCount (H : CRHSchemeGadget F) (Hα : List F → F)
    (stmt : List (FpVar F)) (k : Counters) :
    Op.inputCount ((compressStatement H Hα stmt).run k).2 = 3 := by
  simp only [compressStatement, CS.run_bind, FpVar.run_new_input, List.singleton_append,
    Op.inputCount, Op.inputCount_append, proverGadget_inputCount, exposeOutput_inputCount]

end HybridCompression
