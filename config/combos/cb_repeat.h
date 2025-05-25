#define CB_REPEAT \
cb_repeat {\
  layers        = <l_def l_nav> ;\
  timeout-ms    = <30>          ;\
  key-positions = <2 3>         ;\
  bindings      = <&key_repeat> ;\
  require-prior-idle-ms = <150> ;\
};
