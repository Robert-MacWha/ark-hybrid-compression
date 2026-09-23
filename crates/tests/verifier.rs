use ark_crypto_primitives::crh::poseidon::{CRH, constraints::CRHGadget};
use ark_ed_on_bn254::Fr;
use ark_ff::UniformRand;
use ark_hybrid_compression::{
    KeccakCRH,
    circuit::{Compressed, CompressedCircuit},
    hybrid_compression,
    test_utils::{ExampleCircuit, ExampleStatement, poseidon_params},
};

fn compressed() -> Compressed<Fr, ExampleStatement<Fr>> {
    let mut rng = ark_std::test_rng();
    let a = Fr::rand(&mut rng);
    let b = Fr::rand(&mut rng);
    let c = Fr::rand(&mut rng);

    let mut circuit = CompressedCircuit::<Fr, _, _, CRH<Fr>, CRHGadget<Fr>>::new_keccak(
        poseidon_params(),
        ExampleCircuit {
            a,
            b,
            c,
            sum: a + b + c,
        },
    );
    circuit.compress().unwrap()
}

#[test]
fn verifier_matches_prover() {
    let compressed = compressed();

    let (alpha, gamma) = hybrid_compression::verifier::<KeccakCRH<Fr>, Fr>(
        &(),
        compressed.beta,
        &compressed.statement_var,
    )
    .unwrap();

    assert_eq!(alpha, compressed.alpha);
    assert_eq!(gamma, compressed.gamma);
}

#[test]
fn verifier_rejects_tampered_statement() {
    let compressed = compressed();

    let mut tampered = compressed.statement_var.clone();
    tampered[0] += Fr::from(1u64);

    let (alpha, gamma) =
        hybrid_compression::verifier::<KeccakCRH<Fr>, Fr>(&(), compressed.beta, &tampered).unwrap();

    assert_ne!(alpha, compressed.alpha);
    assert_ne!(gamma, compressed.gamma);
}
