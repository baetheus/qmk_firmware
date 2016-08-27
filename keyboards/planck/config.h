/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define MANUFACTURER    Ortholiuinear Keyboards
#define PRODUCT         The Planck Keyboard
#define DESCRIPTION     A compact ortholinear keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* Planck PCB default pin-out */
// #define MATRIX_ROW_PINS { D0, D5, B5, B6 }
// #define MATRIX_COL_PINS { F1, F0, B0, C7, F4, F5, F6, F7, D4, D6, B4, D7 }
// #define UNUSED_PINS
// #define BACKLIGHT_PIN B7

/* Brandon Pearl Handwired Planck */
// #define MATRIX_ROW_PINS { E6, D0, D1, D2 }
// #define MATRIX_COL_PINS { D3, C6, D6, D7, B4, B5, B6, F6, F5, F4, F1, F0 }
// #define UNUSED_PINS

/* Brandon Carbon Handwired Planck */
#define MATRIX_ROW_PINS { B7, D0, D1, D2 }
#define MATRIX_COL_PINS { D3, C6, C7, D4, B6, F7, F6, F5, D6, D7, B4, B5 }
#define UNUSED_PINS

#define RGB_DI_PIN D5     // The pin your RGB strip is wired to
#define RGBLIGHT_TIMER    // Require for fancier stuff (not compatible with audio)
#define RGBLED_NUM 12     // Number of LEDs
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
#define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#ifdef SUBPROJECT_rev3
    #include "rev3/config.h"
#endif
#ifdef SUBPROJECT_rev4
    #include "rev4/config.h"
#endif

#endif
