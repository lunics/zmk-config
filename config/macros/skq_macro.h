// sticky key behavior that take a macro as bindings
#define SKQ_MACRO(NAME, MACRO) \
NAME: NAME {\
  compatible       = "zmk,behavior-sticky-key"  ;\
  label            = #NAME                      ;\
  #binding-cells   = <1>                        ;\
  bindings         = <MACRO>                    ;\
  release-after-ms = <200>                      ;\
  quick-release                                 ;\
  ignore-modifiers                              ;\
};
