#include "quantum.h"
#include "print_revision.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
	if(keycode == SEND_REV && record->event.pressed)
	{
		SEND_STRING("Layout revision: ");
		SEND_STRING(LAYOUT_REV);
	}
	return true;
}
