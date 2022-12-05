// Copyright 2022 Yoichiro Tanaka (@yoichiro)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_ortho_2x4(
     KC_A, KC_B, KC_C, KC_D, 
     KC_E, KC_F, KC_G, RGB_RMOD
  )
};

/* Rotary encoder settings */
bool encoder_update_user(uint8_t index, bool clockwise) {
   if (clockwise) {
        tap_code(KC_UP);    //Rotary encoder clockwise
    } else {
        tap_code(KC_DOWN);  //Rotary encoder Reverse clockwise
    }
    return true;
}
