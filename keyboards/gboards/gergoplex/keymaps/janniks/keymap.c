//------------------------------------------------------------------------------
// How to compile or flash:
// $ . .venv/bin/activate
// $ .venv/bin/qmk compile -kb gboards/gergoplex -km janniks
// $ .venv/bin/qmk flash -kb gboards/gergoplex -km janniks
//------------------------------------------------------------------------------

#include QMK_KEYBOARD_H
// #include "g/keymap_combo.h"

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
  KC_A,               KC_S,               KC_D,               KC_F,               KC_G,    KC_H, KC_J,               KC_K,                  KC_L,                 KC_SCLN,
  MT(MOD_LSFT, KC_Z), MT(MOD_LCTL, KC_X), MT(MOD_LALT, KC_C), MT(MOD_LGUI, KC_V), KC_B,    KC_N, MT(MOD_RGUI, KC_M), MT(MOD_RALT, KC_COMM), MT(MOD_RCTL, KC_DOT), MT(MOD_RSFT, KC_SLSH),

  // MT(MOD_LALT, KC_ESC),   MT(MOD_LGUI, KC_SPC), LT(_SYM_LEFT, KC_TAB),               // Left
  // LT(_SYM_RIGHT, KC_ENT), KC_SPC,               MT(MOD_RCTL, KC_TAB)                 // Right

  // todo: remove again, test with less mods in bottom row
  KC_ESC,                 MT(MOD_LGUI, KC_SPC), LT(_SYM_LEFT, KC_TAB),               // Left
  LT(_SYM_RIGHT, KC_ENT), KC_SPC,               KC_TAB                               // Right
),

[_SYM_LEFT] = LAYOUT_split_3x5_3(
  KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_PIPE,    KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU,
  KC_EXLM,               KC_AT,   KC_HASH, KC_DLR,  KC_PERC,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  MT(MOD_LSFT, KC_TRNS), KC_TRNS, KC_TRNS, KC_GRV,  KC_TILD,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   MT(MOD_RSFT, KC_F10),
                                  KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_MPLY, KC_MNXT
),

[_SYM_RIGHT] = LAYOUT_split_3x5_3(
  KC_TRNS,             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_PLUS, KC_UNDS, KC_TRNS, KC_LCBR, KC_BSLS,
  KC_1,                KC_2,    KC_3,    KC_4,    KC_5,       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_QUOT,
  MT(MOD_LSFT, KC_F1), KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_MINS, KC_EQL,  KC_BSLS, KC_LBRC, MT(MOD_RSFT, KC_BSLS),
                                  KC_F11, KC_F12, KC_TRNS,    KC_TRNS, KC_TRNS, KC_DEL
)};

// Key Overrides
const key_override_t close_prn_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_RPRN);
const key_override_t close_brc_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, KC_RBRC);
const key_override_t close_cbr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_RCBR);

const key_override_t **key_overrides = (const key_override_t *[]){
    &close_prn_key_override, &close_brc_key_override, &close_cbr_key_override,
    &ko_make_basic(MOD_MASK_SHIFT, KC_BSPACE, KC_DELETE),
    NULL  // Null terminate the array of overrides!
};
