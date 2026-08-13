# adc

ADC1 on Pico **A1** (`board.a1` = GPIO7, channel `a1_adc_ch` = 6) drives
PWM duty on **D10**. Wire a pot between 3V3 / A1 / GND (0 dB atten ≈ 0..0.8 V
full-scale unless you change atten later).

## Build

```sh
. $IDF_PATH/export.sh
cd ../.. && dart run /path/to/klin/bin/klin.dart get && cd examples/adc
make emit KLIN=/path/to/klin/bin/klin.dart
make build
make flash
```
