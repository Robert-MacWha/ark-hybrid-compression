/-
# R1CS model mirroring `ark-relations`

This file models the pieces of `ark_relations::gr1cs` that `ark-r1cs-std`
gadgets are built on:

* `Variable` ↔ `Variable::{One, Instance(i), Witness(i)}` (symbolic linear
  combinations are kept inlined instead of interned in an `lc_map`).
* `Assignment` ↔ `instance_assignment` / `witness_assignment`.
* `LC` ↔ `LinearCombination<F>`.
* `Constraint` ↔ one R1CS row `a * b = c`.
* `Op` ↔ the side effects a gadget performs on a `ConstraintSystemRef`:
  allocating an instance variable, allocating a witness variable, or
  enforcing a constraint.

Gadgets (see `ArkR1CS.Circuit`) are modelled as functions from the current
allocation offsets to an output plus the list of operations they perform.
The semantics of a list of operations is:

* `Op.constraints` — the R1CS rows it contributes, and `ConstraintsHold`
  — satisfaction of those rows by an arbitrary assignment (used for
  *soundness*: nothing is assumed about how the assignment was produced).
* `extend` — the honest prover's assignment, obtained by giving every
  freshly allocated variable the value the gadget computed for it (used
  for *completeness*).
-/
import Mathlib.Algebra.Field.Defs
import Mathlib.Algebra.BigOperators.Group.List.Basic
import Mathlib.Logic.Function.Basic
import Mathlib.Tactic.Ring

namespace ArkR1CS

/-- An R1CS variable: the constant `one`, the `i`-th public input (instance
variable), or the `i`-th private witness. -/
inductive Variable
  | one
  | input (i : Nat)
  | witness (i : Nat)
  deriving DecidableEq, Repr

/-- How many instance / witness variables have been allocated so far. -/
structure Offsets where
  inputs : Nat
  witnesses : Nat
  deriving DecidableEq, Repr

/-- Componentwise order on offsets. -/
structure Offsets.le (o₁ o₂ : Offsets) : Prop where
  inputs : o₁.inputs ≤ o₂.inputs
  witnesses : o₁.witnesses ≤ o₂.witnesses

theorem Offsets.le_refl (o : Offsets) : o.le o := ⟨le_rfl, le_rfl⟩

theorem Offsets.le_trans {o₁ o₂ o₃ : Offsets} (h₁ : o₁.le o₂) (h₂ : o₂.le o₃) : o₁.le o₃ :=
  ⟨h₁.inputs.trans h₂.inputs, h₁.witnesses.trans h₂.witnesses⟩

/-- `v` refers to a variable that has already been allocated at `off`. -/
def Variable.below (off : Offsets) : Variable → Prop
  | .one => True
  | .input i => i < off.inputs
  | .witness i => i < off.witnesses

theorem Variable.below_mono {o₁ o₂ : Offsets} (h : o₁.le o₂) {v : Variable}
    (hv : v.below o₁) : v.below o₂ := by
  obtain ⟨h₁, h₂⟩ := h
  cases v <;> simp only [Variable.below] at hv ⊢ <;> omega

/-- A full assignment to all variables (`instance_assignment` and
`witness_assignment`). Indices that were never allocated are irrelevant. -/
structure Assignment (F : Type) where
  input : Nat → F
  witness : Nat → F

section Field

variable {F : Type} [Field F]

/-- Value of a variable under an assignment. -/
def Variable.eval (a : Assignment F) : Variable → F
  | .one => 1
  | .input i => a.input i
  | .witness i => a.witness i

@[simp] theorem Variable.eval_one (a : Assignment F) : Variable.eval a .one = 1 := rfl
@[simp] theorem Variable.eval_input (a : Assignment F) (i : Nat) :
    Variable.eval a (.input i) = a.input i := rfl
@[simp] theorem Variable.eval_witness (a : Assignment F) (i : Nat) :
    Variable.eval a (.witness i) = a.witness i := rfl

/-- Linear combination `∑ cᵢ · vᵢ` (`LinearCombination<F>`). -/
abbrev LC (F : Type) := List (F × Variable)

namespace LC

/-- Value of a linear combination. -/
def eval (a : Assignment F) (lc : LC F) : F := (lc.map fun t => t.1 * t.2.eval a).sum

