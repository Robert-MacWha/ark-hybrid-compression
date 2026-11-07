use ark_crypto_primitives::crh::poseidon::CRH;
use ark_ed_on_bn254::Fr;
use ark_ff::UniformRand;
use ark_hybrid_compression::{
    KeccakCRH,
    hybrid_compression::{compress, verifier},
    test_utils::poseidon_params,
};

fn statement() -> Vec<Fr> {
    let mut rng = ark_std::test_rng();
    (0..4).map(|_| Fr::rand(&mut rng)).collect()
}

#[test]
fn verifier_matches_prover() {
    let stmt = statement();
    let (alpha, beta, gamma) =
        compress::<KeccakCRH<Fr>, CRH<Fr>, Fr>(&(), &poseidon_params(), &stmt).unwrap();

    let (alpha_v, gamma_v) = verifier::<KeccakCRH<Fr>, Fr>(&(), beta, &stmt).unwrap();

    assert_eq!(alpha_v, alpha);
    assert_eq!(gamma_v, gamma);
}

#[test]
fn verifier_rejects_tampered_statement() {
    let stmt = statement();
    let (alpha, beta, gamma) =
        compress::<KeccakCRH<Fr>, CRH<Fr>, Fr>(&(), &poseidon_params(), &stmt).unwrap();

    let mut tampered = stmt.clone();
    tampered[0] += Fr::from(1u64);

    let (alpha_v, gamma_v) = verifier::<KeccakCRH<Fr>, Fr>(&(), beta, &tampered).unwrap();

    assert_ne!(alpha_v, alpha);
    assert_ne!(gamma_v, gamma);
}
