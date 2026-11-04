/-
# Gadgets as circuit computations

A gadget is modelled as a function from the current allocation offsets to
its output together with the list of operations (`Op`) it performs on the
constraint system. `Circuit F` is a monad: `bind` runs the first
computation, advances the offsets by what it allocated, and runs the second.
This mirrors threading a `ConstraintSystemRef` through arkworks gadgets, but
keeps the side effects explicit so they can be reasoned about.

The verification vocabulary is:

* `Sound c P` — for *every* assignment that satisfies the constraints `c`
  emitted, the evaluated output satisfies `P`. Nothing is assumed about the
  assignment, so this is the "no under-constraint" direction.
* `Complete c off a₀` — the honest prover's assignment (`extend`) satisfies
  the emitted constraints, the constraints only mention allocated variables,
  and the output is well-scoped and *consistent* (its cached value agrees
  with its evaluation). This is the "an honest prover can always satisfy
  the circuit" direction, in the compositional form needed to chain gadgets.

`Eval F T V` abstracts over output types (`FpVar F`, lists, pairs, `Unit`).
-/
import ArkR1CS.Basic

namespace ArkR1CS

variable {F : Type}

/-- A circuit computation: given the current offsets, produce an output and
the operations performed. -/
structure Circuit (F : Type) (α : Type) where
  run : Offsets → α × List (Op F)

namespace Circuit

variable {α β : Type}

/-- Perform no operations. -/
protected def pure (x : α) : Circuit F α := ⟨fun _ => (x, [])⟩

/-- Sequence two computations, threading the allocation offsets. -/
protected def bind (c : Circuit F α) (f : α → Circuit F β) : Circuit F β :=
  ⟨fun off =>
    (((f (c.run off).1).run (off.advance (c.run off).2)).1,
      (c.run off).2 ++ ((f (c.run off).1).run (off.advance (c.run off).2)).2)⟩

instance : Monad (Circuit F) where
  pure := Circuit.pure
  bind := Circuit.bind

@[simp] theorem run_pure (x : α) (off : Offsets) :
    (pure x : Circuit F α).run off = (x, []) := rfl

@[simp] theorem run_bind (c : Circuit F α) (f : α → Circuit F β) (off : Offsets) :
    (c >>= f).run off =
      (((f (c.run off).1).run (off.advance (c.run off).2)).1,
        (c.run off).2 ++ ((f (c.run off).1).run (off.advance (c.run off).2)).2) := rfl

/-- Allocate a fresh instance (public input) variable with the given value
(`FpVar::new_input`). The returned value is the linear combination `1 · xᵢ`. -/
def newInputVar (v : F) : Circuit F Variable :=
  ⟨fun off => (.input off.inputs, [.input v])⟩

/-- Allocate a fresh witness variable with the given value
(`FpVar::new_witness`). -/
def newWitnessVar (v : F) : Circuit F Variable :=
  ⟨fun off => (.witness off.witnesses, [.witness v])⟩

/-- Enforce one R1CS row (`cs.enforce_constraint(a, b, c)`). -/
def constrain (k : Constraint F) : Circuit F Unit :=
  ⟨fun _ => ((), [.constrain k])⟩

end Circuit

/-! ### Evaluable outputs -/

variable [Field F]

/-- Output types of gadgets that can be evaluated under an assignment.
`eval` is the value under an arbitrary assignment, `val` the value cached
by the prover while synthesising, `below` well-scopedness. -/
class Eval (F : Type) [Field F] (T : Type) (V : outParam Type) where
  eval : Assignment F → T → V
  val : T → V
  below : Offsets → T → Prop
  below_mono : ∀ {o₁ o₂ : Offsets} (t : T), o₁.le o₂ → below o₁ t → below o₂ t
  eval_extend : ∀ (off : Offsets) (a : Assignment F) (ops : List (Op F)) (t : T),
    below off t → eval (extend off a ops) t = eval a t

/-- The prover's cached value agrees with the evaluation under `a`. -/
def Consistent {T V : Type} [Eval F T V] (a : Assignment F) (t : T) : Prop :=
  Eval.eval a t = Eval.val (F := F) t

theorem Consistent.extend {T V : Type} [Eval F T V] {off : Offsets} {a₀ : Assignment F}
    {ops : List (Op F)} {t : T} (hb : Eval.below (F := F) off t) (hc : Consistent a₀ t) :
    Consistent (extend off a₀ ops) t := by
  unfold Consistent
  rw [Eval.eval_extend off a₀ ops t hb]
  exact hc

instance instEvalList {T V : Type} [Eval F T V] : Eval F (List T) (List V) where
  eval a l := l.map (Eval.eval a)
  val l := l.map (Eval.val (F := F))
  below off l := ∀ t ∈ l, Eval.below (F := F) off t
  below_mono _ h hl := fun t ht => Eval.below_mono t h (hl t ht)
  eval_extend off a ops _ hl :=
    List.map_congr_left fun t ht => Eval.eval_extend off a ops t (hl t ht)

instance instEvalProd {T V U W : Type} [Eval F T V] [Eval F U W] : Eval F (T × U) (V × W) where
  eval a p := (Eval.eval a p.1, Eval.eval a p.2)
  val p := (Eval.val (F := F) p.1, Eval.val (F := F) p.2)
  below off p := Eval.below (F := F) off p.1 ∧ Eval.below (F := F) off p.2
  below_mono p h hp := ⟨Eval.below_mono p.1 h hp.1, Eval.below_mono p.2 h hp.2⟩
  eval_extend off a ops p hp := by
    simp only [Eval.eval_extend off a ops p.1 hp.1, Eval.eval_extend off a ops p.2 hp.2]

