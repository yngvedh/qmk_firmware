#pragma once

#define V_____V _______

#define QWERTY_ 0
#define COLEMAK_ 1
#define MAC_ 3
#define NUM_ 4
#define MOVE_WIN_ 5
#define MOVE_MAC_ 6
#define FUNC_ 7

#define L_NUM MO(NUM_)
#define L_MOVE_WIN MO(MOVE_WIN_)
#define L_MOVE_MAC MO(MOVE_MAC_)
#define L_FUNC MO(FUNC_)

#define TGLCMAK TG(COLEMAK_)
#define TGLMAC TG(MAC_)

#define AE_WIN RALT(KC_Z)
#define OE_WIN RALT(KC_L)
#define AA_WIN RALT(KC_W)

#define AE_MAC RALT(KC_QUOT)
#define OE_MAC RALT(KC_O)
#define AA_MAC RALT(KC_A)


// Enable PERMISSIVE_HOLD and  to avoid the " c" problem
#define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

#define FORCE_NKRO
