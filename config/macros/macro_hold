// macro behavior that take multiple keys which are activated when the macro is hold
#define MACRO_HOLD(NAME, BINDINGS) \
NAME: NAME {\
  label          = #NAME                ;\
  compatible     = "zmk,behavior-macro" ;\
  #binding-cells = <0>                  ;\
  wait-ms        = <0>                  ;\
  tap-ms         = <0>                  ;\
  bindings       = <&macro_press BINDINGS>, <&macro_pause_for_release> , <&macro_release BINDINGS> ;\
};
