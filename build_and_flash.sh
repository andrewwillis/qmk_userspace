#!/bin/bash
cd ../qmk_firmware
SKIP_FLASHING_SUPPORT=true QMK_USERSPACE=../qmk_userspace/ ./util/docker_build.sh ergodox_ez/base:andrewwillis
cd -

teensy_loader_cli -w -v --mcu=atmega32u4 ergodox_ez_base_andrewwillis.hex
