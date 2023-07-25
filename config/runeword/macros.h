// hold-tap behavior that take two macros, one activated on hold, one activated on tap
#define HOLDTAP_MACRO(NAME, MACRO_HOLD, MACRO_TAP) \
NAME: NAME { \
  label = #NAME; \
  compatible = "zmk,behavior-hold-tap"; \
  #binding-cells = <2>; \
  flavor = "tap-preferred"; \
  tapping-term-ms = <200>; \
  bindings = <MACRO_HOLD>, <MACRO_TAP>; \
};

// macro behavior that take multiple keys which are activated when the macro is hold
#define MACRO_HOLD(NAME, BINDINGS) \
NAME: NAME { \
  label = #NAME; \
  compatible = "zmk,behavior-macro"; \
  #binding-cells = <0>; \
  wait-ms = <0>; \
  tap-ms = <0>; \
  bindings = <&macro_press BINDINGS>, <&macro_pause_for_release> , <&macro_release BINDINGS>; \
};

// macro behavior that take multiple keys which are activated when the macro is tap
#define MACRO_TAP(NAME, BINDINGS) \
NAME: NAME { \
  label = #NAME; \
  compatible = "zmk,behavior-macro"; \
  #binding-cells = <0>; \
  wait-ms = <0>; \
  tap-ms = <0>; \
  bindings = <BINDINGS>; \
};

// sticky key behavior that take a macro as bindings
#define SKQ_MACRO(NAME, MACRO) \
NAME: NAME { \
  compatible = "zmk,behavior-sticky-key"; \
  label = #NAME; \
  #binding-cells = <1>; \
  bindings = <MACRO>; \
  release-after-ms = <200>; \
  quick-release; \
  ignore-modifiers; \
};

// combo behavior that take a hold-tap as bindings
#define COMBO_HOLDTAP(NAME, TIMEOUT, POSITION, HOLDTAP) \
NAME { \
  layers = <la_DEF>; \
  timeout-ms = <TIMEOUT>; \
  slow-release; \
  key-positions = <POSITION>; \
  bindings = <&HOLDTAP 0 0>; \
};

#define COMBO(NAME, TIMEOUT, POSITION, BINDINGS) \
NAME { \
  layers = <la_DEF>; \
  timeout-ms = <TIMEOUT>; \
  slow-release; \
  key-positions = <POSITION>; \
  bindings = BINDINGS; \
};

#define TAPDANCE(NAME, TAP_1, TAP_2) \
NAME: NAME { \
  compatible = "zmk,behavior-tap-dance"; \
  label = #NAME; \
  #binding-cells = <0>; \
  tapping-term-ms = <200>; \
  bindings = <TAP_1>, <TAP_2>; \
};

#define TAPDANCE_3(NAME, TAP_1, TAP_2, TAP_3) \
NAME: NAME { \
  compatible = "zmk,behavior-tap-dance"; \
  label = #NAME; \
  #binding-cells = <0>; \
  tapping-term-ms = <200>; \
  bindings = <TAP_1>, <TAP_2>, <TAP_3>; \
};


