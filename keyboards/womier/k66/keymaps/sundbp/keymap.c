#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _NORMAN,
    _FUNS,
    _RGB
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    KC_GESC          , KC_1       , KC_2     , KC_3    , KC_4    , KC_5    , KC_6       , KC_7      , KC_8    , KC_9      , KC_0    , KC_MINS , KC_EQL  , KC_BSPC , KC_PGUP ,
    KC_TAB           , KC_Q       , KC_W     , KC_E    , KC_R    , KC_T    , KC_Y       , KC_U      , KC_I    , KC_O      , KC_P    , KC_LBRC , KC_RBRC , KC_BSLS , KC_PGDN ,
    LCTL_T(KC_GRAVE) , KC_A       , KC_S     , KC_D    , KC_F    , KC_G    , KC_H       , KC_J      , KC_K    , KC_L      , KC_SCLN , KC_QUOT , KC_ENT            ,
    KC_LSPO          , KC_Z       , KC_X     , KC_C    , KC_V    , KC_B    , KC_N       , KC_M      , KC_COMM , KC_DOT    , KC_SLSH , KC_RSPC           , KC_UP   ,
    KC_HYPR          , KC_LGUI    , KC_LALT  ,                     KC_SPC                        , KC_RALT , MO(_FUNS) , MO(_RGB),           KC_LEFT , KC_DOWN , KC_RGHT
    ),

  [_NORMAN] = LAYOUT(
    KC_GESC          , KC_1       , KC_2     , KC_3    , KC_4    , KC_5    , KC_6       , KC_7      , KC_8    , KC_9      , KC_0    , KC_MINS , KC_EQL  , KC_BSPC , KC_PGUP ,
    KC_TAB           , KC_Q       , KC_W     , KC_D    , KC_F    , KC_K    , KC_J       , KC_U      , KC_R    , KC_L      , KC_SCLN , KC_LBRC , KC_RBRC , KC_BSLS , KC_PGDN ,
    LCTL_T(KC_GRAVE) , KC_A       , KC_S     , KC_E    , KC_T    , KC_G    , KC_Y       , KC_N      , KC_I    , KC_O      , KC_H    , KC_QUOT , KC_ENT            ,
    KC_LSPO          , KC_Z       , KC_X     , KC_C    , KC_V    , KC_B    , KC_P       , KC_M      , KC_COMM , KC_DOT    , KC_SLSH , KC_RSPC           , KC_UP   ,
    KC_HYPR          , KC_LGUI    , KC_LALT  ,                     KC_SPC                        , KC_RALT , MO(_FUNS) , MO(_RGB),           KC_LEFT , KC_DOWN , KC_RGHT
    ),

  [_FUNS] = LAYOUT(
    KC_GRV           , KC_F1      , KC_F2    , KC_F3   , KC_F4   , KC_F5   , KC_F6      , KC_F7     , KC_F8   , KC_F9     , KC_F10  , KC_F11  , KC_F12  , KC_MUTE , KC_HOME ,
    _______          , DF(_QWERTY), _______  , _______ , _______ , _______ , _______    , _______   , _______ , _______   , KC_PSCR , _______ , _______ , _______ , KC_END ,
    _______          , _______    , _______  , KC_DEL  , _______ , _______ , _______    , _______   , KC_INS  , _______   , _______ , _______ , KC_MPLY           ,
    _______          , _______    , _______  , _______ , _______ , _______ , DF(_NORMAN), _______   , _______ , _______   , _______ , _______           , KC_VOLU ,
    _______          , _______    , _______  ,                     _______                          , _______ , _______   , _______ ,           KC_MPRV , KC_VOLD , KC_MNXT
    ),

  [_RGB] = LAYOUT(
    RGB_MOD          , RGB_RMOD   , RGB_M_P  , RGB_M_B , RGB_M_R , RGB_M_SW , RGB_M_SN  , RGB_M_K , RGB_M_X , RGB_M_G   , RGB_M_T , _______ , _______ , RGB_TOG , RGB_VAI ,
    _______          , _______    , _______  , _______ , _______ , _______  , _______   , _______ , _______ , _______   , _______ , _______ , _______ , _______ , RGB_VAD ,
    _______          , _______    , _______  , _______ , _______ , _______  , _______   , _______ , _______ , _______   , _______ , _______ , _______           ,
    _______          , _______    , _______  , _______ , _______ , _______  , _______   , _______ , _______ , _______   , _______ , _______           , RGB_SAI ,
    _______          , _______    , _______  ,                     _______                        , _______ , _______   , _______ ,           RGB_HUD , RGB_SAD , RGB_HUI
    )
};

uint32_t layer_state_set_user(uint32_t state) {
    /*
      switch (biton32(state)) {
      case _QWERTY:
      // some action relating to layer change!
      break;
      default:
      break;
      }
     */
    return state;
}

void rgb_matrix_indicators_user(void) {
    switch (biton32(layer_state)) {
        // first deal with non-default layers
    case _RGB:
        rgb_matrix_set_color_all(225, 225, 100);
        //for (int i = 0; i < 10; i++) {
        //    rgb_matrix_set_color(i, 0, 100, 40);
        //}
        //rgb_matrix_set_color(12, 0, 100, 40);
        //rgb_matrix_set_color(13, 0, 100, 40);
        //rgb_matrix_set_color(27, 0, 100, 40);
        //rgb_matrix_set_color(55, 0, 100, 40);
        //rgb_matrix_set_color(63, 0, 100, 40);
        //rgb_matrix_set_color(64, 0, 100, 40);
        //rgb_matrix_set_color(65, 0, 100, 40);
        break;

    case _FUNS:
        rgb_matrix_set_color_all(75, 155, 205);
        //for (int i = 0; i < 14; i++) {
        //    rgb_matrix_set_color(i, 150, 0, 0);
        //}
        //rgb_matrix_set_color(15, 25, 150, 40);
        //rgb_matrix_set_color(23, 150, 20, 100);
        //rgb_matrix_set_color(23, 150, 20, 100);
        //rgb_matrix_set_color(31, 150, 20, 100);
        //rgb_matrix_set_color(36, 150, 20, 100);
        //rgb_matrix_set_color(41, 150, 20, 100);
        //rgb_matrix_set_color(48, 150, 20, 100);
        //rgb_matrix_set_color(55, 150, 20, 100);
        //rgb_matrix_set_color(63, 150, 20, 100);
        //rgb_matrix_set_color(64, 150, 20, 100);
        //rgb_matrix_set_color(65, 150, 20, 100);
        break;

    default:
        // when no function layer is active deal with default layers
        switch(biton32(default_layer_state)) {
        case _NORMAN:
            rgb_matrix_set_color_all(100, 200, 100);
            break;

        case _QWERTY:
            rgb_matrix_set_color_all(0, 0, 0);
            break;

        default:
            rgb_matrix_set_color_all(255, 0, 0);
            break;
        }
    }
}

void suspend_power_down_user(void) {
    rgb_matrix_set_suspend_state(true);
}

void suspend_wakeup_init_user(void) {
    rgb_matrix_set_suspend_state(false);
}
