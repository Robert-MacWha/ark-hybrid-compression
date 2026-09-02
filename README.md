# ark-hybrid-compression

Ark-compatible implementation of the hybrid compression algorithm described in [Data Matching in Unequal Worlds and Applications to Smart Contracts](https://eprint.iacr.org/2025/1500.pdf).

This algorithm is designed to compress data for zk proofs using two different hash functions. This way, circuit-friendly hash functions can be used in-circuit and more efficient hash functions can be used out-of-circuit (IE in smart contracts), while still maintaining the same security guarantees.
