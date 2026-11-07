use std::array::from_fn;

use alloy::{
    providers::{Provider, ProviderBuilder},
    sol,
};
use ark_crypto_primitives::{
    crh::{
        CRHScheme,
        poseidon::{
            CRH,
            constraints::{CRHGadget, CRHParametersVar},
        },
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
use ark_r1cs_std::{alloc::AllocVar, eq::EqGadget, fields::fp::FpVar, prelude::GR1CSVar};
use ark_relations::gr1cs::{
    ConstraintSynthesizer, ConstraintSystem, ConstraintSystemRef, SynthesisError,
};

/// Knowledge of `a, b, c` summing to `sum`, with the statement `[a, b, c, sum]`
/// compressed into `(alpha, beta, gamma)`.
struct SumCircuit {
    a: Fr,
    b: Fr,
    c: Fr,
    sum: Fr,
    beta_params: PoseidonConfig<Fr>,
}

impl ConstraintSynthesizer<Fr> for SumCircuit {
    fn generate_constraints(self, cs: ConstraintSystemRef<Fr>) -> Result<(), SynthesisError> {
        let a = FpVar::new_witness(cs.clone(), || Ok(self.a))?;
        let b = FpVar::new_witness(cs.clone(), || Ok(self.b))?;
        let c = FpVar::new_witness(cs.clone(), || Ok(self.c))?;
        let sum = FpVar::new_witness(cs.clone(), || Ok(self.sum))?;
        (&a + &b + &c).enforce_equal(&sum)?;
        let stmt = [a, b, c, sum];

        let alpha = FpVar::new_input(cs.clone(), || {
            let stmt: Vec<Fr> = stmt.iter().map(|x| x.value()).collect::<Result<_, _>>()?;
            KeccakCRH::<Fr>::evaluate(&(), stmt).map_err(|_| SynthesisError::Unsatisfiable)
        })?;
        let params = CRHParametersVar::new_constant(cs.clone(), &self.beta_params)?;
        let (beta, gamma) = hybrid_compression::constraints::prover::<CRH<Fr>, Fr, CRHGadget<Fr>>(
            &params, alpha, &stmt,
        )?;
        FpVar::new_input(cs.clone(), || beta.value())?.enforce_equal(&beta)?;
        FpVar::new_input(cs, || gamma.value())?.enforce_equal(&gamma)?;
        Ok(())
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

    let [a, b, c] = from_fn(|i| Fr::from(i as u64));
    let beta_params = poseidon_params();
    let (alpha, beta, gamma) =
        compress::<KeccakCRH<Fr>, CRH<Fr>, Fr>(&(), &beta_params, &[a, b, c, a + b + c]).unwrap();

    // The circuit is satisfied and exposes exactly the natively computed public inputs.
    let cs = ConstraintSystem::<Fr>::new_ref();
    SumCircuit {
        a,
        b,
        c,
        sum: a + b + c,
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
