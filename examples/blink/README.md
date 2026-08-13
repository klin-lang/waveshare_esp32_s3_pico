# blink

Waveshare ESP32-S3-Pico — toggle silkscreen **D10** (GPIO35) via
`machine_esp.pin_out_s3` + board pin helpers.

Onboard WS2812 is **GPIO21** (`board.rgb()`); see [`../rgb`](../rgb).

## Build

```sh
. $IDF_PATH/export.sh
# resolve machine_esp (klin.mod at repo root)
cd ../.. && dart run /path/to/klin/bin/klin.dart get && cd examples/blink
make emit KLIN=/path/to/klin/bin/klin.dart
make build
make flash
```
