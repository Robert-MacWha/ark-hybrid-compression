// SPDX-License-Identifier: MIT
pragma solidity ^0.8.13;

import {Test} from "forge-std/Test.sol";
import {LibHybridCompression} from "../src/lib/LibHybridCompression.sol";

contract LibHybridCompressionHarness {
    function verifier(uint256 beta, uint256[] calldata stmt, uint256 field)
        public
        pure
        returns (uint256 alpha, uint256 gamma)
    {
        return LibHybridCompression.verifier(beta, stmt, field);
    }

    function uhf(uint256 sigma, uint256[] calldata x, uint256 field) public pure returns (uint256 acc) {
        return LibHybridCompression.uhf(sigma, x, field);
    }

    function hash(uint256[] calldata x, uint256 field) public pure returns (uint256 acc) {
        return LibHybridCompression.hash(x, field);
    }
}

contract LibHybridCompressionTest is Test {
    LibHybridCompressionHarness harness;

    function setUp() public {
        harness = new LibHybridCompressionHarness();
    }

    function test_uhf_knownVector() public view {
        // UHF(2, [3, 5, 7]) = 3 + 5*2 + 7*2^2 = 41
        uint256[] memory x = new uint256[](3);
        x[0] = 3;
        x[1] = 5;
        x[2] = 7;

        assertEq(harness.uhf(2, x, 1_000_000_000), 41);
    }

    function test_RevertWhen_BetaExceedsField() public {
        uint256[] memory stmt = new uint256[](1);
        stmt[0] = 1;
        uint256 field = 97;

        vm.expectRevert();
        harness.verifier(field, stmt, field);
    }
}
