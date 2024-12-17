#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#define TAPPING_TERM 200
#define QUICK_TAP_TERM 0
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#define COMBO_ONLY_FROM_LAYER 0
#define ONESHOT_TIMEOUT 1000

#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_WHEEL_DELAY 0

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define OLED_BRIGHTNESS 150

// Fixes the issue of having to disconnect and reconnect after a system boot
// However, it adds a long boot delay to the slave side if flashed onto it with this enabled
#define SPLIT_USB_TIMEOUT 10000
#define SPLIT_USB_TIMEOUT_POLL 10
