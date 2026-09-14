// hold-tap without positional trigger, same reason as HM
#define HMM(NAME, HOLD, TAP, TRIGGER_POS) \
ZMK_HOLD_TAP(NAME, \
  flavor          = "balanced"; \
  tapping-term-ms = <270>; \
  quick-tap-ms    = <170>; \
  global-quick-tap; \
  bindings        = <HOLD>, <TAP>; \
)
