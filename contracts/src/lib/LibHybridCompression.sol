// SPDX-License-Identifier: MIT
pragma solidity ^0.8.24;

/// Solidity hybrid compression library for zk proofs.
library LibHybridCompression {
    /// Computes `(alpha, gamma)` from the `beta` the prover sent.
    function verifier(uint256 beta, uint256[] memory stmt, uint256 field)
        internal
        pure
        returns (uint256 alpha, uint256 gamma)
    {
        require(beta < field);
        alpha = hash(stmt, field);
        uint256 sigma = addmod(alpha, beta, field);
        gamma = uhf(sigma, stmt, field);
    }

    /// Computes gamma = UHF(sigma, x)
    function uhf(uint256 sigma, uint256[] memory x, uint256 field) internal pure returns (uint256 acc) {
        acc = 0;
        for (uint256 i = x.length; i > 0; i--) {
            uint256 xi = x[i - 1];
            require(xi < field);
            acc = mulmod(acc, sigma, field);
            acc = addmod(acc, xi, field);
        }
    }

    function hash(uint256[] memory x, uint256 field) internal pure returns (uint256) {
        return uint256(keccak256(abi.encodePacked(x))) % field;
    }
}
