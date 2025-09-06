#define CB_RSHIFT \
cb_rshift {\
  layers        = <l_def>           ;\
  timeout-ms    = <30>              ;\
  key-positions = <cb_rshift_pos>   ;\
  bindings      = <&kp RIGHT_SHIFT> ;\
  require-prior-idle-ms = <150>     ;\
};
