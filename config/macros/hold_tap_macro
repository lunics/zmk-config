// hold-tap behavior that take two macros, one activated on hold, one activated on tap
#define HOLDTAP_MACRO(NAME, MACRO_HOLD, MACRO_TAP) \
NAME: NAME {\
  label           = #NAME                     ;\
  compatible      = "zmk,behavior-hold-tap"   ;\
  #binding-cells  = <2>                       ;\
  flavor          = "tap-preferred"           ;\
  tapping-term-ms = <200>                     ;\
  bindings        = <MACRO_HOLD>, <MACRO_TAP> ;\
};
