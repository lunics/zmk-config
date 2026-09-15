#define l_def    0    // layout default
#define l_num    1    // numbers
//#define l_sym  2    // symbols
#define l_sym_l  2    // symbols
#define l_sym_r  3    // symbols
#define l_nav    4    // navigation
//#define l_med    5    // media
#define l_spe    5    // special
#define l_fun    6    // functions
#define l_har    7    // hardward
#define l_mou    8    // mouse

#define fun   &hm_mo_l  l_fun    // hold tap functions layer
#define med   &hm_mo_l  l_med    // hold tap media layer
#define symr  &hm_mo_l  l_sym_r  // hold tap symbols layer left
#define syml  &hm_mo_r  l_sym_l  // hold tap symbols layer right
#define numl  &hm_mo_l  l_num    // hold tap number layer
#define numr  &hm_mo_r  l_num
#define navl  &hm_mo_l  l_nav
#define navr  &hm_mo_r  l_nav    // hold tap navigation layer
#define spel  &hm_mo_l  l_spe    // hold tap specials layer
#define sper  &hm_mo_r  l_spe
#define har   &hm_mo_r  l_har    // hold tap hardware layer
#define winl  &hm_mod_l LWIN
#define winr  &hm_mod_r RWIN
#define ctll  &hm_mod_l LCTL
#define ctlr  &hm_mod_r LCTL
#define altl  &hm_mod_l LALT
#define altr  &hm_mod_r LALT
#define shft  &ht_mod   LSFT
#define shftl &hm_mod_l LSFT
#define shftr &hm_mod_r RSFT

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

// zmk-helpers ships the key labels, not these aggregates
#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4
#define THUMBS LH1 LH0 RH0 RH1

#define ms_up    &mmv MOVE_UP
#define ms_down  &mmv MOVE_DOWN
#define ms_left  &mmv MOVE_LEFT
#define ms_right &mmv MOVE_RIGHT
#define wh_up    &msc SCRL_UP
#define wh_down  &msc SCRL_DOWN
#define wh_left  &msc SCRL_LEFT
#define wh_right &msc SCRL_RIGHT
#define clk_l    &mkp LCLK
#define clk_m    &mkp MCLK
#define clk_r    &mkp RCLK

#define po_RIGHT KEYS_R THUMBS
#define po_LEFT  KEYS_L THUMBS
