#define CB_CTRL_SHIFT \
cb_ctrl_shift {\
  layers        = <l_def>              ;\
  timeout-ms    = <30>                 ;\
  key-positions = <cb_ctrl_shift_pos>  ;\
  bindings      = <&kp LC(LEFT_SHIFT)> ;\
  require-prior-idle-ms = <150>        ;\
};
