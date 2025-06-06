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
  #define CASADI_PREFIX(ID) hyumm_multi_G_ ## ID
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

static const casadi_int casadi_s0[19] = {15, 1, 0, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

/* generalized_gravity:(i0[15])->(o0[15]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=arg[0]? arg[0][2] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][9] : 0;
  a3=cos(a2);
  a4=2.2204460492503131e-16;
  a5=arg[0]? arg[0][10] : 0;
  a6=cos(a5);
  a7=(a4*a6);
  a5=sin(a5);
  a7=(a7+a5);
  a8=5.8476655299999996e+00;
  a9=9.8100000000000005e+00;
  a10=(a4*a5);
  a10=(a10-a6);
  a11=(a9*a10);
  a12=(a8*a11);
  a13=arg[0]? arg[0][11] : 0;
  a14=cos(a13);
  a15=2.6820606400000000e+00;
  a16=(a14*a11);
  a13=sin(a13);
  a17=(a4*a6);
  a17=(a5+a17);
  a18=(a9*a17);
  a19=(a13*a18);
  a16=(a16+a19);
  a19=(a15*a16);
  a20=arg[0]? arg[0][12] : 0;
  a21=cos(a20);
  a22=(a4*a21);
  a23=-2.2204460492503131e-16;
  a20=sin(a20);
  a24=(a23*a20);
  a22=(a22+a24);
  a24=2.1298737100000000e+00;
  a25=(a22*a16);
  a26=(a14*a18);
  a11=(a13*a11);
  a26=(a26-a11);
  a11=(a21*a26);
  a25=(a25+a11);
  a11=(a24*a25);
  a27=arg[0]? arg[0][13] : 0;
  a28=cos(a27);
  a29=(a4*a28);
  a27=sin(a27);
  a29=(a29+a27);
  a30=2.2241227100000001e+00;
  a31=(a29*a25);
  a32=(a4*a27);
  a33=(a23*a21);
  a34=(a4*a20);
  a33=(a33-a34);
  a34=(a33*a16);
  a35=(a20*a26);
  a34=(a34-a35);
  a35=(a32*a34);
  a36=(a4*a27);
  a36=(a36-a28);
  a37=(a4*a26);
  a37=(a37-a16);
  a16=(a36*a37);
  a35=(a35+a16);
  a31=(a31+a35);
  a35=(a30*a31);
  a16=arg[0]? arg[0][14] : 0;
  a38=cos(a16);
  a39=(a4*a38);
  a16=sin(a16);
  a40=(a23*a16);
  a39=(a39+a40);
  a40=3.8254932000000003e-01;
  a41=(a39*a31);
  a42=(a4*a27);
  a42=(a28-a42);
  a43=(a42*a25);
  a44=(a4*a28);
  a45=(a44*a34);
  a28=(a4*a28);
  a27=(a27+a28);
  a28=(a27*a37);
  a45=(a45+a28);
  a43=(a43+a45);
  a45=(a38*a43);
  a25=(a4*a25);
  a25=(a25-a34);
  a28=(a16*a25);
  a45=(a45-a28);
  a41=(a41+a45);
  a41=(a40*a41);
  a45=(a39*a41);
  a28=(a23*a38);
  a46=(a4*a16);
  a28=(a28-a46);
  a46=(a28*a31);
  a47=(a16*a43);
  a48=(a38*a25);
  a47=(a47+a48);
  a46=(a46-a47);
  a46=(a40*a46);
  a47=(a28*a46);
  a48=(a4*a43);
  a49=(a4*a25);
  a48=(a48+a49);
  a48=(a48-a31);
  a48=(a40*a48);
  a47=(a47-a48);
  a45=(a45+a47);
  a47=(a35+a45);
  a31=(a29*a47);
  a43=(a30*a43);
  a49=(a38*a41);
  a50=(a4*a48);
  a51=(a16*a46);
  a50=(a50-a51);
  a49=(a49+a50);
  a50=(a43+a49);
  a51=(a42*a50);
  a25=(a30*a25);
  a52=(a4*a48);
  a53=(a38*a46);
  a52=(a52-a53);
  a53=(a16*a41);
  a52=(a52-a53);
  a53=(a25+a52);
  a54=(a4*a53);
  a51=(a51+a54);
  a31=(a31+a51);
  a51=(a11+a31);
  a54=(a22*a51);
  a34=(a24*a34);
  a55=(a32*a47);
  a56=(a44*a50);
  a56=(a56-a53);
  a55=(a55+a56);
  a56=(a34+a55);
  a53=(a33*a56);
  a37=(a24*a37);
  a47=(a36*a47);
  a50=(a27*a50);
  a47=(a47+a50);
  a50=(a37+a47);
  a53=(a53-a50);
  a54=(a54+a53);
  a53=(a19+a54);
  a57=(a14*a53);
  a26=(a15*a26);
  a58=(a21*a51);
  a59=(a4*a50);
  a60=(a20*a56);
  a59=(a59-a60);
  a58=(a58+a59);
  a59=(a26+a58);
  a60=(a13*a59);
  a57=(a57-a60);
  a60=(a12+a57);
  a7=(a7*a60);
  a61=(a4*a5);
  a61=(a6-a61);
  a18=(a8*a18);
  a53=(a13*a53);
  a59=(a14*a59);
  a53=(a53+a59);
  a59=(a18+a53);
  a61=(a61*a59);
  a50=(a4*a50);
  a56=(a21*a56);
  a50=(a50-a56);
  a51=(a20*a51);
  a50=(a50-a51);
  a51=(a4*a50);
  a61=(a61+a51);
  a7=(a7+a61);
  a61=(a3*a7);
  a2=sin(a2);
  a5=(a4*a5);
  a5=(a5*a60);
  a6=(a4*a6);
  a6=(a6*a59);
  a6=(a6-a50);
  a5=(a5+a6);
  a6=(a2*a5);
  a61=(a61-a6);
  a6=arg[0]? arg[0][3] : 0;
  a59=cos(a6);
  a60=arg[0]? arg[0][4] : 0;
  a51=cos(a60);
  a56=(a4*a51);
  a60=sin(a60);
  a56=(a56+a60);
  a62=(a4*a60);
  a62=(a62-a51);
  a63=(a9*a62);
  a64=(a8*a63);
  a65=arg[0]? arg[0][5] : 0;
  a66=cos(a65);
  a67=(a66*a63);
  a65=sin(a65);
  a68=(a4*a51);
  a68=(a60+a68);
  a9=(a9*a68);
  a69=(a65*a9);
  a67=(a67+a69);
  a69=(a15*a67);
  a70=arg[0]? arg[0][6] : 0;
  a71=cos(a70);
  a72=(a4*a71);
  a70=sin(a70);
  a73=(a23*a70);
  a72=(a72+a73);
  a73=(a72*a67);
  a74=(a66*a9);
  a63=(a65*a63);
  a74=(a74-a63);
  a63=(a71*a74);
  a73=(a73+a63);
  a63=(a24*a73);
  a75=arg[0]? arg[0][7] : 0;
  a76=cos(a75);
  a77=(a4*a76);
  a75=sin(a75);
  a77=(a77+a75);
  a78=(a77*a73);
  a79=(a4*a75);
  a80=(a23*a71);
  a81=(a4*a70);
  a80=(a80-a81);
  a81=(a80*a67);
  a82=(a70*a74);
  a81=(a81-a82);
  a82=(a79*a81);
  a83=(a4*a75);
  a83=(a83-a76);
  a84=(a4*a74);
  a84=(a84-a67);
  a67=(a83*a84);
  a82=(a82+a67);
  a78=(a78+a82);
  a82=(a30*a78);
  a67=arg[0]? arg[0][8] : 0;
  a85=cos(a67);
  a86=(a4*a85);
  a67=sin(a67);
  a87=(a23*a67);
  a86=(a86+a87);
  a87=(a86*a78);
  a88=(a4*a75);
  a88=(a76-a88);
  a89=(a88*a73);
  a90=(a4*a76);
  a91=(a90*a81);
  a76=(a4*a76);
  a75=(a75+a76);
  a76=(a75*a84);
  a91=(a91+a76);
  a89=(a89+a91);
  a91=(a85*a89);
  a73=(a4*a73);
  a73=(a73-a81);
  a76=(a67*a73);
  a91=(a91-a76);
  a87=(a87+a91);
  a87=(a40*a87);
  a91=(a86*a87);
  a23=(a23*a85);
  a76=(a4*a67);
  a23=(a23-a76);
  a76=(a23*a78);
  a92=(a67*a89);
  a93=(a85*a73);
  a92=(a92+a93);
  a76=(a76-a92);
  a76=(a40*a76);
  a92=(a23*a76);
  a93=(a4*a89);
  a94=(a4*a73);
  a93=(a93+a94);
  a93=(a93-a78);
  a40=(a40*a93);
  a92=(a92-a40);
  a91=(a91+a92);
  a92=(a82+a91);
  a93=(a77*a92);
  a89=(a30*a89);
  a78=(a85*a87);
  a94=(a4*a40);
  a95=(a67*a76);
  a94=(a94-a95);
  a78=(a78+a94);
  a94=(a89+a78);
  a95=(a88*a94);
  a30=(a30*a73);
  a73=(a4*a40);
  a96=(a85*a76);
  a73=(a73-a96);
  a96=(a67*a87);
  a73=(a73-a96);
  a96=(a30+a73);
  a97=(a4*a96);
  a95=(a95+a97);
  a93=(a93+a95);
  a95=(a63+a93);
  a97=(a72*a95);
  a81=(a24*a81);
  a98=(a79*a92);
  a99=(a90*a94);
  a99=(a99-a96);
  a98=(a98+a99);
  a99=(a81+a98);
  a96=(a80*a99);
  a24=(a24*a84);
  a92=(a83*a92);
  a94=(a75*a94);
  a92=(a92+a94);
  a94=(a24+a92);
  a96=(a96-a94);
  a97=(a97+a96);
  a96=(a69+a97);
  a84=(a66*a96);
  a15=(a15*a74);
  a74=(a71*a95);
  a100=(a4*a94);
  a101=(a70*a99);
  a100=(a100-a101);
  a74=(a74+a100);
  a100=(a15+a74);
  a101=(a65*a100);
  a84=(a84-a101);
  a101=(a64+a84);
  a56=(a56*a101);
  a102=(a4*a60);
  a102=(a51-a102);
  a8=(a8*a9);
  a96=(a65*a96);
  a100=(a66*a100);
  a96=(a96+a100);
  a100=(a8+a96);
  a102=(a102*a100);
  a94=(a4*a94);
  a99=(a71*a99);
  a94=(a94-a99);
  a95=(a70*a95);
  a94=(a94-a95);
  a95=(a4*a94);
  a102=(a102+a95);
  a56=(a56+a102);
  a102=(a59*a56);
  a6=sin(a6);
  a60=(a4*a60);
  a60=(a60*a101);
  a51=(a4*a51);
  a51=(a51*a100);
  a51=(a51-a94);
  a60=(a60+a51);
  a51=(a6*a60);
  a102=(a102-a51);
  a51=(a61+a102);
  a100=(a1*a51);
  a0=sin(a0);
  a2=(a2*a7);
  a3=(a3*a5);
  a2=(a2+a3);
  a6=(a6*a56);
  a59=(a59*a60);
  a6=(a6+a59);
  a59=(a2+a6);
  a60=(a0*a59);
  a100=(a100-a60);
  if (res[0]!=0) res[0][0]=a100;
  a0=(a0*a51);
  a1=(a1*a59);
  a0=(a0+a1);
  if (res[0]!=0) res[0][1]=a0;
  a0=-7.0984400000000003e-02;
  a1=(a0*a37);
  a59=7.6491279999999995e-02;
  a51=(a59*a34);
  a1=(a1-a51);
  a51=-2.3113999999999996e-04;
  a100=(a51*a25);
  a60=6.4458919999999975e-02;
  a3=(a60*a43);
  a100=(a100-a3);
  a3=-4.6556000000000001e-04;
  a5=(a3*a48);
  a101=3.0790970000000001e-02;
  a95=(a101*a46);
  a5=(a5-a95);
  a39=(a39*a5);
  a95=(a101*a41);
  a99=8.1470000000000004e-05;
  a48=(a99*a48);
  a95=(a95-a48);
  a28=(a28*a95);
  a46=(a99*a46);
  a41=(a3*a41);
  a46=(a46-a41);
  a28=(a28-a46);
  a39=(a39+a28);
  a28=6.9000000000000006e-02;
  a41=(a28*a49);
  a39=(a39-a41);
  a100=(a100+a39);
  a29=(a29*a100);
  a39=(a60*a35);
  a41=-9.7962319999999978e-02;
  a25=(a41*a25);
  a39=(a39-a25);
  a25=(a38*a5);
  a48=(a4*a46);
  a9=(a16*a95);
  a48=(a48-a9);
  a25=(a25+a48);
  a45=(a28*a45);
  a48=-1.6800000000000001e-01;
  a52=(a48*a52);
  a45=(a45-a52);
  a25=(a25+a45);
  a39=(a39+a25);
  a42=(a42*a39);
  a43=(a41*a43);
  a35=(a51*a35);
  a43=(a43-a35);
  a35=(a4*a46);
  a38=(a38*a95);
  a35=(a35-a38);
  a16=(a16*a5);
  a35=(a35-a16);
  a49=(a48*a49);
  a35=(a35+a49);
  a43=(a43+a35);
  a35=(a4*a43);
  a42=(a42+a35);
  a29=(a29+a42);
  a42=-1.1400000000000000e-01;
  a47=(a42*a47);
  a35=8.3000000000000004e-02;
  a55=(a35*a55);
  a47=(a47-a55);
  a29=(a29+a47);
  a1=(a1+a29);
  a22=(a22*a1);
  a29=(a59*a11);
  a47=-2.6846999999999998e-04;
  a37=(a47*a37);
  a29=(a29-a37);
  a32=(a32*a100);
  a44=(a44*a39);
  a44=(a44-a43);
  a32=(a32+a44);
  a44=(a35*a31);
  a32=(a32+a44);
  a29=(a29+a32);
  a33=(a33*a29);
  a34=(a47*a34);
  a11=(a0*a11);
  a34=(a34-a11);
  a36=(a36*a100);
  a27=(a27*a39);
  a36=(a36+a27);
  a31=(a42*a31);
  a36=(a36-a31);
  a34=(a34+a36);
  a33=(a33-a34);
  a22=(a22+a33);
  a33=-7.4999999999999997e-02;
  a36=(a33*a58);
  a22=(a22-a36);
  a36=-7.0003829999999975e-02;
  a31=(a36*a26);
  a22=(a22-a31);
  a31=(a14*a22);
  a27=(a36*a19);
  a39=(a21*a1);
  a100=(a4*a34);
  a11=(a20*a29);
  a100=(a100-a11);
  a39=(a39+a100);
  a54=(a33*a54);
  a100=-2.6700000000000002e-01;
  a11=(a100*a50);
  a54=(a54-a11);
  a39=(a39+a54);
  a27=(a27+a39);
  a39=(a13*a27);
  a31=(a31-a39);
  a39=-3.0499999999999999e-02;
  a54=(a39*a53);
  a31=(a31-a54);
  a54=4.4830689999999999e-02;
  a11=(a54*a18);
  a31=(a31-a11);
  a10=(a10*a31);
  a31=(a54*a12);
  a13=(a13*a22);
  a14=(a14*a27);
  a13=(a13+a14);
  a57=(a39*a57);
  a14=-4.5000000000000001e-01;
  a50=(a14*a50);
  a57=(a57-a50);
  a13=(a13+a57);
  a31=(a31+a13);
  a17=(a17*a31);
  a10=(a10+a17);
  a17=-1.0900000000000000e-01;
  a7=(a17*a7);
  a10=(a10-a7);
  a7=2.9999999999999999e-01;
  a2=(a7*a2);
  a31=-4.0000000000000002e-01;
  a31=(a31*a61);
  a2=(a2-a31);
  a2=(a10+a2);
  a31=(a0*a24);
  a61=(a59*a81);
  a31=(a31-a61);
  a61=(a51*a30);
  a13=(a60*a89);
  a61=(a61-a13);
  a13=(a3*a40);
  a57=(a101*a76);
  a13=(a13-a57);
  a86=(a86*a13);
  a101=(a101*a87);
  a40=(a99*a40);
  a101=(a101-a40);
  a23=(a23*a101);
  a99=(a99*a76);
  a3=(a3*a87);
  a99=(a99-a3);
  a23=(a23-a99);
  a86=(a86+a23);
  a23=(a28*a78);
  a86=(a86-a23);
  a61=(a61+a86);
  a77=(a77*a61);
  a60=(a60*a82);
  a30=(a41*a30);
  a60=(a60-a30);
  a30=(a85*a13);
  a86=(a4*a99);
  a23=(a67*a101);
  a86=(a86-a23);
  a30=(a30+a86);
  a28=(a28*a91);
  a73=(a48*a73);
  a28=(a28-a73);
  a30=(a30+a28);
  a60=(a60+a30);
  a88=(a88*a60);
  a41=(a41*a89);
  a51=(a51*a82);
  a41=(a41-a51);
  a51=(a4*a99);
  a85=(a85*a101);
  a51=(a51-a85);
  a67=(a67*a13);
  a51=(a51-a67);
  a48=(a48*a78);
  a51=(a51+a48);
  a41=(a41+a51);
  a51=(a4*a41);
  a88=(a88+a51);
  a77=(a77+a88);
  a92=(a42*a92);
  a98=(a35*a98);
  a92=(a92-a98);
  a77=(a77+a92);
  a31=(a31+a77);
  a72=(a72*a31);
  a59=(a59*a63);
  a24=(a47*a24);
  a59=(a59-a24);
  a79=(a79*a61);
  a90=(a90*a60);
  a90=(a90-a41);
  a79=(a79+a90);
  a35=(a35*a93);
  a79=(a79+a35);
  a59=(a59+a79);
  a80=(a80*a59);
  a47=(a47*a81);
  a0=(a0*a63);
  a47=(a47-a0);
  a83=(a83*a61);
  a75=(a75*a60);
  a83=(a83+a75);
  a42=(a42*a93);
  a83=(a83-a42);
  a47=(a47+a83);
  a80=(a80-a47);
  a72=(a72+a80);
  a80=(a33*a74);
  a72=(a72-a80);
  a80=(a36*a15);
  a72=(a72-a80);
  a80=(a66*a72);
  a36=(a36*a69);
  a83=(a71*a31);
  a42=(a4*a47);
  a93=(a70*a59);
  a42=(a42-a93);
  a83=(a83+a42);
  a33=(a33*a97);
  a97=(a100*a94);
  a33=(a33-a97);
  a83=(a83+a33);
  a36=(a36+a83);
  a83=(a65*a36);
  a80=(a80-a83);
  a83=(a39*a96);
  a80=(a80-a83);
  a83=(a54*a8);
  a80=(a80-a83);
  a62=(a62*a80);
  a54=(a54*a64);
  a65=(a65*a72);
  a66=(a66*a36);
  a65=(a65+a66);
  a39=(a39*a84);
  a94=(a14*a94);
  a39=(a39-a94);
  a65=(a65+a39);
  a54=(a54+a65);
  a68=(a68*a54);
  a62=(a62+a68);
  a17=(a17*a56);
  a62=(a62-a17);
  a7=(a7*a6);
  a6=4.0000000000000002e-01;
  a6=(a6*a102);
  a7=(a7-a6);
  a7=(a62+a7);
  a2=(a2+a7);
  if (res[0]!=0) res[0][2]=a2;
  if (res[0]!=0) res[0][3]=a62;
  a62=-2.9616699000000002e-01;
  a8=(a62*a8);
  a2=2.2540000000000001e-05;
  a64=(a2*a64);
  a8=(a8-a64);
  a64=-1.6804015999999994e-01;
  a15=(a64*a15);
  a7=2.1420999999999994e-04;
  a69=(a7*a69);
  a15=(a15-a69);
  a69=(a4*a47);
  a71=(a71*a59);
  a69=(a69-a71);
  a70=(a70*a31);
  a69=(a69-a70);
  a74=(a100*a74);
  a69=(a69+a74);
  a15=(a15+a69);
  a96=(a14*a96);
  a96=(a15+a96);
  a8=(a8+a96);
  if (res[0]!=0) res[0][4]=a8;
  if (res[0]!=0) res[0][5]=a15;
  if (res[0]!=0) res[0][6]=a47;
  if (res[0]!=0) res[0][7]=a41;
  if (res[0]!=0) res[0][8]=a99;
  if (res[0]!=0) res[0][9]=a10;
  a62=(a62*a18);
  a2=(a2*a12);
  a62=(a62-a2);
  a64=(a64*a26);
  a7=(a7*a19);
  a64=(a64-a7);
  a4=(a4*a34);
  a21=(a21*a29);
  a4=(a4-a21);
  a20=(a20*a1);
  a4=(a4-a20);
  a100=(a100*a58);
  a4=(a4+a100);
  a64=(a64+a4);
  a14=(a14*a53);
  a14=(a64+a14);
  a62=(a62+a14);
  if (res[0]!=0) res[0][10]=a62;
  if (res[0]!=0) res[0][11]=a64;
  if (res[0]!=0) res[0][12]=a34;
  if (res[0]!=0) res[0][13]=a43;
  if (res[0]!=0) res[0][14]=a46;
  return 0;
}

CASADI_SYMBOL_EXPORT int generalized_gravity(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int generalized_gravity_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int generalized_gravity_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void generalized_gravity_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int generalized_gravity_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void generalized_gravity_release(int mem) {
}

CASADI_SYMBOL_EXPORT void generalized_gravity_incref(void) {
}

CASADI_SYMBOL_EXPORT void generalized_gravity_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int generalized_gravity_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int generalized_gravity_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real generalized_gravity_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* generalized_gravity_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* generalized_gravity_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* generalized_gravity_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* generalized_gravity_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int generalized_gravity_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