/-- Scale every coefficient by `c` (`LinearCombination * F`). -/
def scale (c : F) (lc : LC F) : LC F := lc.map fun t => (c * t.1, t.2)

/-- All variables of `lc` are allocated at `off`. -/
def below (off : Offsets) (lc : LC F) : Prop := ∀ t ∈ lc, t.2.below off

@[simp] theorem eval_nil (a : Assignment F) : eval a ([] : LC F) = 0 := rfl

@[simp] theorem eval_cons (a : Assignment F) (t : F × Variable) (lc : LC F) :
    eval a (t :: lc) = t.1 * t.2.eval a + eval a lc := rfl

@[simp] theorem eval_append (a : Assignment F) (l₁ l₂ : LC F) :
    eval a (l₁ ++ l₂) = eval a l₁ + eval a l₂ := by
  simp [eval, List.map_append, List.sum_append]

@[simp] theorem eval_scale (a : Assignment F) (c : F) (lc : LC F) :
    eval a (scale c lc) = c * eval a lc := by
  induction lc with
  | nil => simp [scale]
  | cons t lc ih =>
    simp only [scale, List.map_cons, eval_cons] at ih ⊢
    rw [ih]
    ring

@[simp] theorem below_nil (off : Offsets) : below off ([] : LC F) := by
  simp [below]

@[simp] theorem below_cons {off : Offsets} {t : F × Variable} {lc : LC F} :
    below off (t :: lc) ↔ t.2.below off ∧ below off lc := by
  simp [below]

@[simp] theorem below_append {off : Offsets} {l₁ l₂ : LC F} :
    below off (l₁ ++ l₂) ↔ below off l₁ ∧ below off l₂ := by
  simp [below, or_imp, forall_and]

theorem below_scale {off : Offsets} {c : F} {lc : LC F} (h : below off lc) :
    below off (scale c lc) := by
  intro t ht
  simp only [scale, List.mem_map] at ht
  obtain ⟨u, hu, rfl⟩ := ht
  exact h u hu

theorem below_mono {o₁ o₂ : Offsets} (h : o₁.le o₂) {lc : LC F} (hl : below o₁ lc) :
    below o₂ lc :=
  fun t ht => Variable.below_mono h (hl t ht)

end LC

/-- One R1CS row: `a * b = c`. -/
structure Constraint (F : Type) where
  a : LC F
  b : LC F
  c : LC F
  deriving Repr

namespace Constraint

/-- The row is satisfied by `x`. -/
def holds (x : Assignment F) (k : Constraint F) : Prop :=
  k.a.eval x * k.b.eval x = k.c.eval x

/-- All variables of the row are allocated at `off`. -/
def below (off : Offsets) (k : Constraint F) : Prop :=
  k.a.below off ∧ k.b.below off ∧ k.c.below off

theorem below_mono {o₁ o₂ : Offsets} (h : o₁.le o₂) {k : Constraint F} (hk : k.below o₁) :
    k.below o₂ :=
  ⟨LC.below_mono h hk.1, LC.below_mono h hk.2.1, LC.below_mono h hk.2.2⟩

end Constraint

/-- A side effect on the constraint system. The value carried by `input` /
`witness` is the value the prover assigns to the fresh variable
(the closure passed to `new_input` / `new_witness` in arkworks). -/
inductive Op (F : Type)
  | input (val : F)
  | witness (val : F)
  | constrain (k : Constraint F)
  deriving Repr

namespace Op

/-- Number of instance variables allocated by `ops`. -/
def inputCount : List (Op F) → Nat
  | [] => 0
  | .input _ :: rest => inputCount rest + 1
  | .witness _ :: rest => inputCount rest
  | .constrain _ :: rest => inputCount rest

/-- Number of witness variables allocated by `ops`. -/
def witnessCount : List (Op F) → Nat
  | [] => 0
  | .input _ :: rest => witnessCount rest
  | .witness _ :: rest => witnessCount rest + 1
  | .constrain _ :: rest => witnessCount rest

/-- The R1CS rows contributed by `ops`, in order. -/
def constraints : List (Op F) → List (Constraint F)
  | [] => []
  | .input _ :: rest => constraints rest
  | .witness _ :: rest => constraints rest
  | .constrain k :: rest => k :: constraints rest

