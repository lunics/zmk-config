#define CB_DEL \
cb_del {\
  layers        = <l_def l_nav> ;\
  timeout-ms    = <70>          ;\
  key-positions = <21 22>       ;\
  bindings      = <&kp DEL>     ;\
  require-prior-idle-ms = <150> ;\
};
