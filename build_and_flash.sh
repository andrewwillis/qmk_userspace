#!/bin/bash
KEYMAP="${1:-andrewwillis}"
cd ../qmk_firmware
SKIP_FLASHING_SUPPORT=true QMK_USERSPACE=../qmk_userspace/ ./util/docker_build.sh ergodox_ez/base:${KEYMAP}
cd -

teensy_loader_cli -w -v --mcu=atmega32u4 ergodox_ez_base_${KEYMAP}.hex
