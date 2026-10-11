// deactivates the sticky key on the next key press
ZMK_STICKY_KEY(skq,
  bindings         = <&kp>;
  release-after-ms = <200>;
  quick-release;
  /delete-property/ ignore-modifiers;
)

// same, but for combined modifiers like LC(LSHFT)
ZMK_STICKY_KEY(skqx,
  bindings         = <&kp>;
  release-after-ms = <200>;
  quick-release;
  ignore-modifiers;
)
