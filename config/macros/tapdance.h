#define TAPDANCE(NAME, TAP_1, TAP_2) \
NAME: NAME {\
  compatible      = "zmk,behavior-tap-dance"  ;\
  label           = #NAME                     ;\
  #binding-cells  = <0>                       ;\
  tapping-term-ms = <200>                     ;\
  bindings        = <TAP_1>, <TAP_2>          ;\
};
