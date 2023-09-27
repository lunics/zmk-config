// macro behavior that take multiple keys which are activated when the macro is tap
#define MACRO_TAP(NAME, BINDINGS) \
NAME: NAME {\
  label          = #NAME                ;\
  compatible     = "zmk,behavior-macro" ;\
  #binding-cells = <0>                  ;\
  wait-ms        = <0>                  ;\
  tap-ms         = <0>                  ;\
  bindings       = <BINDINGS>           ;\
};
