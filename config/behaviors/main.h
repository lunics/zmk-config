ZMK_HOLD_TAP(ht_mo,
  flavor          = "hold-preferred";
  tapping-term-ms = <200>;
  bindings        = <&mo>, <&kp>;
)

ZMK_HOLD_TAP(ht_mo_sk,
  flavor          = "hold-preferred";
  tapping-term-ms = <200>;
  bindings        = <&mo>, <&skq>;
)

ZMK_HOLD_TAP(ht_mod,
  flavor          = "hold-preferred";
  tapping-term-ms = <200>;
  bindings        = <&kp>, <&kp>;
)

// deactivates the sticky key on the next key press
ZMK_STICKY_KEY(skq,
  bindings         = <&kp>;
  release-after-ms = <200>;
  quick-release;
  /delete-property/ ignore-modifiers;
)

// same, but for combined modifiers like LC(LSHFT)
ZMK_STICKY_KEY(skqx,
  bindings         = <&kp>;
  release-after-ms = <200>;
  quick-release;
  ignore-modifiers;
)

HMM(hm_mod_l, &kp, &kp, po_RIGHT)
HMM(hm_mod_r, &kp, &kp, po_LEFT)
HM(hm_mo_r,   &mo, &kp, po_LEFT)
HM(hm_mo_l,   &mo, &kp, po_RIGHT)
