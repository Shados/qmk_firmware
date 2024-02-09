// Copyright 2024 Alexei Robyn (@Shados)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │Esc│F5 │ = │Fn │
     * ├───┼───┼───┼───┤
     * │Num│ / │ * │ - │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┤ + │
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┴───┼───┤Ent│
     * │   0   │ . │   │
     * └───────┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,  KC_F5,   KC_PEQL, MO(1),
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_P0,   KC_PDOT
    ),
    /* FN layer
     * ┌───┬───┬───┬───┐
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │   │   │   │BL-│
     * ├───┼───┼───┼───┤
     * │   │ ↑ │   │   │
     * ├───┼───┼───┤BL+│
     * │ ← │   │ → │   │
     * ├───┼───┼───┼───┤
     * │   │ ↓ │   │   │
     * ├───┴───┼───┤BLT│
     * │QK_BOOT│Del│   │
     * └───────┴───┴───┘
     */
    [1] = LAYOUT(
        BL_ON, BL_OFF, _______, _______,
        _______, _______, _______, BL_DOWN,
        _______, KC_UP,   _______, BL_UP,
        KC_LEFT, _______, KC_RGHT,
        _______, KC_DOWN, _______, BL_TOGG,
        QK_BOOT, KC_DEL
    ),
};
