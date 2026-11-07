use std::array::from_fn;

use alloy::{
    providers::{Provider, ProviderBuilder},
    sol,
};
use ark_crypto_primitives::crh::poseidon::{CRH, constraints::CRHGadget};
use ark_ed_on_bn254::Fr;
use ark_ff::PrimeField;
use ark_hybrid_compression::{
    KeccakCRH,
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

#[tokio::test]
async fn circuit_matches_solidity() {
    let provider = ProviderBuilder::new().connect_anvil_with_wallet().erased();

    let field = Fr::MODULUS.into();
    let mock_arg_ver = MockArgVer::deploy(provider.clone()).await.unwrap();
    let contract = HybridCompressionExample::deploy(provider, *mock_arg_ver.address(), field)
        .await
        .unwrap();

    let [a, b, c] = from_fn(|i| Fr::from(i as u64));
    let circuit = ExampleCircuit::<Fr, KeccakCRH<Fr>, CRH<Fr>, CRHGadget<Fr>>::new(
        a,
        b,
        c,
        a + b + c,
        (),
        poseidon_params(),
    );
    let (alpha, beta, gamma) = circuit.public_inputs().unwrap();

    // Runs the off-circuit computation, then checks that the circuit is satisfied.
    let cs = ConstraintSystem::<Fr>::new_ref();
    circuit.generate_constraints(cs.clone()).unwrap();
    assert!(cs.is_satisfied().unwrap());
    assert_eq!(
        cs.instance_assignment().unwrap(),
        vec![Fr::from(1u64), alpha, beta, gamma]
    );

    // Authorize the proof if the on-chain computed alpha/beta/gamma match the
    // off-chain values.
    mock_arg_ver
        .authorize(vec![alpha.into(), beta.into(), gamma.into()])
        .send()
        .await
        .unwrap()
        .watch()
        .await
        .unwrap();

    contract
        .submit(
            a.into(),
            b.into(),
            c.into(),
            (a + b + c).into(),
            beta.into(),
            vec![].into(),
        )
        .call()
        .await
        .unwrap();
}
