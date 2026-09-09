#define CB_ALT_SHIFT \
cb_alt_shift {\
  layers        = <l_def>              ;\
  timeout-ms    = <30>                 ;\
  key-positions = <cb_alt_shift_pos>   ;\
  bindings      = <&kp LA(LEFT_SHIFT)> ;\
  require-prior-idle-ms = <150>        ;\
};
