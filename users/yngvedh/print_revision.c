#include "quantum.h"
#include "print_revision.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
	if(keycode == SEND_REV && record->event.pressed)
	{
		SEND_STRING("Rev");
		SEND_STRING(LAYOUT_REV);

		SEND_STRING("-");
		SEND_STRING(IS_LAYER_ON(MAC_) ? "macOS" : "Windows");

        SEND_STRING("-");
        SEND_STRING(IS_LAYER_ON(COLEMAK_) ? "Colemak" : "Qwerty");
	}
	return true;
}
