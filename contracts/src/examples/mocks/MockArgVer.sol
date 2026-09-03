// SPDX-License-Identifier: MIT
pragma solidity ^0.8.13;

import {IArgVer} from "../HybridCompressionExample.sol";

/// Test-only stand-in for a real SNARK verifier.
contract MockArgVer is IArgVer {
    mapping(bytes32 => bool) public authorized;

    function authorize(uint256[] calldata publicInputs) external {
        authorized[keccak256(abi.encode(publicInputs))] = true;
    }

    function verify(uint256[] calldata publicInputs, bytes calldata) external view returns (bool) {
        return authorized[keccak256(abi.encode(publicInputs))];
    }
}
