#include "ht_mo.h"
#include "ht_mo_sk.h"
#include "ht_mod.h"
#include "sticky_keys.h"
#include "home_row_mods.h"
#include "nav_cluster.h"
#include "simple_morphs.h"
#include "thumb_space.h"

// right thumb: tap the num word, it ends on any key outside the digits
ZMK_TRI_STATE(num_word,
  bindings              = <&tog l_num>, <none>, <&tog l_num>;
  ignored-key-positions = <KEYS_L RH1>;
  ignored-layers        = <l_num>;
)

ZMK_TAP_DANCE(num_dance,
  tapping-term-ms = <200>;
  bindings        = <&num_word>, <&sl l_num>;
)

ZMK_HOLD_TAP(ht_num,
  flavor          = "balanced";
  tapping-term-ms = <200>;
  quick-tap-ms    = <170>;
  bindings        = <&mo>, <&num_dance>;
)

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
