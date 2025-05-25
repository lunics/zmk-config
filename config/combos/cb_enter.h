#define CB_ENTER \
cb_enter {\
  layers        = <l_def l_nav>   ;\
  timeout-ms    = <30>            ;\
  key-positions = <cb_enter_pos>  ;\
  bindings      = <&kp ENTER>     ;\
  require-prior-idle-ms = <150>   ;\
};
