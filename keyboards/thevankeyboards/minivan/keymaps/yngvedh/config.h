#ifndef CONFIG_H
#define CONFIG_H
#include "../../config.h"

#define VENDOR_ID     0xFEAE
#define PRODUCT_ID    0x8847
#define DEVICE_VER    0x0001
#define MANUFACTURER  TheVan Keyboards
#define PRODUCT       MiniVan
#define DESCRIPTION   Hotswap MiniVan 40%

#define MATRIX_ROWS 4
#define MATRIX_COLS 12
#define MATRIX_ROW_PINS { D7, B5, F7, D4 }
#define MATRIX_COL_PINS { D2, D3, D5, D6, B4, B6, F6, F5, F4, F1, F0, B3 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_LEVELS 1
#define BACKLIGHT_PIN B7

#define DEBOUNCE 5
#define TAPPING_TERM 175

#define USB_MAX_POWER_CONSUMPTION 100
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
#define PERMISSIVE_HOLD
#define RGB_DI_PIN D0
#define RGBLED_NUM 3
#define RGBLIGHT_CUSTOM_LED_INIT
#define RGBLIGHT_SLEEP
#define IS_COMMAND() ( keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) )
#endif