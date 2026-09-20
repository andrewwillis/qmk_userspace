
smtd_resolution on_smtd_action(uint16_t keycode, smtd_action action, uint8_t tap_count) {
    switch (keycode) {
        SMTD_MT(KC_A, KC_LEFT_CTRL)
        SMTD_MT(KC_S, KC_LEFT_ALT)
        SMTD_MT(KC_D, KC_LEFT_GUI)
        SMTD_MT(KC_F, KC_LSFT)
        SMTD_MT(KC_J, KC_RSFT)
        SMTD_MT(KC_K, KC_RIGHT_GUI) 
        SMTD_MT(KC_L, KC_RIGHT_ALT)
        SMTD_MT(KC_SCLN, KC_RIGHT_CTRL)
    }

    return SMTD_RESOLUTION_UNHANDLED;
}
