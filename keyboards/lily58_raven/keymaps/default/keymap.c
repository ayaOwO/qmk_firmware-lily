// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define LAYOUT LAYOUT_lily58
#define MISSING

enum layer_number {
    _BASE = 0,
    _FUNC,
    _MOUSE,
    _NMPAD,
    _EMPTY=99,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* BASE
     * ┌──────┬──────┬──────┬──────┬──────┬──────┐                    ┌──────┬──────┬──────┬──────┬──────┬──────┐
     * │   `  │   1  │   2  │   3  │   4  │   5  │                    │   6  │   7  │   8  │   9  │   0  │  -   │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │ Tab  │   Q  │   W  │   E  │   R  │   T  │                    │   Y  │   U  │   I  │   O  │   P  │  =   │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │LShift│   A  │   S  │   D  │   F  │   G  ├───────┐    ┌───────┤   H  │   J  │   K  │   L  │   ;  │  \   │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤   [   │    │    ]  ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │LCTRL │   Z  │   X  │   C  │   V  │   B  ├───────│    │───────┤   N  │   M  │   ,  │   .  │   /  │  '   │
     * └──────┴──────┴───┬──┴───┬──┴───┬──┴───┬──/       /     \      \───┬──┴───┬──┴───┬──┴───┬──┴──────┴──────┘
     *                   │ LAlt │ LGUI │ Mod1 │ /  Esc  /       \Enter \  │Space │BackSP│ Del  │
     *                   │      │ WIN  │      │/       /         \      \ │      │      │      │
     *                   └──────┴──────┴──────┴───────'           '──────'┴──────┴──────┴──────┘
     */
    /* FUNC
     * ┌──────┬──────┬──────┬──────┬──────┬──────┐                    ┌──────┬──────┬──────┬──────┬──────┬──────┐
     * │      │  F1  │  F2  │  F3  │  F4  │  F5  │                    │  F6  │  F7  │  F8  │  F9  │  F10 │  F11 │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │ NMPAD│ MOUSE│                    │      │      │ INS  │ WSS  │ PrtSc│  F12 │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      ├───────┐    ┌───────┤ LEFT │ DWN  │ UP   │ RGHT │      │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤ CURR  │    │ MENU  ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      ├───────│    │───────┤ HOME │ PGDWN│ PGUP │ END  │      │CPLCK │
     * └──────┴──────┴───┬──┴───┬──┴───┬──┴───┬──/       /     \      \───┬──┴───┬──┴───┬──┴───┬──┴──────┴──────┘
     *                   │      │      │      │ / BASE  /       \      \  │      │      │      │
     *                   │      │      │      │/       /         \      \ │      │      │      │
     *                   └──────┴──────┴──────┴───────'           '──────'┴──────┴──────┴──────┘
     */
    /* Mouse
     * ┌──────┬──────┬──────┬──────┬──────┬──────┐                    ┌──────┬──────┬──────┬──────┬──────┬──────┐
     * │      │      │      │      │      │      │                    │      │      │      │      │      │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      │                    │      │      │      │      │      │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      ├───────┐    ┌───────┤MLEFT │MDWN  │MUP   │MRGHT │      │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤       │    │       ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      ├───────│    │───────┤SLEFT │SDWN  │SUP   │SRGHT │      │      │
     * └──────┴──────┴───┬──┴───┬──┴───┬──┴───┬──/       /     \      \───┬──┴───┬──┴───┬──┴───┬──┴──────┴──────┘
     *                   │      │      │      │ / BASE  /       \      \  │      │      │      │
     *                   │      │      │      │/       /         \      \ │      │      │      │
     *                   └──────┴──────┴──────┴───────'           '──────'┴──────┴──────┴──────┘
     */
    /* NMPAD
     * ┌──────┬──────┬──────┬──────┬──────┬──────┐                    ┌──────┬──────┬──────┬──────┬──────┬──────┐
     * │      │      │      │      │      │      │                    │      │ NMLCK│   /  │   *  │   -  │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      │                    │      │   7  │   8  │   9  │   +  │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      ├───────┐    ┌───────┤      │   4  │   5  │   6  │   =  │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤       │    │       ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      ├───────│    │───────┤      │   1  │   2  │   3  │ ENTR │      │
     * └──────┴──────┴───┬──┴───┬──┴───┬──┴───┬──/       /     \      \───┬──┴───┬──┴───┬──┴───┬──┴──────┴──────┘
     *                   │      │      │      │ / BASE  /       \      \  │   0  │   .  │      │
     *                   │      │      │      │/       /         \      \ │      │      │      │
     *                   └──────┴──────┴──────┴───────'           '──────'┴──────┴──────┴──────┘
     */
    /* Empty
     * ┌──────┬──────┬──────┬──────┬──────┬──────┐                    ┌──────┬──────┬──────┬──────┬──────┬──────┐
     * │      │      │      │      │      │      │                    │      │      │      │      │      │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      │                    │      │      │      │      │      │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      ├───────┐    ┌───────┤      │      │      │      │      │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤       │    │       ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      ├───────│    │───────┤      │      │      │      │      │      │
     * └──────┴──────┴───┬──┴───┬──┴───┬──┴───┬──/       /     \      \───┬──┴───┬──┴───┬──┴───┬──┴──────┴──────┘
     *                   │      │      │      │ /       /       \      \  │      │      │      │
     *                   │      │      │      │/       /         \      \ │      │      │      │
     *                   └──────┴──────┴──────┴───────'           '──────'┴──────┴──────┴──────┘
     */
    /* clang-format off */
    [_BASE] = LAYOUT(
          KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
          KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
          KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_BSLS,
          KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
                       KC_LALT, KC_LGUI, MO(_FUNC), KC_ESC, KC_LBRC,             KC_RBRC, KC_ENT,  KC_SPC, KC_BSPC, KC_DEL
        ),
    [_FUNC] = LAYOUT(
          KC_TRNS,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                        KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                      KC_TRNS,    KC_TRNS,    KC_INS,     KC_TRNS,    KC_PRINT_SCREEN,    KC_F12,
          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                      KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_RIGHT,    KC_TRNS,
          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                      KC_HOME,    KC_PGDN,    KC_PGUP,    KC_HOME,    KC_TRNS,    KC_CAPS,
                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,             KC_APP,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
        ),
    [_MOUSE] = LAYOUT(
          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,             KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
        ),
    [_NMPAD] = LAYOUT(
          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                      KC_TRNS,    KC_NUM_LOCK,    KC_KP_SLASH,    KC_KP_ASTERISK,    KC_MINS,    KC_TRNS,
          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                      KC_TRNS,    KC_KP_7,    KC_KP_8,    KC_KP_9,    KC_KP_PLUS,    KC_TRNS,
          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                      KC_TRNS,    KC_KP_4,    KC_KP_5,    KC_KP_6,   KC_KP_EQUAL, KC_TRNS,
          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                      KC_TRNS,    KC_KP_1,    KC_KP_2,    KC_KP_3, KC_TRNS,    KC_TRNS,
                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,             KC_TRNS,    KC_KP_0,    KC_DOT,    KC_ENTER,    KC_TRNS
        ),
    /* clang-format on */
};

void keyboard_post_init_user(void) {
    if (is_keyboard_left()) {
        setrgb(255, 0, 100, (rgb_led_t *)&led[0]);
    } else {
        setrgb(100, 0, 255, (rgb_led_t *)&led[0]);
    }
    rgblight_set();
}
