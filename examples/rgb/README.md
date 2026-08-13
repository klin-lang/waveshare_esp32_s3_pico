# rgb

Onboard **WS2812** on GPIO21 via ESP32-S3 **RMT TX**
(`board.rgb_out` / `write`, wire **RGB** per Waveshare FAQ). Bit-bang escape
hatch: `board.rgb_write_bb` + `machine.pin_out_s3(board.rgb())`.

## Build

```sh
. $IDF_PATH/export.sh
cd ../.. && dart run /path/to/klin/bin/klin.dart get && cd examples/rgb
make emit KLIN=/path/to/klin/bin/klin.dart
make build
make flash
```
