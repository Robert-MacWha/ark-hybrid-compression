// SPDX-License-Identifier: MIT
pragma solidity ^0.8.24;

import {LibHybridCompression} from "../lib/LibHybridCompression.sol";

/// Proof-system verifier interface.
interface IArgVer {
    function verify(uint256[] calldata publicInputs, bytes calldata proof) external view returns (bool);
}

/// Example contract performing the on-chain half of the hybrid compression
/// protocol: recomputes `alpha` and `gamma` from a 4-element statement and
/// checks the proof against `(alpha, beta, gamma)`.
contract HybridCompressionExample {
    IArgVer public immutable argVer;
    uint256 public immutable field;

    constructor(IArgVer _argVer, uint256 _field) {
        argVer = _argVer;
        field = _field;
    }

    /// `statement` is the statement for the zk proof. Its length is fixed:
    /// the compression is not length-binding, so it must match the circuit's.
    ///
    /// `beta` and `proof` come from the off-chain prover.
    function submit(uint256[4] calldata statement, uint256 beta, bytes calldata proof) external view {
        uint256[] memory stmt = new uint256[](4);
        for (uint256 i = 0; i < 4; i++) {
            stmt[i] = statement[i];
        }

        (uint256 alpha, uint256 gamma) = LibHybridCompression.verifier(beta, stmt, field);

        uint256[] memory publicInputs = new uint256[](3);
        publicInputs[0] = alpha;
        publicInputs[1] = beta;
        publicInputs[2] = gamma;
        require(argVer.verify(publicInputs, proof), "HybridCompressionExample: invalid proof");

        // Can now use `stmt` directly, knowing that the SNARK has the same `stmt`
        // in its witness.
    }
}
