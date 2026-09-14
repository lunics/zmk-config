// positional hold-tap, instantiated several times: kept as a template since
// zmk-helpers has no parameterized equivalent
#define HM(NAME, HOLD, TAP, TRIGGER_POS) \
ZMK_HOLD_TAP(NAME, \
  flavor          = "balanced"; \
  tapping-term-ms = <200>; \
  quick-tap-ms    = <170>; \
  global-quick-tap; \
  bindings        = <HOLD>, <TAP>; \
  hold-trigger-key-positions = <TRIGGER_POS>; \
  hold-trigger-on-release; \
)
