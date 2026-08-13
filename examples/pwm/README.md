# pwm

LEDC PWM fade on Pico **D10** (GPIO35). Use an external LED — onboard RGB is
WS2812 (`examples/rgb`).

## Build

```sh
. $IDF_PATH/export.sh
cd ../.. && dart run /path/to/klin/bin/klin.dart get && cd examples/pwm
make emit KLIN=/path/to/klin/bin/klin.dart
make build
make flash
```
