{
  description = "A basic flake with a shell";
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-26.05";
  inputs.systems.url = "github:nix-systems/default";
  inputs.flake-utils = {
    url = "github:numtide/flake-utils";
    inputs.systems.follows = "systems";
  };
  inputs.rust-overlay = {
    url = "github:oxalica/rust-overlay";
    inputs.nixpkgs.follows = "nixpkgs";
  };

  outputs =
    {
      nixpkgs,
      flake-utils,
      rust-overlay,
      ...
    }:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = import nixpkgs {
          inherit system;
          overlays = [ rust-overlay.overlays.default ];
        };

        rustToolchain = pkgs.rust-bin.stable."1.98.0".default.override {
          extensions = [
            "rust-src"
            "llvm-tools"
            "rust-analyzer"
          ];
        };

        rustfmtNightly = pkgs.rust-bin.nightly.latest.rustfmt;
      in
      {
        devShells = {
          default = pkgs.mkShell {
            packages = [
              rustfmtNightly
              rustToolchain
              pkgs.bacon
              pkgs.foundry

              pkgs.cargo-edit
              pkgs.git-cliff
              pkgs.just
            ];
          };

          ci = pkgs.mkShell {
            packages = [
              rustToolchain
              pkgs.foundry
            ];
          };
        };
      }
    );
}
