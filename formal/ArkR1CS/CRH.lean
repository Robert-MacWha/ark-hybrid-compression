/-
# Black-box collision-resistant hash gadgets

`CRHGadget F` packages a native hash `native : List F → F` (a `CRHScheme`
with `Input = [F]`, `Output = F`) together with its in-circuit gadget (a
`CRHSchemeGadget` with `InputVar = [FpVar<F>]`, `OutputVar = FpVar<F>`), and
the two properties every correct gadget must have:

* `sound` — any assignment satisfying the gadget's constraints evaluates its
  output to `native` of the evaluated inputs;
* `complete` — the honest run succeeds (`Complete`).

Nothing else is assumed about the hash: Poseidon, Rescue, a toy sum, …
`noInputs` records that a hash gadget allocates no *public* inputs (Poseidon
in arkworks allocates witnesses only); it is only used to pin down the
positions of the public inputs of the compressed circuit.
-/
import ArkR1CS.FpVar

namespace ArkR1CS

variable {F : Type} [Field F]

/-- A native hash together with a verified in-circuit gadget. -/
structure CRHGadget (F : Type) [Field F] where
  /-- `CRHScheme::evaluate`. -/
  native : List F → F
  /-- `CRHSchemeGadget::evaluate`. -/
  gadget : List (FpVar F) → Circuit F (FpVar F)
  sound : ∀ (xs : List (FpVar F)) (off : Offsets) (a : Assignment F),
    ConstraintsHold a ((gadget xs).run off).2 →
      ((gadget xs).run off).1.eval a = native (xs.map (·.eval a))
  complete : ∀ (xs : List (FpVar F)) (off : Offsets) (a₀ : Assignment F),
    (∀ x ∈ xs, x.below off ∧ Consistent a₀ x) → Complete (gadget xs) off a₀
  noInputs : ∀ (xs : List (FpVar F)) (off : Offsets),
    Op.inputCount ((gadget xs).run off).2 = 0

end ArkR1CS
