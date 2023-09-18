// sticky key behavior with quick-release option that deactivate the sticky key on the next key being pressed
#define TEST \
skq: sk_quick_release { \
  compatible       = "zmk,behavior-sticky-key"; \
  label            = "sk_quick_release"; \
  #binding-cells   = <1>; \
  bindings         = <&kp>; \
  release-after-ms = <200>; \
  quick-release; \
  /delete-property/ ignore-modifiers; \
};
