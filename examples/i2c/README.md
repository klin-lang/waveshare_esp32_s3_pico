# i2c

I2C0 on Pico **GP6/GP7** (`board.i2c0_sda` / `i2c0_scl`). Configures the bus
at 100 kHz, then blinks **D10** (no slave required). Use
`writeto` / `readfrom_into` with your device.

## Build

```sh
. $IDF_PATH/export.sh
cd ../.. && dart run /path/to/klin/bin/klin.dart get && cd examples/i2c
make emit KLIN=/path/to/klin/bin/klin.dart
make build
make flash
```
