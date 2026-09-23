#![cfg(any(test, feature = "test-utils"))]

//! Test fixtures shared by the crate's unit and integration tests.

pub mod circuit;
pub mod poseidon;

pub use circuit::{ExampleCircuit, ExampleStatement};
pub use poseidon::poseidon_params;
