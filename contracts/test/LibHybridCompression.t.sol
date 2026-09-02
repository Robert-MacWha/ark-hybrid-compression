// SPDX-License-Identifier: UNLICENSED
pragma solidity ^0.8.13;

import {Test} from "forge-std/Test.sol";
import {LibHybridCompression} from "../src/lib/LibHybridCompression.sol";

contract LibHybridCompressionHarness {
    function hybridCompression(uint256 beta, uint256[] calldata stmt, uint256 field)
        public
        pure
        returns (uint256 alpha, uint256 gamma)
    {
        return LibHybridCompression.hybridCompression(beta, stmt, field);
    }

    function uhf(uint256 sigma, uint256[] calldata x, uint256 field) public pure returns (uint256 acc) {
        return LibHybridCompression.uhf(sigma, x, field);
    }

    function hash(uint256[] calldata x, uint256 field) public pure returns (uint256 acc) {
        return LibHybridCompression.hash(x, field);
    }
}
