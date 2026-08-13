# uart

UART0 on Pico **GP0/GP1** (`board.uart0_tx` / `uart0_rx` → GPIO11/12).
Prints `hello` and echoes RX. Use a USB-UART adapter on D0/D1, or wire to
the board’s CH343 path if remapped — default matrix pins are D0/D1.

## Build

```sh
. $IDF_PATH/export.sh
cd ../.. && dart run /path/to/klin/bin/klin.dart get && cd examples/uart
make emit KLIN=/path/to/klin/bin/klin.dart
make build
make flash
```
