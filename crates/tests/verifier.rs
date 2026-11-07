use ark_crypto_primitives::crh::poseidon::{CRH, constraints::CRHGadget};
use ark_ed_on_bn254::Fr;
use ark_ff::UniformRand;
use ark_hybrid_compression::{
    KeccakCRH, hybrid_compression,
    test_utils::{ExampleCircuit, poseidon_params},
};

type TestCircuit = ExampleCircuit<Fr, KeccakCRH<Fr>, CRH<Fr>, CRHGadget<Fr>>;

fn circuit() -> TestCircuit {
    let mut rng = ark_std::test_rng();
    let a = Fr::rand(&mut rng);
    let b = Fr::rand(&mut rng);
    let c = Fr::rand(&mut rng);
    ExampleCircuit::new(a, b, c, a + b + c, (), poseidon_params())
}

#[test]
fn verifier_matches_prover() {
    let circuit = circuit();
    let (alpha, beta, gamma) = circuit.public_inputs().unwrap();

    let (alpha_v, gamma_v) =
        hybrid_compression::verifier::<KeccakCRH<Fr>, Fr>(&(), beta, &circuit.statement()).unwrap();

    assert_eq!(alpha_v, alpha);
    assert_eq!(gamma_v, gamma);
}

#[test]
fn verifier_rejects_tampered_statement() {
    let circuit = circuit();
    let (alpha, beta, gamma) = circuit.public_inputs().unwrap();

    let mut tampered = circuit.statement();
    tampered[0] += Fr::from(1u64);

    let (alpha_v, gamma_v) =
        hybrid_compression::verifier::<KeccakCRH<Fr>, Fr>(&(), beta, &tampered).unwrap();

    assert_ne!(alpha_v, alpha);
    assert_ne!(gamma_v, gamma);
}
