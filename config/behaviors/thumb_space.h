// left thumb: tap space, shift + tap closes the sentence, hold the navigation layer
ZMK_MACRO(dot_spc,
  wait-ms  = <0>;
  tap-ms   = <5>;
  bindings = <&kp DOT &kp SPACE &sk LSFT>;
)

ZMK_MOD_MORPH(spc_morph,
  bindings = <&kp SPACE>, <&dot_spc>;
  mods     = <(MOD_LSFT|MOD_RSFT)>;
)

ZMK_HOLD_TAP(ht_spc,
  flavor                = "balanced";
  tapping-term-ms       = <200>;
  quick-tap-ms          = <170>;
  require-prior-idle-ms = <150>;
  bindings              = <&mo>, <&spc_morph>;
)
