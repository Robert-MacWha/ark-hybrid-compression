/-
# Binding: in-circuit and out-of-circuit statements agree

The verifier holds `(β, s')`, computes `(α, γ) = verifier Hα β s'`, and checks
a proof against the public inputs `(α, β, γ)`. By `enforceCompression_sound`
the circuit forces `β = H(s)` and `γ = uhf (α + β) s` for the *in-circuit*
statement `s`. Hence `uhf σ s = uhf σ s'` with `σ = α + β`.

The polynomial `uhfPoly s - uhfPoly s'` is non-zero of degree `< n` whenever
`s ≠ s'` have the same length `n`, so `σ` must be one of its at most `n - 1`
roots (`uhf_collision_card_le`). Shifting by the hash that is *not* under the
adversary's control gives `uhf_collision_shift_card_le`: for fixed
`s ≠ s'` and fixed `t`, at most `n - 1` values `x` satisfy
`uhf (x + t) s = uhf (x + t) s'`.

Consequently, if either hash behaves as a random oracle, each attempt of an
adversary to make the verifier accept a statement `s' ≠ s` succeeds with
probability at most `(n - 1) / |F|`: with `t = β` the random value is
`x = α = Hα(s')`; with `t = α` it is `x = β = Hβ(s)`. The probabilistic
wrapping of that counting bound is left informal here; everything up to and
including the count is machine-checked.
-/
import HybridCompression.Circuit
import Mathlib.Algebra.Polynomial.Roots

namespace HybridCompression

open ArkR1CS Polynomial

variable {F : Type} [Field F]

/-- `uhfPoly [x₀, …, xₙ₋₁] = ∑ xᵢ Xⁱ`, so that `uhf σ s = (uhfPoly s).eval σ`. -/
noncomputable def uhfPoly : List F → F[X]
  | [] => 0
  | x :: xs => C x + X * uhfPoly xs

@[simp] theorem eval_uhfPoly (σ : F) (s : List F) : (uhfPoly s).eval σ = uhf σ s := by
  induction s with
  | nil => simp [uhfPoly]
  | cons x xs ih =>
    simp only [uhfPoly, eval_add, eval_C, eval_mul, eval_X, ih, uhf_cons]
    ring

theorem coeff_uhfPoly (s : List F) (i : Nat) : (uhfPoly s).coeff i = s.getD i 0 := by
  induction s generalizing i with
  | nil => simp [uhfPoly]
  | cons x xs ih =>
    cases i with
    | zero => simp [uhfPoly]
    | succ n => simp [uhfPoly, coeff_X_mul, ih]

theorem natDegree_uhfPoly_le (s : List F) : (uhfPoly s).natDegree ≤ s.length - 1 := by
  rw [natDegree_le_iff_coeff_eq_zero]
  intro N hN
  rw [coeff_uhfPoly, List.getD_eq_getElem?_getD, List.getElem?_eq_none (by omega)]
  rfl

