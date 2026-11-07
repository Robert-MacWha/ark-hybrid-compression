/-
# Example instantiations (`src/test_utils`)

* `exampleCircuit` mirrors `ExampleCircuit`: witnesses `a, b, c, sum`,
  enforces `a + b + c = sum`, and returns `[a, b, c, sum]` as the statement.
* `sumCRH` is a toy "hash" (the sum of the inputs) packaged as a
  `CRHSchemeGadget`, showing what a concrete hash gadget has to provide.
* The trace of the compressed example circuit over `ZMod 17` is checked
  against `traces/example.trace`, which `crates/tests/r1cs_trace.rs` also
  checks against the arkworks constraint system.
-/
import HybridCompression.Circuit
import Mathlib.Algebra.Field.ZMod
import Mathlib.Tactic.NormNum.Prime

namespace HybridCompression

open ArkR1CS

variable {F : Type} [Field F] [DecidableEq F]

/-- `ExampleCircuit::verify` followed by `ExampleStatement::flatten`. -/
def exampleCircuit (a b c sum : F) : CS F (List (FpVar F)) := do
  let av ← FpVar.new_witness a
  let bv ← FpVar.new_witness b
  let cv ← FpVar.new_witness c
  let sv ← FpVar.new_witness sum
  EqGadget.enforce_equal ((av.add bv).add cv) sv
  pure [av, bv, cv, sv]

/-- The relation `ExampleCircuit` enforces on its statement. -/
def exampleRel (s : List F) : Prop := ∃ a b c : F, s = [a, b, c, a + b + c]

theorem exampleCircuit_sound (a b c sum : F) (k : Counters) (x : Assignment F)
    (h : ConstraintsHold x ((exampleCircuit a b c sum).run k).2) :
    exampleRel (((exampleCircuit a b c sum).run k).1.map (·.eval x)) := by
  simp only [exampleCircuit, CS.run_bind, CS.run_pure, FpVar.run_new_witness, List.append_nil,
    List.singleton_append, constraintsHold_witness] at h
  have h := FpVar.enforce_equal_sound _ _ (fun hc => by simpa [FpVar.isConstant] using hc.2) _ x h
  simp only [exampleCircuit, CS.run_bind, CS.run_pure, FpVar.run_new_witness, List.map_cons,
    List.map_nil, exampleRel]
  simp only [FpVar.eval_add, FpVar.eval_Var, AllocatedFp.eval_new, LinearCombination.eval_ofVar,
    Variable.eval_Witness] at h ⊢
  rw [← h]
  exact ⟨_, _, _, rfl⟩

/-- `ExampleCircuit` as a `CompressibleCircuit`. -/
def exampleCompressible (a b c sum : F) : CompressibleCircuit F where
  verify := exampleCircuit a b c sum
  rel := exampleRel
  sound := exampleCircuit_sound a b c sum

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

/-- Operations of the compressed example circuit from a fresh constraint system. -/
def exampleTrace (a b c sum : F) (Hα : List F → F) : List (Op F) :=
  ((compressedCircuit sumCRH Hα (exampleCircuit a b c sum)).run Counters.new).2

instance : Fact (Nat.Prime 17) := ⟨by norm_num⟩

/-- The canonical trace over `𝔽₁₇` with statement `[1, 2, 3, 6]` and both hashes
equal to the sum of the inputs. `crates/tests/r1cs_trace.rs` builds the same
circuit with arkworks and checks it against `traces/example.trace`. -/
def exampleTraceString : String :=
  renderTrace (fun x : ZMod 17 => toString x.val) (exampleTrace (F := ZMod 17) 1 2 3 6 List.sum)

#eval IO.println exampleTraceString

-- The honest prover's assignment satisfies the circuit (`cs.is_satisfied()`).
#eval show IO Unit from do
  unless isSatisfied (exampleTrace (F := ZMod 17) 1 2 3 6 List.sum) do
    throw (IO.userError "example circuit is not satisfied by the honest assignment")

-- The checked-in trace must match the model: if the model changes, update
-- `traces/example.trace` from the `#eval` output above and re-run the Rust
-- test `crates/tests/r1cs_trace.rs`.
#eval show IO Unit from do
  let expected ← IO.FS.readFile "traces/example.trace"
  if expected != exampleTraceString then
    throw (IO.userError s!"traces/example.trace is out of date; expected:\n{exampleTraceString}")

end HybridCompression
