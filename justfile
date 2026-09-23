check:
    cd contracts && forge build
    cd crates && cargo check --all-targets --all-features
    cd crates && cargo clippy --all-targets --all-features -- -D warnings
    cd crates && cargo fmt --all -- --check

test:
    cd contracts && forge test
    cd crates && cargo test --all-targets --all-features

release: check test
    cd crates && cargo package --list --allow-dirty
    cd crates && cargo publish --dry-run --allow-dirty
    git cliff --bump -o CHANGELOG.md
    cd crates && cargo set-version $(git cliff --bumped-version | sed 's/^v//')
    echo "If everything looks good, run 'just publish' to push the release."

publish:
    git add CHANGELOG.md
    git add crates/Cargo.lock
    git add crates/Cargo.toml
    git commit -m "chore: release $(git cliff --bumped-version)"
    git tag "$(git cliff --bumped-version)" -m "Release: $(git cliff --bumped-version)"
    git push && git push --tags 
