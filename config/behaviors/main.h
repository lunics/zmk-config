#include "ht_mo.h"
#include "ht_mo_sk.h"
#include "ht_mod.h"
#include "sticky_keys.h"
#include "home_row_mods.h"
#include "nav_cluster.h"
#include "simple_morphs.h"
#include "thumb_space.h"
#include "thumb_num.h"

// right thumb: tap a sticky shift, shift + tap the caps word, hold shift
ZMK_MOD_MORPH(smart_shft,
  bindings = <&sk LSFT>, <&caps_word>;
  mods     = <(MOD_LSFT|MOD_RSFT)>;
)

ZMK_HOLD_TAP(ht_shft,
  flavor          = "balanced";
  tapping-term-ms = <200>;
  quick-tap-ms    = <170>;
  bindings        = <&kp>, <&smart_shft>;
)
