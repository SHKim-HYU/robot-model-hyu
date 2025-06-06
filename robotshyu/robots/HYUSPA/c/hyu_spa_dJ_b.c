/* This file was automatically generated by CasADi 3.6.7.
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
  #define CASADI_PREFIX(ID) hyu_spa_dJ_b_ ## ID
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

/* dJ_b:(q[7],v[7])->(dJ_b[6x7]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=arg[0]? arg[0][0] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][1] : 0;
  a3=sin(a2);
  a4=(a1*a3);
  a5=arg[0]? arg[0][2] : 0;
  a6=sin(a5);
  a7=(a4*a6);
  a0=sin(a0);
  a5=cos(a5);
  a8=(a0*a5);
  a7=(a7-a8);
  a8=arg[0]? arg[0][3] : 0;
  a9=cos(a8);
  a10=(a7*a9);
  a2=cos(a2);
  a11=(a1*a2);
  a8=sin(a8);
  a12=(a11*a8);
  a10=(a10-a12);
  a12=arg[0]? arg[0][4] : 0;
  a13=cos(a12);
  a14=(a10*a13);
  a15=(a0*a6);
  a16=(a4*a5);
  a15=(a15+a16);
  a12=sin(a12);
  a16=(a15*a12);
  a14=(a14+a16);
  a16=arg[0]? arg[0][6] : 0;
  a17=cos(a16);
  a18=(a14*a17);
  a19=(a7*a8);
  a20=(a11*a9);
  a19=(a19+a20);
  a20=arg[0]? arg[0][5] : 0;
  a21=cos(a20);
  a22=(a19*a21);
  a23=(a15*a13);
  a24=(a10*a12);
  a23=(a23-a24);
  a20=sin(a20);
  a24=(a23*a20);
  a22=(a22-a24);
  a16=sin(a16);
  a24=(a22*a16);
  a18=(a18-a24);
  a24=1.5669999999999999e+00;
  a25=arg[1]? arg[1][0] : 0;
  a26=(a24*a25);
  a27=-1.5669999999999999e+00;
  a28=(a27*a25);
  a26=(a26+a28);
  a28=(a18*a26);
  a29=-1.4580000000000001e-01;
  a30=(a2*a25);
  a31=(a29*a30);
  a32=(a5*a31);
  a33=arg[1]? arg[1][1] : 0;
  a34=(a29*a33);
  a35=(a6*a34);
  a32=(a32-a35);
  a35=-1.5420000000000000e-01;
  a36=(a5*a30);
  a37=(a6*a33);
  a36=(a36-a37);
  a37=(a35*a36);
  a37=(a32+a37);
  a38=(a8*a37);
  a39=(a20*a38);
  a37=(a9*a37);
  a40=arg[1]? arg[1][3] : 0;
  a40=(a40+a36);
  a41=(a29*a40);
  a41=(a37+a41);
  a42=(a12*a41);
  a31=(a6*a31);
  a34=(a5*a34);
  a31=(a31+a34);
  a34=(a5*a33);
  a43=(a6*a30);
  a34=(a34+a43);
  a43=(a35*a34);
  a43=(a31+a43);
  a44=(a9*a34);
  a45=arg[1]? arg[1][2] : 0;
  a25=(a3*a25);
  a45=(a45-a25);
  a46=(a8*a45);
  a44=(a44-a46);
  a46=(a29*a44);
  a46=(a43+a46);
  a47=(a13*a46);
  a42=(a42+a47);
  a47=(a13*a44);
  a48=(a12*a40);
  a47=(a47+a48);
  a48=(a35*a47);
  a48=(a42+a48);
  a49=(a21*a48);
  a39=(a39-a49);
  a49=-8.4000000000000005e-02;
  a50=arg[1]? arg[1][5] : 0;
  a50=(a50+a47);
  a51=(a49*a50);
  a51=(a39-a51);
  a52=7.9500000000000001e-02;
  a53=(a17*a50);
  a54=arg[1]? arg[1][4] : 0;
  a55=(a8*a34);
  a56=(a9*a45);
  a55=(a55+a56);
  a54=(a54+a55);
  a56=(a21*a54);
  a57=(a13*a40);
  a58=(a12*a44);
  a57=(a57-a58);
  a58=(a20*a57);
  a56=(a56-a58);
  a58=(a16*a56);
  a53=(a53-a58);
  a58=(a52*a53);
  a58=(a51-a58);
  a59=(a2*a6);
  a60=(a59*a9);
  a61=(a3*a8);
  a60=(a60+a61);
  a61=(a60*a13);
  a62=(a2*a5);
  a63=(a62*a12);
  a61=(a61+a63);
  a63=(a61*a16);
  a64=(a59*a8);
  a65=(a3*a9);
  a64=(a64-a65);
  a65=(a64*a21);
  a66=(a62*a13);
  a67=(a60*a12);
  a66=(a66-a67);
  a67=(a66*a20);
  a65=(a65-a67);
  a67=(a65*a17);
  a63=(a63+a67);
  a67=(a58*a63);
  a41=(a13*a41);
  a46=(a12*a46);
  a41=(a41-a46);
  a46=(a35*a57);
  a46=(a41+a46);
  a68=(a21*a57);
  a69=(a20*a54);
  a68=(a68+a69);
  a69=(a49*a68);
  a69=(a46+a69);
  a70=(a16*a69);
  a48=(a20*a48);
  a71=(a21*a38);
  a48=(a48+a71);
  a71=(a17*a48);
  a70=(a70+a71);
  a71=(a66*a21);
  a72=(a64*a20);
  a71=(a71+a72);
  a72=(a70*a71);
  a67=(a67-a72);
  a72=arg[1]? arg[1][6] : 0;
  a72=(a72+a68);
  a73=(a1*a5);
  a74=(a0*a3);
  a75=(a74*a6);
  a73=(a73+a75);
  a75=(a73*a9);
  a76=(a0*a2);
  a77=(a76*a8);
  a75=(a75-a77);
  a77=(a75*a13);
  a5=(a74*a5);
  a6=(a1*a6);
  a5=(a5-a6);
  a6=(a5*a12);
  a77=(a77+a6);
  a6=(a77*a16);
  a8=(a73*a8);
  a9=(a76*a9);
  a8=(a8+a9);
  a9=(a8*a21);
  a13=(a5*a13);
  a12=(a75*a12);
  a13=(a13-a12);
  a12=(a13*a20);
  a9=(a9-a12);
  a12=(a9*a17);
  a6=(a6+a12);
  a12=(a29*a11);
  a12=(a24+a12);
  a78=(a35*a11);
  a78=(a12+a78);
  a79=(a29*a19);
  a79=(a78+a79);
  a80=(a35*a19);
  a80=(a79+a80);
  a81=(a49*a22);
  a81=(a80+a81);
  a82=(a14*a16);
  a83=(a22*a17);
  a82=(a82+a83);
  a83=(a52*a82);
  a83=(a81+a83);
  a27=(a27+a83);
  a84=(a6*a27);
  a85=(a29*a76);
  a86=(a35*a76);
  a86=(a85+a86);
  a87=(a29*a8);
  a87=(a86+a87);
  a88=(a35*a8);
  a88=(a87+a88);
  a89=(a49*a9);
  a89=(a88+a89);
  a90=(a52*a6);
  a90=(a89+a90);
  a91=(a82*a90);
  a84=(a84-a91);
  a91=(a72*a84);
  a92=(a16*a50);
  a93=(a17*a56);
  a92=(a92+a93);
  a93=(a13*a21);
  a94=(a8*a20);
  a93=(a93+a94);
  a94=(a93*a27);
  a21=(a23*a21);
  a20=(a19*a20);
  a21=(a21+a20);
  a20=(a21*a90);
  a94=(a94-a20);
  a20=(a92*a94);
  a91=(a91-a20);
  a67=(a67+a91);
  a28=(a28+a67);
  a28=(-a28);
  if (res[0]!=0) res[0][0]=a28;
  a28=(a21*a26);
  a67=(a61*a17);
  a91=(a65*a16);
  a67=(a67-a91);
  a91=(a70*a67);
  a69=(a17*a69);
  a20=(a16*a48);
  a69=(a69-a20);
  a20=(a52*a72);
  a20=(a69+a20);
  a95=(a20*a63);
  a91=(a91-a95);
  a17=(a77*a17);
  a16=(a9*a16);
  a17=(a17-a16);
  a27=(a17*a27);
  a16=(a18*a90);
  a27=(a27-a16);
  a16=(a92*a27);
  a84=(a53*a84);
  a16=(a16-a84);
  a91=(a91+a16);
  a28=(a28+a91);
  a28=(-a28);
  if (res[0]!=0) res[0][1]=a28;
  a26=(a82*a26);
  a28=(a20*a71);
  a91=(a58*a67);
  a28=(a28-a91);
  a94=(a53*a94);
  a27=(a72*a27);
  a94=(a94-a27);
  a28=(a28+a94);
  a26=(a26+a28);
  a26=(-a26);
  if (res[0]!=0) res[0][2]=a26;
  a26=(a72*a63);
  a28=(a92*a71);
  a26=(a26-a28);
  a26=(-a26);
  if (res[0]!=0) res[0][3]=a26;
  a26=(a92*a67);
  a28=(a53*a63);
  a26=(a26-a28);
  a26=(-a26);
  if (res[0]!=0) res[0][4]=a26;
  a26=(a53*a71);
  a28=(a72*a67);
  a26=(a26-a28);
  a26=(-a26);
  if (res[0]!=0) res[0][5]=a26;
  a26=-3.6469999999999997e-01;
  a28=(a29*a3);
  a28=(a26-a28);
  a94=(a35*a3);
  a94=(a28-a94);
  a29=(a29*a64);
  a29=(a94+a29);
  a35=(a35*a64);
  a35=(a29+a35);
  a49=(a49*a65);
  a49=(a35+a49);
  a52=(a52*a63);
  a52=(a49+a52);
  a2=(a2*a30);
  a27=(a3*a25);
  a2=(a2+a27);
  a27=(a2*a1);
  a91=(a52*a27);
  a4=(a4*a30);
  a16=(a11*a25);
  a4=(a4-a16);
  a16=(a0*a33);
  a4=(a4-a16);
  a16=(a4*a1);
  a33=(a1*a33);
  a74=(a74*a30);
  a25=(a76*a25);
  a74=(a74-a25);
  a33=(a33+a74);
  a74=(a33*a0);
  a16=(a16+a74);
  a74=(a83*a16);
  a91=(a91+a74);
  a74=(a24*a33);
  a25=(a74*a0);
  a30=(a26*a1);
  a84=(a2*a30);
  a95=(a24*a1);
  a96=(a4*a95);
  a84=(a84+a96);
  a25=(a25+a84);
  a91=(a91-a25);
  a25=(a17*a91);
  a84=(a26*a4);
  a24=(a24*a2);
  a84=(a84-a24);
  a84=(a84*a0);
  a24=(a26*a33);
  a24=(a24*a1);
  a84=(a84-a24);
  a24=(a33*a30);
  a26=(a26*a0);
  a4=(a4*a26);
  a24=(a24-a4);
  a84=(a84+a24);
  a24=(a90*a27);
  a4=(a2*a0);
  a96=(a83*a4);
  a24=(a24-a96);
  a84=(a84-a24);
  a24=(a67*a84);
  a33=(a33*a95);
  a2=(a2*a26);
  a33=(a33+a2);
  a74=(a74*a1);
  a33=(a33-a74);
  a74=(a90*a16);
  a2=(a52*a4);
  a74=(a74+a2);
  a33=(a33-a74);
  a74=(a18*a33);
  a24=(a24+a74);
  a25=(a25+a24);
  a24=(a6*a1);
  a74=(a82*a0);
  a24=(a24-a74);
  a74=(a58*a24);
  a2=(a93*a1);
  a96=(a21*a0);
  a2=(a2-a96);
  a96=(a70*a2);
  a74=(a74-a96);
  a96=(a52*a0);
  a96=(a96-a26);
  a26=(a6*a96);
  a97=(a83*a1);
  a98=(a90*a0);
  a97=(a97+a98);
  a95=(a95-a97);
  a97=(a63*a95);
  a98=(a52*a1);
  a98=(a98-a30);
  a30=(a82*a98);
  a97=(a97+a30);
  a26=(a26+a97);
  a97=(a72*a26);
  a30=(a93*a96);
  a99=(a71*a95);
  a100=(a21*a98);
  a99=(a99+a100);
  a30=(a30+a99);
  a99=(a92*a30);
  a97=(a97-a99);
  a74=(a74+a97);
  a25=(a25-a74);
  if (res[0]!=0) res[0][6]=a25;
  a25=(a93*a91);
  a74=(a71*a84);
  a97=(a21*a33);
  a74=(a74+a97);
  a25=(a25+a74);
  a1=(a17*a1);
  a0=(a18*a0);
  a1=(a1-a0);
  a0=(a70*a1);
  a74=(a20*a24);
  a0=(a0-a74);
  a96=(a17*a96);
  a95=(a67*a95);
  a98=(a18*a98);
  a95=(a95+a98);
  a96=(a96+a95);
  a95=(a92*a96);
  a26=(a53*a26);
  a95=(a95-a26);
  a0=(a0+a95);
  a25=(a25-a0);
  if (res[0]!=0) res[0][7]=a25;
  a91=(a6*a91);
  a84=(a63*a84);
  a33=(a82*a33);
  a84=(a84+a33);
  a91=(a91+a84);
  a84=(a20*a2);
  a33=(a58*a1);
  a84=(a84-a33);
  a30=(a53*a30);
  a96=(a72*a96);
  a30=(a30-a96);
  a84=(a84+a30);
  a91=(a91-a84);
  if (res[0]!=0) res[0][8]=a91;
  a91=(a67*a16);
  a84=(a18*a27);
  a91=(a91-a84);
  a84=(a17*a4);
  a91=(a91-a84);
  a84=(a72*a24);
  a30=(a92*a2);
  a84=(a84-a30);
  a91=(a91-a84);
  if (res[0]!=0) res[0][9]=a91;
  a91=(a71*a16);
  a84=(a21*a27);
  a91=(a91-a84);
  a84=(a93*a4);
  a91=(a91-a84);
  a84=(a92*a1);
  a24=(a53*a24);
  a84=(a84-a24);
  a91=(a91-a84);
  if (res[0]!=0) res[0][10]=a91;
  a16=(a63*a16);
  a27=(a82*a27);
  a16=(a16-a27);
  a4=(a6*a4);
  a16=(a16-a4);
  a2=(a53*a2);
  a1=(a72*a1);
  a2=(a2-a1);
  a16=(a16-a2);
  if (res[0]!=0) res[0][11]=a16;
  a16=(a59*a32);
  a2=(a62*a31);
  a16=(a16-a2);
  a2=(a73*a34);
  a1=(a5*a36);
  a4=(a76*a45);
  a1=(a1+a4);
  a2=(a2+a1);
  a1=(a12*a2);
  a4=(a7*a34);
  a27=(a15*a36);
  a91=(a11*a45);
  a27=(a27+a91);
  a4=(a4+a27);
  a27=(a85*a4);
  a1=(a1-a27);
  a16=(a16+a1);
  a1=(a16*a11);
  a7=(a7*a32);
  a27=(a15*a31);
  a7=(a7-a27);
  a59=(a59*a34);
  a36=(a62*a36);
  a45=(a3*a45);
  a36=(a36-a45);
  a59=(a59+a36);
  a36=(a85*a59);
  a45=(a28*a2);
  a36=(a36-a45);
  a7=(a7+a36);
  a36=(a7*a3);
  a1=(a1+a36);
  a36=(a85*a3);
  a45=(a28*a76);
  a36=(a36+a45);
  a45=(a59*a36);
  a34=(a12*a76);
  a85=(a85*a11);
  a34=(a34-a85);
  a85=(a4*a34);
  a45=(a45+a85);
  a1=(a1-a45);
  a45=(a2*a3);
  a85=(a59*a76);
  a45=(a45+a85);
  a85=(a52*a45);
  a27=(a4*a76);
  a91=(a2*a11);
  a27=(a27-a91);
  a91=(a83*a27);
  a85=(a85+a91);
  a1=(a1+a85);
  a85=(a17*a1);
  a7=(a7*a76);
  a73=(a73*a32);
  a31=(a5*a31);
  a73=(a73-a31);
  a31=(a28*a4);
  a32=(a12*a59);
  a31=(a31-a32);
  a73=(a73+a31);
  a31=(a73*a11);
  a7=(a7-a31);
  a28=(a28*a11);
  a12=(a12*a3);
  a28=(a28+a12);
  a12=(a4*a28);
  a31=(a2*a36);
  a12=(a12+a31);
  a7=(a7+a12);
  a12=(a59*a11);
  a4=(a4*a3);
  a12=(a12+a4);
  a4=(a83*a12);
  a31=(a90*a45);
  a4=(a4+a31);
  a7=(a7-a4);
  a4=(a67*a7);
  a2=(a2*a34);
  a59=(a59*a28);
  a2=(a2-a59);
  a73=(a73*a3);
  a16=(a16*a76);
  a73=(a73+a16);
  a2=(a2-a73);
  a73=(a90*a27);
  a16=(a52*a12);
  a73=(a73-a16);
  a2=(a2-a73);
  a73=(a18*a2);
  a4=(a4+a73);
  a85=(a85+a4);
  a4=(a6*a76);
  a73=(a82*a11);
  a16=(a63*a3);
  a73=(a73-a16);
  a4=(a4+a73);
  a73=(a58*a4);
  a16=(a93*a76);
  a59=(a21*a11);
  a31=(a71*a3);
  a59=(a59-a31);
  a16=(a16+a59);
  a59=(a70*a16);
  a73=(a73-a59);
  a59=(a52*a11);
  a31=(a83*a3);
  a59=(a59+a31);
  a28=(a28-a59);
  a59=(a6*a28);
  a31=(a83*a76);
  a32=(a90*a11);
  a31=(a31-a32);
  a34=(a34-a31);
  a31=(a63*a34);
  a32=(a90*a3);
  a91=(a52*a76);
  a32=(a32+a91);
  a32=(a32-a36);
  a36=(a82*a32);
  a31=(a31+a36);
  a59=(a59+a31);
  a31=(a72*a59);
  a36=(a93*a28);
  a91=(a71*a34);
  a84=(a21*a32);
  a91=(a91+a84);
  a36=(a36+a91);
  a91=(a92*a36);
  a31=(a31-a91);
  a73=(a73+a31);
  a85=(a85-a73);
  if (res[0]!=0) res[0][12]=a85;
  a85=(a93*a1);
  a73=(a71*a7);
  a31=(a21*a2);
  a73=(a73+a31);
  a85=(a85+a73);
  a76=(a17*a76);
  a11=(a18*a11);
  a3=(a67*a3);
  a11=(a11-a3);
  a76=(a76+a11);
  a11=(a70*a76);
  a3=(a20*a4);
  a11=(a11-a3);
  a28=(a17*a28);
  a34=(a67*a34);
  a32=(a18*a32);
  a34=(a34+a32);
  a28=(a28+a34);
  a34=(a92*a28);
  a59=(a53*a59);
  a34=(a34-a59);
  a11=(a11+a34);
  a85=(a85-a11);
  if (res[0]!=0) res[0][13]=a85;
  a1=(a6*a1);
  a7=(a63*a7);
  a2=(a82*a2);
  a7=(a7+a2);
  a1=(a1+a7);
  a7=(a20*a16);
  a2=(a58*a76);
  a7=(a7-a2);
  a36=(a53*a36);
  a28=(a72*a28);
  a36=(a36-a28);
  a7=(a7+a36);
  a1=(a1-a7);
  if (res[0]!=0) res[0][14]=a1;
  a1=(a17*a12);
  a7=(a67*a27);
  a36=(a18*a45);
  a7=(a7-a36);
  a1=(a1+a7);
  a7=(a72*a4);
  a36=(a92*a16);
  a7=(a7-a36);
  a1=(a1-a7);
  if (res[0]!=0) res[0][15]=a1;
  a1=(a93*a12);
  a7=(a71*a27);
  a36=(a21*a45);
  a7=(a7-a36);
  a1=(a1+a7);
  a7=(a92*a76);
  a4=(a53*a4);
  a7=(a7-a4);
  a1=(a1-a7);
  if (res[0]!=0) res[0][16]=a1;
  a12=(a6*a12);
  a27=(a63*a27);
  a45=(a82*a45);
  a27=(a27-a45);
  a12=(a12+a27);
  a16=(a53*a16);
  a76=(a72*a76);
  a16=(a16-a76);
  a12=(a12-a16);
  if (res[0]!=0) res[0][17]=a12;
  a12=(a60*a37);
  a16=(a64*a38);
  a76=(a62*a43);
  a16=(a16-a76);
  a12=(a12+a16);
  a16=(a75*a44);
  a76=(a5*a40);
  a27=(a8*a55);
  a76=(a76+a27);
  a16=(a16+a76);
  a76=(a78*a16);
  a27=(a10*a44);
  a45=(a15*a40);
  a1=(a19*a55);
  a45=(a45+a1);
  a27=(a27+a45);
  a45=(a86*a27);
  a76=(a76-a45);
  a12=(a12+a76);
  a76=(a12*a15);
  a10=(a10*a37);
  a45=(a19*a38);
  a1=(a15*a43);
  a45=(a45-a1);
  a10=(a10+a45);
  a60=(a60*a44);
  a40=(a62*a40);
  a55=(a64*a55);
  a40=(a40+a55);
  a60=(a60+a40);
  a40=(a86*a60);
  a55=(a94*a16);
  a40=(a40-a55);
  a10=(a10+a40);
  a40=(a10*a62);
  a76=(a76-a40);
  a40=(a86*a62);
  a55=(a94*a5);
  a40=(a40-a55);
  a55=(a60*a40);
  a44=(a78*a5);
  a86=(a86*a15);
  a44=(a44-a86);
  a86=(a27*a44);
  a55=(a55-a86);
  a76=(a76+a55);
  a55=(a16*a62);
  a86=(a60*a5);
  a55=(a55-a86);
  a86=(a52*a55);
  a45=(a27*a5);
  a1=(a16*a15);
  a45=(a45-a1);
  a1=(a83*a45);
  a86=(a86-a1);
  a76=(a76-a86);
  a86=(a17*a76);
  a10=(a10*a5);
  a75=(a75*a37);
  a37=(a8*a38);
  a43=(a5*a43);
  a37=(a37-a43);
  a75=(a75+a37);
  a37=(a94*a27);
  a43=(a78*a60);
  a37=(a37-a43);
  a75=(a75+a37);
  a37=(a75*a15);
  a10=(a10-a37);
  a94=(a94*a15);
  a78=(a78*a62);
  a94=(a94-a78);
  a78=(a27*a94);
  a37=(a16*a40);
  a78=(a78-a37);
  a10=(a10+a78);
  a78=(a60*a15);
  a27=(a27*a62);
  a78=(a78-a27);
  a27=(a83*a78);
  a37=(a90*a55);
  a27=(a27-a37);
  a10=(a10-a27);
  a27=(a67*a10);
  a75=(a75*a62);
  a12=(a12*a5);
  a75=(a75-a12);
  a16=(a16*a44);
  a60=(a60*a94);
  a16=(a16-a60);
  a75=(a75+a16);
  a16=(a90*a45);
  a60=(a52*a78);
  a16=(a16-a60);
  a75=(a75-a16);
  a16=(a18*a75);
  a27=(a27+a16);
  a86=(a86+a27);
  a27=(a6*a5);
  a16=(a63*a62);
  a60=(a82*a15);
  a16=(a16+a60);
  a27=(a27+a16);
  a16=(a58*a27);
  a60=(a93*a5);
  a12=(a71*a62);
  a37=(a21*a15);
  a12=(a12+a37);
  a60=(a60+a12);
  a12=(a70*a60);
  a16=(a16-a12);
  a12=(a52*a15);
  a37=(a83*a62);
  a12=(a12-a37);
  a94=(a94-a12);
  a12=(a6*a94);
  a37=(a83*a5);
  a43=(a90*a15);
  a37=(a37-a43);
  a44=(a44-a37);
  a37=(a63*a44);
  a43=(a90*a62);
  a1=(a52*a5);
  a43=(a43-a1);
  a40=(a40-a43);
  a43=(a82*a40);
  a37=(a37+a43);
  a12=(a12+a37);
  a37=(a72*a12);
  a43=(a93*a94);
  a1=(a71*a44);
  a7=(a21*a40);
  a1=(a1+a7);
  a43=(a43+a1);
  a1=(a92*a43);
  a37=(a37-a1);
  a16=(a16+a37);
  a86=(a86-a16);
  if (res[0]!=0) res[0][18]=a86;
  a86=(a93*a76);
  a16=(a71*a10);
  a37=(a21*a75);
  a16=(a16+a37);
  a86=(a86+a16);
  a5=(a17*a5);
  a62=(a67*a62);
  a15=(a18*a15);
  a62=(a62+a15);
  a5=(a5+a62);
  a62=(a70*a5);
  a15=(a20*a27);
  a62=(a62-a15);
  a94=(a17*a94);
  a44=(a67*a44);
  a40=(a18*a40);
  a44=(a44+a40);
  a94=(a94+a44);
  a44=(a92*a94);
  a12=(a53*a12);
  a44=(a44-a12);
  a62=(a62+a44);
  a86=(a86-a62);
  if (res[0]!=0) res[0][19]=a86;
  a76=(a6*a76);
  a10=(a63*a10);
  a75=(a82*a75);
  a10=(a10+a75);
  a76=(a76+a10);
  a10=(a20*a60);
  a75=(a58*a5);
  a10=(a10-a75);
  a43=(a53*a43);
  a94=(a72*a94);
  a43=(a43-a94);
  a10=(a10+a43);
  a76=(a76-a10);
  if (res[0]!=0) res[0][20]=a76;
  a76=(a17*a78);
  a10=(a67*a45);
  a43=(a18*a55);
  a10=(a10+a43);
  a76=(a76+a10);
  a10=(a72*a27);
  a43=(a92*a60);
  a10=(a10-a43);
  a76=(a76-a10);
  if (res[0]!=0) res[0][21]=a76;
  a76=(a93*a78);
  a10=(a71*a45);
  a43=(a21*a55);
  a10=(a10+a43);
  a76=(a76+a10);
  a10=(a92*a5);
  a27=(a53*a27);
  a10=(a10-a27);
  a76=(a76-a10);
  if (res[0]!=0) res[0][22]=a76;
  a78=(a6*a78);
  a45=(a63*a45);
  a55=(a82*a55);
  a45=(a45+a55);
  a78=(a78+a45);
  a60=(a53*a60);
  a5=(a72*a5);
  a60=(a60-a5);
  a78=(a78-a60);
  if (res[0]!=0) res[0][23]=a78;
  a78=(a61*a41);
  a60=(a64*a38);
  a5=(a66*a42);
  a60=(a60-a5);
  a78=(a78+a60);
  a60=(a77*a47);
  a5=(a13*a57);
  a45=(a8*a54);
  a5=(a5+a45);
  a60=(a60+a5);
  a5=(a79*a60);
  a45=(a14*a47);
  a55=(a23*a57);
  a76=(a19*a54);
  a55=(a55+a76);
  a45=(a45+a55);
  a55=(a87*a45);
  a5=(a5-a55);
  a78=(a78+a5);
  a5=(a78*a19);
  a55=(a14*a41);
  a76=(a19*a38);
  a23=(a23*a42);
  a76=(a76-a23);
  a55=(a55+a76);
  a47=(a61*a47);
  a66=(a66*a57);
  a54=(a64*a54);
  a66=(a66+a54);
  a47=(a47+a66);
  a66=(a87*a47);
  a54=(a29*a60);
  a66=(a66-a54);
  a55=(a55+a66);
  a66=(a55*a64);
  a5=(a5-a66);
  a66=(a87*a64);
  a54=(a29*a8);
  a66=(a66-a54);
  a54=(a47*a66);
  a57=(a79*a8);
  a87=(a87*a19);
  a57=(a57-a87);
  a87=(a45*a57);
  a54=(a54-a87);
  a5=(a5+a54);
  a54=(a60*a64);
  a87=(a47*a8);
  a54=(a54-a87);
  a87=(a52*a54);
  a76=(a45*a8);
  a23=(a60*a19);
  a76=(a76-a23);
  a23=(a83*a76);
  a87=(a87-a23);
  a5=(a5-a87);
  a87=(a17*a5);
  a55=(a55*a8);
  a41=(a77*a41);
  a38=(a8*a38);
  a13=(a13*a42);
  a38=(a38-a13);
  a41=(a41+a38);
  a38=(a29*a45);
  a13=(a79*a47);
  a38=(a38-a13);
  a41=(a41+a38);
  a38=(a41*a19);
  a55=(a55-a38);
  a29=(a29*a19);
  a79=(a79*a64);
  a29=(a29-a79);
  a79=(a45*a29);
  a38=(a60*a66);
  a79=(a79-a38);
  a55=(a55+a79);
  a79=(a47*a19);
  a45=(a45*a64);
  a79=(a79-a45);
  a45=(a83*a79);
  a38=(a90*a54);
  a45=(a45-a38);
  a55=(a55-a45);
  a45=(a67*a55);
  a41=(a41*a64);
  a78=(a78*a8);
  a41=(a41-a78);
  a60=(a60*a57);
  a47=(a47*a29);
  a60=(a60-a47);
  a41=(a41+a60);
  a60=(a90*a76);
  a47=(a52*a79);
  a60=(a60-a47);
  a41=(a41-a60);
  a60=(a18*a41);
  a45=(a45+a60);
  a87=(a87+a45);
  a45=(a6*a8);
  a60=(a63*a64);
  a47=(a82*a19);
  a60=(a60+a47);
  a45=(a45+a60);
  a60=(a58*a45);
  a47=(a93*a8);
  a78=(a71*a64);
  a38=(a21*a19);
  a78=(a78+a38);
  a47=(a47+a78);
  a78=(a70*a47);
  a60=(a60-a78);
  a78=(a52*a19);
  a38=(a83*a64);
  a78=(a78-a38);
  a29=(a29-a78);
  a78=(a6*a29);
  a38=(a83*a8);
  a13=(a90*a19);
  a38=(a38-a13);
  a57=(a57-a38);
  a38=(a63*a57);
  a13=(a90*a64);
  a42=(a52*a8);
  a13=(a13-a42);
  a66=(a66-a13);
  a13=(a82*a66);
  a38=(a38+a13);
  a78=(a78+a38);
  a38=(a72*a78);
  a13=(a93*a29);
  a42=(a71*a57);
  a23=(a21*a66);
  a42=(a42+a23);
  a13=(a13+a42);
  a42=(a92*a13);
  a38=(a38-a42);
  a60=(a60+a38);
  a87=(a87-a60);
  if (res[0]!=0) res[0][24]=a87;
  a87=(a93*a5);
  a60=(a71*a55);
  a38=(a21*a41);
  a60=(a60+a38);
  a87=(a87+a60);
  a8=(a17*a8);
  a64=(a67*a64);
  a19=(a18*a19);
  a64=(a64+a19);
  a8=(a8+a64);
  a64=(a70*a8);
  a19=(a20*a45);
  a64=(a64-a19);
  a29=(a17*a29);
  a57=(a67*a57);
  a66=(a18*a66);
  a57=(a57+a66);
  a29=(a29+a57);
  a57=(a92*a29);
  a78=(a53*a78);
  a57=(a57-a78);
  a64=(a64+a57);
  a87=(a87-a64);
  if (res[0]!=0) res[0][25]=a87;
  a5=(a6*a5);
  a55=(a63*a55);
  a41=(a82*a41);
  a55=(a55+a41);
  a5=(a5+a55);
  a55=(a20*a47);
  a41=(a58*a8);
  a55=(a55-a41);
  a13=(a53*a13);
  a29=(a72*a29);
  a13=(a13-a29);
  a55=(a55+a13);
  a5=(a5-a55);
  if (res[0]!=0) res[0][26]=a5;
  a5=(a17*a79);
  a55=(a67*a76);
  a13=(a18*a54);
  a55=(a55+a13);
  a5=(a5+a55);
  a55=(a72*a45);
  a13=(a92*a47);
  a55=(a55-a13);
  a5=(a5-a55);
  if (res[0]!=0) res[0][27]=a5;
  a5=(a93*a79);
  a55=(a71*a76);
  a13=(a21*a54);
  a55=(a55+a13);
  a5=(a5+a55);
  a55=(a92*a8);
  a45=(a53*a45);
  a55=(a55-a45);
  a5=(a5-a55);
  if (res[0]!=0) res[0][28]=a5;
  a79=(a6*a79);
  a76=(a63*a76);
  a54=(a82*a54);
  a76=(a76+a54);
  a79=(a79+a76);
  a47=(a53*a47);
  a8=(a72*a8);
  a47=(a47-a8);
  a79=(a79-a47);
  if (res[0]!=0) res[0][29]=a79;
  a79=(a61*a46);
  a47=(a71*a39);
  a8=(a65*a48);
  a47=(a47+a8);
  a79=(a79+a47);
  a47=(a77*a50);
  a8=(a93*a68);
  a76=(a9*a56);
  a8=(a8+a76);
  a47=(a47+a8);
  a8=(a80*a47);
  a76=(a14*a50);
  a54=(a21*a68);
  a5=(a22*a56);
  a54=(a54+a5);
  a76=(a76+a54);
  a54=(a88*a76);
  a8=(a8-a54);
  a79=(a79+a8);
  a8=(a79*a14);
  a54=(a14*a46);
  a5=(a21*a39);
  a22=(a22*a48);
  a5=(a5+a22);
  a54=(a54+a5);
  a50=(a61*a50);
  a68=(a71*a68);
  a65=(a65*a56);
  a68=(a68+a65);
  a50=(a50+a68);
  a68=(a88*a50);
  a65=(a35*a47);
  a68=(a68-a65);
  a54=(a54+a68);
  a68=(a54*a61);
  a8=(a8-a68);
  a68=(a88*a61);
  a65=(a35*a77);
  a68=(a68-a65);
  a65=(a50*a68);
  a56=(a80*a77);
  a88=(a88*a14);
  a56=(a56-a88);
  a88=(a76*a56);
  a65=(a65-a88);
  a8=(a8+a65);
  a65=(a47*a61);
  a88=(a50*a77);
  a65=(a65-a88);
  a88=(a52*a65);
  a5=(a76*a77);
  a22=(a47*a14);
  a5=(a5-a22);
  a22=(a83*a5);
  a88=(a88-a22);
  a8=(a8-a88);
  a88=(a17*a8);
  a54=(a54*a77);
  a46=(a77*a46);
  a39=(a93*a39);
  a9=(a9*a48);
  a39=(a39+a9);
  a46=(a46+a39);
  a39=(a35*a76);
  a9=(a80*a50);
  a39=(a39-a9);
  a46=(a46+a39);
  a39=(a46*a14);
  a54=(a54-a39);
  a35=(a35*a14);
  a80=(a80*a61);
  a35=(a35-a80);
  a80=(a76*a35);
  a39=(a47*a68);
  a80=(a80-a39);
  a54=(a54+a80);
  a80=(a50*a14);
  a76=(a76*a61);
  a80=(a80-a76);
  a76=(a83*a80);
  a39=(a90*a65);
  a76=(a76-a39);
  a54=(a54-a76);
  a76=(a67*a54);
  a46=(a46*a61);
  a79=(a79*a77);
  a46=(a46-a79);
  a47=(a47*a56);
  a50=(a50*a35);
  a47=(a47-a50);
  a46=(a46+a47);
  a47=(a90*a5);
  a50=(a52*a80);
  a47=(a47-a50);
  a46=(a46-a47);
  a47=(a18*a46);
  a76=(a76+a47);
  a88=(a88+a76);
  a76=(a6*a77);
  a47=(a63*a61);
  a50=(a82*a14);
  a47=(a47+a50);
  a76=(a76+a47);
  a47=(a58*a76);
  a50=(a93*a77);
  a79=(a71*a61);
  a39=(a21*a14);
  a79=(a79+a39);
  a50=(a50+a79);
  a79=(a70*a50);
  a47=(a47-a79);
  a79=(a52*a14);
  a39=(a83*a61);
  a79=(a79-a39);
  a35=(a35-a79);
  a79=(a6*a35);
  a39=(a83*a77);
  a9=(a90*a14);
  a39=(a39-a9);
  a56=(a56-a39);
  a39=(a63*a56);
  a9=(a90*a61);
  a48=(a52*a77);
  a9=(a9-a48);
  a68=(a68-a9);
  a9=(a82*a68);
  a39=(a39+a9);
  a79=(a79+a39);
  a39=(a72*a79);
  a9=(a93*a35);
  a48=(a71*a56);
  a22=(a21*a68);
  a48=(a48+a22);
  a9=(a9+a48);
  a48=(a92*a9);
  a39=(a39-a48);
  a47=(a47+a39);
  a88=(a88-a47);
  if (res[0]!=0) res[0][30]=a88;
  a88=(a93*a8);
  a47=(a71*a54);
  a39=(a21*a46);
  a47=(a47+a39);
  a88=(a88+a47);
  a77=(a17*a77);
  a61=(a67*a61);
  a14=(a18*a14);
  a61=(a61+a14);
  a77=(a77+a61);
  a61=(a70*a77);
  a14=(a20*a76);
  a61=(a61-a14);
  a35=(a17*a35);
  a56=(a67*a56);
  a68=(a18*a68);
  a56=(a56+a68);
  a35=(a35+a56);
  a56=(a92*a35);
  a79=(a53*a79);
  a56=(a56-a79);
  a61=(a61+a56);
  a88=(a88-a61);
  if (res[0]!=0) res[0][31]=a88;
  a8=(a6*a8);
  a54=(a63*a54);
  a46=(a82*a46);
  a54=(a54+a46);
  a8=(a8+a54);
  a54=(a20*a50);
  a46=(a58*a77);
  a54=(a54-a46);
  a9=(a53*a9);
  a35=(a72*a35);
  a9=(a9-a35);
  a54=(a54+a9);
  a8=(a8-a54);
  if (res[0]!=0) res[0][32]=a8;
  a8=(a17*a80);
  a54=(a67*a5);
  a9=(a18*a65);
  a54=(a54+a9);
  a8=(a8+a54);
  a54=(a72*a76);
  a9=(a92*a50);
  a54=(a54-a9);
  a8=(a8-a54);
  if (res[0]!=0) res[0][33]=a8;
  a8=(a93*a80);
  a54=(a71*a5);
  a9=(a21*a65);
  a54=(a54+a9);
  a8=(a8+a54);
  a54=(a92*a77);
  a76=(a53*a76);
  a54=(a54-a76);
  a8=(a8-a54);
  if (res[0]!=0) res[0][34]=a8;
  a80=(a6*a80);
  a5=(a63*a5);
  a65=(a82*a65);
  a5=(a5+a65);
  a80=(a80+a5);
  a50=(a53*a50);
  a77=(a72*a77);
  a50=(a50-a77);
  a80=(a80-a50);
  if (res[0]!=0) res[0][35]=a80;
  a80=(a67*a69);
  a50=(a71*a51);
  a77=(a63*a70);
  a50=(a50+a77);
  a80=(a80+a50);
  a50=(a17*a53);
  a77=(a93*a72);
  a5=(a6*a92);
  a77=(a77+a5);
  a50=(a50+a77);
  a77=(a81*a50);
  a5=(a18*a53);
  a65=(a21*a72);
  a8=(a82*a92);
  a65=(a65+a8);
  a5=(a5+a65);
  a65=(a89*a5);
  a77=(a77-a65);
  a80=(a80+a77);
  a77=(a80*a21);
  a65=(a18*a69);
  a8=(a21*a51);
  a54=(a82*a70);
  a8=(a8+a54);
  a65=(a65+a8);
  a8=(a67*a53);
  a54=(a71*a72);
  a76=(a63*a92);
  a54=(a54+a76);
  a8=(a8+a54);
  a54=(a89*a8);
  a76=(a49*a50);
  a54=(a54-a76);
  a65=(a65+a54);
  a54=(a65*a71);
  a77=(a77-a54);
  a54=(a89*a71);
  a76=(a49*a93);
  a54=(a54-a76);
  a76=(a8*a54);
  a9=(a81*a93);
  a89=(a89*a21);
  a9=(a9-a89);
  a89=(a5*a9);
  a76=(a76-a89);
  a77=(a77+a76);
  a76=(a50*a71);
  a89=(a8*a93);
  a76=(a76-a89);
  a89=(a52*a76);
  a35=(a5*a93);
  a46=(a50*a21);
  a35=(a35-a46);
  a46=(a83*a35);
  a89=(a89-a46);
  a77=(a77-a89);
  a89=(a17*a77);
  a65=(a65*a93);
  a69=(a17*a69);
  a51=(a93*a51);
  a46=(a6*a70);
  a51=(a51+a46);
  a69=(a69+a51);
  a51=(a49*a5);
  a46=(a81*a8);
  a51=(a51-a46);
  a69=(a69+a51);
  a51=(a69*a21);
  a65=(a65-a51);
  a49=(a49*a21);
  a81=(a81*a71);
  a49=(a49-a81);
  a81=(a5*a49);
  a51=(a50*a54);
  a81=(a81-a51);
  a65=(a65+a81);
  a81=(a8*a21);
  a5=(a5*a71);
  a81=(a81-a5);
  a5=(a83*a81);
  a51=(a90*a76);
  a5=(a5-a51);
  a65=(a65-a5);
  a5=(a67*a65);
  a69=(a69*a71);
  a80=(a80*a93);
  a69=(a69-a80);
  a50=(a50*a9);
  a8=(a8*a49);
  a50=(a50-a8);
  a69=(a69+a50);
  a50=(a90*a35);
  a8=(a52*a81);
  a50=(a50-a8);
  a69=(a69-a50);
  a50=(a18*a69);
  a5=(a5+a50);
  a89=(a89+a5);
  a5=(a6*a93);
  a50=(a63*a71);
  a8=(a82*a21);
  a50=(a50+a8);
  a5=(a5+a50);
  a50=(a58*a5);
  a8=casadi_sq(a93);
  a80=casadi_sq(a71);
  a51=casadi_sq(a21);
  a80=(a80+a51);
  a8=(a8+a80);
  a80=(a70*a8);
  a50=(a50-a80);
  a80=(a52*a21);
  a51=(a83*a71);
  a80=(a80-a51);
  a49=(a49-a80);
  a80=(a6*a49);
  a83=(a83*a93);
  a51=(a90*a21);
  a83=(a83-a51);
  a9=(a9-a83);
  a83=(a63*a9);
  a90=(a90*a71);
  a52=(a52*a93);
  a90=(a90-a52);
  a54=(a54-a90);
  a90=(a82*a54);
  a83=(a83+a90);
  a80=(a80+a83);
  a83=(a72*a80);
  a90=(a93*a49);
  a52=(a71*a9);
  a51=(a21*a54);
  a52=(a52+a51);
  a90=(a90+a52);
  a52=(a92*a90);
  a83=(a83-a52);
  a50=(a50+a83);
  a89=(a89-a50);
  if (res[0]!=0) res[0][36]=a89;
  a89=(a93*a77);
  a50=(a71*a65);
  a83=(a21*a69);
  a50=(a50+a83);
  a89=(a89+a50);
  a50=(a17*a93);
  a83=(a67*a71);
  a52=(a18*a21);
  a83=(a83+a52);
  a50=(a50+a83);
  a70=(a70*a50);
  a83=(a20*a5);
  a70=(a70-a83);
  a49=(a17*a49);
  a9=(a67*a9);
  a54=(a18*a54);
  a9=(a9+a54);
  a49=(a49+a9);
  a9=(a92*a49);
  a80=(a53*a80);
  a9=(a9-a80);
  a70=(a70+a9);
  a89=(a89-a70);
  if (res[0]!=0) res[0][37]=a89;
  a77=(a6*a77);
  a65=(a63*a65);
  a69=(a82*a69);
  a65=(a65+a69);
  a77=(a77+a65);
  a20=(a20*a8);
  a58=(a58*a50);
  a20=(a20-a58);
  a90=(a53*a90);
  a49=(a72*a49);
  a90=(a90-a49);
  a20=(a20+a90);
  a77=(a77-a20);
  if (res[0]!=0) res[0][38]=a77;
  a17=(a17*a81);
  a67=(a67*a35);
  a18=(a18*a76);
  a67=(a67+a18);
  a17=(a17+a67);
  a67=(a72*a5);
  a18=(a92*a8);
  a67=(a67-a18);
  a17=(a17-a67);
  if (res[0]!=0) res[0][39]=a17;
  a93=(a93*a81);
  a71=(a71*a35);
  a21=(a21*a76);
  a71=(a71+a21);
  a93=(a93+a71);
  a92=(a92*a50);
  a5=(a53*a5);
  a92=(a92-a5);
  a93=(a93-a92);
  if (res[0]!=0) res[0][40]=a93;
  a6=(a6*a81);
  a63=(a63*a35);
  a82=(a82*a76);
  a63=(a63+a82);
  a6=(a6+a63);
  a53=(a53*a8);
  a72=(a72*a50);
  a53=(a53-a72);
  a6=(a6-a53);
  if (res[0]!=0) res[0][41]=a6;
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_b(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int dJ_b_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_b_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void dJ_b_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int dJ_b_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void dJ_b_release(int mem) {
}

CASADI_SYMBOL_EXPORT void dJ_b_incref(void) {
}

CASADI_SYMBOL_EXPORT void dJ_b_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int dJ_b_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int dJ_b_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real dJ_b_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* dJ_b_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    case 1: return "v";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* dJ_b_name_out(casadi_int i) {
  switch (i) {
    case 0: return "dJ_b";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* dJ_b_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* dJ_b_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int dJ_b_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_b_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 1*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 0*sizeof(casadi_int);
  if (sz_w) *sz_w = 0*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
