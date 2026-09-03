use std::array::from_fn;

use alloy::{
    node_bindings::Anvil, primitives::U256, providers::ProviderBuilder,
    signers::local::PrivateKeySigner, sol,
};
use ark_crypto_primitives::sponge::poseidon::PoseidonConfig;
use ark_ed_on_bn254::Fr;
use ark_ff::{BigInteger, PrimeField, UniformRand};

mod example;

sol!(
    #[sol(rpc)]
    HybridCompressionExample,
    "../contracts/out/HybridCompressionExample.sol/HybridCompressionExample.json"
);
sol!(
    #[sol(rpc)]
    MockArgVer,
    "../contracts/out/MockArgVer.sol/MockArgVer.json"
);

fn fr_to_u256(f: Fr) -> U256 {
    let be = f.into_bigint().to_bytes_be();
    let mut buf = [0u8; 32];
    buf[32 - be.len()..].copy_from_slice(&be);
    U256::from_be_bytes(buf)
}

#[tokio::test]
async fn example_circuit_integration() {
    let anvil = Anvil::new().try_spawn().unwrap();
    let signer: PrivateKeySigner = anvil.keys()[0].clone().into();
    let provider = ProviderBuilder::new()
        .wallet(signer)
        .connect_http(anvil.endpoint_url());

    let field = {
        let be = Fr::MODULUS.to_bytes_be();
        let mut buf = [0u8; 32];
        buf[32 - be.len()..].copy_from_slice(&be);
        U256::from_be_bytes(buf)
    };

    let mock_arg_ver = MockArgVer::deploy(provider.clone()).await.unwrap();
    let contract = HybridCompressionExample::deploy(provider, *mock_arg_ver.address(), field)
        .await
        .unwrap();

    let mut rng = ark_std::test_rng();
    let mut mds = vec![vec![]; 3];
    for i in 0..3 {
        for _ in 0..3 {
            mds[i].push(Fr::rand(&mut rng));
        }
    }
    let mut ark = vec![vec![]; 8 + 24];
    for i in 0..8 + 24 {
        for _ in 0..3 {
            ark[i].push(Fr::rand(&mut rng));
        }
    }
    let poseidon_params = PoseidonConfig::<Fr>::new(8, 24, 31, mds, ark, 2, 1);

    let stmt: [Fr; 4] = from_fn(|_| Fr::rand(&mut rng));
    let stmt_sol: Vec<U256> = stmt.iter().map(|f| fr_to_u256(*f)).collect();
    let circuit = example::circuit::ExampleCircuit::new(&stmt, poseidon_params.clone());
    let (alpha, beta, gamma) = circuit.prove();

    // Simulates what a real verifying key would enforce: only the exact
    // public inputs the (mock) prover produced are accepted.
    mock_arg_ver
        .authorize(vec![fr_to_u256(alpha), fr_to_u256(beta), fr_to_u256(gamma)])
        .send()
        .await
        .unwrap()
        .watch()
        .await
        .unwrap();

    contract
        .submit(stmt_sol.clone(), fr_to_u256(beta), vec![].into())
        .call()
        .await
        .unwrap();
}
