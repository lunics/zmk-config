// ZMK_COMBO(name, bindings, key positions, layers, timeout, require-prior-idle)
// names keep the cb_ prefix: bare ones like tab or enter collide with defines/common.h
// key positions: see "keys position.txt", the labels come from zmk-helpers

#define COMBO_TERM_FAST 18
#define COMBO_TERM_SLOW 30

#define COMBO_IDLE_FAST 150
#define COMBO_IDLE_SLOW 50

// combos overlapping the home row mods become hold-taps themselves, so their
// mods can be chorded right away
#define ZMK_COMBO_8(NAME, TAP, POS, LAYERS, COMBO_MS, IDLE_MS, HOLD, SIDE) \
  HM(hm_combo_##NAME, &kp, TAP, SIDE)                                      \
  ZMK_COMBO_6(NAME, &hm_combo_##NAME HOLD 0, POS, LAYERS, COMBO_MS, IDLE_MS)

// horizontal combos, left hand
ZMK_COMBO(cb_esc,   &kp ESC,                LT3 LT2, l_def l_nav l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST)
ZMK_COMBO(cb_mouse, &smart_mouse,           LT2 LT1, l_def l_nav l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST)
ZMK_COMBO(cb_tab,   &hm_mod_l LS(LALT) TAB, LM3 LM2, l_def l_nav l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST)

ZMK_COMBO(cb_cut,   &kp LC(X),              LB3 LB1, l_def l_nav l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST)
ZMK_COMBO(cb_copy,  &kp LC(INS),            LB3 LB2, l_def l_nav l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST)
ZMK_COMBO(cb_paste, &kp LS(INS),            LB2 LB1, l_def l_nav l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST)

// horizontal combos, right hand
ZMK_COMBO(cb_bspc,  &kp BSPC,               RT1 RT2, l_def l_nav l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST)
ZMK_COMBO(cb_del,   &kp DEL,                RT2 RT3, l_def l_nav l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST)

ZMK_COMBO(cb_lpar,  &lpar_morph,            RM1 RM2, l_def       l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST, RS(LCTRL), po_LEFT)
ZMK_COMBO(cb_rpar,  &rpar_morph,            RM2 RM3, l_def       l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST, RS(LALT),  po_LEFT)
ZMK_COMBO(cb_lt,    &kp LT,                 RM1 RM2,       l_nav      , COMBO_TERM_FAST, COMBO_IDLE_FAST)
ZMK_COMBO(cb_gt,    &kp GT,                 RM2 RM3,       l_nav      , COMBO_TERM_FAST, COMBO_IDLE_FAST)

ZMK_COMBO(cb_lbkt,  &kp LBKT,               RB1 RB2, l_def       l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST)
ZMK_COMBO(cb_rbkt,  &kp RBKT,               RB2 RB3, l_def       l_num, COMBO_TERM_FAST, COMBO_IDLE_FAST)
ZMK_COMBO(cb_lbrc,  &kp LBRC,               RB1 RB2,       l_nav      , COMBO_TERM_FAST, COMBO_IDLE_FAST)
ZMK_COMBO(cb_rbrc,  &kp RBRC,               RB2 RB3,       l_nav      , COMBO_TERM_FAST, COMBO_IDLE_FAST)

// vertical combos, left hand
ZMK_COMBO(cb_at,    &kp AT,                 LT3 LM3, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_hash,  &kp HASH,               LT2 LM2, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_dllr,  &kp DLLR,               LT1 LM1, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_prcnt, &kp PRCNT,              LT0 LM0, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)

ZMK_COMBO(cb_grave, &kp GRAVE,              LM3 LB3, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_bslh,  &kp BSLH,               LM2 LB2, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_equal, &kp EQUAL,              LM1 LB1, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_tilde, &kp TILDE,              LM0 LB0, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)

// vertical combos, right hand
ZMK_COMBO(cb_caret, &kp CARET,              RT0 RM0, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_plus,  &kp PLUS,               RT1 RM1, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_star,  &kp STAR,               RT2 RM2, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_amps,  &kp AMPS,               RT3 RM3, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)

ZMK_COMBO(cb_under, &kp UNDER,              RM0 RB0, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_minus, &kp MINUS,              RM1 RB1, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_fslh,  &kp FSLH,               RM2 RB2, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
ZMK_COMBO(cb_pipe,  &kp PIPE,               RM3 RB3, l_def l_nav l_num, COMBO_TERM_SLOW, COMBO_IDLE_SLOW)
