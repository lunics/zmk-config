// right thumb: tap the num word, it ends on any key outside the digits
ZMK_TRI_STATE(num_word,
  bindings              = <&tog l_num>, <none>, <&tog l_num>;
  ignored-key-positions = <KEYS_L RH1>;
  ignored-layers        = <l_num>;
)

ZMK_TAP_DANCE(num_dance,
  tapping-term-ms = <200>;
  bindings        = <&num_word>, <&sl l_num>;
)

ZMK_HOLD_TAP(ht_num,
  flavor          = "balanced";
  tapping-term-ms = <200>;
  quick-tap-ms    = <170>;
  bindings        = <&mo>, <&num_dance>;
)
