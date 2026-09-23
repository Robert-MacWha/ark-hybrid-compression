use std::array::from_fn;

use alloy::{
    node_bindings::Anvil, primitives::U256, providers::ProviderBuilder,
    signers::local::PrivateKeySigner, sol,
};
use ark_crypto_primitives::crh::poseidon::{CRH, constraints::CRHGadget};
use ark_ed_on_bn254::Fr;
use ark_ff::{PrimeField, UniformRand};
use ark_hybrid_compression::{
    circuit::CompressedCircuit,
    test_utils::{ExampleCircuit, poseidon_params},
};
use ark_relations::gr1cs::{ConstraintSynthesizer, ConstraintSystem};

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

/// End-to-end: the circuit produces `(alpha, beta, gamma)` as public inputs, the
/// off-chain prover submits `(stmt, beta, proof)` to the contract, and the contract
/// recomputes `alpha`/`gamma` on-chain from its own copy of `stmt` and checks the
/// proof against them. This is the full Construction 2 flow.
#[tokio::test]
async fn circuit_matches_solidity() {
    let anvil = Anvil::new().try_spawn().unwrap();
    let signer: PrivateKeySigner = anvil.keys()[0].clone().into();
    let provider = ProviderBuilder::new()
        .wallet(signer)
        .connect_http(anvil.endpoint_url());

    let field = Fr::MODULUS.into();
    let mock_arg_ver = MockArgVer::deploy(provider.clone()).await.unwrap();
    let contract = HybridCompressionExample::deploy(provider, *mock_arg_ver.address(), field)
        .await
        .unwrap();

    let poseidon_params = poseidon_params();
    let [a, b, c] = from_fn(|i| Fr::from(i as u64));
    let inner = ExampleCircuit {
        a,
        b,
        c,
        sum: a + b + c,
    };
    let mut circuit =
        CompressedCircuit::<Fr, _, _, CRH<Fr>, CRHGadget<Fr>>::new_keccak(poseidon_params, inner);

    // Runs the off-circuit computation, then checks that the circuit is satisfied.
    let compressed = circuit.compress().unwrap();
    let cs = ConstraintSystem::<Fr>::new_ref();
    circuit.generate_constraints(cs.clone()).unwrap();
    assert!(cs.is_satisfied().unwrap());

    // Authorize the proof if the on-chain computed alpha/gamma match the off-chain
    // computed values.
    mock_arg_ver
        .authorize(vec![
            compressed.alpha.into(),
            compressed.beta.into(),
            compressed.gamma.into(),
        ])
        .send()
        .await
        .unwrap()
        .watch()
        .await
        .unwrap();

    contract
        .submit(
            compressed.statement.a.into(),
            compressed.statement.b.into(),
            compressed.statement.c.into(),
            compressed.statement.sum.into(),
            compressed.beta.into(),
            vec![].into(),
        )
        .call()
        .await
        .unwrap();
}
