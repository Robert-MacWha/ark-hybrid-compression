/-
# ArkR1CS

A Lean 4 model of `ark-relations` / `ark-r1cs-std` gadgets with a
soundness/completeness framework. See `ArkR1CS/Basic.lean` for the R1CS
model, `ArkR1CS/Circuit.lean` for the gadget monad and verification
vocabulary, `ArkR1CS/FpVar.lean` for verified `FpVar` operations, and
`ArkR1CS/CRH.lean` for black-box hash gadgets.
-/
import ArkR1CS.Basic
import ArkR1CS.Circuit
import ArkR1CS.FpVar
import ArkR1CS.CRH
import ArkR1CS.Trace