theorem uhfPoly_injective_of_length {s s' : List F} (hlen : s'.length = s.length)
    (h : uhfPoly s = uhfPoly s') : s = s' := by
  apply List.ext_getElem hlen.symm
  intro n hn hn'
  have := congrArg (fun p => coeff p n) h
  simp only [coeff_uhfPoly, List.getD_eq_getElem?_getD, List.getElem?_eq_getElem hn,
    List.getElem?_eq_getElem hn', Option.getD_some] at this
  exact this

/-- If two distinct statements of the same length collide under the UHF at
`σ`, then `σ` is a root of their (non-zero) difference polynomial. -/
theorem uhf_collision_mem_roots {s s' : List F} (hlen : s'.length = s.length) (hne : s ≠ s')
    {σ : F} (h : uhf σ s = uhf σ s') : σ ∈ (uhfPoly s - uhfPoly s').roots := by
  rw [mem_roots]
  · simp [IsRoot, h]
  · intro hzero
    exact hne (uhfPoly_injective_of_length hlen (sub_eq_zero.mp hzero))

/-- `uhf` is an `(n - 1)/|F|`-universal hash family: two distinct statements of
length `n` collide at fewer than `n` seeds. -/
theorem uhf_collision_card_le [Fintype F] [DecidableEq F] {s s' : List F}
    (hlen : s'.length = s.length) (hne : s ≠ s') :
    (Finset.univ.filter fun σ : F => uhf σ s = uhf σ s').card ≤ s.length - 1 := by
  calc (Finset.univ.filter fun σ : F => uhf σ s = uhf σ s').card
      ≤ (uhfPoly s - uhfPoly s').roots.toFinset.card := by
        apply Finset.card_le_card
        intro σ hσ
        rw [Finset.mem_filter] at hσ
        exact Multiset.mem_toFinset.mpr (uhf_collision_mem_roots hlen hne hσ.2)
    _ ≤ Multiset.card (uhfPoly s - uhfPoly s').roots := Multiset.toFinset_card_le _
    _ ≤ (uhfPoly s - uhfPoly s').natDegree := card_roots' _
    _ ≤ max (uhfPoly s).natDegree (uhfPoly s').natDegree := natDegree_sub_le _ _
    _ ≤ s.length - 1 := by
        apply max_le (natDegree_uhfPoly_le s)
        rw [← hlen]
        exact natDegree_uhfPoly_le s'

/-- The same bound for seeds of the form `x + t` with `t` fixed: at most `n - 1`
values of `x` make distinct statements collide. With `t = β` this bounds the
number of "bad" values of `α = Hα(s')`; with `t = α` the number of bad
`β = Hβ(s)`. -/
theorem uhf_collision_shift_card_le [Fintype F] [DecidableEq F] {s s' : List F}
    (hlen : s'.length = s.length) (hne : s ≠ s') (t : F) :
    (Finset.univ.filter fun x : F => uhf (x + t) s = uhf (x + t) s').card ≤ s.length - 1 := by
  refine le_trans ?_ (uhf_collision_card_le hlen hne)
  refine Finset.card_le_card_of_injOn (fun x => x + t) ?_ ?_
  · intro x hx
    simp only [Finset.coe_filter, Finset.mem_univ, true_and, Set.mem_ofPred_eq] at hx ⊢
    exact hx
  · intro x _ y _ hxy
    exact add_right_cancel hxy

/-- **Binding.** If the verifier accepts `(β, s')`, i.e. some assignment
satisfies `enforce_compression` with public inputs `(Hα s', β, uhf (β + Hα s') s')`,
then the in-circuit statement `s` either equals `s'` or `σ = Hα s' + β` is a
root of the difference polynomial (one of at most `n - 1` values). -/
theorem binding [DecidableEq F] (H : CRHSchemeGadget F) (Hα : List F → F)
    (stmt : List (FpVar F)) (k : Counters) (a : Assignment F) (β : F) (s' : List F)
    (hacc : ConstraintsHold a ((enforceCompression H Hα stmt).run k).2)
    (hpub : (a.instance_assignment k.num_instance_variables,
      a.instance_assignment (k.num_instance_variables + 1),
      a.instance_assignment (k.num_instance_variables + 2)) =
      ((verifierNative Hα β s').1, β, (verifierNative Hα β s').2))
    (hlen : s'.length = (stmt.map (·.eval a)).length) :
    stmt.map (·.eval a) = s' ∨
      Hα s' + β ∈ (uhfPoly (stmt.map (·.eval a)) - uhfPoly s').roots := by
  have hsound := enforceCompression_sound H Hα stmt k a hacc
  simp only [verifierNative, hybridCompression, Prod.mk.injEq] at hpub
  obtain ⟨hα, hβ, hγ⟩ := hpub
  simp only [proverNative, hybridCompression, Prod.mk.injEq] at hsound
  obtain ⟨hβ', hγ'⟩ := hsound
  by_cases hs : stmt.map (·.eval a) = s'
  · exact Or.inl hs
  · right
    apply uhf_collision_mem_roots hlen hs
    have hσ : Hα s' + β = a.instance_assignment k.num_instance_variables +
        H.evaluate_native (stmt.map (·.eval a)) := by
      rw [hα, ← hβ', hβ]
    rw [hσ, ← hγ', hγ, ← hσ, add_comm]

end HybridCompression
