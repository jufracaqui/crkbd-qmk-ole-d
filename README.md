# crkbd-qmk-ole-d
QMK layout in Spanish for the Corne Keyboard with Qwerty and Colemak layouts.

### Layout
```
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3( // QWERTY
  //,[ESC,º]---+-[Q]-+--[W]-+--[E]-+--[R]-+--[T]-.                    ,-[Y]-+--[U]-+--[I]-+-----[O]-+----[P]-+-----[']----.
     TD(TD_ESC), KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,                      KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,     ES_QUOT,
  //|[DEL]-----+-[A]-+--[S]-+--[D]-+--[F]-+--[G]-|                    |-[H]-+--[J]-+--[K]--+----[L]--+---[Ñ]---+---[´]----|
     KC_DELETE,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,                      KC_H,  KC_J,  KC_K,     KC_L,    ES_NTIL,  ES_ACUT,
  //|[WINCOM]--+-[Z]-+--[X]-+--[C]-+--[V]-+--[B]-|                    |-[N]-+--[M]-+--[,]----+--[.]---+--[-]----+--[\]----|
     KC_LGUI,    KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,                      KC_N,  KC_M,  KC_COMM,  KC_DOT,  ES_MINS,  ES_BSLS,
  //|--------------------------[L1]-+-[SP]----+-[BSP]----|  |-[TAB]-+--[ENTER]-+--[L2]------------------------------------|
                             MO(2),  KC_SPACE,  KC_BSPACE,    KC_TAB,  KC_ENTER,  MO(3)
                          //`----------------------------'  `--------------------------'
  ),

  [1] = LAYOUT_split_3x6_3( // Colemak
  //,---------------+------+------+------+------+-------.                    ,-----+---------------+---------+--------+---------+----------------.
      KC_TRANSPARENT,  KC_Q,  KC_W,  KC_F,  KC_P,  KC_G,                       KC_J,  KC_L,           KC_U,     KC_Y,   XXXXXXX,   KC_TRANSPARENT,
  //|---------------+------+------+------+------+-------|                    |-----+---------------+---------+--------+---------+----------------|
      KC_TRANSPARENT,  KC_A,  KC_R,  KC_S,  KC_T,  KC_D,                       KC_H,  TD(TD_CLMK_N),  KC_E,     KC_I,   KC_O,      KC_TRANSPARENT,
  //|---------------+------+------+------+------+-------|                    |-----+---------------+---------+--------+---------+----------------|
      KC_TRANSPARENT,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,                       KC_K,  KC_M,           KC_COMM,  KC_DOT,  ES_MINS,  KC_TRANSPARENT,
  //|---------------------------+----------------+--------------|  |---------------+----------------+--------------------------------------------|
                                    MO(2),  KC_SPACE,  KC_BSPACE,   KC_TAB,  KC_ENTER,  MO(3)
                                 //`----------------------------'  `-------------------------'
  ),

  [2] = LAYOUT_split_3x6_3( // Symbols
  //,[ª]-----+--[!]----+--["]----+--[·]----+--[$]----+--[%]----.        ,-[&]----+--[/]----+--[(]----+--[)]----+--[=]----+--[?]---.
     ES_FORD,   ES_EXLM,  ES_DQUO,  ES_BULT,  ES_DLR,   ES_PERC,          ES_AMPR,  ES_SLSH,  ES_LPRN,  ES_RPRN,  ES_EQL,  ES_QUES,
  //|[LSH]---+--[#]----+--[@]----+--[€]----+--[~]----+--[|]----|        |-[<]----+--[>]----+--[[]----+--[]]----+--[*]----+--[¿]---|
     KC_LSFT,   ES_HASH,  ES_AT,  ES_EURO,  ES_TILD,  ES_PIPE,          ES_LABK,  ES_RABK,  ES_LBRC,  ES_RBRC,  ES_ASTR, ES_IQUE,
  //|[LCTR]--+--[¡]----+--[^]----+---------+---------+--[`]----|        |-[¬]----+--[Ç]----+--[{]--+----[}]----+--[+]----+--------|
     KC_LCTRL,  ES_IEXL,  ES_CIRC,  XXXXXXX,  XXXXXXX,  ES_GRV,           ES_NOT,   ES_CCED,  ES_LCBR,  ES_RCBR,  ES_PLUS, XXXXXXX,
  //|---------------------------+--[SP]----------+--[BSP]---------|  |-[TAB]---------+--[ENTER]-------+---------------------------|
                                       XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                    //`---------------------------'  `---------------------------'
  ),

  [3] = LAYOUT_split_3x6_3( // Numbers, functions, arrows, mouse, conf
  //,[CAPS]-+--[1,F1]--+--[2,F2]----+--[3,F3]----+--[4,F4]-----+--[5,F5]--.       ,-[6,F6]--+--[7,F7]--+--[8,F8]--+--[9,F9]--+--[0,F10]-+--[F11]---.
     KC_CAPS,  TD(TD_1),  TD(TD_2),    TD(TD_3),    TD(TD_4),     TD(TD_5),         TD(TD_6),  TD(TD_7),  TD(TD_8),  TD(TD_9),  TD(TD_0),   KC_F11,
  //|[QWRTY]+----------+------------+--[MUP]-----+-------------+----------|       |---------+----------+--[UP]------------------------------[F12]--|
     TO(0),    XXXXXXX,   XXXXXXX,     KC_MS_UP,    XXXXXXX,      XXXXXXX,          XXXXXXX,   XXXXXXX,   KC_UP,     XXXXXXX,   XXXXXXX,    KC_F12,
  //|[COLMK]+--[LOL]---+--[MLEFT]---+--[MDOWN]---+--[MRIGHT]---+--[HOME]--|       |-[END]---+--[LEFT]--+--[DOWN]-----[RIGHT]-----------------------|
     TO(1),    TO(4),     KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT,  KC_HOME,          KC_END,    KC_LEFT,   KC_DOWN,   KC_RIGHT,  XXXXXXX,    XXXXXXX,
  //|--------------------------------------[ASH]--+--[M1]------+--[M2]------|  |-[TAB]---------+--[ENTER]-------+----------------------------------|
                                           KC_ASTG,  KC_MS_BTN1,  KC_MS_BTN2,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                          //`-------------------------------'  `---------------------------'
  ),

  [4] = LAYOUT_split_3x6_3( // LOL
  //,-------------------------------------------.          ,----------------------------------------------------------.
     KC_TAB,    KC_Q,  KC_W,  KC_E,  KC_R,  KC_P,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|-------------------------------------------|          |----------------------------------------------------------|
     KC_LSFT,   KC_A,  KC_S,  KC_D,  KC_F,  KC_G,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|-------------------------------------------|          |----------------------------------------------------------|
     KC_LCTRL,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  TO(0),
  //|------------------------------------------------|  |-------------------------------------------------------------|
                           MO(5),  KC_SPACE,  KC_LALT,    XXXXXXX,  XXXXXXX,  XXXXXXX
                        //`--------------------------'  `-------------------'
  ),

  [5] = LAYOUT_split_3x6_3( // LOL numbers
  //,----------------------------------------------.           ,----------------------------------------------------------.
     KC_ESCAPE,  KC_1,  KC_2,  KC_3,  KC_4,    KC_5,             XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|----------------------------------------------|           |----------------------------------------------------------|
     KC_LSFT,    KC_W,  KC_T,  KC_Y,  KC_U,    KC_6,             XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|----------------------------------------------|           |----------------------------------------------------------|
     KC_LCTRL,   KC_S,  KC_D,  KC_F,  KC_TAB,  KC_7,             XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  TO(0),
  //|---------------------------------------------------|  |--------------------------------------------------------------|
                            XXXXXXX,  KC_SPACE,  KC_LALT,    XXXXXXX,  XXXXXXX,  XXXXXXX
                         //`----------------------------'  `-------------------'
  )
};
// clang-format off
```

| Left oled   |      Right oled      |
|----------|:-------------:|
| ![Left](/docs/left.jpg) |  ![Right](/docs/right.jpg) |

The Spanish layout keycodes have been borrowed from the config generated with [Oryx](https://configure.zsa.io/) and tweaked to fix some issues.
* https://www.zsa.io
* [Github](https://github.com/zsa/qmk_firmware/).

Luna, the keyboard pet, has been borrowed from [HellTM](https://github.com/HellSingCoder)
* [How to adopt Luna](https://www.youtube.com/watch?v=HgIQRazCAjo)
* [Luna code](https://github.com/HellSingCoder/qmk_firmware/tree/master/keyboards/sofle/keymaps/helltm)

All other code was made by [me](https://github.com/jufracaqui) and there is NO
warranty of it working properly and may do harm to your keyboard as it is not fully tested.
You should be able to understand the code in order to use it.

---

TODO:
* Reduce size (The firmware size is approaching the maximum - 28244/28672 (98%, 428 bytes free))
* Add LED effects
* Enable macro recording and playback
* Fix WPM counter and main oled Off depending on WPM
* Rethink thumbpads layouts for each layer
