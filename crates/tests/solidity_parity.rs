use alloy::{
    primitives::U256,
    providers::{Provider, ProviderBuilder},
    sol,
};
use ark_crypto_primitives::crh::CRHScheme;
use ark_ed_on_bn254::Fr;
use ark_ff::PrimeField;
use ark_hybrid_compression::{KeccakCRH, hybrid_compression};

sol!(
    #[sol(rpc)]
    LibHybridCompressionHarness,
    "../contracts/out/LibHybridCompression.t.sol/LibHybridCompressionHarness.json"
);

#[tokio::test]
async fn native_hash_matches_solidity() {
    let provider = ProviderBuilder::new().connect_anvil_with_wallet().erased();
    let contract = LibHybridCompressionHarness::deploy(provider).await.unwrap();

    let field: U256 = Fr::MODULUS.into();
    let stmt: Vec<Fr> = (0..10).map(Fr::from).collect();
    let sol_stmt: Vec<U256> = stmt.clone().into_iter().map(Fr::into).collect();

    let native_hash = KeccakCRH::<Fr>::evaluate(&(), &stmt[..]).unwrap();
    let native_hash: U256 = native_hash.into();
    let sol_hash = contract.hash(sol_stmt.clone(), field).call().await.unwrap();
    assert_eq!(native_hash, sol_hash);
}

#[tokio::test]
async fn verifier_matches_solidity() {
    let provider = ProviderBuilder::new().connect_anvil_with_wallet().erased();
    let contract = LibHybridCompressionHarness::deploy(provider).await.unwrap();

    let field: U256 = Fr::MODULUS.into();
    let stmt: Vec<Fr> = (0..10).map(Fr::from).collect();
    let sol_stmt: Vec<U256> = stmt.clone().into_iter().map(Fr::into).collect();

    let beta = Fr::from(42);
    let (alpha, gamma) =
        hybrid_compression::verifier::<KeccakCRH<Fr>, Fr>(&(), beta, &stmt).unwrap();
    let (alpha, gamma): (U256, U256) = (alpha.into(), gamma.into());
    let (sol_alpha, sol_gamma) = contract
        .verifier(beta.into(), sol_stmt, field)
        .call()
        .await
        .unwrap()
        .into();

    assert_eq!(alpha, sol_alpha);
    assert_eq!(gamma, sol_gamma);
}
