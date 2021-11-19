#include QMK_KEYBOARD_H

// Combos
const uint16_t PROGMEM combo_op[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo_as[] = {KC_A, KC_S, COMBO_END};

// Arrows
const uint16_t PROGMEM combo_lsmcl[] = {KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo_jk[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_kl[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_io[] = {KC_I, KC_O, COMBO_END};

// Register
combo_t key_combos[] = {
  COMBO(combo_op, KC_BSPC),
  COMBO(combo_as, KC_ESC),
  COMBO(combo_lsmcl, KC_RGHT),
  COMBO(combo_jk, KC_LEFT),
  COMBO(combo_kl, KC_DOWN),
  COMBO(combo_io, KC_UP),
};
// https://docs.qmk.fm/#/feature_combo?id=variable-length-combos
uint16_t COMBO_LEN = sizeof(key_combos) / sizeof(key_combos[0]);
