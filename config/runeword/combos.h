#define COMBO_MOD(MOD) \
COMBO(cb_R##MOD##_SQT,   50, po_T2 po_R##MOD 0,  <&kp R##MOD(SQT)>)   \
COMBO(cb_R##MOD##_COMMA, 50, po_T2 po_R##MOD 1,  <&kp R##MOD(COMMA)>) \
COMBO(cb_R##MOD##_DOT,   50, po_T2 po_R##MOD 2,  <&kp R##MOD(DOT)>)   \
COMBO(cb_R##MOD##_P,     50, po_T2 po_R##MOD 3,  <&kp R##MOD(P)>)     \
COMBO(cb_R##MOD##_Y,     50, po_T2 po_R##MOD 4,  <&kp R##MOD(Y)>)     \
\
COMBO(cb_L##MOD##_F,     50, po_T1 po_L##MOD 5,  <&kp L##MOD(F)>)     \
COMBO(cb_L##MOD##_G,     50, po_T1 po_L##MOD 6,  <&kp L##MOD(G)>)     \
COMBO(cb_L##MOD##_C,     50, po_T1 po_L##MOD 7,  <&kp L##MOD(C)>)     \
COMBO(cb_L##MOD##_R,     50, po_T1 po_L##MOD 8,  <&kp L##MOD(R)>)     \
COMBO(cb_L##MOD##_L,     50, po_T1 po_L##MOD 9,  <&kp L##MOD(L)>)     \
\
COMBO(cb_R##MOD##_A,     50, po_T2 po_R##MOD 10, <&kp R##MOD(A)>)     \
COMBO(cb_R##MOD##_O,     50, po_T2 po_R##MOD 11, <&kp R##MOD(O)>)     \
COMBO(cb_R##MOD##_E,     50, po_T2 po_R##MOD 12, <&kp R##MOD(E)>)     \
COMBO(cb_R##MOD##_U,     50, po_T2 po_R##MOD 13, <&kp R##MOD(U)>)     \
COMBO(cb_R##MOD##_I,     50, po_T2 po_R##MOD 14, <&kp R##MOD(I)>)     \
\
COMBO(cb_L##MOD##_D,     50, po_T1 po_L##MOD 15, <&kp L##MOD(D)>)     \
COMBO(cb_L##MOD##_H,     50, po_T1 po_L##MOD 16, <&kp L##MOD(H)>)     \
COMBO(cb_L##MOD##_T,     50, po_T1 po_L##MOD 17, <&kp L##MOD(T)>)     \
COMBO(cb_L##MOD##_N,     50, po_T1 po_L##MOD 18, <&kp L##MOD(N)>)     \
COMBO(cb_L##MOD##_S,     50, po_T1 po_L##MOD 19, <&kp L##MOD(S)>)     \
\
COMBO(cb_R##MOD##_SEMI,  50, po_T2 po_R##MOD 20, <&kp R##MOD(SEMI)>)  \
COMBO(cb_R##MOD##_Q,     50, po_T2 po_R##MOD 21, <&kp R##MOD(Q)>)     \
COMBO(cb_R##MOD##_J,     50, po_T2 po_R##MOD 22, <&kp R##MOD(J)>)     \
COMBO(cb_R##MOD##_K,     50, po_T2 po_R##MOD 23, <&kp R##MOD(K)>)     \
COMBO(cb_R##MOD##_X,     50, po_T2 po_R##MOD 24, <&kp R##MOD(X)>)     \
\
COMBO(cb_L##MOD##_B,     50, po_T1 po_L##MOD 25, <&kp L##MOD(B)>)     \
COMBO(cb_L##MOD##_M,     50, po_T1 po_L##MOD 26, <&kp L##MOD(M)>)     \
COMBO(cb_L##MOD##_W,     50, po_T1 po_L##MOD 27, <&kp L##MOD(W)>)     \
COMBO(cb_L##MOD##_V,     50, po_T1 po_L##MOD 28, <&kp L##MOD(V)>)     \
COMBO(cb_L##MOD##_Z,     50, po_T1 po_L##MOD 29, <&kp L##MOD(Z)>)
