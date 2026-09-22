#![doc = include_str!("../README.md")]

pub mod circuit;
mod hybrid_compression;
#[cfg(feature = "alloy")]
mod keccak;
#[cfg(any(test, feature = "test-utils"))]
pub mod test_utils;
mod uhf;

pub use hybrid_compression::{constraints, hybrid_compression};

#[cfg(feature = "alloy")]
pub use keccak::KeccakCRH;
