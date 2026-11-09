/-
# Example instantiations (`src/test_utils`)

* `uhfCRH` is a toy "hash" (the UHF at a fixed seed) packaged as a
  `CRHSchemeGadget`, showing what a concrete hash gadget has to provide.
* `exampleTraceString` is the trace over `ZMod 17` of witnessing a statement
  and compressing it with `uhfCRH 2`;
  `Traces.lean` writes it for `crates/tests/r1cs_trace.rs`, which checks it
  against the arkworks constraint system.
-/
import HybridCompression.Circuit
import Mathlib.Algebra.Field.ZMod
import Mathlib.Tactic.NormNum.Prime

namespace HybridCompression

open ArkR1CS

variable {F : Type} [Field F] [DecidableEq F]

/-- A toy hash: the UHF at a fixed seed, `uhf seed`. The gadget multiplies
only by the constant seed, so it emits no constraints. -/
def uhfCRH (seed : F) : CRHSchemeGadget F where
  evaluate_native := uhf seed
  evaluate := uhfGadget (FpVar.constant seed)
  sound xs k a h := by simpa [FpVar.constant] using uhfGadget_sound _ xs k a h
  noInputs xs k := uhfGadget_inputCount _ xs k

/-- Witnesses `stmt` and runs `compressStatement` with `uhfCRH 2` for both
`alpha` and `beta`, from a fresh constraint system. -/
def exampleTrace (stmt : List F) : List (Op F) :=
  ((do
    let vars ← stmt.mapM FpVar.new_witness
    compressStatement (uhfCRH 2) (uhf 2) vars).run Counters.new).2

instance : Fact (Nat.Prime 17) := ⟨by norm_num⟩

/-- The trace of `exampleTrace` over `ZMod 17` with statement `[1, 2, 3, 4]`,
checked against arkworks by `crates/tests/r1cs_trace.rs`. -/
def exampleTraceString : String :=
  renderTrace (fun x : ZMod 17 => toString x.val) (exampleTrace (F := ZMod 17) [1, 2, 3, 4])

-- The honest prover's assignment satisfies the circuit (`cs.is_satisfied()`).
#eval show IO Unit from do
  unless isSatisfied (exampleTrace (F := ZMod 17) [1, 2, 3, 4]) do
    throw (IO.userError "example trace is not satisfied by the honest assignment")


end HybridCompression
