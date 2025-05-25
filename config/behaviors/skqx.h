// sticky key behavior with ignore-modifiers option for use with multiple modifiers like LC(LSHFT)
#define SKQX \
skqx: skq_multiple_modifiers {\
  compatible       = "zmk,behavior-sticky-key"  ;\
  label            = "skq_multiple_modifiers"   ;\
  #binding-cells   = <1>                        ;\
  bindings         = <&kp>                      ;\
  release-after-ms = <200>                      ;\
  quick-release                                 ;\
  ignore-modifiers                              ;\
};