theorem inputCount_append (l₁ l₂ : List (Op F)) :
    inputCount (l₁ ++ l₂) = inputCount l₁ + inputCount l₂ := by
  induction l₁ with
  | nil => simp [inputCount]
  | cons op rest ih => cases op <;> simp [inputCount, ih] <;> omega

theorem witnessCount_append (l₁ l₂ : List (Op F)) :
    witnessCount (l₁ ++ l₂) = witnessCount l₁ + witnessCount l₂ := by
  induction l₁ with
  | nil => simp [witnessCount]
  | cons op rest ih => cases op <;> simp [witnessCount, ih] <;> omega

theorem constraints_append (l₁ l₂ : List (Op F)) :
    constraints (l₁ ++ l₂) = constraints l₁ ++ constraints l₂ := by
  induction l₁ with
  | nil => rfl
  | cons op rest ih => cases op <;> simp [constraints, ih]

end Op

/-- Offsets after performing `ops`. -/
def Offsets.advance (off : Offsets) (ops : List (Op F)) : Offsets :=
  ⟨off.inputs + Op.inputCount ops, off.witnesses + Op.witnessCount ops⟩

@[simp] theorem Offsets.advance_nil (off : Offsets) : off.advance ([] : List (Op F)) = off := by
  simp [Offsets.advance, Op.inputCount, Op.witnessCount]

theorem Offsets.advance_append (off : Offsets) (l₁ l₂ : List (Op F)) :
    off.advance (l₁ ++ l₂) = (off.advance l₁).advance l₂ := by
  simp [Offsets.advance, Op.inputCount_append, Op.witnessCount_append, Nat.add_assoc]

@[simp] theorem Offsets.advance_input (off : Offsets) (v : F) (rest : List (Op F)) :
    off.advance (.input v :: rest) = Offsets.advance ⟨off.inputs + 1, off.witnesses⟩ rest := by
  simp only [Offsets.advance, Op.inputCount, Op.witnessCount, Offsets.mk.injEq]
  omega

@[simp] theorem Offsets.advance_witness (off : Offsets) (v : F) (rest : List (Op F)) :
    off.advance (.witness v :: rest) = Offsets.advance ⟨off.inputs, off.witnesses + 1⟩ rest := by
  simp only [Offsets.advance, Op.inputCount, Op.witnessCount, Offsets.mk.injEq]
  omega

@[simp] theorem Offsets.advance_constrain (off : Offsets) (k : Constraint F) (rest : List (Op F)) :
    off.advance (.constrain k :: rest) = off.advance rest := by
  simp [Offsets.advance, Op.inputCount, Op.witnessCount]

theorem Offsets.le_advance (off : Offsets) (ops : List (Op F)) : off.le (off.advance ops) :=
  ⟨Nat.le_add_right _ _, Nat.le_add_right _ _⟩

@[simp] theorem Offsets.advance_inputs (off : Offsets) (ops : List (Op F)) :
    (off.advance ops).inputs = off.inputs + Op.inputCount ops := rfl

@[simp] theorem Offsets.advance_witnesses (off : Offsets) (ops : List (Op F)) :
    (off.advance ops).witnesses = off.witnesses + Op.witnessCount ops := rfl

/-! ### Constraint satisfaction (soundness side) -/

/-- Every row contributed by `ops` is satisfied by `a`. -/
def ConstraintsHold (a : Assignment F) (ops : List (Op F)) : Prop :=
  ∀ k ∈ Op.constraints ops, k.holds a

/-- Every row contributed by `ops` only mentions variables allocated at `off`. -/
def ConstraintsBelow (off : Offsets) (ops : List (Op F)) : Prop :=
  ∀ k ∈ Op.constraints ops, k.below off

@[simp] theorem constraintsHold_nil (a : Assignment F) : ConstraintsHold a ([] : List (Op F)) := by
  simp [ConstraintsHold, Op.constraints]

@[simp] theorem constraintsHold_input (a : Assignment F) (v : F) (rest : List (Op F)) :
    ConstraintsHold a (.input v :: rest) ↔ ConstraintsHold a rest := Iff.rfl

@[simp] theorem constraintsHold_witness (a : Assignment F) (v : F) (rest : List (Op F)) :
    ConstraintsHold a (.witness v :: rest) ↔ ConstraintsHold a rest := Iff.rfl

