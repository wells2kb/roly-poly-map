#include QMK_KEYBOARD_H

#define LOL_I_HAVE_33_MACROS QK_MACRO_31 + 1

enum combo
{
  COMBO_ID_LAYER_TOGGLE_FN,

  COMBO_ID_STENO_KE,
  COMBO_ID_STENO_PH,
  COMBO_ID_STENO_Q,
  COMBO_ID_STENO_SC,
  COMBO_ID_STENO_UE,
  COMBO_ID_STENO_Z,
  COMBO_ID_STENO_LABK,
  COMBO_ID_STENO_RABK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
{
  [0] = LAYOUT(
    MT(MOD_LGUI, KC_B), LT(9,KC_L),         MT(MOD_LALT, KC_D), KC_C,                   KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_F,               MT(MOD_RALT, KC_O), LT(10,KC_U),        MT(MOD_LGUI, KC_Y),
    LT(1,KC_N),         LT(2,KC_R),         LT(3,KC_T),         LT(4,KC_S),             KC_TRANSPARENT,                                 KC_TRANSPARENT,   LT(5,KC_H),         LT(6,KC_A),         LT(7,KC_E),         LT(8,KC_I),
    LT(11,KC_V),        KC_W,               KC_M,               KC_G,                   KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_P,               KC_X,               KC_K,               KC_J,
                                                                MT(MOD_LCTL, KC_COMMA), MT(MOD_LSFT, KC_SPACE),                         LT(12,KC_ENTER), LT(13,  KC_DOT)
  ),
  [1] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     QK_MACRO_0,         QK_MACRO_1,             KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_MINUS,           KC_PLUS,                KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,     QK_MACRO_2,         QK_MACRO_3,         KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [2] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     QK_MACRO_4,         KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_HASH,            KC_TRANSPARENT,     KC_EQUAL,           KC_COLN,                KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    QK_MACRO_12,        KC_TRANSPARENT,     QK_MACRO_5,         QK_MACRO_6,             KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [3] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_AT,              KC_PERC,            KC_TRANSPARENT,     KC_GRAVE,               KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     QK_MACRO_7,             KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [4] = LAYOUT(
    KC_TRANSPARENT,     QK_MACRO_8,         QK_MACRO_9,         KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_BSLS,            KC_ASTR,            KC_SLASH,           KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,     QK_MACRO_10,        QK_MACRO_11,        KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [5] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_LCBR,            KC_RCBR,            KC_QUOTE,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_LPRN,            KC_RPRN,            KC_DQUO,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_LBRC,            KC_RBRC,            KC_TRANSPARENT,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [6] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_EXLM,            KC_TRANSPARENT,     KC_TILD,            KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_QUES,            KC_TRANSPARENT,     KC_UNDS,            KC_SCLN,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [7] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   RSFT(KC_TAB),       RCTL(KC_BSPC),      KC_TRANSPARENT,     RCTL(KC_DELETE),
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TAB,             KC_BSPC,            KC_TRANSPARENT,     KC_DELETE,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_ESCAPE,          QK_MACRO_13,        KC_TRANSPARENT,     RALT(RCTL(KC_DELETE)),
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [8] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   QK_MACRO_14,        QK_MACRO_15,        QK_MACRO_16,        KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_AMPR,            KC_PIPE,            QK_MACRO_17,        KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     QK_MACRO_18,        QK_MACRO_19,        KC_TRANSPARENT,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [9] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     QK_MACRO_20,        QK_MACRO_21,        KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   QK_MACRO_22,        QK_MACRO_23,        QK_MACRO_24,        KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     QK_MACRO_25,        QK_MACRO_26,        QK_MACRO_27,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [10] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_CIRC,            KC_DLR,             KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     QK_MACRO_28,        KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [11] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_MEDIA_PLAY_PAUSE,     KC_MEDIA_PREV_TRACK,     KC_MEDIA_NEXT_TRACK,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_AUDIO_MUTE,      KC_AUDIO_VOL_DOWN,  KC_AUDIO_VOL_UP,        KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [12] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_HOME,            KC_PGDN,            KC_PAGE_UP,         KC_END,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_LEFT,            KC_DOWN,            KC_UP,              KC_RIGHT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   RCTL(KC_LEFT),      KC_RCBR,            KC_LCBR,            RCTL(KC_RIGHT),
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [13] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_7,               KC_8,               KC_9,               KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_4,               KC_5,               KC_6,               KC_0,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_1,               KC_2,               KC_3,               KC_TRANSPARENT,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  ),
  [14] = LAYOUT(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_F7,              KC_F8,              KC_F9,              KC_F12,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_F4,              KC_F5,              KC_F6,              KC_F11,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_F1,              KC_F2,              KC_F3,              KC_F10,
                                                                KC_TRANSPARENT,         KC_TRANSPARENT,                                 KC_TRANSPARENT,   KC_TRANSPARENT
  )
};

const uint16_t PROGMEM combo_layer_toggle_fn[] = {LT(13, KC_DOT), LT(12,KC_ENTER), COMBO_END};

const uint16_t PROGMEM combo_steno_ke[] = {LT(7,KC_E), KC_K, COMBO_END};
const uint16_t PROGMEM combo_steno_ph[] = {LT(5,KC_H), KC_P, COMBO_END};
const uint16_t PROGMEM combo_steno_q[] = {KC_F, LT(5,KC_H), COMBO_END};
const uint16_t PROGMEM combo_steno_sc[] = {KC_C, LT(4,KC_S), COMBO_END};
const uint16_t PROGMEM combo_steno_ue[] = {LT(10,KC_U), LT(7,KC_E), COMBO_END};
const uint16_t PROGMEM combo_steno_z[] = {LT(4,KC_S), KC_G, COMBO_END};
const uint16_t PROGMEM combo_steno_LABK[] = {KC_LCBR, KC_LPRN, COMBO_END};
const uint16_t PROGMEM combo_steno_RABK[] = {KC_RCBR, KC_RPRN, COMBO_END};

combo_t key_combos[] =
{
  [COMBO_ID_LAYER_TOGGLE_FN] = COMBO(combo_layer_toggle_fn, MO(14)),

  [COMBO_ID_STENO_KE] = COMBO(combo_steno_ke, LOL_I_HAVE_33_MACROS),
  [COMBO_ID_STENO_PH] = COMBO(combo_steno_ph, QK_MACRO_31),
  [COMBO_ID_STENO_Q] = COMBO(combo_steno_q, KC_Q),
  [COMBO_ID_STENO_SC] = COMBO(combo_steno_sc, QK_MACRO_29),
  [COMBO_ID_STENO_UE] = COMBO(combo_steno_ue, QK_MACRO_30),
  [COMBO_ID_STENO_Z] = COMBO(combo_steno_z, KC_Z),
  [COMBO_ID_STENO_LABK] = COMBO(combo_steno_LABK, KC_LABK),
  [COMBO_ID_STENO_RABK] = COMBO(combo_steno_RABK, KC_RABK)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  switch (keycode) {
    case QK_MACRO_0:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(MACRO_DELAY) SS_TAP(X_EQUAL));
      break;
    case QK_MACRO_1:
      if (record->event.pressed) SEND_STRING(SS_LSFT(SS_TAP(X_EQUAL)) SS_DELAY(MACRO_DELAY) SS_TAP(X_EQUAL));
      break;
    case QK_MACRO_2:
      if (record->event.pressed) SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(MACRO_DELAY) SS_TAP(X_MINUS));
      break;
    case QK_MACRO_3:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(MACRO_DELAY) SS_LSFT(SS_TAP(X_DOT)));
      break;
    case QK_MACRO_4:
      if (record->event.pressed) SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(MACRO_DELAY) SS_TAP(X_EQUAL));
      break;
    case QK_MACRO_5:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(MACRO_DELAY) SS_RSFT(SS_TAP(X_DOT)));
      break;
    case QK_MACRO_6:
      if (record->event.pressed) SEND_STRING(SS_LSFT(SS_TAP(X_SCLN)) SS_DELAY(MACRO_DELAY) SS_TAP(X_W) SS_DELAY(MACRO_DELAY) SS_TAP(X_ENTER));
      break;
    case QK_MACRO_7:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_GRAVE) SS_DELAY(MACRO_DELAY) SS_TAP(X_GRAVE) SS_DELAY(MACRO_DELAY) SS_TAP(X_GRAVE));
      break;
    case QK_MACRO_8:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_DOT) SS_DELAY(MACRO_DELAY) SS_TAP(X_DOT) SS_DELAY(MACRO_DELAY) SS_TAP(X_SLASH));
      break;
    case QK_MACRO_9:
      if (record->event.pressed) SEND_STRING(SS_LSFT(SS_TAP(X_SCLN)) SS_DELAY(MACRO_DELAY) SS_TAP(X_S) SS_DELAY(MACRO_DELAY) SS_TAP(X_SLASH) SS_DELAY(MACRO_DELAY) SS_TAP(X_BSLS) SS_DELAY(MACRO_DELAY) SS_TAP(X_V));
      break;
    case QK_MACRO_10:
      if (record->event.pressed) SEND_STRING(SS_LSFT(SS_TAP(X_8)) SS_DELAY(MACRO_DELAY) SS_LSFT(SS_TAP(X_8)) SS_DELAY(MACRO_DELAY) SS_TAP(X_SLASH));
      break;
    case QK_MACRO_11:
      if (record->event.pressed) SEND_STRING(SS_LSFT(SS_TAP(X_SCLN)) SS_DELAY(MACRO_DELAY) SS_LSFT(SS_TAP(X_5)) SS_DELAY(MACRO_DELAY) SS_TAP(X_S) SS_DELAY(MACRO_DELAY) SS_TAP(X_SLASH) SS_DELAY(MACRO_DELAY) SS_TAP(X_BSLS) SS_DELAY(MACRO_DELAY) SS_TAP(X_V));
      break;
    case QK_MACRO_12:
      if (record->event.pressed) SEND_STRING(SS_RSFT(SS_TAP(X_3)) SS_DELAY(MACRO_DELAY) SS_TAP(X_LBRC));
      break;
    case QK_MACRO_13:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_END) SS_DELAY(MACRO_DELAY) SS_RSFT(SS_TAP(X_HOME)) SS_DELAY(MACRO_DELAY) SS_TAP(X_BSPC));
      break;
    case QK_MACRO_14:
      if (record->event.pressed) SEND_STRING(SS_LSFT(SS_TAP(X_7)) SS_DELAY(MACRO_DELAY) SS_TAP(X_EQUAL));
      break;
    case QK_MACRO_15:
      if (record->event.pressed) SEND_STRING(SS_LSFT(SS_TAP(X_BSLS)) SS_DELAY(MACRO_DELAY) SS_TAP(X_EQUAL));
      break;
    case QK_MACRO_16:
      if (record->event.pressed) SEND_STRING(SS_LSFT(SS_TAP(X_1)) SS_DELAY(MACRO_DELAY) SS_TAP(X_EQUAL));
      break;
    case QK_MACRO_17:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(MACRO_DELAY) SS_TAP(X_EQUAL));
      break;
    case QK_MACRO_18:
      if (record->event.pressed) SEND_STRING(SS_RSFT(SS_TAP(X_COMMA)) SS_DELAY(MACRO_DELAY) SS_TAP(X_EQUAL));
      break;
    case QK_MACRO_19:
      if (record->event.pressed) SEND_STRING(SS_RSFT(SS_TAP(X_DOT)) SS_DELAY(MACRO_DELAY) SS_TAP(X_EQUAL));
      break;
    case QK_MACRO_20:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_BSLS) SS_DELAY(MACRO_DELAY) SS_RSFT(SS_TAP(X_LBRC)));
      break;
    case QK_MACRO_21:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_BSLS) SS_DELAY(MACRO_DELAY) SS_RSFT(SS_TAP(X_RBRC)));
      break;
    case QK_MACRO_22:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_DOT) SS_DELAY(MACRO_DELAY) SS_LSFT(SS_TAP(X_8)));
      break;
    case QK_MACRO_23:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_BSLS) SS_DELAY(MACRO_DELAY) SS_RSFT(SS_TAP(X_9)));
      break;
    case QK_MACRO_24:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_BSLS) SS_DELAY(MACRO_DELAY) SS_RSFT(SS_TAP(X_0)));
      break;
    case QK_MACRO_25:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_BSLS) SS_DELAY(MACRO_DELAY) SS_TAP(X_LBRC));
      break;
    case QK_MACRO_26:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_BSLS) SS_DELAY(MACRO_DELAY) SS_TAP(X_RBRC));
      break;
    case QK_MACRO_27:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_BSLS) SS_DELAY(MACRO_DELAY) SS_TAP(X_QUOTE));
      break;
    case QK_MACRO_28:
      if (record->event.pressed) SEND_STRING(SS_RSFT(SS_TAP(X_4)) SS_DELAY(MACRO_DELAY) SS_RSFT(SS_TAP(X_LBRC)));
      break;
    case QK_MACRO_29:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_S) SS_DELAY(MACRO_DELAY) SS_TAP(X_C));
      break;
    case QK_MACRO_30:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_U) SS_DELAY(MACRO_DELAY) SS_TAP(X_E));
      break;
    case QK_MACRO_31:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_P) SS_DELAY(MACRO_DELAY) SS_TAP(X_H));
      break;
    case LOL_I_HAVE_33_MACROS:
      if (record->event.pressed) SEND_STRING(SS_TAP(X_K) SS_DELAY(MACRO_DELAY) SS_TAP(X_E));
      break;
  }
  return true;
}
