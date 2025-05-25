#define COMBO(NAME, TIMEOUT, POSITION, BINDINGS) \
NAME {\
  layers        = <l_def>     ;\
  timeout-ms    = <TIMEOUT>   ;\
  slow-release                ;\
  key-positions = <POSITION>  ;\
  bindings      = BINDINGS    ;\
};
