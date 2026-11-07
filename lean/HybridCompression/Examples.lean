/-
# Example instantiations (`src/test_utils`)

* `sumCRH` is a toy "hash" (the sum of the inputs) packaged as a
  `CRHSchemeGadget`, showing what a concrete hash gadget has to provide.
* `exampleTraceString` is the trace over `ZMod 17` of witnessing a statement
  and compressing it with `sumCRH`;
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
    pure (x + rest)

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

/-- Operations of the compression pattern from a fresh constraint system:
witness each value of `stmt`, then `compressStatement` with the toy hash. -/
def exampleTrace (stmt : List F) (Hα : List F → F) : List (Op F) :=
  ((do
    let vars ← stmt.mapM FpVar.new_witness
    compressStatement sumCRH Hα vars).run Counters.new).2

instance : Fact (Nat.Prime 17) := ⟨by norm_num⟩

/-- The canonical trace over `𝔽₁₇` with statement `[1, 2, 3, 6]` and both hashes
equal to the sum of the inputs. `crates/tests/r1cs_trace.rs` builds the same
circuit with arkworks and checks it against this. -/
def exampleTraceString : String :=
  renderTrace (fun x : ZMod 17 => toString x.val) (exampleTrace (F := ZMod 17) [1, 2, 3, 6] List.sum)

-- The honest prover's assignment satisfies the circuit (`cs.is_satisfied()`).
#eval show IO Unit from do
  unless isSatisfied (exampleTrace (F := ZMod 17) [1, 2, 3, 6] List.sum) do
    throw (IO.userError "example trace is not satisfied by the honest assignment")


end HybridCompression
