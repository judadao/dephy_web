# MQTT Field Bridge Web Profile

Plain HTML/CSS/JavaScript provisioning UI for the MQTT field bridge product.

This profile expects the product firmware to expose:

- `GET /status`
- `GET /config`
- `POST /config`
- `POST /reboot`
- `POST /config/reset`
- `GET /peers`
- `POST /peers/<index>`
- `GET /peer-status`
- `POST /broker/control`
