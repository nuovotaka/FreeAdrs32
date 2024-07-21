# Copyright 2024 QMK
# SPDX-License-Identifier: GPL-2.0-or-later

################################################################################
#
# 88888888888 888      d8b                .d888 d8b 888               d8b
#     888     888      Y8P               d88P"  Y8P 888               Y8P
#     888     888                        888        888
#     888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
#     888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
#     888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
#     888     888  888 888      X88      888    888 888 Y8b.          888      X88
#     888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
#
#                                                       888                 888
#                                                       888                 888
#                                                       888                 888
#    .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
#   d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
#   888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
#   Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
#    "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
#        888
#   Y8b d88P
#    "Y88P"
#
################################################################################

BOOTLOADER ?= caterina
BOOTMAGIC_ENABLE ?= no
ENCODER_ENABLE ?= yes
LTO_ENABLE ?= yes
MCU ?= atmega32u4
MOUSEKEY_ENABLE ?= no
PLATFORM_KEY ?= avr
RGB_MATRIX_DRIVER ?= ws2812
BOOTMAGIC_ENABLE ?= no
EXTRAKEY_ENABLE ?= no
CONSOLE_ENABLE ?= no
COMMAND_ENABLE ?= no
NKRO_ENABLE ?= no
BACKLIGHT_ENABLE ?= no
AUDIO_ENABLE ?= no
VIA_ENABLE ?= yes
ENCODER_ENABLE ?= yes
ENCODER_MAP_ENABLE ?= yes
MOUSEKEY_ENABLE ?= no
RGBLIGHT_ENABLE ?= yes
OLED_ENABLE ?= no
SPACE_CADET_ENABLE ?= no
GRAVE_ESC_ENABLE ?= no
MAGIC_ENABLE ?= no
