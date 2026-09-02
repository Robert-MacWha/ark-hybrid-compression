use std::{borrow::Borrow, marker::PhantomData};

use ark_crypto_primitives::crh::CRHScheme;
use ark_ff::{BigInteger, PrimeField};

/// Keccak256-based [`CRHScheme`], matching `LibHybridCompression.hash` in Solidity:
/// `keccak256(abi.encodePacked(x)) % field`.
pub struct KeccakCRH<F>(PhantomData<F>);

impl<F: PrimeField> CRHScheme for KeccakCRH<F> {
    type Input = [F];
    type Output = F;
    type Parameters = ();

    fn setup<R: ark_std::rand::Rng>(
        _r: &mut R,
    ) -> Result<Self::Parameters, ark_crypto_primitives::Error> {
        Ok(())
    }

    fn evaluate<T: Borrow<Self::Input>>(
        _parameters: &Self::Parameters,
        input: T,
    ) -> Result<Self::Output, ark_crypto_primitives::Error> {
        let input = input.borrow();

        // Mirror Solidity's `abi.encodePacked(uint256[])`: each element as a
        // fixed 32-byte big-endian word, concatenated with no length prefix.
        let mut bytes = Vec::with_capacity(input.len() * 32);
        for xi in input {
            let be = xi.into_bigint().to_bytes_be();
            let mut word = [0u8; 32];
            word[32 - be.len()..].copy_from_slice(&be);
            bytes.extend_from_slice(&word);
        }

        let digest = alloy_primitives::keccak256(&bytes);
        Ok(F::from_be_bytes_mod_order(digest.as_slice()))
    }
}
