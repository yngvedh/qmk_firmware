#include QMK_KEYBOARD_H

#define QWERTY_ 0
#define NUM_ 1
#define MOVE_ 2
#define FUNC_ 3

#define CTL_TAB LCTL_T(KC_TAB)

#define L_NUM MO(NUM_)
#define L_MOVE MO(MOVE_)
#define L_FUNC MO(FUNC_)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[QWERTY_] = LAYOUT_planck_1x2uC(
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
		CTL_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
		KC_LCTL, KC_LGUI, XXXXXXX, KC_LALT, L_NUM,       KC_SPC,       L_MOVE,  KC_RALT, XXXXXXX, L_FUNC,  KC_APP),
	[NUM_] = LAYOUT_planck_1x2uC(
		XXXXXXX, KC_EXLM, KC_PIPE, KC_PERC, KC_AMPR, XXXXXXX, XXXXXXX, KC_P7,   KC_P8,   KC_P9,   KC_P0,   XXXXXXX,
		_______, KC_PLUS, KC_PMNS, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX, KC_P4,   KC_P5,   KC_P6,   XXXXXXX, XXXXXXX,
		_______, KC_EQL,  KC_TILD, KC_QUOT, KC_AT,   XXXXXXX, KC_P0,   KC_P1,   KC_P2,   KC_P3,   XXXXXXX, _______,
		_______, _______, _______, _______, _______,      _______,     XXXXXXX, KC_P0,   XXXXXXX, XXXXXXX, XXXXXXX),
	[MOVE_] = LAYOUT_planck_1x2uC(
		XXXXXXX, KC_GRV,  KC_BSLS, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX, KC_HOME, KC_UP,   KC_END,  XXXXXXX, KC_DEL,
		_______, KC_ASTR, KC_UNDS, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
		_______, KC_HASH, KC_CIRC, KC_DQUO, KC_DLR,  XXXXXXX, XXXXXXX, KC_PGUP, XXXXXXX, KC_PGDN, XXXXXXX, _______,
		_______, _______, _______, _______, XXXXXXX,      _______,     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
	[FUNC_] = LAYOUT_planck_1x2uC(
		RESET,   DEBUG,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,
		_______, _______, _______, _______, _______,      _______,     XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX)
};
