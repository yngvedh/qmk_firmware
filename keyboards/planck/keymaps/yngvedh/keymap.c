#include QMK_KEYBOARD_H

#define V_____V _______

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
		_______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
		_______, KC_GRV,  KC_QUOT, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX,
		_______, XXXXXXX, KC_BSLS, KC_MINS, KC_EQL,  XXXXXXX, XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, _______,
		_______, _______, _______, _______, V_____V,      _______,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
	[MOVE_] = LAYOUT_planck_1x2uC(
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_UP,   KC_END,  XXXXXXX, KC_DEL,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP, XXXXXXX,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN, _______,
		_______, _______, _______, _______, XXXXXXX,      _______,     V_____V, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
	[FUNC_] = LAYOUT_planck_1x2uC(
		RESET,   DEBUG,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,
		_______, _______, _______, _______, XXXXXXX,      _______,     XXXXXXX, XXXXXXX, XXXXXXX, V_____V, XXXXXXX)
};

/*

CHAR CODE SHIFT:
- KC_MINS _  
_ KC_UNDS
" KC_QUOT '
[ KC_LBRC {
[ KC_LCBR {
] KC_RBRC }
] KC_RCBR }
= KC_EQL  +
+ KC_PLUS
| KC_BSLS \
| KC_PIPE
` KC_GRV ~
~ KC_TILD
) KC_RPRN
! KC_EXLM
@ KC_AT
# KC_HASH
$ KC_DLR 
% KC_PERC
^ KC_CIRC
& KC_AMPR
* KC_ASTR
( KC_LPRN

*/