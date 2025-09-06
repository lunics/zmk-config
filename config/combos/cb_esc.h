#define CB_ESC \
cb_esc_1 {\
  layers        = <l_def l_nav> ;\
  timeout-ms    = <30>          ;\
  key-positions = <cb_esc_pos>  ;\
  bindings      = <&kp ESC>     ;\
  require-prior-idle-ms = <150> ;\
};
