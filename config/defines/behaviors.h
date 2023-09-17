    HMM(hm_mod_l, &kp, &kp, po_RIGHT)
    HMM(hm_mod_r, &kp, &kp, po_LEFT)
    HM(hm_mo_r, &mo, &kp, po_LEFT)
    HM(hm_mo_l, &mo, &kp, po_RIGHT)

    ht_mo: hold_tap_momentary_layer {
      compatible = "zmk,behavior-hold-tap";
      label = "ht_mo";
      #binding-cells = <2>;
      flavor = "hold-preferred";
      tapping-term-ms = <200>;
      bindings = <&mo>, <&kp>;
    };

    // &ht_mo_sk la_NAV RSFT
    ht_mo_sk: hold_tap_momentary_layer_sticky_modifier {
      compatible = "zmk,behavior-hold-tap";
      label = "ht_mo_sk";
      #binding-cells = <2>;
      flavor = "hold-preferred";
      tapping-term-ms = <200>;
      bindings = <&mo>, <&skq>;
    };

    // sticky key behavior with quick-release option that deactivate the sticky key on the next key being pressed
    skq: sk_quick_release {
      compatible = "zmk,behavior-sticky-key";
      label = "sk_quick_release";
      #binding-cells = <1>;
      bindings = <&kp>;
      release-after-ms = <200>;
      quick-release;
      /delete-property/ ignore-modifiers;
     };

    // sticky key behavior with ignore-modifiers option for use with multiple modifiers like LC(LSHFT)
    skqx: skq_multiple_modifiers {
      compatible = "zmk,behavior-sticky-key";
      label = "skq_multiple_modifiers";
      #binding-cells = <1>;
      bindings = <&kp>;
      release-after-ms = <200>;
      quick-release;
      ignore-modifiers;
     };

