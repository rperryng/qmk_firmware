#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

#define KC_WSWCH LALT(LCTL(LSFT(KC_W)))

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,  TO(1),      TO(3),      TO(4),      TO(5),      TO(6),      KC_PSCREEN,                                 TO(8),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    MO(7),
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       TOGGLE_LAYER_COLOR,                         TO(6),      KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPACE,
    KC_LCTRL,   KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                                               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCOLON,  KC_ESCAPE,
    KC_LSHIFT,  KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       RGB_TOG,                                    TO(2),      KC_N,       KC_M,       KC_COMMA,   KC_DOT,     KC_SLASH,   KC_RSHIFT,
    KC_LALT,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_LALT,                                                                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_RCTRL,
                                                                           KC_AUDIO_MUTE,  KC_VOLU,     KC_MPRV,        KC_MSTP,
                                                                                           KC_VOLD,     KC_MPLY,
                                                                MO(4),     KC_LGUI,        KC_LGUI,     KC_SWSCH,       LT(5,KC_ENTER), LT(4,KC_SPACE)
  ),

  [1] = LAYOUT_ergodox_pretty(
    KC_TRNS,    TO(0),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                    TO(6),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                                                    TO(0),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                                                            KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,
                                                                                           KC_TRNS,     KC_TRNS,
                                                                KC_TRNS,    KC_LCTRL,      KC_LGUI,     KC_TRNS,        LT(5,KC_ENTER), LT(4,KC_SPACE)
  ),

  [2] = LAYOUT_ergodox_pretty(
    KC_TRNS,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                    TO(0),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                                                    TO(0),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                                                            KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,
                                                                                           KC_TRNS,     KC_TRNS,
                                                                KC_SPACE,   KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRANSPARENT
  ),

  [3] = LAYOUT_ergodox_pretty(
    KC_TRNS,    TO(0),      KC_TRNS,    TO(4),      TO(5),      TO(6),      KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,       KC_TRNS,                                    KC_TRNS,    KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCOLON,  KC_TRNS,
    KC_TRNS,    KC_A,       KC_R,       KC_S,       KC_T,       KC_G,                                                               KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       KC_TRNS,
    KC_TRNS,    KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,       KC_TRNS,                                    KC_TRNS,    KC_K,       KC_H,       KC_COMMA,   KC_DOT,     KC_SLASH,   KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                                                    TO(0),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                                                            KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,
                                                                                           KC_TRNS,     KC_TRNS,
                                                                KC_TRNS,    KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRANSPARENT
  ),

  [4] = LAYOUT_ergodox_pretty(
    KC_TRNS,    TO(0),      TO(3),      KC_TRNS,    TO(5),      TO(6),      LGUI(LCTL(LSFT(KC_4))),                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    LALT(KC_F4),
    KC_TRNS,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_TRNS,                                        KC_,        KC_         KC_         KC_         KC_         KC_         KC_TE,
    KC_TRNS,    KC_LPRN,    KC_RPRN,    KC_LCBR,    KC_RCBR,    KC_TRNS,                                                                KC_,        KC_S,       KC_,        KC_,        KC_L,       TO(
    KC_TRNS,    KC_LBRACKET,KC_RBRACKET,KC_LABK,    KC_RABK,    KC_TRNS,    KC_TRNS,                                        KC_,        KC_,        KC_E,       KC_E,       KC_,        KC_SH,      KC_,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                                                        TO(         KC_,        KC_,        KC_,        KC_,
                                                                            KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,
                                                                                           KC_TRNS,     KC_TRNS,
                                                                KC_TRNS,    KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRANSPARENT
  ),

  [5] = LAYOUT_ergodox_pretty(
    KC_TRNS,    TO(0),      TO(3),      TO(4),      KC_TRNS,    TO(6),      KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    RGB_HUD,    RGB_HUI,    RGB_VAD,    RGB_VAI,    KC_TRNS,                                    KC_TRNS,    KC_HOME,    KC_PGDOWN,  KC_PGUP,    KC_END,     KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    RGB_MOD,    RGB_SLD,    KC_TRNS,    KC_TRNS,                                                            KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   KC_PAUSE,   TO(0),
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                    KC_TRNS,    KC_MEDIA_PREACK,KC_AUDIO_DOWN,KC_AUDOL_UP,KC_MEDEXT_TRACK,KCIA_PLAY_PAUSE,KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                                                    TO(0),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                                                            KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,
                                                                                           KC_TRNS,     KC_TRNS,
                                                                KC_TRNS,    KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRANSPARENT
  ),

  [6] = LAYOUT_ergodox_pretty(
    KC_TRNS,    TO(0),      TO(3),      TO(4),      TO(5),      KC_TRNS,    KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_MS_UP,   KC_TRNS,    KC_TRNS,    KC_TRNS,                                    KC_TRNS,    KC_NO,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT,KC_TRNS,                                                            KC_MS_WH_LEFKC_MS_WH_DOWKC_MS_WH_UP,KC_MS_WH_RIGKC_TRNS,    TO(0),
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                                                    TO(0),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                                                            KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,
                                                                                           KC_TRNS,     KC_TRNS,
                                                                KC_TRNS,    KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_MS_BTN1, KC_MS_BTN2
  ),

  [7] = LAYOUT_ergodox_pretty(
    KC_TRNS,    ST_MACRO_0, ST_MACRO_1, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    ST_MACRO_2, ST_MACRO_3, ST_MACRO_4, KC_TRNS,    KC_TRNS,    KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                                                    TO(0),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                                                            KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,
                                                                                           KC_TRNS,     KC_TRNS,
                                                                KC_TRNS,    KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                    TO(0),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_TRNS,                                    KC_TRNS,    KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_TRNS,
    KC_TRNS,    KC_F11,     KC_F12,     KC_F13,     KC_F14,     KC_F15,                                                             KC_F16,     KC_F17,     KC_F18,     KC_F19,     KC_F20,     KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                                                    TO(0),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                                                            KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,
                                                                                           KC_TRNS,     KC_TRNS,
                                                                KC_TRNS,    KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRANSPARENT
  ),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {31,202,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {31,202,255}, {131,66,255}, {131,66,255}, {31,202,255}, {31,202,255}, {31,202,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {131,66,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {31,202,255}, {179,80,255}, {179,80,255}, {31,202,255}, {31,202,255}, {31,202,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {179,80,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {0,218,204}, {179,138,255}, {179,138,255}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {179,138,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {154,86,255}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {154,86,255}, {154,86,255}, {154,86,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,177,225}, {0,0,0}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,86,255}, {0,0,0}, {0,0,0}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {0,0,0}, {252,119,255}, {252,119,255}, {252,119,255}, {252,119,255}, {0,0,0}, {252,119,255}, {252,119,255}, {252,119,255}, {252,119,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {252,119,255}, {252,119,255}, {252,119,255}, {252,119,255}, {0,0,0}, {154,86,255}, {154,86,255}, {154,86,255}, {154,86,255}, {195,61,255}, {195,61,255}, {195,61,255}, {195,61,255}, {195,61,255}, {195,61,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {252,119,255}, {0,0,0}, {0,0,0}, {0,0,0}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {0,0,0}, {0,0,0}, {0,0,0}, {50,153,244}, {50,153,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,86,255}, {154,86,255}, {154,86,255}, {154,86,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {195,61,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,86,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,86,255}, {154,86,255}, {154,86,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,187,255}, {74,187,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RCTRL) SS_DELAY(100) SS_TAP(X_RCTRL) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RCTRL) SS_DELAY(100) SS_TAP(X_RCTRL) SS_DELAY(100) SS_TAP(X_2)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RCTRL) SS_DELAY(100) SS_TAP(X_RCTRL) SS_DELAY(100) SS_TAP(X_F2)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RCTRL) SS_DELAY(100) SS_TAP(X_RCTRL) SS_DELAY(100) SS_TAP(X_R)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RCTRL) SS_DELAY(100) SS_TAP(X_RCTRL) SS_DELAY(100) SS_TAP(X_ESCAPE) SS_DELAY(100) SS_TAP(X_ESCAPE) SS_DELAY(100) SS_TAP(X_ESCAPE)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};


