HMM(hm_mod_l, &kp, &kp, po_RIGHT)
HMM(hm_mod_r, &kp, &kp, po_LEFT)
HM(hm_mo_r,   &mo, &kp, po_LEFT)
HM(hm_mo_l,   &mo, &kp, po_RIGHT)

// the nav layer holds keys on both hands, so it cannot be positional
HMM(hm_mo_nav, &mo, &kp, po_RIGHT)
