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

    let mut rng = ark_std::test_rng();
    let poseidon_params = poseidon_params::<Fr>(&mut rng);

    let [a, b, c]: [Fr; 3] = from_fn(|_| Fr::rand(&mut rng));
    let inner = ExampleCircuit {
        a,
        b,
        c,
        sum: a + b + c,
    };
    let mut circuit =
        CompressedCircuit::<Fr, _, CRH<Fr>, CRHGadget<Fr>, 4>::new(poseidon_params, inner);

    // Runs the off-circuit computation `Usr` performs before proving (see
    // Construction 2), then checks the relation is satisfied.
    let compressed = circuit.compress().unwrap();
    let cs = ConstraintSystem::<Fr>::new_ref();
    circuit.generate_constraints(cs.clone()).unwrap();
    assert!(cs.is_satisfied().unwrap());

    let stmt_sol: Vec<U256> = compressed
        .statement_var
        .iter()
        .copied()
        .map(Fr::into)
        .collect();

    // Simulates what a real verifying contract would enforce: only the exact
    // public inputs the (mock) prover produced are accepted.
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
        .submit(stmt_sol, compressed.beta.into(), vec![].into())
        .call()
        .await
        .unwrap();
}
