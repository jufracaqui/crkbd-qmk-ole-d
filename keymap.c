#include QMK_KEYBOARD_H

#include "keymap_spanish.h"
#include "tap_dance.c"

#include "oled.c"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,---------------------------------------------.                    ,-----------------------------------------------------.
     TD(TD_ESC),  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  ES_QUOT,
  //|----------+------+-----+-------+------+------|                    |--------+--------+--------+--------+--------+--------|
     KC_DELETE,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,                      KC_H,    KC_J,    KC_K,    KC_L, ES_NTIL, ES_ACUT,
  //|----------+------+------+------+------+------|                    |--------+--------+--------+--------+--------+--------|
     KC_LGUI,   KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,                       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLASH,  ES_BSLS,
  //|----------+------+------+------+------+------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                              MO(1),   KC_SPACE,  KC_BSPACE,   KC_TAB,   KC_ENTER, MO(2)
                            //`----------------------------' `-------------------------'
  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_TRANSPARENT, ES_EXLM, ES_AT, ES_LCBR, ES_RCBR, ES_PIPE,                 ES_DQUO, ES_SLSH, XXXXXXX, XXXXXXX, ES_ASTR, KC_TRANSPARENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_TRANSPARENT, ES_HASH, ES_DLR, ES_LPRN, ES_RPRN, ES_GRV,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ES_PLUS, KC_TRANSPARENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LCTRL, ES_PERC, ES_CIRC, ES_LBRC, ES_RBRC, ES_TILD,                     ES_AMPR, XXXXXXX, ES_LABK, ES_RABK, ES_QUES, ES_IQUE,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                    XXXXXXX, KC_TRANSPARENT, KC_TRANSPARENT,           KC_TRANSPARENT, KC_TRANSPARENT, KC_LSHIFT
                   //`---------------------------------------------' `---------------------------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_CAPS, TD(TD_1), TD(TD_2), TD(TD_3), TD(TD_4), TD(TD_5),                 TD(TD_6), TD(TD_7), TD(TD_8), TD(TD_9), TD(TD_0), KC_F11,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     TO(0), XXXXXXX, XXXXXXX, KC_MS_UP, XXXXXXX, XXXXXXX,                       XXXXXXX,  XXXXXXX, KC_UP, XXXXXXX, XXXXXXX,  KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     TO(3), TO(4), KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_HOME,                KC_END, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, KC_TRANSPARENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                    KC_ASTG, KC_MS_BTN1, KC_MS_BTN2,            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
                   //`---------------------------------------------' `---------------------------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRANSPARENT, KC_Q, KC_W, KC_F, KC_P, KC_G,                             KC_J, KC_L, KC_U, KC_Y, XXXXXXX, KC_TRANSPARENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRANSPARENT, KC_A, KC_R, KC_S, KC_T, KC_D,                             KC_H, KC_N, KC_E, KC_I, KC_O, KC_TRANSPARENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRANSPARENT, KC_Z, KC_X, KC_C, KC_V, KC_B,                             KC_K, KC_M, KC_COMM, KC_DOT, KC_SLASH, KC_TRANSPARENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
                   //`---------------------------------------------' `---------------------------------------------'
  ),

  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,                                        KC_7, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_Q,  KC_W,  KC_E,  KC_R,  KC_T, KC_Y,                                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_A, KC_S, KC_D,  KC_F, KC_TAB, KC_P,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(0),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                    KC_LCTRL, KC_SPACE, KC_LALT,                       KC_ASTG, KC_ESCAPE, XXXXXXX
                   //`---------------------------------------------' `---------------------------------------------'
  )
};
// clang-format off
