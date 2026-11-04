/-
# `FpVar<F>` and its verified operations

Mirrors `ark_r1cs_std::fields::fp::FpVar`:

* `const c` ↔ `FpVar::Constant(c)`.
* `lin lc v` ↔ `FpVar::Var(AllocatedFp { variable, value })`, where
  `variable` is a (possibly symbolic) linear combination and `value` the
  value cached by the prover.

The operations follow `impl Add/Mul for FpVar` and
`EqGadget::enforce_equal`:

* addition never allocates or constrains (it builds a symbolic LC);
* multiplication by a constant scales the LC;
* multiplication of two variables allocates one witness and one constraint
  `lhs * rhs = w`;
* `enforce_equal` emits `(lhs - rhs) * 1 = 0`.

Each operation comes with a soundness lemma (any satisfying assignment
evaluates the output to the specified value) and a completeness lemma (the
honest run satisfies `Complete`).
-/
import ArkR1CS.Circuit
import Mathlib.Tactic.LinearCombination

namespace ArkR1CS

variable {F : Type} [Field F]

/-- `FpVar<F>`. -/
inductive FpVar (F : Type)
  | const (c : F)
  | lin (lc : LC F) (val : F)
  deriving Repr

namespace FpVar

/-- Value under an arbitrary assignment (ignores the cached value). -/
def eval (a : Assignment F) : FpVar F → F
  | .const c => c
  | .lin lc _ => lc.eval a

/-- The prover's cached value (`FpVar::value()`). -/
def val : FpVar F → F
  | .const c => c
  | .lin _ v => v

/-- The variable as a linear combination (`lc!() + variable`, or `c · one`). -/
def toLC : FpVar F → LC F
  | .const c => [(c, .one)]
  | .lin lc _ => lc

/-- Only mentions allocated variables. -/
def below (off : Offsets) : FpVar F → Prop
  | .const _ => True
  | .lin lc _ => lc.below off

@[simp] theorem eval_const (a : Assignment F) (c : F) : eval a (const c) = c := rfl
@[simp] theorem eval_lin (a : Assignment F) (lc : LC F) (v : F) : eval a (lin lc v) = lc.eval a := rfl
@[simp] theorem val_const (c : F) : val (const c : FpVar F) = c := rfl
@[simp] theorem val_lin (lc : LC F) (v : F) : val (lin lc v) = v := rfl
@[simp] theorem below_const (off : Offsets) (c : F) : below off (const c) := trivial
@[simp] theorem below_lin (off : Offsets) (lc : LC F) (v : F) : below off (lin lc v) ↔ lc.below off := Iff.rfl

@[simp] theorem eval_toLC (a : Assignment F) (x : FpVar F) : x.toLC.eval a = x.eval a := by
  cases x <;> simp [toLC]

theorem below_toLC {off : Offsets} {x : FpVar F} (h : x.below off) : x.toLC.below off := by
  cases x <;> simp_all [toLC, below, Variable.below]

theorem below_mono {o₁ o₂ : Offsets} (h : o₁.le o₂) {x : FpVar F} (hx : x.below o₁) :
    x.below o₂ := by
  cases x with
  | const _ => trivial
  | lin lc _ => exact LC.below_mono h hx

theorem eval_extend_of_below {off : Offsets} {a : Assignment F} {ops : List (Op F)} {x : FpVar F}
    (hx : x.below off) : x.eval (extend off a ops) = x.eval a := by
  cases x with
  | const _ => rfl
  | lin lc _ => exact LC.eval_extend_of_below off a ops hx

instance : Eval F (FpVar F) F where
  eval := eval
  val := val
  below := below
  below_mono _ h hx := below_mono h hx
  eval_extend _ _ _ _ hx := eval_extend_of_below hx

@[simp] theorem Eval_eval (a : Assignment F) (x : FpVar F) : Eval.eval a x = x.eval a := rfl
@[simp] theorem Eval_val (x : FpVar F) : Eval.val (F := F) x = x.val := rfl
@[simp] theorem Eval_below (off : Offsets) (x : FpVar F) : Eval.below (F := F) off x = x.below off := rfl

theorem consistent_iff (a : Assignment F) (x : FpVar F) : Consistent a x ↔ x.eval a = x.val := Iff.rfl

/-! ### Constants and allocation -/

/-- `FpVar::zero()`. -/
def zero : FpVar F := const 0

/-- `FpVar::one()`. -/
def one : FpVar F := const 1

/-- `FpVar::new_constant`. -/
def newConstant (c : F) : FpVar F := const c

