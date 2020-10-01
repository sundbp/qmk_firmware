## chip/board settings
# - the next two should match the directories in
#   <chibios>/os/hal/ports/$(MCU_FAMILY)/$(MCU_SERIES)
MCU_FAMILY = SN32
MCU_SERIES = SN32F260

# Linker script to use
# - it should exist either in <chibios>/os/common/ports/ARMCMx/compilers/GCC/ld/
#   or <this_dir>/ld/
MCU_LDSCRIPT = SN32F260

# Startup code to use
#  - it should exist in <chibios>/os/common/startup/ARMCMx/compilers/GCC/mk/
MCU_STARTUP = sn32f26x

# Board: it should exist either in <chibios>/os/hal/boards/
#  or <this_dir>/boards
BOARD = SN_SN32F260

# Cortex version
MCU  = cortex-m0

# ARM version, CORTEX-M0/M1 are 6, CORTEX-M3/M4/M7 are 7
ARMV = 6

# BOOTLOADER = flash

OPT_DEFS = -Og

# Options to pass to dfu-util when flashing
# DFU_ARGS = -d 0483:df11 -a 0 -s 0x08000000:leave
# DFU_SUFFIX_ARGS = -p DF11 -v 0483

# Build Options

LTO_ENABLE = yes
EXTRAKEY_ENABLE = yes
CUSTOM_MATRIX = yes
RGB_MATRIX_ENABLE = custom

NKRO_ENABLE = no
BACKLIGHT_ENABLE = no
MAGIC_ENABLE = no
MAGIC_KEYCODE_ENABLE = no
BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
SLEEP_LED_ENABLE = no
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = no
SERIAL_LINK_ENABLE = no
LEADER_ENABLE = no
VIA_ENABLE = no

EXTRALDFLAGS = --specs=nano.specs
USE_PROCESS_STACKSIZE = 0x180
USE_EXCEPTIONS_STACKSIZE = 0x100

ALLOW_WARNINGS=yes

SRC = matrix.c led_matrix.c
