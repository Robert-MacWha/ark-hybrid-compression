/-
# The compressed circuit (`src/circuit.rs`)

`CompressibleCircuit` is an arbitrary inner circuit that returns its
flattened statement (`verify` followed by `Flatten::flatten`), together with
the relation `rel` it is sound for. `compressedCircuit` is
`CompressedCircuit::generate_constraints`:

1. run the inner circuit, obtaining the statement variables;
2. compute `α = Hα(statement_raw)` natively and allocate it as a public input;
3. run the hybrid-compression prover gadget, obtaining `(β, γ)`;
4. allocate `β` and `γ` as public inputs and `enforce_equal` them to the
   gadget outputs (`exposeOutput`).

Main theorem `compressedCircuit_sound`: for *any* satisfying assignment, with
public inputs `(α, β, γ)` at instance indices `i, i+1, i+2`, the in-circuit
statement `s` satisfies the inner relation and `(β, γ) = prover H α s`, i.e.
`β = H(s)` and `γ = uhf (α + β) s`. This holds for any black-box hash gadget
and any inner circuit.
-/
import HybridCompression.HybridCompression

namespace HybridCompression

open ArkR1CS

variable {F : Type} [Field F] [DecidableEq F]

/-- `CompressibleCircuit` + `Flatten`: the inner circuit returns its flattened
statement; `sound` is the relation it enforces on that statement. -/
structure CompressibleCircuit (F : Type) [Field F] [DecidableEq F] where
  verify : CS F (List (FpVar F))
  rel : List F → Prop
  sound : ∀ (k : Counters) (a : Assignment F),
    ConstraintsHold a (verify.run k).2 → rel ((verify.run k).1.map (·.eval a))

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

/-- `CompressedCircuit::generate_constraints`. -/
def compressedCircuit (H : CRHSchemeGadget F) (Hα : List F → F)
    (inner : CS F (List (FpVar F))) : CS F Unit := do
  let stmt ← inner
  -- `compress_with_statement`: α is computed natively from `statement_raw`.
  let alphaVar ← FpVar.new_input (Hα (stmt.map FpVar.value))
  let bg ← proverGadget H alphaVar stmt
  exposeOutput bg.1
  exposeOutput bg.2

/-- Instance index of the public input `α`; `β` and `γ` follow at `+1`, `+2`. -/
def alphaIndex (inner : CS F (List (FpVar F))) (k : Counters) : Nat :=
  (k.advance (inner.run k).2).num_instance_variables

/-- The in-circuit statement: the inner circuit's output evaluated under `a`. -/
def statementOf (inner : CS F (List (FpVar F))) (k : Counters) (a : Assignment F) : List F :=
  (inner.run k).1.map (·.eval a)

/-- Soundness of the compression layer alone: for any satisfying assignment,
the public inputs `(β, γ)` are the native compression of the in-circuit
statement under `α`. -/
theorem compressedCircuit_sound' (H : CRHSchemeGadget F) (Hα : List F → F)
    (inner : CS F (List (FpVar F))) (k : Counters) (a : Assignment F)
    (h : ConstraintsHold a ((compressedCircuit H Hα inner).run k).2) :
    (a.instance_assignment (alphaIndex inner k + 1),
      a.instance_assignment (alphaIndex inner k + 2)) =
      proverNative H.evaluate_native (a.instance_assignment (alphaIndex inner k))
        (statementOf inner k a) := by
  simp only [compressedCircuit, CS.run_bind, FpVar.run_new_input, List.singleton_append,
    constraintsHold_append, constraintsHold_input] at h
  obtain ⟨-, h₂, h₃, h₄⟩ := h
  have hp := proverGadget_sound H _ _ _ a h₂
  have hβ := exposeOutput_sound _ _ _ h₃
  have hγ := exposeOutput_sound _ _ _ h₄
  simp only [FpVar.eval_Var, AllocatedFp.eval_new, LinearCombination.eval_ofVar,
    Variable.eval_Instance, Counters.advance_num_instance_variables, Op.inputCount,
    proverGadget_inputCount, exposeOutput_inputCount, Nat.zero_add] at hp hβ hγ
  simp only [alphaIndex, statementOf, Counters.advance_num_instance_variables]
  rw [show k.num_instance_variables + Op.inputCount (inner.run k).2 + 2 =
    k.num_instance_variables + Op.inputCount (inner.run k).2 + 1 + 1 from rfl, hβ, hγ]
  exact hp

/-- **Soundness.** Any assignment satisfying the compressed circuit has public
inputs `(α, β, γ)` with `(β, γ) = prover H α s`, where `s` is the in-circuit
statement, which satisfies the inner relation. -/
theorem compressedCircuit_sound (H : CRHSchemeGadget F) (Hα : List F → F)
    (inner : CompressibleCircuit F) (k : Counters) (a : Assignment F)
    (h : ConstraintsHold a ((compressedCircuit H Hα inner.verify).run k).2) :
    inner.rel (statementOf inner.verify k a) ∧
      (a.instance_assignment (alphaIndex inner.verify k + 1),
        a.instance_assignment (alphaIndex inner.verify k + 2)) =
        proverNative H.evaluate_native (a.instance_assignment (alphaIndex inner.verify k))
          (statementOf inner.verify k a) := by
  refine ⟨?_, compressedCircuit_sound' H Hα inner.verify k a h⟩
  simp only [compressedCircuit, CS.run_bind, constraintsHold_append] at h
  exact inner.sound k a h.1

end HybridCompression
