// SPDX-License-Identifier: MIT
pragma solidity ^0.8.24;

import {LibHybridCompression} from "../lib/LibHybridCompression.sol";

/// Argument-system verifier interface.
interface IArgVer {
    function verify(uint256[] calldata publicInputs, bytes calldata proof) external view returns (bool);
}

/// Example `Con_hat` contract (Construction 2, Section 4.3 of the paper):
/// wraps a relation-checking contract so the SNARK's public input is just
/// `(alpha, beta, gamma)` instead of the full `stmt`, while `stmt` stays
/// available on-chain as ordinary calldata.
contract HybridCompressionExample {
    IArgVer public immutable argVer;
    uint256 public immutable field;

    constructor(IArgVer _argVer, uint256 _field) {
        argVer = _argVer;
        field = _field;
    }

    /// `beta` and `proof` come from the off-chain prover (`Usr` in
    /// Construction 2); `stmt` is ordinary public calldata that this
    /// contract can inspect directly.
    function submit(uint256[] calldata stmt, uint256 beta, bytes calldata proof) external view {
        (uint256 alpha, uint256 gamma) = LibHybridCompression.hybridCompression(beta, stmt, field);

        uint256[] memory publicInputs = new uint256[](3);
        publicInputs[0] = alpha;
        publicInputs[1] = beta;
        publicInputs[2] = gamma;
        require(argVer.verify(publicInputs, proof), "HybridCompressionExample: invalid proof");

        // Can now use `stmt` directly, trusting that the SNARK has the same `stmt`
        // in its witness.
    }
}
