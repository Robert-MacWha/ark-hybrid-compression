/-
# Example instantiations (`src/test_utils`)

* `exampleCircuit` mirrors `SumCircuit` in `crates/tests/r1cs_trace.rs`: witnesses `a, b, c, sum`,
  enforces `a + b + c = sum`, and compresses the statement `[a, b, c, sum]`.
* `sumCRH` is a toy "hash" (the sum of the inputs) packaged as a
  `CRHSchemeGadget`, showing what a concrete hash gadget has to provide.
* `exampleTraceString` is the trace of the example circuit over `ZMod 17`;
  `Traces.lean` writes it for `crates/tests/r1cs_trace.rs`, which checks it
  against the arkworks constraint system.
-/
import HybridCompression.Circuit
import Mathlib.Algebra.Field.ZMod
import Mathlib.Tactic.NormNum.Prime

namespace HybridCompression

open ArkR1CS

variable {F : Type} [Field F] [DecidableEq F]

/-- A toy hash gadget: the sum of the inputs, `x₀ + (x₁ + (… + 0))`. It emits
no constraints. -/
def sumGadget : List (FpVar F) → CS F (FpVar F)
  | [] => pure FpVar.zero
  | x :: xs => do
    let rest ← sumGadget xs
    pure (x.add rest)

theorem sumGadget_sound (xs : List (FpVar F)) (k : Counters) (a : Assignment F) :
    ((sumGadget xs).run k).1.eval a = (xs.map (·.eval a)).sum := by
  induction xs generalizing k with
  | nil => simp [sumGadget]
  | cons x xs ih => simp [sumGadget, ih]

theorem sumGadget_ops (xs : List (FpVar F)) (k : Counters) : ((sumGadget xs).run k).2 = [] := by
  induction xs generalizing k with
  | nil => simp [sumGadget]
  | cons x xs ih => simp [sumGadget, ih]

/-- The toy hash as a black-box `CRHSchemeGadget`. -/
def sumCRH : CRHSchemeGadget F where
  evaluate_native := List.sum
  evaluate := sumGadget
  sound xs k a _ := sumGadget_sound xs k a
  noInputs xs k := by simp [sumGadget_ops, Op.inputCount]

/-- `SumCircuit::generate_constraints`: witness `a, b, c, sum`, enforce
`a + b + c = sum`, then compress the statement `[a, b, c, sum]`. -/
def exampleCircuit (H : CRHSchemeGadget F) (Hα : List F → F) (a b c sum : F) : CS F Unit := do
  let av ← FpVar.new_witness a
  let bv ← FpVar.new_witness b
  let cv ← FpVar.new_witness c
  let sv ← FpVar.new_witness sum
  EqGadget.enforce_equal ((av.add bv).add cv) sv
  compressStatement H Hα [av, bv, cv, sv]

/-- Soundness of the whole example circuit, composing the circuit's own
relation with `compressStatement_sound`: the public inputs `(α, β, γ)`
commit to a statement `[a', b', c', a' + b' + c']`. -/
theorem exampleCircuit_sound (H : CRHSchemeGadget F) (Hα : List F → F) (a b c sum : F)
    (k : Counters) (x : Assignment F)
    (h : ConstraintsHold x ((exampleCircuit H Hα a b c sum).run k).2) :
    ∃ a' b' c' : F,
      (x.instance_assignment (k.num_instance_variables + 1),
        x.instance_assignment (k.num_instance_variables + 2)) =
        proverNative H.evaluate_native (x.instance_assignment k.num_instance_variables)
          [a', b', c', a' + b' + c'] := by
  simp only [exampleCircuit, cs_run] at h
  obtain ⟨heq, hc⟩ := h
  have heq := FpVar.enforce_equal_sound _ _ (fun hc => by simpa [FpVar.isConstant] using hc.2)
    _ x heq
  have hc := compressStatement_sound _ _ _ _ x hc
  simp only [cs_run, cs_eval, FpVar.enforce_equal_inputCount, List.map_cons, List.map_nil] at heq hc
  rw [← heq] at hc
  exact ⟨_, _, _, hc⟩

/-- Operations of the example circuit from a fresh constraint system. -/
def exampleTrace (a b c sum : F) (Hα : List F → F) : List (Op F) :=
  ((exampleCircuit sumCRH Hα a b c sum).run Counters.new).2

instance : Fact (Nat.Prime 17) := ⟨by norm_num⟩

/-- The canonical trace over `𝔽₁₇` with statement `[1, 2, 3, 6]` and both hashes
equal to the sum of the inputs. `crates/tests/r1cs_trace.rs` builds the same
circuit with arkworks and checks it against this. -/
def exampleTraceString : String :=
  renderTrace (fun x : ZMod 17 => toString x.val) (exampleTrace (F := ZMod 17) 1 2 3 6 List.sum)

-- The honest prover's assignment satisfies the circuit (`cs.is_satisfied()`).
#eval show IO Unit from do
  unless isSatisfied (exampleTrace (F := ZMod 17) 1 2 3 6 List.sum) do
    throw (IO.userError "example circuit is not satisfied by the honest assignment")


end HybridCompression
