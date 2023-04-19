#include QMK_KEYBOARD_H

#define V_____V _______

#define QWERTY_ 0
#define COLEMAK_ 1
#define NUM_ 2
#define MOVE_ 3
#define FUNC_ 4

#define L_NUM MO(NUM_)
#define L_MOVE MO(MOVE_)
#define L_FUNC MO(FUNC_)
#define TGLCMAK TG(COLEMAK_)

#define AE_WIN RALT(KC_Z)
#define OE_WIN RALT(KC_L)
#define AA_WIN RALT(KC_W)

#define AE_MAC RALT(KC_QUOT)
#define OE_MAC RALT(KC_O)
#define AA_MAC RALT(KC_A)

enum custom_keycodes {
	SEND_REV = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[QWERTY_] = LAYOUT_planck_1x2uC(
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
		KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
		KC_LCTL, KC_LGUI, KC_RGUI, KC_LALT, L_NUM,       KC_SPC,       L_MOVE,  KC_RALT, XXXXXXX, L_FUNC,  KC_APP),
	[COLEMAK_] = LAYOUT_planck_1x2uC(
		_______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, _______,
		_______, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    _______,
		_______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
		_______, _______, _______, _______, _______,      _______,     _______, _______, _______, _______, _______),
	[NUM_] = LAYOUT_planck_1x2uC(
		_______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
		_______, KC_GRV,  KC_QUOT, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX,
		_______, XXXXXXX, KC_BSLS, KC_MINS, KC_EQL,  XXXXXXX, XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, _______,
		_______, _______, _______, _______, V_____V,      _______,     L_FUNC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
	[MOVE_] = LAYOUT_planck_1x2uC(
		_______, OE_MAC,  OE_WIN,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_UP,   KC_END,  KC_PSCR, KC_DEL,
		_______, AA_MAC,  AA_WIN,  KC_LALT, KC_LCTL, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP, XXXXXXX,
		_______, AE_MAC,  AE_WIN,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN, _______,
		_______, _______, _______, _______, L_FUNC,       _______,     V_____V, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
	[FUNC_] = LAYOUT_planck_1x2uC(
		QK_BOOT, DB_TOGG,  SEND_REV, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  TGLCMAK,
		_______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,
		_______, XXXXXXX,RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,
		_______, _______, _______, _______, V_____V,      _______,     V_____V, XXXXXXX, XXXXXXX, V_____V, XXXXXXX)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
	if(keycode == SEND_REV && record->event.pressed)
	{
		SEND_STRING("Layout revision: ");
		SEND_STRING(LAYOUT_REV);
	}
	return true;
}


