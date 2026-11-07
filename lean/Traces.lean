/-
# Differential trace

Writes the trace of the example circuit for `crates/tests/r1cs_trace.rs`,
which runs this file with `lake env lean --run Traces.lean <dir>` and
compares it with the arkworks constraint system of the same circuit.
-/
import HybridCompression.Examples

/-- Write `<dir>/example.trace`. -/
def main (args : List String) : IO Unit := do
  let some dir := args.head? | throw (IO.userError "usage: lean --run Traces.lean <dir>")
  IO.FS.writeFile s!"{dir}/example.trace" HybridCompression.exampleTraceString
