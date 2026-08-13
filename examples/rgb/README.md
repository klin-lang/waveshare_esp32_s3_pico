# rgb

Onboard **WS2812** on GPIO21 (`board.rgb()`) via crude GRB bit-bang
(`board.rgb_write`). Interrupts under ESP-IDF may glitch edges — tune waits
in `rgb.kl` on hardware. Reliable RMT path is a later follow-up.

## Build

```sh
. $IDF_PATH/export.sh
cd ../.. && dart run /path/to/klin/bin/klin.dart get && cd examples/rgb
make emit KLIN=/path/to/klin/bin/klin.dart
make build
make flash
```