instance instEvalUnit : Eval F Unit Unit where
  eval _ _ := ()
  val _ := ()
  below _ _ := True
  below_mono _ _ _ := trivial
  eval_extend _ _ _ _ _ := rfl

@[simp] theorem Eval.eval_list {T V : Type} [Eval F T V] (a : Assignment F) (l : List T) :
    Eval.eval a l = l.map (Eval.eval a) := rfl

@[simp] theorem Eval.val_list {T V : Type} [Eval F T V] (l : List T) :
    Eval.val (F := F) l = l.map (Eval.val (F := F)) := rfl

@[simp] theorem Eval.below_list {T V : Type} [Eval F T V] (off : Offsets) (l : List T) :
    Eval.below (F := F) off l = ∀ t ∈ l, Eval.below (F := F) off t := rfl

@[simp] theorem Eval.eval_prod {T V U W : Type} [Eval F T V] [Eval F U W] (a : Assignment F)
    (p : T × U) : Eval.eval a p = (Eval.eval a p.1, Eval.eval a p.2) := rfl

@[simp] theorem Eval.val_prod {T V U W : Type} [Eval F T V] [Eval F U W] (p : T × U) :
    Eval.val (F := F) p = (Eval.val (F := F) p.1, Eval.val (F := F) p.2) := rfl

@[simp] theorem Eval.below_prod {T V U W : Type} [Eval F T V] [Eval F U W] (off : Offsets)
    (p : T × U) :
    Eval.below (F := F) off p = (Eval.below (F := F) off p.1 ∧ Eval.below (F := F) off p.2) := rfl

theorem Consistent.prod {T V U W : Type} [Eval F T V] [Eval F U W] {a : Assignment F}
    {t : T} {u : U} (ht : Consistent a t) (hu : Consistent a u) : Consistent a (t, u) :=
  Prod.ext ht hu

theorem Consistent.fst {T V U W : Type} [Eval F T V] [Eval F U W] {a : Assignment F}
    {p : T × U} (h : Consistent a p) : Consistent a p.1 :=
  congrArg Prod.fst h

theorem Consistent.snd {T V U W : Type} [Eval F T V] [Eval F U W] {a : Assignment F}
    {p : T × U} (h : Consistent a p) : Consistent a p.2 :=
  congrArg Prod.snd h

theorem Consistent.list_mem {T V : Type} [Eval F T V] {a : Assignment F} {l : List T}
    (h : Consistent a l) {t : T} (ht : t ∈ l) : Consistent a t := by
  unfold Consistent at h ⊢
  exact List.map_inj_left.mp h t ht

theorem Consistent.list {T V : Type} [Eval F T V] {a : Assignment F} {l : List T}
    (h : ∀ t ∈ l, Consistent a t) : Consistent a l :=
  List.map_congr_left h

/-! ### Soundness and completeness -/

/-- `P` holds of the evaluated output under every assignment satisfying the
emitted constraints. -/
def Sound {T V : Type} [Eval F T V] (c : Circuit F T) (P : Assignment F → V → Prop) : Prop :=
  ∀ (off : Offsets) (a : Assignment F),
    ConstraintsHold a (c.run off).2 → P a (Eval.eval a (c.run off).1)

/-- The honest run of `c` from `off`, extending `a₀`, succeeds. -/
structure Complete {T V : Type} [Eval F T V] (c : Circuit F T) (off : Offsets)
    (a₀ : Assignment F) : Prop where
  /-- The honest assignment satisfies the emitted constraints. -/
  holds : ConstraintsHold (extend off a₀ (c.run off).2) (c.run off).2
  /-- The emitted constraints only mention allocated variables. -/
  wellScoped : ConstraintsBelow (off.advance (c.run off).2) (c.run off).2
  /-- The output only mentions allocated variables. -/
  below : Eval.below (F := F) (off.advance (c.run off).2) (c.run off).1
  /-- The output's cached value agrees with its evaluation. -/
  consistent : Consistent (extend off a₀ (c.run off).2) (c.run off).1

theorem Complete.pure {T V : Type} [Eval F T V] {t : T} {off : Offsets} {a₀ : Assignment F}
    (hb : Eval.below (F := F) off t) (hc : Consistent a₀ t) :
    Complete (pure t : Circuit F T) off a₀ where
  holds := by simp
  wellScoped := by simp
  below := by simpa using hb
  consistent := by simpa using hc

theorem Complete.bind {T V U W : Type} [Eval F T V] [Eval F U W] {c : Circuit F T}
    {f : T → Circuit F U} {off : Offsets} {a₀ : Assignment F}
    (hc : Complete c off a₀)
    (hf : Complete (f (c.run off).1) (off.advance (c.run off).2) (extend off a₀ (c.run off).2)) :
    Complete (c >>= f) off a₀ where
  holds := by
    simp only [Circuit.run_bind, extend_append, constraintsHold_append]
    exact ⟨ConstraintsHold.extend_of_below hc.wellScoped hc.holds, hf.holds⟩
  wellScoped := by
    simp only [Circuit.run_bind, Offsets.advance_append, constraintsBelow_append]
    exact ⟨hc.wellScoped.mono (Offsets.le_advance _ _), hf.wellScoped⟩
  below := by
    simp only [Circuit.run_bind, Offsets.advance_append]
    exact hf.below
  consistent := by
    simp only [Circuit.run_bind, extend_append]
    exact hf.consistent

end ArkR1CS
