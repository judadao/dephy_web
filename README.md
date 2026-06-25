# dephy_web

Reusable web asset profiles and embed tooling for Dephy products.

This repository is versioned by product branch and release tags:

- Product branches: `product/<product-name>` for product-specific UI sources.
- Release tags: `dephy-web-<product-name>-vX.Y.Z` for product pins.
- `main` keeps shared tooling and may also carry the latest product profiles.

## MQTT Field Bridge

The first profile is:

```text
products/mqtt_field_bridge/web/
```

Generate an embedded C header with:

```sh
node tools/embed_web.js products/mqtt_field_bridge/web build_out/provisioning_index.h index_html
```

## Systematic Regression Testing

From the workspace root, run the shared pytest regression module:

```sh
../dephy_testkit/.venv/bin/python -m pytest ../dephy_testkit/tests/regression --module dephy_web
../dephy_testkit/.venv/bin/python -m pytest ../dephy_testkit/tests/regression --module dephy_web --profile integration
```

The local repo test remains:

```sh
make -f Makefile.linux test
```
