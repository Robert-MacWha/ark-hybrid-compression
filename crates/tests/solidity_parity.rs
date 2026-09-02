use alloy::{
    node_bindings::Anvil, primitives::U256, providers::ProviderBuilder,
    signers::local::PrivateKeySigner, sol,
};
use ark_crypto_primitives::crh::CRHScheme;
use ark_ed_on_bn254::Fr;
use ark_ff::{BigInteger, PrimeField, UniformRand};
use ark_hybrid_compression::{hybrid_compression::hybrid_compression, keccak::KeccakCRH, uhf::uhf};

sol!(
    #[sol(rpc)]
    LibHybridCompressionHarness,
    "../contracts/out/LibHybridCompression.t.sol/LibHybridCompressionHarness.json"
);

/// Encodes a field element as a 32-byte big-endian word, matching how Solidity
/// represents a `uint256`.
fn fr_to_u256(f: Fr) -> U256 {
    let be = f.into_bigint().to_bytes_be();
    let mut buf = [0u8; 32];
    buf[32 - be.len()..].copy_from_slice(&be);
    U256::from_be_bytes(buf)
}

#[tokio::test]
async fn native_matches_solidity() {
    let anvil = Anvil::new().try_spawn().unwrap();
    let signer: PrivateKeySigner = anvil.keys()[0].clone().into();
    let provider = ProviderBuilder::new()
        .wallet(signer)
        .connect_http(anvil.endpoint_url());
    let contract = LibHybridCompressionHarness::deploy(provider).await.unwrap();

    let field = {
        let be = Fr::MODULUS.to_bytes_be();
        let mut buf = [0u8; 32];
        buf[32 - be.len()..].copy_from_slice(&be);
        U256::from_be_bytes(buf)
    };

    let mut rng = ark_std::test_rng();
    for _ in 0..5 {
        let stmt: Vec<Fr> = (0..10).map(|_| Fr::rand(&mut rng)).collect();
        let stmt_sol: Vec<U256> = stmt.iter().map(|f| fr_to_u256(*f)).collect();

        // hash()
        let native_hash = KeccakCRH::<Fr>::evaluate(&(), &stmt[..]).unwrap();
        let sol_hash = contract.hash(stmt_sol.clone(), field).call().await.unwrap();
        assert_eq!(fr_to_u256(native_hash), sol_hash);

        // uhf()
        let sigma = Fr::rand(&mut rng);
        let native_uhf = uhf(sigma, &stmt);
        let sol_uhf = contract
            .uhf(fr_to_u256(sigma), stmt_sol.clone(), field)
            .call()
            .await
            .unwrap();
        assert_eq!(fr_to_u256(native_uhf), sol_uhf);

        // hybridCompression()
        let alpha = Fr::rand(&mut rng);
        let (beta, gamma) = hybrid_compression::<KeccakCRH<Fr>, Fr>(&(), alpha, &stmt).unwrap();
        let (sol_alpha, sol_gamma) = contract
            .hybridCompression(fr_to_u256(alpha), stmt_sol, field)
            .call()
            .await
            .unwrap()
            .into();
        assert_eq!(fr_to_u256(beta), sol_alpha);
        assert_eq!(fr_to_u256(gamma), sol_gamma);
    }
}
