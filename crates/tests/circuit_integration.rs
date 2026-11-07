use std::array::from_fn;

use alloy::{
    providers::{Provider, ProviderBuilder},
    sol,
};
use ark_crypto_primitives::{
    crh::poseidon::{
        CRH,
        constraints::{CRHGadget, CRHParametersVar},
    },
    sponge::poseidon::PoseidonConfig,
};
use ark_ed_on_bn254::Fr;
use ark_ff::PrimeField;
use ark_hybrid_compression::{
    KeccakCRH,
    hybrid_compression::{self, compress},
    test_utils::poseidon_params,
};
use ark_r1cs_std::{alloc::AllocVar, fields::fp::FpVar};
use ark_relations::gr1cs::{
    ConstraintSynthesizer, ConstraintSystem, ConstraintSystemRef, SynthesisError,
};

/// Witnesses the statement and compresses it into `(alpha, beta, gamma)`.
struct CompressCircuit {
    statement: Vec<Fr>,
    public_inputs: (Fr, Fr, Fr),
    beta_params: PoseidonConfig<Fr>,
}

impl ConstraintSynthesizer<Fr> for CompressCircuit {
    fn generate_constraints(self, cs: ConstraintSystemRef<Fr>) -> Result<(), SynthesisError> {
        let statement = self
            .statement
            .iter()
            .map(|v| FpVar::new_witness(cs.clone(), || Ok(*v)))
            .collect::<Result<Vec<_>, _>>()?;

        let alpha = FpVar::new_input(cs.clone(), || Ok(self.public_inputs.0))?;
        let beta = FpVar::new_input(cs.clone(), || Ok(self.public_inputs.1))?;
        let gamma = FpVar::new_input(cs.clone(), || Ok(self.public_inputs.2))?;
        let params = CRHParametersVar::new_constant(cs, &self.beta_params)?;
        hybrid_compression::enforce::<CRH<Fr>, Fr, CRHGadget<Fr>>(
            &params, &alpha, &beta, &gamma, &statement,
        )
    }
}

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

    // The circuit is satisfied and exposes exactly the natively computed public inputs.
    let cs = ConstraintSystem::<Fr>::new_ref();
    CompressCircuit {
        statement: statement.to_vec(),
        public_inputs: (alpha, beta, gamma),
        beta_params,
    }
    .generate_constraints(cs.clone())
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
