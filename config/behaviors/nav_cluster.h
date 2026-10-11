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
