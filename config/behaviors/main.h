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

// the nav layer holds keys on both hands, so it cannot be positional
HMM(hm_mo_nav, &mo, &kp, po_RIGHT)

// nav cluster: any interrupt triggers the tap, the hold needs the full term
#define MT_CORE                      \
  flavor          = "tap-preferred"; \
  tapping-term-ms = <220>;           \
  quick-tap-ms    = <220>;           \
  hold-trigger-key-positions = <0>;

&mt { MT_CORE };

ZMK_HOLD_TAP(mt_home, bindings = <&masked_home>, <&kp>; MT_CORE)
ZMK_HOLD_TAP(mt_end,  bindings = <&masked_end>,  <&kp>; MT_CORE)

// masks ctrl so holding left/right jumps to the line edge, not the document one
#define MASK_MODS(NAME, MODS, BINDING) \
  ZMK_MOD_MORPH(NAME, bindings = <BINDING>, <BINDING>; mods = <MODS>;)

MASK_MODS(masked_home, (MOD_LCTL), &kp HOME)
MASK_MODS(masked_end,  (MOD_LCTL), &kp END)
