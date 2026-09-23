use ark_crypto_primitives::sponge::poseidon::{PoseidonConfig, find_poseidon_ark_and_mds};
use ark_ff::PrimeField;

/// Random Poseidon parameters for tests.
pub fn poseidon_params<F: PrimeField>() -> PoseidonConfig<F> {
    let (ark, mds) = find_poseidon_ark_and_mds::<F>(F::MODULUS_BIT_SIZE as u64, 2, 8, 24, 0);
    PoseidonConfig::new(8, 24, 31, mds, ark, 2, 1)
}
