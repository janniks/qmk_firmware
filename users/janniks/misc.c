#include QMK_KEYBOARD_H

// COMBOS //////////////////////////////////////////////////////////////////////
const uint16_t PROGMEM combo_op[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo_as[] = {MT(MOD_LSFT, KC_A), MT(MOD_LCTL, KC_S), COMBO_END};

// Arrows
const uint16_t PROGMEM combo_lsmcl[] = {MT(MOD_RCTL, KC_L), MT(MOD_RSFT, KC_SCLN), COMBO_END};
const uint16_t PROGMEM combo_jk[] = {MT(MOD_RGUI, KC_J), MT(MOD_LALT, KC_K), COMBO_END};
const uint16_t PROGMEM combo_kl[] = {MT(MOD_LALT, KC_K), MT(MOD_RCTL, KC_L), COMBO_END};
const uint16_t PROGMEM combo_io[] = {KC_I, KC_O, COMBO_END};

// Register
combo_t key_combos[] = {
  COMBO(combo_op, KC_BSPC),
  COMBO(combo_as, MT(MOD_LSFT | MOD_LCTL, KC_ESC)),
  COMBO(combo_lsmcl, MT(MOD_RCTL | MOD_RSFT, KC_RGHT)),
  COMBO(combo_jk, MT(MOD_RGUI | MOD_LALT, KC_LEFT)),
  COMBO(combo_kl, MT(MOD_LALT | MOD_RCTL, KC_DOWN)),
  COMBO(combo_io, KC_UP),
};
// https://docs.qmk.fm/#/feature_combo?id=variable-length-combos
uint16_t COMBO_LEN = sizeof(key_combos) / sizeof(key_combos[0]);

// KEY OVERRIDES ///////////////////////////////////////////////////////////////
const key_override_t close_prn_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_RPRN);
const key_override_t close_brc_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, KC_RBRC);
const key_override_t close_cbr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_RCBR);

const key_override_t **key_overrides = (const key_override_t *[]){
    &close_prn_key_override, &close_brc_key_override, &close_cbr_key_override,
    &ko_make_basic(MOD_MASK_SHIFT, KC_BSPACE, KC_DELETE),
    NULL  // Null terminate the array of overrides!
};
