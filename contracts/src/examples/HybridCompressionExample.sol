// SPDX-License-Identifier: MIT
pragma solidity ^0.8.24;

import {LibHybridCompression} from "../lib/LibHybridCompression.sol";

/// Proof-system verifier interface.
interface IArgVer {
    function verify(uint256[] calldata publicInputs, bytes calldata proof) external view returns (bool);
}

/// Example hybrid compression contract that wraps performs the on-chain
/// half of the hybrid compression protocol, checking the values of `alpha`
/// and `gamma` against a statement `(a, b, c, sum)`.
contract HybridCompressionExample {
    IArgVer public immutable argVer;
    uint256 public immutable field;

    constructor(IArgVer _argVer, uint256 _field) {
        argVer = _argVer;
        field = _field;
    }

    /// (a, b, c, sum) is the statement for the zk proof.
    ///
    /// `beta` and `proof` come from the off-chain prover.
    function submit(uint256 a, uint256 b, uint256 c, uint256 sum, uint256 beta, bytes calldata proof) external view {
        uint256[] memory stmt = new uint256[](4);
        stmt[0] = a;
        stmt[1] = b;
        stmt[2] = c;
        stmt[3] = sum;

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
