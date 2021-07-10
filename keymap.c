#include QMK_KEYBOARD_H
// #include <unistd.h>
enum bfo900_layers { _OSX, _OSXMACROS, _WINDOWS, _WINDOWSMACROS, _GAMING };

enum bfo9000_keycodes { OSXSLACK = SAFE_RANGE, OSXSPOTIFY, OSXMEET, OSXMAIL, OSXMUTE, OSXSSO, OSXLOCK };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_OSX] = LAYOUT(
        KC_ESC,       OSXMUTE,        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_PGUP,         KC_VOLU, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        OSXSSO,       OSXLOCK,        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_PGDN,         KC_VOLD, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        OSXMEET,      OSXMAIL,        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,            KC_WH_U, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        OSXSPOTIFY,   OSXSLACK,       KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_BSPC,         KC_WH_D, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_NO,
        TO(_WINDOWS), TO(_GAMING),    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   LGUI(KC_P),      KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   OSXMUTE,
        TO(_OSX),     MO(_OSXMACROS), KC_LCTL, KC_MYCM, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, MO(_OSXMACROS),  KC_MRWD, KC_MPLY, KC_MFFD, KC_MSEL, KC_WSCH, KC_PSCR, KC_LEFT, KC_DOWN, KC_RGHT),

    [_OSXMACROS] = LAYOUT(
        KC_TRNS,      KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,      KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,      KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,      KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT,            KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        TO(_WINDOWS), TO(_GAMING), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        TO(_OSX),     KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [_WINDOWS] = LAYOUT(
        KC_ESC,       KC_T,           KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_PGUP,         KC_VOLU, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        KC_T,         KC_T,           KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_PGDN,         KC_VOLD, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_T,         KC_T,           KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,            KC_WH_U, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_T,         KC_T,           KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_BSPC,         KC_WH_D, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_NO,
        TO(_WINDOWS), TO(_GAMING),    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   LGUI(KC_P),      KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_NO,
        TO(_OSX),     MO(_OSXMACROS), KC_LCTL, KC_MYCM, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, LGUI(KC_K),      KC_MRWD, KC_MPLY, KC_MFFD, KC_MSEL, KC_WSCH, KC_PSCR, KC_LEFT, KC_DOWN, KC_RGHT),

    [_WINDOWSMACROS] = LAYOUT(
        KC_TRNS,      KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,      KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,      KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,      KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        TO(_WINDOWS), TO(_GAMING), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        TO(_OSX),     KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [_GAMING] = LAYOUT(
        KC_ESC,       KC_T,           KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_VOLU,          KC_VOLU, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        KC_T,         KC_T,           KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_VOLD,          KC_VOLD, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_T,         KC_6,           KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_P0,            KC_WH_U, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_T,         KC_T,           KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_BSPC,          KC_WH_D, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_NO,
        TO(_WINDOWS), TO(_GAMING),    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   LGUI(KC_P),       KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_NO,
        TO(_OSX),     MO(_OSXMACROS), KC_LCTL, KC_MYCM, KC_LCTL, KC_LALT, KC_SPC, KC_SPC, KC_SPC,           KC_MRWD, KC_MPLY, KC_MFFD, KC_MSEL, KC_WSCH, KC_PSCR, KC_LEFT, KC_DOWN, KC_RGHT)};

// fancy macro shit is going in here
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OSXMUTE:
            if (record->event.pressed) {
                register_code(KC_PPLS);
                tap_code(KC_P0);
                unregister_code(KC_PPLS);
            }
            return false;  // Skip all further processing of this key
        case OSXSLACK:
            if (record->event.pressed) {
                register_code(KC_PPLS);
                tap_code(KC_P1);
                unregister_code(KC_PPLS);
            }
            return false;  // Skip all further processing of this key

        case OSXSPOTIFY:
            if (record->event.pressed) {
                register_code(KC_PPLS);
                tap_code(KC_P3);
                unregister_code(KC_PPLS);
            }
            return false;  // Skip all further processing of this key
        case OSXMEET:
            if (record->event.pressed) {
                register_code(KC_PPLS);
                tap_code(KC_P4);
                unregister_code(KC_PPLS);
            }
            return false;  // Skip all further processing of this key
        case OSXMAIL:
            if (record->event.pressed) {
                register_code(KC_PPLS);
                tap_code(KC_P7);
                unregister_code(KC_PPLS);
            }
            return false;  // Skip all further processing of this key

        case OSXSSO:
            if (record->event.pressed) {
                register_code(KC_PPLS);
                tap_code(KC_P5);
                unregister_code(KC_PPLS);
            }
            return false;  // Skip all further processing of this key

        case OSXLOCK:
            if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_LGUI);
                tap_code(KC_Q);
                unregister_code(KC_LCTL);
                unregister_code(KC_LGUI);
            }
            return false;  // Skip all further processing of this key
        default:
            return true;  // Process all other keycodes normally
    }
}

void osxlaunch(void) {
    register_code(KC_LGUI);
    register_code(KC_SPC);
    unregister_code(KC_SPC);
    unregister_code(KC_LGUI);
}
