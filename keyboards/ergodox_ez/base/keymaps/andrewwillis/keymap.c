const uint16_t PROGMEM double_shift_combo[] = {KC_LSFT, KC_RSFT, COMBO_END};
const uint16_t PROGMEM yu_esc[] = {KC_Y, KC_U, COMBO_END};

combo_t key_combos[] = {
    COMBO(double_shift_combo, LSFT(KC_F5)),
    COMBO(yu_esc, KC_ESC)
};
