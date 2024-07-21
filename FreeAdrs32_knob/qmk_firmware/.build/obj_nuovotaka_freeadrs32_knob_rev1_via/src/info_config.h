// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

#ifndef DEBOUNCE
#    define DEBOUNCE 5
#endif // DEBOUNCE

#ifndef RGBLIGHT_HUE_STEP
#    define RGBLIGHT_HUE_STEP 17
#endif // RGBLIGHT_HUE_STEP

#ifndef RGBLIGHT_LED_COUNT
#    define RGBLIGHT_LED_COUNT 32
#endif // RGBLIGHT_LED_COUNT

#ifndef RGBLIGHT_LIMIT_VAL
#    define RGBLIGHT_LIMIT_VAL 120
#endif // RGBLIGHT_LIMIT_VAL

#ifndef RGBLIGHT_SAT_STEP
#    define RGBLIGHT_SAT_STEP 17
#endif // RGBLIGHT_SAT_STEP

#ifndef RGBLIGHT_VAL_STEP
#    define RGBLIGHT_VAL_STEP 12
#endif // RGBLIGHT_VAL_STEP

#ifndef WS2812_DI_PIN
#    define WS2812_DI_PIN D3
#endif // WS2812_DI_PIN

#ifndef DEVICE_VER
#    define DEVICE_VER 0x0100
#endif // DEVICE_VER

#ifndef MANUFACTURER
#    define MANUFACTURER "Takahiro Natsume"
#endif // MANUFACTURER

#ifndef PRODUCT
#    define PRODUCT "freeadrs32_knob"
#endif // PRODUCT

#ifndef PRODUCT_ID
#    define PRODUCT_ID 0x8832
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#    define VENDOR_ID 0x8832
#endif // VENDOR_ID

#ifndef MATRIX_COLS
#    define MATRIX_COLS 10
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 4
#endif // MATRIX_ROWS

#ifndef MATRIX_COL_PINS
#    define MATRIX_COL_PINS { F4, F5, F6, F7, B1 }
#endif // MATRIX_COL_PINS

#ifndef MATRIX_ROW_PINS
#    define MATRIX_ROW_PINS { D2, D4, C6, D7 }
#endif // MATRIX_ROW_PINS

#ifndef ENCODERS_PAD_A
#    define ENCODERS_PAD_A { E6, B5, B2 }
#endif // ENCODERS_PAD_A

#ifndef ENCODERS_PAD_B
#    define ENCODERS_PAD_B { B4, B6, B3 }
#endif // ENCODERS_PAD_B

#ifndef ENCODER_RESOLUTION
#    define ENCODER_RESOLUTION 2
#endif // ENCODER_RESOLUTION
