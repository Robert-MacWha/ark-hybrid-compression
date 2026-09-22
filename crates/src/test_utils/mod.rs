//! Test fixtures shared by the crate's unit tests and the integration test.
//! Available to in-crate tests automatically; external targets need the
//! `test-utils` feature.

pub mod circuit;
pub mod poseidon;

pub use circuit::{ExampleCircuit, ExampleStatement};
pub use poseidon::poseidon_params;
