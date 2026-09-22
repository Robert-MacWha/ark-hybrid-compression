use ark_crypto_primitives::sponge::poseidon::PoseidonConfig;
use ark_ff::PrimeField;

/// Random Poseidon parameters for tests.
pub fn poseidon_params<F: PrimeField>(rng: &mut impl ark_std::rand::Rng) -> PoseidonConfig<F> {
    let mut mds = vec![vec![]; 3];
    for row in mds.iter_mut() {
        for _ in 0..3 {
            row.push(F::rand(rng));
        }
    }

    let mut ark = vec![vec![]; 8 + 24];
    for row in ark.iter_mut() {
        for _ in 0..3 {
            row.push(F::rand(rng));
        }
    }

    PoseidonConfig::<F>::new(8, 24, 31, mds, ark, 2, 1)
}
