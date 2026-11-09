use std::array::from_fn;

use alloy::{
    providers::{Provider, ProviderBuilder},
    sol,
};
use ark_crypto_primitives::crh::poseidon::{
    CRH,
    constraints::{CRHGadget, CRHParametersVar},
};
use ark_ed_on_bn254::Fr;
use ark_ff::PrimeField;
use ark_hybrid_compression::{
    KeccakCRH,
    hybrid_compression::{self, compress},
    test_utils::poseidon_params,
};
use ark_r1cs_std::{alloc::AllocVar, fields::fp::FpVar};
use ark_relations::gr1cs::ConstraintSystem;

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

    let statement: [Fr; 4] = from_fn(|i| Fr::from(i as u64));
    let beta_params = poseidon_params();
    let (alpha, beta, gamma) =
        compress::<KeccakCRH<Fr>, CRH<Fr>, Fr>(&(), &beta_params, &statement).unwrap();

    // The gadget is satisfied and exposes exactly the natively computed public inputs.
    let cs = ConstraintSystem::<Fr>::new_ref();
    let statement_var = Vec::<FpVar<Fr>>::new_witness(cs.clone(), || Ok(statement)).unwrap();
    let alpha_var = FpVar::new_input(cs.clone(), || Ok(alpha)).unwrap();
    let beta_var = FpVar::new_input(cs.clone(), || Ok(beta)).unwrap();
    let gamma_var = FpVar::new_input(cs.clone(), || Ok(gamma)).unwrap();
    let params = CRHParametersVar::new_constant(cs.clone(), &beta_params).unwrap();
    hybrid_compression::enforce::<CRH<Fr>, Fr, CRHGadget<Fr>>(
        &params,
        &alpha_var,
        &beta_var,
        &gamma_var,
        &statement_var,
    )
    .unwrap();
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
        .submit(statement.map(Into::into), beta.into(), vec![].into())
        .call()
        .await
        .unwrap();
}
