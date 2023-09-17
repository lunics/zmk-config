    cb_tab {
      layers = <la_DEF>;
      timeout-ms = <30>;
      key-positions = <12 13>;
      bindings = <&kp TAB>;
    };
    cb_bspc {
      layers = <la_DEF la_NAV>;
      timeout-ms = <30>;
      key-positions = <11 12>;
      bindings = <&kp BSPC>;
    };
    cb_esc {
      layers = <la_DEF>;
      timeout-ms = <30>;
      key-positions = <21 22>;
      bindings = <&kp ESC>;
    };
    // cb_esc { layers = <la_DEF>; timeout-ms = <30>; key-positions = <11 12>; bindings = <&hm_mod_l LS(LGUI) ESC>; };
    cb_repeat {
      layers = <la_DEF>;
      timeout-ms = <30>;
      key-positions = <2 3>;
      bindings = <&key_repeat>;
    };
    cb_enter_l {
      layers = <la_DEF la_NAV>;
      timeout-ms = <70>;
      key-positions = <11 12 13>;
      bindings = <&kp ENTER>;
    };
    cb_enter_r {
      layers = <la_DEF>;
      timeout-ms = <70>;
      key-positions = <16 17 18>;
      bindings = <&kp ENTER>;
    };
    cb_del_l {
      layers = <la_DEF la_NAV>;
      timeout-ms = <70>;
      key-positions = <21 22 23>;
      bindings = <&kp DEL>;
    };
    cb_del_r {
      layers = <la_DEF la_NAV>;
      timeout-ms = <70>;
      key-positions = <26 27 28>;
      bindings = <&kp DEL>;
    };
    cb_caps {
      layers = <la_DEF>;
      timeout-ms = <40>;
      key-positions = <26 27>;
      bindings = <&caps_word>;
    };
    cb_boot_l {
      layers = <la_DEF>;
      timeout-ms = <30>;
      key-positions = <po_T1 24>;
      bindings = <&bootloader>;
    };
    cb_boot_r {
      layers = <la_DEF>;
      timeout-ms = <30>;
      key-positions = <po_T2 25>;
      bindings = <&bootloader>;
    };
