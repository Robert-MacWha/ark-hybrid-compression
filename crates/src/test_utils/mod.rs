//! Test fixtures shared by the crate's unit and integration tests.
#![cfg(any(test, feature = "test-utils"))]

pub mod poseidon;

pub use crate::uhf::{constraints::uhf_gadget, uhf};
pub use poseidon::poseidon_params;
