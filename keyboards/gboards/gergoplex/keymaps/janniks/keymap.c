//------------------------------------------------------------------------------
// How to compile or flash:
// $ . .venv/bin/activate
// $ .venv/bin/qmk compile -kb gboards/gergoplex -km janniks
// $ .venv/bin/qmk flash -kb gboards/gergoplex -km janniks
//------------------------------------------------------------------------------

#include QMK_KEYBOARD_H

// Layers
enum {
    _BASE,      // default
    _SYM_LEFT,  // symbols left
    _SYM_RIGHT  // symbols right
};

// Keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_split_3x5_3(
  KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,    KC_Y, KC_U,               KC_I,                  KC_O,                 KC_P,
  MT(MOD_LSFT, KC_A), MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_D), MT(MOD_LGUI, KC_F), KC_G,    KC_H, MT(MOD_RGUI, KC_J), MT(MOD_LALT, KC_K),    MT(MOD_RCTL, KC_L),   MT(MOD_RSFT, KC_SCLN),
  MT(MOD_LSFT, KC_Z), KC_X,               KC_C,               KC_V,               KC_B,    KC_N, KC_M,               KC_COMM,               KC_DOT,               MT(MOD_RSFT, KC_SLSH),

  KC_ESC,                 MT(MOD_LGUI, KC_SPC), LT(_SYM_LEFT, KC_TAB),               // Left
  LT(_SYM_RIGHT, KC_ENT), KC_SPC,               KC_TAB                               // Right
),

[_SYM_LEFT] = LAYOUT_split_3x5_3(
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PIPE,    KC_MPRV, KC_7, KC_8, KC_9, KC_VOLU,
  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,    KC_MPLY, KC_4, KC_5, KC_6, KC_VOLD,

  KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV,  KC_TILD,    KC_MNXT, KC_1, KC_2, KC_3, MT(MOD_RSFT, KC_TRNS),
                    KC_TRNS, KC_TRNS, KC_TRNS,    KC_MINS, KC_0, KC_MINS
),

[_SYM_RIGHT] = LAYOUT_split_3x5_3(
  KC_TRNS,             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_PLUS, KC_UNDS, KC_TRNS, KC_LCBR, KC_BSLS,
  KC_1,                KC_2,    KC_3,    KC_4,    KC_5,       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_QUOT,
  MT(MOD_LSFT, KC_F1), KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_MINS, KC_EQL,  KC_PIPE, KC_LBRC, MT(MOD_RSFT, KC_BSLS),
                                KC_F11,  KC_F12,  KC_TRNS,    KC_TRNS, KC_TRNS, KC_DEL
)};

