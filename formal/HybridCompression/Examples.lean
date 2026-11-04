/-
# Example instantiations (`src/test_utils`)

* `exampleCircuit` mirrors `ExampleCircuit`: witnesses `a, b, c, sum` and
  enforces `a + b + c = sum`, returning `[a, b, c, sum]` as the statement.
* `sumCRH` is a toy "hash" (the sum of the inputs) packaged as a `CRHGadget`,
  showing what a concrete hash gadget has to provide.
* `#eval` prints the operations the model performs for the compressed
  circuit over `ZMod 7`, which is what a differential test against the
  arkworks constraint system compares.
-/
import HybridCompression.Circuit
import Mathlib.Data.ZMod.Basic
import Mathlib.Tactic.NormNum.Prime

namespace HybridCompression

open ArkR1CS

variable {F : Type} [Field F]

/-- `ExampleCircuit::verify` followed by `ExampleStatement::flatten`. -/
def exampleCircuit (a b c sum : F) : Circuit F (List (FpVar F)) := do
  let av ← FpVar.newWitness a
  let bv ← FpVar.newWitness b
  let cv ← FpVar.newWitness c
  let sv ← FpVar.newWitness sum
  ((av.add bv).add cv).enforceEqual sv
  pure [av, bv, cv, sv]

/-- The relation `ExampleCircuit` enforces on its statement. -/
def exampleRel (s : List F) : Prop := ∃ a b c : F, s = [a, b, c, a + b + c]

theorem exampleCircuit_sound (a b c sum : F) (off : Offsets) (x : Assignment F)
    (h : ConstraintsHold x ((exampleCircuit a b c sum).run off).2) :
    exampleRel (((exampleCircuit a b c sum).run off).1.map (·.eval x)) := by
  simp only [exampleCircuit, Circuit.run_bind, Circuit.run_pure, FpVar.run_newWitness,
    FpVar.run_enforceEqual, List.append_nil, List.singleton_append, List.cons_append,
    constraintsHold_witness, constraintsHold_constrain, constraintsHold_nil, and_true] at h
  rw [FpVar.eqConstraint_holds_iff] at h
  simp only [exampleCircuit, Circuit.run_bind, Circuit.run_pure, FpVar.run_newWitness,
    FpVar.run_enforceEqual, List.map_cons, List.map_nil, exampleRel]
  simp only [FpVar.eval_add, FpVar.eval_lin, LC.eval_cons, LC.eval_nil, Variable.eval_witness,
    one_mul, add_zero] at h ⊢
  exact ⟨_, _, _, by rw [h]⟩

/-- `ExampleCircuit` as a `CompressibleCircuit`. -/
def exampleCompressible (a b c sum : F) : CompressibleCircuit F where
  verify := exampleCircuit a b c sum
  rel := exampleRel
  sound := exampleCircuit_sound a b c sum

theorem exampleCircuit_complete (a b c : F) (off : Offsets) (a₀ : Assignment F) :
    Complete (exampleCircuit a b c (a + b + c)) off a₀ := by
  unfold exampleCircuit
  refine Complete.bind (FpVar.newWitness_complete _ _ _) ?_
  refine Complete.bind (FpVar.newWitness_complete _ _ _) ?_
  refine Complete.bind (FpVar.newWitness_complete _ _ _) ?_
  refine Complete.bind (FpVar.newWitness_complete _ _ _) ?_
  simp only [FpVar.run_newWitness, Offsets.advance_witness, Offsets.advance_nil, extend_witness,
    extend_nil]
  refine Complete.bind (FpVar.enforceEqual_complete _ _ _ _ ?_ ?_ ?_) ?_
  · simp [FpVar.add, FpVar.below, LC.below, Variable.below]
  · simp [FpVar.below, LC.below, Variable.below]
  · simp (disch := omega) [FpVar.add, Assignment.setWitness, Function.update_of_ne,
      Function.update_self]
  refine Complete.pure ?_ ?_
  · simp [FpVar.below, LC.below, Variable.below]
  · simp (disch := omega) [Consistent, Assignment.setWitness, Function.update_of_ne,
      Function.update_self]

/-- A toy hash: the sum of the inputs. Its gadget emits no constraints. -/
def sumGadget : List (FpVar F) → Circuit F (FpVar F)
  | [] => pure FpVar.zero
  | x :: xs => do
    let rest ← sumGadget xs
    pure (x.add rest)

theorem sumGadget_sound (xs : List (FpVar F)) (off : Offsets) (a : Assignment F) :
    ((sumGadget xs).run off).1.eval a = (xs.map (·.eval a)).sum := by
  induction xs generalizing off with
  | nil => simp [sumGadget, FpVar.zero]
  | cons x xs ih => simp [sumGadget, ih]

theorem sumGadget_ops (xs : List (FpVar F)) (off : Offsets) : ((sumGadget xs).run off).2 = [] := by
  induction xs generalizing off with
  | nil => simp [sumGadget]
  | cons x xs ih => simp [sumGadget, ih]

theorem sumGadget_complete (xs : List (FpVar F)) (off : Offsets) (a₀ : Assignment F)
    (hx : ∀ x ∈ xs, x.below off ∧ Consistent a₀ x) : Complete (sumGadget xs) off a₀ := by
  induction xs generalizing off a₀ with
  | nil => exact Complete.pure trivial rfl
  | cons x xs ih =>
    simp only [sumGadget]
    have hrest := ih off a₀ fun y hy => hx y (List.mem_cons_of_mem _ hy)
    have hx' := hx x List.mem_cons_self
    refine Complete.bind hrest ?_
    refine Complete.pure ?_ ?_
    · exact FpVar.below_add (FpVar.below_mono (Offsets.le_advance _ _) hx'.1) hrest.below
    · exact FpVar.consistent_add (Consistent.extend hx'.1 hx'.2) hrest.consistent

/-- The toy hash as a black-box `CRHGadget`. -/
def sumCRH : CRHGadget F where
  native := List.sum
  gadget := sumGadget
  sound xs off a _ := sumGadget_sound xs off a
  complete := sumGadget_complete
  noInputs xs off := by simp [sumGadget_ops, Op.inputCount]

/-- Operations of the compressed example circuit from a fresh constraint system. -/
def exampleTrace (a b c sum : F) (Hα : List F → F) : List (Op F) :=
  ((compressedCircuit sumCRH Hα (exampleCircuit a b c sum)).run ⟨0, 0⟩).2

instance : Fact (Nat.Prime 17) := ⟨by norm_num⟩

/-- The canonical trace over `𝔽₁₇` with statement `[1, 2, 3, 6]` and both hashes
equal to the sum of the inputs. `crates/tests/r1cs_trace.rs` builds the same
circuit with arkworks and checks it against `traces/example.trace`. -/
def exampleTraceString : String :=
  renderTrace (fun x : ZMod 17 => toString x.val) (exampleTrace (F := ZMod 17) 1 2 3 6 List.sum)

#eval IO.println exampleTraceString

/-- The checked-in trace must match the model (regenerate it with
`lake env lean --run HybridCompression/Examples.lean` if the model changes). -/
#eval show IO Unit from do
  let expected ← IO.FS.readFile "traces/example.trace"
  if expected != exampleTraceString then
    throw (IO.userError s!"traces/example.trace is out of date; expected:\n{exampleTraceString}")

end HybridCompression
