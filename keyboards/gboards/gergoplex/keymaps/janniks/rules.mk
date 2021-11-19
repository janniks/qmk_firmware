# Firmware options
KEY_OVERRIDE_ENABLE    = yes
COMBO_ENABLE           = yes

# Debug options
VERBOSE                = no
DEBUG_MATRIX_SCAN_RATE = no
DEBUG_MATRIX           = no
CONSOLE_ENABLE         = no

# gBoards Combos
VPATH                 += keyboards/gboards/

# QMK Combos
SRC                   += combos.c

ifeq ($(strip $(DEBUG_MATRIX)), yes)
  OPT_DEFS += -DDEBUG_MATRIX
endif