/-- `FpVar::new_input(cs, || Ok(v))`. -/
def newInput (v : F) : Circuit F (FpVar F) :=
  ⟨fun off => (lin [(1, .input off.inputs)] v, [.input v])⟩

/-- `FpVar::new_witness(cs, || Ok(v))`. -/
def newWitness (v : F) : Circuit F (FpVar F) :=
  ⟨fun off => (lin [(1, .witness off.witnesses)] v, [.witness v])⟩

@[simp] theorem run_newInput (v : F) (off : Offsets) :
    (newInput v).run off = (lin [(1, .input off.inputs)] v, [.input v]) := rfl

@[simp] theorem run_newWitness (v : F) (off : Offsets) :
    (newWitness v).run off = (lin [(1, .witness off.witnesses)] v, [.witness v]) := rfl

theorem newInput_eval (v : F) (off : Offsets) (a : Assignment F) :
    ((newInput v).run off).1.eval a = a.input off.inputs := by simp

theorem newWitness_eval (v : F) (off : Offsets) (a : Assignment F) :
    ((newWitness v).run off).1.eval a = a.witness off.witnesses := by simp

theorem newInput_complete (v : F) (off : Offsets) (a₀ : Assignment F) :
    Complete (newInput v) off a₀ where
  holds := by simp
  wellScoped := by simp
  below := by simp [FpVar.below, LC.below, Variable.below, Op.inputCount]
  consistent := by
    rw [consistent_iff]
    simp [extend_input_fresh]

theorem newWitness_complete (v : F) (off : Offsets) (a₀ : Assignment F) :
    Complete (newWitness v) off a₀ where
  holds := by simp
  wellScoped := by simp
  below := by simp [FpVar.below, LC.below, Variable.below, Op.witnessCount]
  consistent := by
    rw [consistent_iff]
    simp [extend_witness_fresh]

/-! ### Addition (`impl Add for FpVar`) -/

/-- `lhs + rhs`. Never allocates or constrains (`AllocatedFp::add` /
`add_constant` build a new symbolic LC). -/
def add : FpVar F → FpVar F → FpVar F
  | const c₁, const c₂ => const (c₁ + c₂)
  | const c, lin lc v => lin (lc ++ [(c, .one)]) (c + v)
  | lin lc v, const c => lin (lc ++ [(c, .one)]) (v + c)
  | lin lc₁ v₁, lin lc₂ v₂ => lin (lc₁ ++ lc₂) (v₁ + v₂)

@[simp] theorem eval_add (a : Assignment F) (x y : FpVar F) :
    (x.add y).eval a = x.eval a + y.eval a := by
  cases x <;> cases y <;> simp [add]

@[simp] theorem val_add (x y : FpVar F) : (x.add y).val = x.val + y.val := by
  cases x <;> cases y <;> simp [add]

theorem below_add {off : Offsets} {x y : FpVar F} (hx : x.below off) (hy : y.below off) :
    (x.add y).below off := by
  cases x <;> cases y <;> simp_all [add, LC.below, Variable.below]

theorem consistent_add {a : Assignment F} {x y : FpVar F} (hx : Consistent a x)
    (hy : Consistent a y) : Consistent a (x.add y) := by
  rw [consistent_iff] at hx hy ⊢
  simp [hx, hy]

/-- `-x`: scale by `-1`. -/
def neg : FpVar F → FpVar F
  | const c => const (-c)
  | lin lc v => lin (LC.scale (-1) lc) (-v)

@[simp] theorem eval_neg (a : Assignment F) (x : FpVar F) : x.neg.eval a = -x.eval a := by
  cases x <;> simp [neg]

@[simp] theorem val_neg (x : FpVar F) : x.neg.val = -x.val := by
  cases x <;> simp [neg]

theorem below_neg {off : Offsets} {x : FpVar F} (hx : x.below off) : x.neg.below off := by
  cases x with
  | const _ => trivial
  | lin lc _ => exact LC.below_scale hx

/-- `lhs - rhs`. -/
def sub (x y : FpVar F) : FpVar F := x.add y.neg

@[simp] theorem eval_sub (a : Assignment F) (x y : FpVar F) :
    (x.sub y).eval a = x.eval a - y.eval a := by
  simp [sub, sub_eq_add_neg]

/-! ### Multiplication (`impl Mul for FpVar`) -/

