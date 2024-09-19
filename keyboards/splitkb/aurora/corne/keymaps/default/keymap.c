#include QMK_KEYBOARD_H

void keyboard_pre_init_user(void) {
    setPinOutput(24);
    writePinHigh(24);
}

void suspend_power_down_user(void) {
    oled_off();
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(
	    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
	    KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
	    KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,
	    KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
	    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,
	    KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC,
	    KC_LGUI, MO(1), KC_SPC,
	    KC_ENT, MO(2), KC_RALT
	),
	[1] = LAYOUT_split_3x6_3(
	    KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5,
	    KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
	    KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_DEL,
	    KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_LGUI, KC_TRNS, KC_SPC,
	    KC_ENT, MO(3), KC_RALT
	),
	[2] = LAYOUT_split_3x6_3(
	    KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,
	    KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_ASTR, KC_BSPC,
	    KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
	    KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
	    KC_LGUI, MO(3), KC_SPC,
	    KC_ENT, KC_TRNS, KC_RALT
	)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