@[simp] theorem constraintsHold_constrain (a : Assignment F) (k : Constraint F)
    (rest : List (Op F)) :
    ConstraintsHold a (.constrain k :: rest) ↔ k.holds a ∧ ConstraintsHold a rest := by
  simp [ConstraintsHold, Op.constraints]

@[simp] theorem constraintsHold_append (a : Assignment F) (l₁ l₂ : List (Op F)) :
    ConstraintsHold a (l₁ ++ l₂) ↔ ConstraintsHold a l₁ ∧ ConstraintsHold a l₂ := by
  simp [ConstraintsHold, Op.constraints_append, or_imp, forall_and]

@[simp] theorem constraintsBelow_nil (off : Offsets) :
    ConstraintsBelow off ([] : List (Op F)) := by
  simp [ConstraintsBelow, Op.constraints]

@[simp] theorem constraintsBelow_input (off : Offsets) (v : F) (rest : List (Op F)) :
    ConstraintsBelow off (.input v :: rest) ↔ ConstraintsBelow off rest := Iff.rfl

@[simp] theorem constraintsBelow_witness (off : Offsets) (v : F) (rest : List (Op F)) :
    ConstraintsBelow off (.witness v :: rest) ↔ ConstraintsBelow off rest := Iff.rfl

@[simp] theorem constraintsBelow_constrain (off : Offsets) (k : Constraint F)
    (rest : List (Op F)) :
    ConstraintsBelow off (.constrain k :: rest) ↔ k.below off ∧ ConstraintsBelow off rest := by
  simp [ConstraintsBelow, Op.constraints]

@[simp] theorem constraintsBelow_append (off : Offsets) (l₁ l₂ : List (Op F)) :
    ConstraintsBelow off (l₁ ++ l₂) ↔ ConstraintsBelow off l₁ ∧ ConstraintsBelow off l₂ := by
  simp [ConstraintsBelow, Op.constraints_append, or_imp, forall_and]

theorem ConstraintsBelow.mono {o₁ o₂ : Offsets} (h : o₁.le o₂) {ops : List (Op F)}
    (hb : ConstraintsBelow o₁ ops) : ConstraintsBelow o₂ ops :=
  fun k hk => Constraint.below_mono h (hb k hk)

/-! ### The honest assignment (completeness side) -/

/-- Overwrite the `i`-th instance variable. -/
def Assignment.setInput (a : Assignment F) (i : Nat) (v : F) : Assignment F :=
  { a with input := Function.update a.input i v }

/-- Overwrite the `i`-th witness variable. -/
def Assignment.setWitness (a : Assignment F) (i : Nat) (v : F) : Assignment F :=
  { a with witness := Function.update a.witness i v }

/-- The assignment the honest prover ends up with after performing `ops`
starting from `off` with assignment `a`: every allocated variable receives
the value the gadget computed for it. -/
def extend (off : Offsets) (a : Assignment F) : List (Op F) → Assignment F
  | [] => a
  | .input v :: rest => extend ⟨off.inputs + 1, off.witnesses⟩ (a.setInput off.inputs v) rest
  | .witness v :: rest => extend ⟨off.inputs, off.witnesses + 1⟩ (a.setWitness off.witnesses v) rest
  | .constrain _ :: rest => extend off a rest

@[simp] theorem extend_nil (off : Offsets) (a : Assignment F) : extend off a [] = a := rfl

@[simp] theorem extend_input (off : Offsets) (a : Assignment F) (v : F) (rest : List (Op F)) :
    extend off a (.input v :: rest) =
      extend ⟨off.inputs + 1, off.witnesses⟩ (a.setInput off.inputs v) rest := rfl

@[simp] theorem extend_witness (off : Offsets) (a : Assignment F) (v : F) (rest : List (Op F)) :
    extend off a (.witness v :: rest) =
      extend ⟨off.inputs, off.witnesses + 1⟩ (a.setWitness off.witnesses v) rest := rfl

@[simp] theorem extend_constrain (off : Offsets) (a : Assignment F) (k : Constraint F)
    (rest : List (Op F)) : extend off a (.constrain k :: rest) = extend off a rest := rfl

theorem extend_append (off : Offsets) (a : Assignment F) (l₁ l₂ : List (Op F)) :
    extend off a (l₁ ++ l₂) = extend (off.advance l₁) (extend off a l₁) l₂ := by
  induction l₁ generalizing off a with
  | nil => simp
  | cons op rest ih => cases op <;> simp [ih]

