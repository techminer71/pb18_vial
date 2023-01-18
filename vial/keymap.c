#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*
	+---+---+---+---+---+---+
	| 0 | 1 | 2 | 3 | 4 | 5 |
	+---+---+---+---+---+---+
	| 6 | 7 | 8 | 9 | a | b |
	+---+---+---+---+---+---+
	| c | d | e | f | g | h |
	+---+---+---+---+---+---+
	*/
    [0] = LAYOUT(
        LT(0,KC_NO), LT(1,QK_BOOTLOADER), KC_2, KC_3, 			LCA(KC_2),		KC_VOLU,
        KC_6, 		 KC_7, 		  		  KC_8, KC_9, 			LALT(KC_2),	    KC_VOLD, 
        KC_C, 		 KC_D, 		  		  KC_E, LT(15,KC_MPLY), LT(11,KC_MPRV), LT(12,KC_MNXT)
           
    )

};