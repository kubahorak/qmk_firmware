/* Copyright 2023 Jakub Horak (@kubahorak)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keymap_user.h"
#ifdef RGB_MATRIX_ENABLE
#    include "rgb_matrix_user.h"
#endif

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[MAC_BASE] = LAYOUT_iso_83(
            KC_ESC,    KC_BRID,   KC_BRIU,   KC_F3,    KC_F4,     RGB_VAD,    RGB_VAI,   KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU,   KC_DEL,    KC_MUTE,
            KC_GRV,    KC_1,      KC_2,      KC_3,     KC_4,      KC_5,       KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_HOME,
            KC_TAB,    KC_Q,      KC_W,      KC_E,     KC_R,      KC_T,       KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_PGUP,
            KC_CAPS,   KC_A,      KC_S,      KC_D,     KC_F,      KC_G,       KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,   KC_NUHS,   KC_ENT,    KC_PGDN,
            KC_LSFT,   KC_NUBS,   KC_Z,      KC_X,     KC_C,      KC_V,       KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,   KC_UP,
            KC_LCTL,   KC_LALT,   KC_LGUI,   KC_SPC,   KC_RGUI,   MO(MAC_FN), KC_RCTL,   KC_LEFT,   KC_DOWN,   KC_RGHT
            ),
	[MAC_FN] = LAYOUT_iso_83(
            _______,   KC_F1,      KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    RSFT(KC_INS),   RGB_TOG,
            _______,   _______,    _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,        _______,
            RGB_TOG,   RGB_MOD,    RGB_VAI,   RGB_HUI,   RGB_SAI,   RGB_SPI,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
            _______,   RGB_RMOD,   RGB_VAD,   RGB_HUD,   RGB_SAD,   RGB_SPD,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,        _______,
            _______,   _______,    _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
            _______,   _______,    _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______
            ),
    [WIN_BASE] = LAYOUT_iso_83(
            KC_ESC,    KC_F1,     KC_F2,     KC_F3,    KC_F4,     KC_F5,      KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_DEL,    KC_MUTE,
            KC_GRV,    KC_1,      KC_2,      KC_3,     KC_4,      KC_5,       KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_HOME,
            KC_TAB,    KC_Q,      KC_W,      KC_E,     KC_R,      KC_T,       KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_PGUP,
            KC_CAPS,   KC_A,      KC_S,      KC_D,     KC_F,      KC_G,       KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,   KC_NUHS,   KC_ENT,    KC_PGDN,
            KC_LSFT,   KC_NUBS,   KC_Z,      KC_X,     KC_C,      KC_V,       KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,   KC_UP,
            KC_LCTL,   KC_LGUI,   KC_LALT,   KC_SPC,   KC_RALT,   MO(WIN_FN), KC_RCTL,   KC_LEFT,   KC_DOWN,   KC_RGHT
            ),
	[WIN_FN] = LAYOUT_iso_83(
            _______,   KC_BRID,    KC_BRIU,   LGUI(KC_TAB),   LGUI(KC_E),   RGB_VAD,   RGB_VAI,   KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU,   RSFT(KC_INS),   RGB_TOG,
            _______,   _______,    _______,   _______,        _______,      _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,        _______,
            RGB_TOG,   RGB_MOD,    RGB_VAI,   RGB_HUI,        RGB_SAI,      RGB_SPI,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
            _______,   RGB_RMOD,   RGB_VAD,   RGB_HUD,        RGB_SAD,      RGB_SPD,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,        _______,
            _______,   _______,    _______,   _______,        _______,      _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
            _______,   _______,    _______,   _______,        _______,      _______,   _______,   _______,   _______,   _______
            )
};

// clang-format on

void matrix_init_user(void) {
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_init_user();
#endif
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [MAC_FN]   = { ENCODER_CCW_CW(RGB_VAI, RGB_VAD) },
    [WIN_BASE] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [WIN_FN]   = { ENCODER_CCW_CW(RGB_VAI, RGB_VAD) },
};
#endif