/-- `lhs * rhs`. Constant factors scale the LC; two variables allocate a
witness for the product and one constraint. -/
def mul : FpVar F → FpVar F → Circuit F (FpVar F)
  | const c₁, const c₂ => pure (const (c₁ * c₂))
  | const c, lin lc v => pure (lin (LC.scale c lc) (c * v))
  | lin lc v, const c => pure (lin (LC.scale c lc) (v * c))
  | lin lc₁ v₁, lin lc₂ v₂ =>
    ⟨fun off =>
      (lin [(1, .witness off.witnesses)] (v₁ * v₂),
        [.witness (v₁ * v₂), .constrain ⟨lc₁, lc₂, [(1, .witness off.witnesses)]⟩])⟩

theorem mul_sound (x y : FpVar F) (off : Offsets) (a : Assignment F)
    (h : ConstraintsHold a ((x.mul y).run off).2) :
    ((x.mul y).run off).1.eval a = x.eval a * y.eval a := by
  cases x with
  | const c₁ =>
    cases y with
    | const c₂ => simp [mul]
    | lin lc v => simp [mul]
  | lin lc₁ v₁ =>
    cases y with
    | const c => simp [mul, mul_comm]
    | lin lc₂ v₂ =>
      simp only [mul, constraintsHold_witness, constraintsHold_constrain, constraintsHold_nil,
        and_true, Constraint.holds, LC.eval_cons, LC.eval_nil, Variable.eval_witness, one_mul,
        add_zero] at h
      simp [h]

theorem mul_inputCount (x y : FpVar F) (off : Offsets) :
    Op.inputCount ((x.mul y).run off).2 = 0 := by
  cases x <;> cases y <;> simp [mul, Op.inputCount]

theorem mul_complete (x y : FpVar F) (off : Offsets) (a₀ : Assignment F)
    (hx : x.below off) (hy : y.below off) (hcx : Consistent a₀ x) (hcy : Consistent a₀ y) :
    Complete (x.mul y) off a₀ := by
  rw [consistent_iff] at hcx hcy
  cases x with
  | const c₁ =>
    cases y with
    | const c₂ => exact Complete.pure trivial rfl
    | lin lc v =>
      refine Complete.pure (LC.below_scale hy) ?_
      rw [consistent_iff]
      simp at hcy
      simp [hcy]
  | lin lc₁ v₁ =>
    cases y with
    | const c =>
      refine Complete.pure (LC.below_scale hx) ?_
      rw [consistent_iff]
      simp at hcx
      simp [hcx, mul_comm]
    | lin lc₂ v₂ =>
      simp only [below_lin] at hx hy
      simp only [eval_lin, val_lin] at hcx hcy
      have hw : (extend off a₀ [Op.witness (v₁ * v₂),
          Op.constrain ⟨lc₁, lc₂, [(1, .witness off.witnesses)]⟩]).witness off.witnesses
          = v₁ * v₂ := extend_witness_fresh _ _ _ _
      have h₁ := LC.eval_extend_of_below (lc := lc₁) off a₀
        [Op.witness (v₁ * v₂), Op.constrain ⟨lc₁, lc₂, [(1, .witness off.witnesses)]⟩] hx
      have h₂ := LC.eval_extend_of_below (lc := lc₂) off a₀
        [Op.witness (v₁ * v₂), Op.constrain ⟨lc₁, lc₂, [(1, .witness off.witnesses)]⟩] hy
      refine ⟨?_, ?_, ?_, ?_⟩
      · simp only [mul, constraintsHold_witness, constraintsHold_constrain, constraintsHold_nil,
          and_true, Constraint.holds, LC.eval_cons, LC.eval_nil, Variable.eval_witness, one_mul,
          add_zero]
        rw [h₁, h₂, hw, hcx, hcy]
      · simp only [mul, constraintsBelow_witness, constraintsBelow_constrain, constraintsBelow_nil,
          and_true, Constraint.below, Offsets.advance_witness, Offsets.advance_constrain,
          Offsets.advance_nil]
        refine ⟨LC.below_mono ⟨le_rfl, Nat.le_succ _⟩ hx, LC.below_mono ⟨le_rfl, Nat.le_succ _⟩ hy, ?_⟩
        simp [LC.below, Variable.below]
      · simp [mul, FpVar.below, LC.below, Variable.below, Op.witnessCount]
      · rw [consistent_iff]
        simp only [mul, eval_lin, val_lin, LC.eval_cons, LC.eval_nil, Variable.eval_witness, one_mul,
          add_zero]
        exact hw

/-! ### Equality (`EqGadget::enforce_equal`) -/

/-- The row `(lhs - rhs) * 1 = 0`. -/
def eqConstraint (x y : FpVar F) : Constraint F :=
  ⟨x.toLC ++ LC.scale (-1) y.toLC, [(1, .one)], []⟩

