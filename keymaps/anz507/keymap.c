#include QMK_KEYBOARD_H

enum combo_events {
  combo_ESC,
  combo_BACK,
  combo_TAB,
  combo_DELETE,
  combo_ENTER,
  combo_SWITCHTAB,
  combo_SWITCHREVTAB
};

const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM bspc_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM del_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM enter_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM switchtab_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM switchrevtab_combo[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[] = {
  [combo_ESC] = COMBO(esc_combo, KC_ESC),
  [combo_BACK] = COMBO(bspc_combo, KC_BSPC),
  [combo_TAB] = COMBO(tab_combo, KC_TAB),
  [combo_DELETE] = COMBO(del_combo, KC_DEL),
  [combo_ENTER] = COMBO(enter_combo, KC_ENT),
  [combo_SWITCHTAB] = COMBO(switchtab_combo, LGUI(KC_TAB)),
  [combo_SWITCHREVTAB] = COMBO(switchrevtab_combo, LSFT(LGUI(KC_TAB))),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
      KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,  KC_P,
      KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_NO, KC_L,
      LSFT_T(KC_Z), KC_NO, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, RSFT_T(KC_DOT),
      KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, LT(1, KC_SPC), MO(2), MO(3), KC_NO
    ),
    [1] = LAYOUT(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,
      KC_LCAP, KC_MNXT, KC_MPLY, KC_NO, KC_NO, KC_HOME, KC_END,  KC_PGUP, KC_NO, KC_PGDN,
      KC_LSFT, KC_NO, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
    [2] = LAYOUT(
      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
      KC_BSLS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_MINS, KC_EQL,  KC_LBRC, KC_NO, KC_RBRC,
      KC_LSFT, KC_NO, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_SCLN, KC_QUOT, KC_SLSH, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
    [3] = LAYOUT(
      KC_GRV, KC_NO, KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC,
      KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_PLUS, KC_LCBR, KC_NO, KC_RCBR,
      KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, QK_HAPTIC_TOGGLE, KC_NO, KC_NO, KC_NO
    ),
};
