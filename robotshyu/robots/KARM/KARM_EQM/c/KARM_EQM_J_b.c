/* This file was automatically generated by CasADi 3.6.3+.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) KARM_EQM_J_b_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s1[52] = {6, 7, 0, 6, 12, 18, 24, 30, 36, 42, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};

/* J_b:(q[7])->(J_b[6x7]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a6, a7, a8, a9;
  a0=arg[0]? arg[0][0] : 0;
  a1=sin(a0);
  a2=arg[0]? arg[0][1] : 0;
  a3=cos(a2);
  a4=(a1*a3);
  a5=9.9976101413514729e-01;
  a6=arg[0]? arg[0][2] : 0;
  a7=cos(a6);
  a8=(a5*a7);
  a9=(a4*a8);
  a0=cos(a0);
  a6=sin(a6);
  a10=(a0*a6);
  a2=sin(a2);
  a11=(a1*a2);
  a12=-2.1861258322928699e-02;
  a13=(a12*a7);
  a14=(a11*a13);
  a10=(a10+a14);
  a9=(a9+a10);
  a10=arg[0]? arg[0][3] : 0;
  a14=cos(a10);
  a15=(a5*a14);
  a10=sin(a10);
  a16=(a12*a10);
  a15=(a15-a16);
  a16=(a9*a15);
  a17=2.1861258322928699e-02;
  a18=(a17*a4);
  a19=(a5*a11);
  a18=(a18+a19);
  a19=(a17*a14);
  a20=(a5*a10);
  a19=(a19-a20);
  a20=(a18*a19);
  a16=(a16+a20);
  a20=arg[0]? arg[0][4] : 0;
  a21=cos(a20);
  a22=(a16*a21);
  a23=(a0*a7);
  a24=(a12*a6);
  a25=(a11*a24);
  a23=(a23-a25);
  a25=(a5*a6);
  a4=(a4*a25);
  a23=(a23-a4);
  a20=sin(a20);
  a4=(a23*a20);
  a22=(a22+a4);
  a4=arg[0]? arg[0][5] : 0;
  a26=cos(a4);
  a27=(a22*a26);
  a28=(a5*a10);
  a12=(a12*a14);
  a28=(a28+a12);
  a12=(a9*a28);
  a10=(a17*a10);
  a14=(a5*a14);
  a10=(a10+a14);
  a14=(a18*a10);
  a12=(a12+a14);
  a4=sin(a4);
  a14=(a12*a4);
  a27=(a27-a14);
  a14=arg[0]? arg[0][6] : 0;
  a29=cos(a14);
  a30=(a27*a29);
  a31=(a23*a21);
  a16=(a16*a20);
  a31=(a31-a16);
  a14=sin(a14);
  a16=(a31*a14);
  a30=(a30+a16);
  a16=1.0012000000000001e+00;
  a32=(a0*a2);
  a33=(a16*a32);
  a34=9.1499999999999998e-02;
  a35=(a34*a1);
  a33=(a33-a35);
  a35=(a34*a1);
  a33=(a33-a35);
  a36=-9.8110000000000003e-03;
  a37=(a0*a3);
  a38=(a37*a8);
  a39=(a32*a13);
  a6=(a1*a6);
  a39=(a39-a6);
  a38=(a38+a39);
  a39=(a36*a38);
  a6=4.4867000000000001e-01;
  a40=(a17*a37);
  a41=(a5*a32);
  a40=(a40+a41);
  a41=(a6*a40);
  a42=-9.1499999999999998e-02;
  a37=(a37*a25);
  a7=(a1*a7);
  a32=(a32*a24);
  a7=(a7+a32);
  a37=(a37+a7);
  a7=(a42*a37);
  a41=(a41-a7);
  a39=(a39+a41);
  a39=(a33+a39);
  a41=6.0450000000000004e-01;
  a7=(a38*a28);
  a32=(a40*a10);
  a7=(a7+a32);
  a32=(a41*a7);
  a43=(a42*a37);
  a32=(a32-a43);
  a32=(a39+a32);
  a43=4.4550000000000001e-01;
  a44=(a43*a7);
  a38=(a38*a15);
  a45=(a40*a19);
  a38=(a38+a45);
  a45=(a38*a20);
  a46=(a37*a21);
  a45=(a45+a46);
  a46=(a42*a45);
  a44=(a44-a46);
  a44=(a32+a44);
  a46=1.2800000000000000e-01;
  a38=(a38*a21);
  a47=(a37*a20);
  a38=(a38-a47);
  a47=(a38*a4);
  a48=(a7*a26);
  a47=(a47+a48);
  a48=(a46*a47);
  a49=(a42*a45);
  a48=(a48-a49);
  a48=(a44+a48);
  a49=8.6999999999999994e-02;
  a50=(a49*a47);
  a50=(a48+a50);
  a51=(a30*a50);
  a38=(a38*a26);
  a52=(a7*a4);
  a38=(a38-a52);
  a52=(a38*a29);
  a53=(a45*a14);
  a52=(a52-a53);
  a53=(a34*a0);
  a34=(a34*a0);
  a11=(a16*a11);
  a34=(a34+a11);
  a34=(a53+a34);
  a9=(a36*a9);
  a11=(a42*a23);
  a54=(a6*a18);
  a11=(a11+a54);
  a9=(a9+a11);
  a9=(a34+a9);
  a11=(a42*a23);
  a54=(a41*a12);
  a11=(a11+a54);
  a11=(a9+a11);
  a54=(a42*a31);
  a55=(a43*a12);
  a54=(a54+a55);
  a54=(a11+a54);
  a55=(a42*a31);
  a22=(a22*a4);
  a56=(a12*a26);
  a22=(a22+a56);
  a56=(a46*a22);
  a55=(a55+a56);
  a55=(a54+a55);
  a56=(a49*a22);
  a56=(a55+a56);
  a57=(a52*a56);
  a51=(a51-a57);
  if (res[0]!=0) res[0][0]=a51;
  a38=(a38*a14);
  a51=(a45*a29);
  a38=(a38+a51);
  a51=(a38*a56);
  a57=(a31*a29);
  a27=(a27*a14);
  a57=(a57-a27);
  a27=(a57*a50);
  a51=(a51+a27);
  if (res[0]!=0) res[0][1]=a51;
  a51=(a22*a50);
  a27=(a47*a56);
  a51=(a51-a27);
  if (res[0]!=0) res[0][2]=a51;
  a13=(a3*a13);
  a8=(a2*a8);
  a13=(a13-a8);
  a15=(a13*a15);
  a5=(a5*a3);
  a17=(a17*a2);
  a5=(a5-a17);
  a19=(a5*a19);
  a15=(a15+a19);
  a19=(a15*a21);
  a2=(a2*a25);
  a24=(a3*a24);
  a2=(a2-a24);
  a24=(a2*a20);
  a19=(a19+a24);
  a24=(a19*a26);
  a28=(a13*a28);
  a10=(a5*a10);
  a28=(a28+a10);
  a10=(a28*a4);
  a24=(a24-a10);
  a10=(a24*a29);
  a21=(a2*a21);
  a15=(a15*a20);
  a21=(a21-a15);
  a15=(a21*a14);
  a10=(a10+a15);
  if (res[0]!=0) res[0][3]=a10;
  a29=(a21*a29);
  a24=(a24*a14);
  a29=(a29-a24);
  if (res[0]!=0) res[0][4]=a29;
  a19=(a19*a4);
  a26=(a28*a26);
  a19=(a19+a26);
  if (res[0]!=0) res[0][5]=a19;
  a26=2.5600000000000001e-01;
  a16=(a16*a3);
  a16=(a26+a16);
  a36=(a36*a13);
  a13=(a42*a2);
  a6=(a6*a5);
  a13=(a13+a6);
  a36=(a36+a13);
  a36=(a16+a36);
  a13=(a42*a2);
  a41=(a41*a28);
  a13=(a13+a41);
  a13=(a36+a13);
  a41=(a42*a21);
  a43=(a43*a28);
  a41=(a41+a43);
  a41=(a13+a41);
  a42=(a42*a21);
  a46=(a46*a19);
  a42=(a42+a46);
  a42=(a41+a42);
  a49=(a49*a19);
  a49=(a42+a49);
  a46=(a49*a0);
  a43=(a26*a0);
  a46=(a46-a43);
  a43=(a52*a46);
  a6=(a49*a1);
  a26=(a26*a1);
  a6=(a6-a26);
  a26=(a30*a6);
  a53=(a53*a1);
  a35=(a35*a0);
  a53=(a53-a35);
  a35=(a50*a0);
  a3=(a56*a1);
  a35=(a35+a3);
  a53=(a53-a35);
  a35=(a10*a53);
  a26=(a26+a35);
  a43=(a43+a26);
  if (res[0]!=0) res[0][6]=a43;
  a43=(a57*a6);
  a26=(a29*a53);
  a43=(a43+a26);
  a26=(a38*a46);
  a43=(a43-a26);
  if (res[0]!=0) res[0][7]=a43;
  a46=(a47*a46);
  a6=(a22*a6);
  a53=(a19*a53);
  a6=(a6+a53);
  a46=(a46+a6);
  if (res[0]!=0) res[0][8]=a46;
  a46=(a30*a0);
  a6=(a52*a1);
  a46=(a46-a6);
  if (res[0]!=0) res[0][9]=a46;
  a46=(a38*a1);
  a6=(a57*a0);
  a46=(a46+a6);
  if (res[0]!=0) res[0][10]=a46;
  a0=(a22*a0);
  a1=(a47*a1);
  a0=(a0-a1);
  if (res[0]!=0) res[0][11]=a0;
  a0=(a34*a5);
  a1=(a16*a18);
  a0=(a0-a1);
  a1=(a56*a5);
  a46=(a49*a18);
  a1=(a1-a46);
  a0=(a0-a1);
  a1=(a52*a0);
  a16=(a16*a40);
  a46=(a33*a5);
  a16=(a16-a46);
  a46=(a49*a40);
  a6=(a50*a5);
  a46=(a46-a6);
  a16=(a16-a46);
  a46=(a30*a16);
  a33=(a33*a18);
  a34=(a34*a40);
  a33=(a33-a34);
  a34=(a50*a18);
  a6=(a56*a40);
  a34=(a34-a6);
  a33=(a33-a34);
  a34=(a10*a33);
  a46=(a46+a34);
  a1=(a1+a46);
  if (res[0]!=0) res[0][12]=a1;
  a1=(a57*a16);
  a46=(a29*a33);
  a1=(a1+a46);
  a46=(a38*a0);
  a1=(a1-a46);
  if (res[0]!=0) res[0][13]=a1;
  a0=(a47*a0);
  a16=(a22*a16);
  a33=(a19*a33);
  a16=(a16+a33);
  a0=(a0+a16);
  if (res[0]!=0) res[0][14]=a0;
  a0=(a52*a40);
  a16=(a30*a18);
  a33=(a10*a5);
  a16=(a16+a33);
  a0=(a0+a16);
  if (res[0]!=0) res[0][15]=a0;
  a0=(a57*a18);
  a16=(a29*a5);
  a0=(a0+a16);
  a16=(a38*a40);
  a0=(a0-a16);
  if (res[0]!=0) res[0][16]=a0;
  a40=(a47*a40);
  a18=(a22*a18);
  a5=(a19*a5);
  a18=(a18+a5);
  a40=(a40+a18);
  if (res[0]!=0) res[0][17]=a40;
  a40=(a9*a2);
  a18=(a36*a23);
  a40=(a40-a18);
  a18=(a56*a2);
  a5=(a49*a23);
  a18=(a18-a5);
  a40=(a40-a18);
  a18=(a52*a40);
  a5=(a49*a37);
  a0=(a50*a2);
  a5=(a5+a0);
  a36=(a36*a37);
  a0=(a39*a2);
  a36=(a36+a0);
  a5=(a5-a36);
  a36=(a30*a5);
  a39=(a39*a23);
  a9=(a9*a37);
  a39=(a39+a9);
  a9=(a50*a23);
  a0=(a56*a37);
  a9=(a9+a0);
  a39=(a39-a9);
  a9=(a10*a39);
  a36=(a36+a9);
  a18=(a18+a36);
  if (res[0]!=0) res[0][18]=a18;
  a18=(a57*a5);
  a36=(a29*a39);
  a18=(a18+a36);
  a36=(a38*a40);
  a18=(a18-a36);
  if (res[0]!=0) res[0][19]=a18;
  a40=(a47*a40);
  a5=(a22*a5);
  a39=(a19*a39);
  a5=(a5+a39);
  a40=(a40+a5);
  if (res[0]!=0) res[0][20]=a40;
  a40=(a30*a23);
  a5=(a10*a2);
  a40=(a40+a5);
  a5=(a52*a37);
  a40=(a40-a5);
  if (res[0]!=0) res[0][21]=a40;
  a40=(a38*a37);
  a5=(a57*a23);
  a39=(a29*a2);
  a5=(a5+a39);
  a40=(a40+a5);
  if (res[0]!=0) res[0][22]=a40;
  a23=(a22*a23);
  a2=(a19*a2);
  a23=(a23+a2);
  a37=(a47*a37);
  a23=(a23-a37);
  if (res[0]!=0) res[0][23]=a23;
  a23=(a11*a28);
  a37=(a13*a12);
  a23=(a23-a37);
  a37=(a56*a28);
  a2=(a49*a12);
  a37=(a37-a2);
  a23=(a23-a37);
  a37=(a52*a23);
  a13=(a13*a7);
  a2=(a32*a28);
  a13=(a13-a2);
  a2=(a49*a7);
  a40=(a50*a28);
  a2=(a2-a40);
  a13=(a13-a2);
  a2=(a30*a13);
  a32=(a32*a12);
  a11=(a11*a7);
  a32=(a32-a11);
  a11=(a50*a12);
  a40=(a56*a7);
  a11=(a11-a40);
  a32=(a32-a11);
  a11=(a10*a32);
  a2=(a2+a11);
  a37=(a37+a2);
  if (res[0]!=0) res[0][24]=a37;
  a37=(a57*a13);
  a2=(a29*a32);
  a37=(a37+a2);
  a2=(a38*a23);
  a37=(a37-a2);
  if (res[0]!=0) res[0][25]=a37;
  a23=(a47*a23);
  a13=(a22*a13);
  a32=(a19*a32);
  a13=(a13+a32);
  a23=(a23+a13);
  if (res[0]!=0) res[0][26]=a23;
  a23=(a52*a7);
  a13=(a30*a12);
  a32=(a10*a28);
  a13=(a13+a32);
  a23=(a23+a13);
  if (res[0]!=0) res[0][27]=a23;
  a23=(a57*a12);
  a13=(a29*a28);
  a23=(a23+a13);
  a13=(a38*a7);
  a23=(a23-a13);
  if (res[0]!=0) res[0][28]=a23;
  a7=(a47*a7);
  a12=(a22*a12);
  a28=(a19*a28);
  a12=(a12+a28);
  a7=(a7+a12);
  if (res[0]!=0) res[0][29]=a7;
  a7=(a54*a21);
  a12=(a41*a31);
  a7=(a7-a12);
  a12=(a56*a21);
  a28=(a49*a31);
  a12=(a12-a28);
  a7=(a7-a12);
  a12=(a52*a7);
  a28=(a49*a45);
  a23=(a50*a21);
  a28=(a28+a23);
  a41=(a41*a45);
  a23=(a44*a21);
  a41=(a41+a23);
  a28=(a28-a41);
  a41=(a30*a28);
  a44=(a44*a31);
  a54=(a54*a45);
  a44=(a44+a54);
  a54=(a50*a31);
  a23=(a56*a45);
  a54=(a54+a23);
  a44=(a44-a54);
  a54=(a10*a44);
  a41=(a41+a54);
  a12=(a12+a41);
  if (res[0]!=0) res[0][30]=a12;
  a12=(a57*a28);
  a41=(a29*a44);
  a12=(a12+a41);
  a41=(a38*a7);
  a12=(a12-a41);
  if (res[0]!=0) res[0][31]=a12;
  a7=(a47*a7);
  a28=(a22*a28);
  a44=(a19*a44);
  a28=(a28+a44);
  a7=(a7+a28);
  if (res[0]!=0) res[0][32]=a7;
  a7=(a30*a31);
  a28=(a10*a21);
  a7=(a7+a28);
  a28=(a52*a45);
  a7=(a7-a28);
  if (res[0]!=0) res[0][33]=a7;
  a7=(a38*a45);
  a28=(a57*a31);
  a44=(a29*a21);
  a28=(a28+a44);
  a7=(a7+a28);
  if (res[0]!=0) res[0][34]=a7;
  a31=(a22*a31);
  a21=(a19*a21);
  a31=(a31+a21);
  a45=(a47*a45);
  a31=(a31-a45);
  if (res[0]!=0) res[0][35]=a31;
  a31=(a55*a19);
  a45=(a42*a22);
  a31=(a31-a45);
  a45=(a56*a19);
  a21=(a49*a22);
  a45=(a45-a21);
  a31=(a31-a45);
  a45=(a52*a31);
  a42=(a42*a47);
  a21=(a48*a19);
  a42=(a42-a21);
  a49=(a49*a47);
  a21=(a50*a19);
  a49=(a49-a21);
  a42=(a42-a49);
  a49=(a30*a42);
  a48=(a48*a22);
  a55=(a55*a47);
  a48=(a48-a55);
  a50=(a50*a22);
  a56=(a56*a47);
  a50=(a50-a56);
  a48=(a48-a50);
  a50=(a10*a48);
  a49=(a49+a50);
  a45=(a45+a49);
  if (res[0]!=0) res[0][36]=a45;
  a45=(a57*a42);
  a49=(a29*a48);
  a45=(a45+a49);
  a49=(a38*a31);
  a45=(a45-a49);
  if (res[0]!=0) res[0][37]=a45;
  a31=(a47*a31);
  a42=(a22*a42);
  a48=(a19*a48);
  a42=(a42+a48);
  a31=(a31+a42);
  if (res[0]!=0) res[0][38]=a31;
  a52=(a52*a47);
  a30=(a30*a22);
  a10=(a10*a19);
  a30=(a30+a10);
  a52=(a52+a30);
  if (res[0]!=0) res[0][39]=a52;
  a57=(a57*a22);
  a29=(a29*a19);
  a57=(a57+a29);
  a38=(a38*a47);
  a57=(a57-a38);
  if (res[0]!=0) res[0][40]=a57;
  a47=casadi_sq(a47);
  a22=casadi_sq(a22);
  a19=casadi_sq(a19);
  a22=(a22+a19);
  a47=(a47+a22);
  if (res[0]!=0) res[0][41]=a47;
  return 0;
}

CASADI_SYMBOL_EXPORT int J_b(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int J_b_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int J_b_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_b_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int J_b_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_b_release(int mem) {
}

CASADI_SYMBOL_EXPORT void J_b_incref(void) {
}

CASADI_SYMBOL_EXPORT void J_b_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int J_b_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int J_b_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real J_b_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_b_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_b_name_out(casadi_int i) {
  switch (i) {
    case 0: return "J_b";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_b_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_b_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int J_b_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