theorem eqConstraint_holds_iff (x y : FpVar F) (a : Assignment F) :
    (eqConstraint x y).holds a ↔ x.eval a = y.eval a := by
  simp only [eqConstraint, Constraint.holds, LC.eval_append, LC.eval_scale, LC.eval_cons,
    LC.eval_nil, eval_toLC, Variable.eval_one]
  constructor
  · intro h
    linear_combination h
  · intro h
    rw [h]
    ring

theorem eqConstraint_below {off : Offsets} {x y : FpVar F} (hx : x.below off) (hy : y.below off) :
    (eqConstraint x y).below off := by
  refine ⟨?_, ?_, ?_⟩
  · simp [LC.below_append, below_toLC hx, LC.below_scale (below_toLC hy)]
  · simp [LC.below, Variable.below]
  · simp

/-- `lhs.enforce_equal(&rhs)`. -/
def enforceEqual (x y : FpVar F) : Circuit F Unit :=
  ⟨fun _ => ((), [.constrain (eqConstraint x y)])⟩

@[simp] theorem run_enforceEqual (x y : FpVar F) (off : Offsets) :
    (enforceEqual x y).run off = ((), [.constrain (eqConstraint x y)]) := rfl

theorem enforceEqual_sound (x y : FpVar F) (off : Offsets) (a : Assignment F)
    (h : ConstraintsHold a ((enforceEqual x y).run off).2) : x.eval a = y.eval a := by
  simp only [run_enforceEqual, constraintsHold_constrain, constraintsHold_nil, and_true] at h
  exact (eqConstraint_holds_iff x y a).mp h

theorem enforceEqual_complete (x y : FpVar F) (off : Offsets) (a₀ : Assignment F)
    (hx : x.below off) (hy : y.below off) (hxy : x.eval a₀ = y.eval a₀) :
    Complete (enforceEqual x y) off a₀ where
  holds := by
    simp only [run_enforceEqual, extend_constrain, extend_nil, constraintsHold_constrain,
      constraintsHold_nil, and_true]
    exact (eqConstraint_holds_iff x y a₀).mpr hxy
  wellScoped := by
    simp only [run_enforceEqual, Offsets.advance_constrain, Offsets.advance_nil,
      constraintsBelow_constrain, constraintsBelow_nil, and_true]
    exact eqConstraint_below hx hy
  below := trivial
  consistent := rfl

/-! ### Public outputs -/

/-- Expose `x` as a public output: allocate a public input carrying `x`'s
cached value and enforce equality
(`FpVar::new_input(cs, || x.value())` followed by `pub.enforce_equal(&x)`). -/
def exposeOutput (x : FpVar F) : Circuit F Unit := do
  let pub ← newInput x.val
  pub.enforceEqual x

@[simp] theorem run_exposeOutput (x : FpVar F) (off : Offsets) :
    (exposeOutput x).run off =
      ((), [.input x.val, .constrain (eqConstraint (lin [(1, .input off.inputs)] x.val) x)]) := rfl

theorem exposeOutput_sound (x : FpVar F) (off : Offsets) (a : Assignment F)
    (h : ConstraintsHold a ((exposeOutput x).run off).2) : a.input off.inputs = x.eval a := by
  simp only [run_exposeOutput, constraintsHold_input, constraintsHold_constrain,
    constraintsHold_nil, and_true, eqConstraint_holds_iff, eval_lin, LC.eval_cons, LC.eval_nil,
    Variable.eval_input, one_mul, add_zero] at h
  exact h

theorem exposeOutput_inputCount (x : FpVar F) (off : Offsets) :
    Op.inputCount ((exposeOutput x).run off).2 = 1 := rfl

theorem exposeOutput_complete (x : FpVar F) (off : Offsets) (a₀ : Assignment F)
    (hx : x.below off) (hc : Consistent a₀ x) : Complete (exposeOutput x) off a₀ := by
  unfold exposeOutput
  refine Complete.bind (newInput_complete _ _ _) ?_
  have hin := newInput_complete x.val off a₀
  refine enforceEqual_complete _ _ _ _ hin.below (below_mono (Offsets.le_advance _ _) hx) ?_
  simp only [run_newInput, eval_lin, LC.eval_cons, LC.eval_nil, Variable.eval_input, one_mul,
    add_zero, extend_input_fresh]
  rw [eval_extend_of_below hx]
  exact hc.symm

end FpVar

end ArkR1CS
