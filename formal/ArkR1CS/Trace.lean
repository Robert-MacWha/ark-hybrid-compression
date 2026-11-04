/-
# Canonical constraint traces

Renders the operations of a circuit computation in the same shape as
arkworks' `ConstraintSystem::to_matrices()` output, so that the model can be
differentially tested against the real constraint system (see
`crates/tests/r1cs_trace.rs`):

* columns are numbered as in arkworks: `one ↦ 0`, the `i`-th public input
  `↦ 1 + i`, the `j`-th witness `↦ 1 + #inputs + j`;
* every linear combination is compacted (duplicate columns merged, zero
  coefficients dropped, sorted by column), as `make_row` does;
* the honest assignment (`extend` from an all-zero assignment) is printed
  alongside, matching `instance_assignment` / `witness_assignment`.
-/
import ArkR1CS.Circuit

namespace ArkR1CS

variable {F : Type} [Field F]

/-- Column index of a variable in arkworks' matrices. -/
def Variable.column (numInputs : Nat) : Variable → Nat
  | .one => 0
  | .input i => 1 + i
  | .witness j => 1 + numInputs + j

/-- Insert into a list sorted by the first component. -/
def insertSorted (p : Nat × F) : List (Nat × F) → List (Nat × F)
  | [] => [p]
  | q :: rest => if p.1 ≤ q.1 then p :: q :: rest else q :: insertSorted p rest

/-- Merge a coefficient into a column-sorted association list. -/
def mergeTerm [DecidableEq F] (p : Nat × F) : List (Nat × F) → List (Nat × F)
  | [] => [p]
  | q :: rest => if p.1 = q.1 then (q.1, q.2 + p.2) :: rest else q :: mergeTerm p rest

/-- Compact a linear combination the way `make_row` does. -/
def LC.canon [DecidableEq F] (numInputs : Nat) (lc : LC F) : List (Nat × F) :=
  let merged := lc.foldl (fun acc t => mergeTerm (t.2.column numInputs, t.1) acc) []
  let sorted := merged.foldl (fun acc p => insertSorted p acc) []
  sorted.filter fun p => decide (p.2 ≠ 0)

/-- Render a compacted linear combination as `col:coeff …`, or `-` if empty. -/
def renderLC [DecidableEq F] (showF : F → String) (numInputs : Nat) (lc : LC F) : String :=
  match LC.canon numInputs lc with
  | [] => "-"
  | terms => " ".intercalate (terms.map fun p => s!"{p.1}:{showF p.2}")

/-- Render rows `i: A | B | C`. -/
def renderRows [DecidableEq F] (showF : F → String) (numInputs : Nat) :
    Nat → List (Constraint F) → List String
  | _, [] => []
  | i, k :: rest =>
    s!"{i}: {renderLC showF numInputs k.a} | {renderLC showF numInputs k.b} | {renderLC showF numInputs k.c}"
      :: renderRows showF numInputs (i + 1) rest

/-- Canonical rendering of the trace of `ops`, run from a fresh constraint
system (`Offsets ⟨0, 0⟩`, all-zero initial assignment). -/
def renderTrace [DecidableEq F] (showF : F → String) (ops : List (Op F)) : String :=
  let numInputs := Op.inputCount ops
  let numWitnesses := Op.witnessCount ops
  let a := extend ⟨0, 0⟩ ⟨fun _ => 0, fun _ => 0⟩ ops
  let header := s!"inputs={numInputs} witnesses={numWitnesses} constraints={(Op.constraints ops).length}"
  let inst := "instance: " ++ " ".intercalate ((List.range numInputs).map fun i => showF (a.input i))
  let wit := "witness: " ++ " ".intercalate ((List.range numWitnesses).map fun j => showF (a.witness j))
  "\n".intercalate ([header, inst, wit] ++ renderRows showF numInputs 0 (Op.constraints ops)) ++ "\n"

end ArkR1CS
