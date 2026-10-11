// right thumb: tap a sticky shift, shift + tap the caps word, hold shift
ZMK_MOD_MORPH(smart_shft,
  bindings = <&sk LSFT>, <&caps_word>;
  mods     = <(MOD_LSFT|MOD_RSFT)>;
)

ZMK_HOLD_TAP(ht_shft,
  flavor          = "balanced";
  tapping-term-ms = <200>;
  quick-tap-ms    = <170>;
  bindings        = <&kp>, <&smart_shft>;
)