theorem Variable.eval_setInput_of_below {off : Offsets} {v : Variable} (hv : v.below off)
    (a : Assignment F) (x : F) : v.eval (a.setInput off.inputs x) = v.eval a := by
  cases v with
  | one => rfl
  | input i =>
    simp only [Variable.below] at hv
    simp [Assignment.setInput, Function.update_of_ne (Nat.ne_of_lt hv)]
  | witness i => rfl

theorem Variable.eval_setWitness_of_below {off : Offsets} {v : Variable} (hv : v.below off)
    (a : Assignment F) (x : F) : v.eval (a.setWitness off.witnesses x) = v.eval a := by
  cases v with
  | one => rfl
  | input i => rfl
  | witness i =>
    simp only [Variable.below] at hv
    simp [Assignment.setWitness, Function.update_of_ne (Nat.ne_of_lt hv)]

/-- Extending the assignment never changes an already-allocated variable. -/
theorem Variable.eval_extend_of_below {v : Variable} (off : Offsets) (a : Assignment F)
    (ops : List (Op F)) (hv : v.below off) : v.eval (extend off a ops) = v.eval a := by
  induction ops generalizing off a with
  | nil => rfl
  | cons op rest ih =>
    cases op with
    | input x =>
      have hv' : v.below ⟨off.inputs + 1, off.witnesses⟩ :=
        Variable.below_mono ⟨Nat.le_succ _, le_rfl⟩ hv
      rw [extend_input, ih _ _ hv', Variable.eval_setInput_of_below hv]
    | witness x =>
      have hv' : v.below ⟨off.inputs, off.witnesses + 1⟩ :=
        Variable.below_mono ⟨le_rfl, Nat.le_succ _⟩ hv
      rw [extend_witness, ih _ _ hv', Variable.eval_setWitness_of_below hv]
    | constrain k => rw [extend_constrain, ih _ _ hv]

theorem LC.eval_extend_of_below {lc : LC F} (off : Offsets) (a : Assignment F)
    (ops : List (Op F)) (hl : lc.below off) : lc.eval (extend off a ops) = lc.eval a := by
  induction lc with
  | nil => rfl
  | cons t lc ih =>
    rw [LC.below_cons] at hl
    rw [LC.eval_cons, LC.eval_cons, Variable.eval_extend_of_below off a ops hl.1, ih hl.2]

theorem Constraint.holds_extend_of_below {k : Constraint F} {off : Offsets} {a : Assignment F}
    {ops : List (Op F)} (hb : k.below off) (hk : k.holds a) : k.holds (extend off a ops) := by
  unfold Constraint.holds at hk ⊢
  rw [LC.eval_extend_of_below off a ops hb.1, LC.eval_extend_of_below off a ops hb.2.1,
    LC.eval_extend_of_below off a ops hb.2.2]
  exact hk

theorem ConstraintsHold.extend_of_below {off : Offsets} {a : Assignment F} {ops ops' : List (Op F)}
    (hb : ConstraintsBelow off ops) (h : ConstraintsHold a ops) :
    ConstraintsHold (extend off a ops') ops :=
  fun k hk => Constraint.holds_extend_of_below (hb k hk) (h k hk)

/-- A freshly allocated input receives the value the gadget computed for it. -/
theorem extend_input_fresh (off : Offsets) (a : Assignment F) (v : F) (rest : List (Op F)) :
    (extend off a (.input v :: rest)).input off.inputs = v := by
  have h := Variable.eval_extend_of_below (v := .input off.inputs) ⟨off.inputs + 1, off.witnesses⟩
    (a.setInput off.inputs v) rest (by simp [Variable.below])
  rw [extend_input]
  simpa [Assignment.setInput] using h

/-- A freshly allocated witness receives the value the gadget computed for it. -/
theorem extend_witness_fresh (off : Offsets) (a : Assignment F) (v : F) (rest : List (Op F)) :
    (extend off a (.witness v :: rest)).witness off.witnesses = v := by
  have h := Variable.eval_extend_of_below (v := .witness off.witnesses)
    ⟨off.inputs, off.witnesses + 1⟩ (a.setWitness off.witnesses v) rest (by simp [Variable.below])
  rw [extend_witness]
  simpa [Assignment.setWitness] using h

end Field

end ArkR1CS
