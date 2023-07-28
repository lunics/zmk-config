#define a_ &kp Q
#define b_ &kp B
#define c_ &kp C
#define d_ &kp D
#define e_ &kp E
#define f_ &kp F
#define g_ &kp G
#define h_ &kp H
#define i_ &kp I
#define j_ &kp J
#define k_ &kp K
#define l_ &kp L
#define n_ &kp N
#define m_ &kp SEMICOLON
#define M_ &kp COLON
#define o_ &kp O
#define p_ &kp P
#define q_ &kp A
#define r_ &kp R
#define s_ &kp S
#define t_ &kp T
#define u_ &kp U
#define v_ &kp V
#define w_ &kp Z
#define x_ &kp X
#define y_ &kp Y
#define z_ &kp W

#define num_0 &kp NUMBER_0
#define num_1 &kp NUMBER_1
#define num_2 &kp NUMBER_2
#define num_3 &kp NUMBER_3
#define num_4 &kp NUMBER_4
#define num_5 &kp NUMBER_5
#define num_6 &kp NUMBER_6
#define num_7 &kp NUMBER_7
#define num_8 &kp NUMBER_8
#define num_9 &kp NUMBER_9

#define enter_ &kp ENTER
#define tab_   &kp TAB
#define space_ &kp SPACE
// ,
#define comma_  &kp M
// ;
#define scolon_ &kp COMMA
// :
#define colon_  &kp DOT
// !
#define excla_  &kp SLASH

#define l_def  0
#define l_num  1
#define l_sym  2
#define l_nav  3
#define l_lmod 4
#define l_rmod 5
#define l_fun  7

#define ko_ &none






#define IT_BSLH GRAVE            // \
#define IT_SQUOT MINUS           // '
#define IT_IGRV EQUAL            // ì
// Row 2
#define IT_EGRV LBKT             // è
#define IT_PLUS SLASH            // +
// Row 3
#define IT_OGRV SEMI             // ò
#define IT_AGRV APOS             // à
#define IT_UGRV NON_US_HASH      // ù
// Row 4
#define IT_LESS NON_US_BSLH      // <
#define IT_MINUS RBKT            // -

// Row 1
#define IT_PIPE LS(GRAVE)        // |
#define IT_EXCL LS(N1)           // !
#define IT_DQUOT LS(N2)          // "
#define IT_PND LS(N3)            // £
#define IT_USD LS(N4)            // $
#define IT_PERC LS(N5)           // %
#define IT_AND LS(N6)            // &
#define IT_FSLH LS(N7)           // /
#define IT_LPAR LS(N8)           // (
#define IT_RPAR LS(N9)           // )
#define IT_EQL LS(N0)            // =
#define IT_QUES LS(MINUS)        // ?
#define IT_CARET LS(EQUAL)       // ^
// Row 2
#define IT_EACU LS(LBKT)         // é
#define IT_AST LS(RBKT)          // *
// Row 3
#define IT_CCED LS(SEMI)         // ç
#define IT_DEG LS(APOS)          // °
#define IT_SECT LS(NON_US_HASH)  // §
// Row 4
#define IT_GREAT LS(NON_US_BSLH) // >
#define IT_UNDER LS(SLASH)       // _

// Row 2
#define IT_EUR RA(E)             // €
#define IT_LBKT RA(LBKT)         // [
#define IT_RBKT RA(RBKT)         // ]
// Row 3
#define IT_AT RA(SEMI)           // @
#define IT_HASH RA(APOS)         // #

// Row 2
#define IT_LBRC LS(RA(LBKT))     // {
#define IT_RBRC LS(RA(RBKT))     // }

/**
 * Personalized symbols.
 *
 * These symbols are not part of the default italian input.
 * I use a custom windows keymap to input them.
*/
#define IT_BKTK RA(MINUS)        // `
#define IT_TILDE RA(EQUAL)       // ~
#define IT_CEGR RA(LS(E))        // È

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ \ │   │   │   │   │   │   │   │   │   │   │ ' │ ì │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ è │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ò │ à │ ù │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │   │   │   │   │   │   │   │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
