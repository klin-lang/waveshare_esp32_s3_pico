# spi

SPI2 (FSPI) on Pico **GP10/GP11/GP12** (`spi_sck` / `spi_mosi` / `spi_miso`)
with soft CS on **D13** (`spi_cs`). Loops `0xA5` @ 1 MHz mode 0.

## Build

```sh
. $IDF_PATH/export.sh
cd ../.. && dart run /path/to/klin/bin/klin.dart get && cd examples/spi
make emit KLIN=/path/to/klin/bin/klin.dart
make build
make flash
```
