#define l_def    0    // layout default
#define l_num    1    // numbers
//#define l_sym  2    // symbols
#define l_sym_l  2    // symbols
#define l_sym_r  3    // symbols
#define po_LEFT  0 1 2 3 4 10 11 12 13 14 20 21 22 23 24 30 31 32 33
#define l_nav    4    // navigation
//#define l_med    5    // media
#define l_spe    5    // special
#define l_fun    6    // functions
#define l_har    7    // hardward

#define ht_fun   &hm_mo_l  l_fun    // hold tap functions layer
#define ht_med   &hm_mo_l  l_med    // hold tap media layer
#define ht_symr  &hm_mo_l  l_sym_r  // hold tap symbols layer left
#define ht_syml  &hm_mo_r  l_sym_l  // hold tap symbols layer right
#define ht_numl  &hm_mo_l  l_num    // hold tap number layer
#define ht_numr  &hm_mo_r  l_num
#define ht_navl  &hm_mo_l  l_nav
#define ht_navr  &hm_mo_r  l_nav    // hold tap navigation layer
#define ht_spel  &hm_mo_l  l_spe    // hold tap specials layer
#define ht_sper  &hm_mo_r  l_spe
#define ht_har   &hm_mo_r  l_har    // hold tap hardware layer
#define ht_winl  &hm_mod_l LWIN
#define ht_ctll  &hm_mod_l LCTL
#define ht_ctlr  &hm_mod_r LCTL
#define ht_altl  &hm_mod_l LALT
#define ht_altr  &hm_mod_r LALT
#define ht_shft  &ht_mod   LSFT

#define t5  &td_t5
#define i6  &td_i6
#define g2  &td_g2
#define y3  &td_y3

#define enter    &kp ENTER
#define tab      &kp TAB
#define space    &kp SPACE
#define home     &kp HOME
#define end      &kp END
#define pg_dn    &kp PG_DN
#define pg_up    &kp PG_UP
#define left     &kp LEFT
#define right    &kp RIGHT
#define down     &kp DOWN
#define up       &kp UP
#define prev     &kp C_PREV
#define next     &kp C_NEXT
#define play     &kp C_PLAY_PAUSE
#define mute     &kp C_MUTE
#define vol_up   &kp C_VOL_UP
#define vol_dn   &kp C_VOL_DN
#define bri_up   &kp C_BRI_UP
#define bri_dn   &kp C_BRI_DN
#define rewind   &kp C_REWIND
#define fforward &kp C_FAST_FORWARD

#define f1       &kp F1
#define f2       &kp F2
#define f3       &kp F3
#define f4       &kp F4
#define f5       &kp F5
#define f6       &kp F6
#define f7       &kp F7
#define f8       &kp F8
#define f9       &kp F9
#define f10      &kp F10
#define f11      &kp F11
#define f12      &kp F12
#define equal    &kp EQUAL
#define plus     &kp PLUS

#define trans    &trans
#define null     &none
//#define ko     &none   // KO: parse error: expected number or parenthesized expression
#define none     &none
#define sl_num   &sl 1  // sticky layout numbers

#define bt_clr   &bt BT_CLR
#define bt_prv   &bt BT_PRV
#define bt_nxt   &bt BT_NXT
#define bt_sel   &bt BT_SEL

#define po_RIGHT 5 6 7 8 9 15 16 17 18 19 25 26 27 28 29 30 31 32 33
#define po_LEFT  0 1 2 3 4 10 11 12 13 14 20 21 22 23 24 30 31 32 33
