// shift selects the paired punctuation instead of the host's shifted symbol
#define SIMPLE_MORPH(NAME, MOD, BINDING1, BINDING2) \
  ZMK_MOD_MORPH(NAME, mods = <(MOD_L##MOD | MOD_R##MOD)>; bindings = <BINDING1>, <BINDING2>;)

SIMPLE_MORPH(comma_morph,  SFT, &kp COMMA, &kp SEMI)
SIMPLE_MORPH(dot_morph,    SFT, &kp DOT,   &kp COLON)
SIMPLE_MORPH(squote_morph, SFT, &kp SQT,   &kp DQT)
SIMPLE_MORPH(minus_morph,  SFT, &kp MINUS, &kp PLUS)

// paren combos: shift picks the matching angle bracket
SIMPLE_MORPH(lpar_morph,   SFT, &kp LPAR,  &kp LT)
SIMPLE_MORPH(rpar_morph,   SFT, &kp RPAR,  &kp GT)
