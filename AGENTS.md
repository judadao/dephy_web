# Repository Guidelines

## Project Structure

Shared tooling lives in `tools/`, product web profiles live in `products/`,
metadata APIs live in `include/dephy_web/` and `src/`, Zephyr module metadata
lives in `zephyr/`, Linux tests live in `tests/`, and helper scripts live in
`scripts/`.

## Development Model

Keep generic web tooling product-agnostic. Product-specific UI sources belong
under `products/<product>/web/` and should be pinned by product repos through
`deps.json` tags.

## Commands

- `make -f Makefile.linux test`: generate the default profile header and run
  metadata tests.
- `scripts/test_web_profile.sh`: run the module test script.

## Versioning

Use product branches such as `product/mqtt_field_bridge` and release tags such
as `dephy-web-mqtt-field-bridge-v0.1.1`.
