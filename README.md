# waveshare_esp32_s3_pico

Klin board pack for [Waveshare ESP32-S3-Pico](https://www.waveshare.com/wiki/ESP32-S3-Pico)
(Pico form-factor, **ESP32-S3R2**).

Chip API: [`machine_esp`](https://github.com/klin-lang/machine_esp) `@v0.6.0`
(`*_s3` factories). Boot/flash via **ESP-IDF** in the examples (CH343 USB-UART
on the board’s USB-C).

**No Wi‑Fi / BLE** in this pack — silicon has radio; Klin `machine_esp` does not
expose `esp_wifi` (see Klin [099](https://github.com/klin-lang/klin/blob/main/issues/099-machine-esp-esp32-s3.md)).

## Status (`@v0.1.1`)

| Piece | Notes |
|---|---|
| Pin map | Pico silkscreen `d0`…`d28`, `a1`…`a3`, `rgb` (GPIO21), `usb_adc` |
| Helpers | `uart0_*`, `i2c0_*`, `spi_*`, `peri_hz` / `xtal_hz` (explicit) |
| WS2812 | `rgb_write` bit-bang, wire **RGB** (Waveshare FAQ; tune on HW; not RMT) |
| Examples | `blink` (D10→GPIO35), `rgb` (GPIO21) — `idf.py set-target esp32s3` |

## Usage

```klin
import "github/klin-lang/machine_esp" machine
import "github/klin-lang/waveshare_esp32_s3_pico" board

@[cexport, codename("klin_app_main")]
fn app() {
    let led = machine.pin_out_s3(board.d10())
    led.toggle()
}
```

```sh
klin get github/klin-lang/waveshare_esp32_s3_pico@v0.1.1
klin get github/klin-lang/machine_esp@v0.6.0
```

## Examples

```sh
. $IDF_PATH/export.sh
klin get   # from repo root (pulls machine_esp per klin.mod)
cd examples/blink   # or examples/rgb
make emit KLIN=/path/to/klin/bin/klin.dart
make build
make flash
```

## Pin map (silkscreen → GPIO)

| Pico | GPIO | Pico | GPIO |
|---|---|---|---|
| D0 | 11 | D15 | 40 |
| D1 | 12 | D16 | 42 |
| D2 | 13 | D17 | 41 |
| D3 | 14 | D18 | 1 |
| D4 | 15 | D19 | 2 |
| D5 | 16 | D20 | 4 |
| D6 | 17 | D21 | 5 |
| D7 | 18 | D22 | 6 |
| D8 | 33 | D26 / A1 | 7 |
| D9 | 34 | D27 / A2 | 8 |
| D10 | 35 | D28 / A3 | 9 |
| D11 | 36 | RGB | 21 |
| D12 | 37 | USB_ADC | 3 |
| D13 | 38 | | |
| D14 | 39 | | |

## Tests

```sh
dart run /path/to/klin/bin/klin.dart test waveshare_esp32_s3_pico/
```

Host tests cover pin-map constants only (no MMIO).

## License

MIT
