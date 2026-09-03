# ark-hybrid-compression

Ark-compatible implementation of the hybrid compression algorithm described in [Data Matching in Unequal Worlds and Applications to Smart Contracts](https://eprint.iacr.org/2025/1500.pdf).

This algorithm is designed to compress data for zk proofs into three public field elements. By using a hybrid approach, it can use circuit-friendly hash functions in-circuit and more efficient hash functions out-of-circuit. For example, using Poseidon in-circuit and keccak256 in a smart contract.
