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
  #define CASADI_PREFIX(ID) yl012_sat_core_dJ_b_ ## ID
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

static const casadi_int casadi_s0[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s1[45] = {6, 6, 0, 6, 12, 18, 24, 30, 36, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};

/* dJ_b:(q[6],v[6])->(dJ_b[6x6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=arg[0]? arg[0][5] : 0;
  a1=cos(a0);
  a2=-2.7982052848094730e-15;
  a3=arg[0]? arg[0][4] : 0;
  a4=cos(a3);
  a5=(a2*a4);
  a6=-5.0000000000000400e-01;
  a3=sin(a3);
  a7=(a6*a3);
  a5=(a5-a7);
  a7=-2.0510348974767112e-10;
  a8=arg[0]? arg[0][3] : 0;
  a9=cos(a8);
  a10=(a7*a9);
  a11=2.0510354525882235e-10;
  a8=sin(a8);
  a12=(a11*a8);
  a10=(a10+a12);
  a12=arg[0]? arg[0][2] : 0;
  a13=cos(a12);
  a14=(a7*a13);
  a12=sin(a12);
  a14=(a14-a12);
  a15=1.3729000000000000e-01;
  a16=5.5511151231257827e-17;
  a17=arg[0]? arg[0][1] : 0;
  a18=cos(a17);
  a19=(a16*a18);
  a17=sin(a17);
  a19=(a19-a17);
  a20=arg[1]? arg[1][0] : 0;
  a21=(a19*a20);
  a22=(a15*a21);
  a23=1.1975000000000000e-01;
  a24=(a23*a20);
  a25=(a17*a24);
  a22=(a22-a25);
  a26=(a14*a22);
  a27=(a7*a12);
  a27=(a13+a27);
  a28=(a18*a24);
  a29=(a16*a17);
  a29=(a18+a29);
  a30=(a29*a20);
  a31=(a15*a30);
  a32=6.7400000000000004e-01;
  a33=arg[1]? arg[1][1] : 0;
  a20=(a7*a20);
  a33=(a33+a20);
  a20=(a32*a33);
  a31=(a31-a20);
  a31=(a28+a31);
  a20=(a27*a31);
  a26=(a26-a20);
  a20=1.2844000000000000e-01;
  a34=(a7*a13);
  a34=(a34-a12);
  a35=(a34*a21);
  a12=(a7*a12);
  a12=(a12+a13);
  a13=(a12*a30);
  a35=(a35-a13);
  a13=(a20*a35);
  a13=(a26+a13);
  a36=(a10*a13);
  a22=(a12*a22);
  a31=(a34*a31);
  a22=(a22+a31);
  a31=(a14*a30);
  a37=(a27*a21);
  a31=(a31+a37);
  a37=(a20*a31);
  a38=1.4460999999999999e-01;
  a39=arg[1]? arg[1][2] : 0;
  a39=(a39+a33);
  a40=(a38*a39);
  a37=(a37-a40);
  a37=(a22+a37);
  a40=(a9*a37);
  a41=(a16*a9);
  a41=(a41+a8);
  a24=(a11*a24);
  a42=(a32*a21);
  a42=(a24+a42);
  a43=(a38*a35);
  a43=(a42+a43);
  a44=(a41*a43);
  a40=(a40+a44);
  a36=(a36-a40);
  a40=2.6885999999999999e-01;
  a44=(a11*a9);
  a45=(a7*a8);
  a44=(a44-a45);
  a45=(a44*a31);
  a16=(a16*a8);
  a16=(a9-a16);
  a46=(a16*a39);
  a47=(a8*a35);
  a46=(a46-a47);
  a45=(a45+a46);
  a46=(a40*a45);
  a46=(a36+a46);
  a47=(a5*a46);
  a48=-1.6155445744325999e-15;
  a49=(a48*a4);
  a50=8.6602540378443638e-01;
  a51=(a50*a3);
  a49=(a49-a51);
  a51=(a11*a37);
  a52=(a7*a43);
  a51=(a51+a52);
  a51=(a13-a51);
  a52=8.1409999999999996e-02;
  a53=(a52*a45);
  a53=(a51-a53);
  a54=(a49*a53);
  a55=-1.9721522630525295e-31;
  a56=(a55*a3);
  a56=(a56+a4);
  a13=(a44*a13);
  a37=(a8*a37);
  a43=(a16*a43);
  a37=(a37-a43);
  a13=(a13+a37);
  a37=(a10*a31);
  a43=(a9*a35);
  a57=(a41*a39);
  a43=(a43+a57);
  a37=(a37+a43);
  a43=(a40*a37);
  a57=arg[1]? arg[1][3] : 0;
  a58=(a11*a35);
  a59=(a7*a39);
  a58=(a58+a59);
  a58=(a31+a58);
  a57=(a57+a58);
  a58=(a52*a57);
  a43=(a43-a58);
  a43=(a13-a43);
  a58=(a56*a43);
  a54=(a54-a58);
  a47=(a47+a54);
  a54=2.9988499999999940e-01;
  a6=(a6*a4);
  a2=(a2*a3);
  a6=(a6+a2);
  a2=(a6*a37);
  a55=(a55*a4);
  a55=(a55-a3);
  a58=(a55*a45);
  a4=(a50*a4);
  a48=(a48*a3);
  a4=(a4+a48);
  a48=(a4*a57);
  a58=(a58+a48);
  a2=(a2+a58);
  a58=(a54*a2);
  a48=3.3507970647335344e-01;
  a3=arg[1]? arg[1][4] : 0;
  a59=(a50*a37);
  a60=-3.2310891488651735e-15;
  a61=(a60*a45);
  a62=5.0000000000000400e-01;
  a63=(a62*a57);
  a61=(a61+a63);
  a59=(a59+a61);
  a3=(a3+a59);
  a59=(a48*a3);
  a58=(a58-a59);
  a58=(a47-a58);
  a59=(a1*a58);
  a61=-8.6602540378443982e-01;
  a0=sin(a0);
  a63=(a61*a0);
  a64=(a50*a46);
  a65=(a60*a43);
  a66=(a62*a53);
  a65=(a65+a66);
  a64=(a64+a65);
  a65=(a5*a37);
  a66=(a49*a57);
  a67=(a56*a45);
  a66=(a66-a67);
  a65=(a65+a66);
  a66=(a48*a65);
  a66=(a64-a66);
  a67=(a63*a66);
  a59=(a59-a67);
  a67=4.9999999999999800e-01;
  a68=(a67*a0);
  a46=(a6*a46);
  a43=(a55*a43);
  a53=(a4*a53);
  a43=(a43+a53);
  a46=(a46+a43);
  a43=(a54*a65);
  a43=(a46+a43);
  a53=(a68*a43);
  a59=(a59-a53);
  a53=-4.6730979999999998e-02;
  a69=(a67*a1);
  a70=(a69*a2);
  a71=(a0*a65);
  a61=(a61*a1);
  a72=(a61*a3);
  a71=(a71+a72);
  a70=(a70+a71);
  a71=(a53*a70);
  a72=-1.1660000000000000e-05;
  a73=arg[1]? arg[1][5] : 0;
  a74=8.6602540378443982e-01;
  a75=(a74*a2);
  a76=(a67*a3);
  a75=(a75+a76);
  a73=(a73+a75);
  a75=(a72*a73);
  a71=(a71-a75);
  a71=(a59-a71);
  a75=(a29*a14);
  a76=(a19*a27);
  a75=(a75+a76);
  a76=(a75*a10);
  a77=(a19*a34);
  a78=(a29*a12);
  a77=(a77-a78);
  a78=(a77*a9);
  a79=(a7*a41);
  a78=(a78+a79);
  a76=(a76+a78);
  a78=(a76*a6);
  a79=(a75*a44);
  a80=(a7*a16);
  a81=(a77*a8);
  a80=(a80-a81);
  a79=(a79+a80);
  a80=(a79*a55);
  a81=(a11*a77);
  a82=4.2067441506673032e-20;
  a81=(a81+a82);
  a81=(a75+a81);
  a82=(a81*a4);
  a80=(a80+a82);
  a78=(a78+a80);
  a80=(a74*a78);
  a82=(a50*a76);
  a83=(a60*a79);
  a84=(a62*a81);
  a83=(a83+a84);
  a82=(a82+a83);
  a83=(a67*a82);
  a80=(a80+a83);
  a83=(a71*a80);
  a84=(a74*a43);
  a85=(a67*a66);
  a84=(a84+a85);
  a85=(a1*a65);
  a86=(a63*a3);
  a85=(a85-a86);
  a86=(a68*a2);
  a85=(a85-a86);
  a86=(a72*a85);
  a87=-9.3200000000000006e-06;
  a88=(a87*a70);
  a86=(a86-a88);
  a86=(a84-a86);
  a88=(a76*a5);
  a89=(a81*a49);
  a90=(a79*a56);
  a89=(a89-a90);
  a88=(a88+a89);
  a89=(a88*a1);
  a90=(a82*a63);
  a89=(a89-a90);
  a90=(a78*a68);
  a89=(a89-a90);
  a90=(a86*a89);
  a83=(a83-a90);
  a90=arg[0]? arg[0][0] : 0;
  a91=sin(a90);
  a92=(a91*a17);
  a90=cos(a90);
  a93=(a11*a18);
  a94=(a7*a17);
  a93=(a93+a94);
  a94=(a90*a93);
  a92=(a92+a94);
  a94=(a92*a14);
  a95=(a91*a18);
  a96=(a7*a18);
  a97=(a11*a17);
  a96=(a96-a97);
  a97=(a90*a96);
  a95=(a95+a97);
  a97=(a95*a27);
  a94=(a94+a97);
  a97=(a94*a10);
  a98=(a95*a34);
  a99=(a92*a12);
  a98=(a98-a99);
  a99=(a98*a9);
  a100=(a11*a91);
  a100=(a100+a90);
  a101=(a100*a41);
  a99=(a99+a101);
  a97=(a97+a99);
  a99=(a97*a6);
  a101=(a94*a44);
  a102=(a100*a16);
  a103=(a98*a8);
  a102=(a102-a103);
  a101=(a101+a102);
  a102=(a101*a55);
  a103=(a11*a98);
  a104=(a7*a100);
  a103=(a103+a104);
  a103=(a94+a103);
  a104=(a103*a4);
  a102=(a102+a104);
  a99=(a99+a102);
  a102=(a74*a99);
  a104=(a50*a97);
  a105=(a60*a101);
  a106=(a62*a103);
  a105=(a105+a106);
  a104=(a104+a105);
  a105=(a67*a104);
  a102=(a102+a105);
  a17=(a90*a17);
  a93=(a91*a93);
  a17=(a17-a93);
  a93=(a32*a17);
  a105=(a11*a90);
  a105=(a105-a91);
  a106=(a15*a105);
  a93=(a93+a106);
  a106=(a23*a91);
  a93=(a93-a106);
  a14=(a17*a14);
  a18=(a90*a18);
  a91=(a91*a96);
  a18=(a18-a91);
  a27=(a18*a27);
  a14=(a14+a27);
  a27=(a38*a14);
  a91=(a20*a105);
  a27=(a27+a91);
  a27=(a93+a27);
  a10=(a14*a10);
  a34=(a18*a34);
  a12=(a17*a12);
  a34=(a34-a12);
  a9=(a34*a9);
  a41=(a105*a41);
  a9=(a9+a41);
  a10=(a10+a9);
  a9=(a52*a10);
  a11=(a11*a34);
  a41=(a7*a105);
  a11=(a11+a41);
  a11=(a14+a11);
  a41=(a40*a11);
  a9=(a9+a41);
  a9=(a27+a9);
  a6=(a10*a6);
  a44=(a14*a44);
  a16=(a105*a16);
  a8=(a34*a8);
  a16=(a16-a8);
  a44=(a44+a16);
  a55=(a44*a55);
  a4=(a11*a4);
  a55=(a55+a4);
  a6=(a6+a55);
  a55=(a48*a6);
  a50=(a50*a10);
  a60=(a60*a44);
  a62=(a62*a11);
  a60=(a60+a62);
  a50=(a50+a60);
  a60=(a54*a50);
  a55=(a55+a60);
  a55=(a9+a55);
  a60=(a6*a69);
  a62=(a10*a5);
  a4=(a11*a49);
  a16=(a44*a56);
  a4=(a4-a16);
  a62=(a62+a4);
  a4=(a62*a0);
  a16=(a50*a61);
  a4=(a4+a16);
  a60=(a60+a4);
  a4=(a72*a60);
  a16=(a62*a1);
  a8=(a50*a63);
  a16=(a16-a8);
  a8=(a6*a68);
  a16=(a16-a8);
  a8=(a87*a16);
  a74=(a74*a6);
  a67=(a67*a50);
  a74=(a74+a67);
  a67=(a53*a74);
  a8=(a8+a67);
  a4=(a4+a8);
  a4=(a55+a4);
  a8=(a102*a4);
  a23=(a23*a90);
  a90=(a32*a92);
  a15=(a15*a100);
  a90=(a90+a15);
  a90=(a23+a90);
  a15=(a38*a94);
  a20=(a20*a100);
  a15=(a15+a20);
  a15=(a90+a15);
  a20=(a52*a97);
  a67=(a40*a103);
  a20=(a20+a67);
  a20=(a15+a20);
  a67=(a48*a99);
  a41=(a54*a104);
  a67=(a67+a41);
  a67=(a20+a67);
  a41=(a99*a69);
  a5=(a97*a5);
  a49=(a103*a49);
  a56=(a101*a56);
  a49=(a49-a56);
  a5=(a5+a49);
  a49=(a5*a0);
  a56=(a104*a61);
  a49=(a49+a56);
  a41=(a41+a49);
  a49=(a72*a41);
  a1=(a5*a1);
  a63=(a104*a63);
  a1=(a1-a63);
  a68=(a99*a68);
  a1=(a1-a68);
  a68=(a87*a1);
  a63=(a53*a102);
  a68=(a68+a63);
  a49=(a49+a68);
  a49=(a67+a49);
  a68=(a74*a49);
  a8=(a8-a68);
  a68=(a85*a8);
  a63=(a1*a4);
  a56=(a16*a49);
  a63=(a63-a56);
  a56=(a73*a63);
  a68=(a68-a56);
  a83=(a83+a68);
  a83=(-a83);
  if (res[0]!=0) res[0][0]=a83;
  a83=(a78*a69);
  a68=(a88*a0);
  a56=(a82*a61);
  a68=(a68+a56);
  a83=(a83+a68);
  a68=(a86*a83);
  a69=(a69*a43);
  a0=(a0*a58);
  a61=(a61*a66);
  a0=(a0+a61);
  a69=(a69+a0);
  a0=(a87*a73);
  a61=(a53*a85);
  a0=(a0-a61);
  a0=(a69-a0);
  a61=(a0*a80);
  a68=(a68-a61);
  a61=(a41*a4);
  a66=(a60*a49);
  a61=(a61-a66);
  a66=(a73*a61);
  a8=(a70*a8);
  a66=(a66-a8);
  a68=(a68+a66);
  a68=(-a68);
  if (res[0]!=0) res[0][1]=a68;
  a68=(a0*a89);
  a66=(a71*a83);
  a68=(a68-a66);
  a63=(a70*a63);
  a61=(a85*a61);
  a63=(a63-a61);
  a68=(a68+a63);
  a68=(-a68);
  if (res[0]!=0) res[0][2]=a68;
  a68=(a85*a80);
  a63=(a73*a89);
  a68=(a68-a63);
  a68=(-a68);
  if (res[0]!=0) res[0][3]=a68;
  a68=(a73*a83);
  a63=(a70*a80);
  a68=(a68-a63);
  a68=(-a68);
  if (res[0]!=0) res[0][4]=a68;
  a68=(a70*a89);
  a63=(a85*a83);
  a68=(a68-a63);
  a68=(-a68);
  if (res[0]!=0) res[0][5]=a68;
  a68=2.7865000000000001e-01;
  a63=(a17*a30);
  a61=(a18*a21);
  a66=(a105*a33);
  a61=(a61+a66);
  a63=(a63+a61);
  a61=(a68*a63);
  a66=(a29*a30);
  a8=(a19*a21);
  a58=(a7*a33);
  a8=(a8+a58);
  a66=(a66+a8);
  a8=(a106*a66);
  a61=(a61+a8);
  a8=(a92*a25);
  a58=(a95*a28);
  a43=(a100*a24);
  a58=(a58+a43);
  a8=(a8+a58);
  a61=(a61-a8);
  a8=(a7*a61);
  a58=(a29*a25);
  a19=(a19*a28);
  a43=(a7*a24);
  a19=(a19+a43);
  a58=(a58+a19);
  a92=(a92*a30);
  a95=(a95*a21);
  a33=(a100*a33);
  a95=(a95+a33);
  a92=(a92+a95);
  a95=(a106*a92);
  a33=(a23*a63);
  a95=(a95+a33);
  a58=(a58+a95);
  a95=(a58*a100);
  a8=(a8+a95);
  a95=(a106*a100);
  a33=(a23*a105);
  a95=(a95+a33);
  a33=(a92*a95);
  a21=(a68*a105);
  a106=(a7*a106);
  a21=(a21+a106);
  a106=(a66*a21);
  a33=(a33+a106);
  a8=(a8-a33);
  a33=(a63*a100);
  a106=(a92*a105);
  a33=(a33-a106);
  a106=(a49*a33);
  a32=(a32*a29);
  a29=-2.8158658107457767e-11;
  a32=(a32+a29);
  a32=(a68+a32);
  a38=(a38*a75);
  a29=-2.6343492223190877e-11;
  a38=(a38+a29);
  a38=(a32+a38);
  a52=(a52*a76);
  a40=(a40*a81);
  a52=(a52+a40);
  a52=(a38+a52);
  a48=(a48*a78);
  a54=(a54*a82);
  a48=(a48+a54);
  a48=(a52+a48);
  a72=(a72*a83);
  a87=(a87*a89);
  a53=(a53*a80);
  a87=(a87+a53);
  a72=(a72+a87);
  a72=(a48+a72);
  a87=(a66*a105);
  a53=(a7*a63);
  a87=(a87-a53);
  a53=(a72*a87);
  a106=(a106-a53);
  a8=(a8-a106);
  a106=(a60*a8);
  a53=(a7*a23);
  a54=(a68*a100);
  a53=(a53-a54);
  a54=(a66*a53);
  a40=(a63*a95);
  a54=(a54+a40);
  a58=(a58*a105);
  a23=(a23*a66);
  a68=(a68*a92);
  a23=(a23-a68);
  a17=(a17*a25);
  a18=(a18*a28);
  a24=(a105*a24);
  a18=(a18+a24);
  a17=(a17+a18);
  a23=(a23-a17);
  a17=(a7*a23);
  a58=(a58+a17);
  a54=(a54-a58);
  a58=(a7*a92);
  a66=(a66*a100);
  a58=(a58-a66);
  a66=(a72*a58);
  a17=(a4*a33);
  a66=(a66-a17);
  a54=(a54-a66);
  a66=(a41*a54);
  a23=(a23*a100);
  a61=(a61*a105);
  a23=(a23-a61);
  a63=(a63*a21);
  a92=(a92*a53);
  a63=(a63-a92);
  a23=(a23+a63);
  a63=(a4*a87);
  a92=(a49*a58);
  a63=(a63-a92);
  a23=(a23-a63);
  a63=(a83*a23);
  a66=(a66+a63);
  a106=(a106+a66);
  a66=(a74*a105);
  a63=(a102*a100);
  a92=(a7*a80);
  a63=(a63+a92);
  a66=(a66+a63);
  a63=(a71*a66);
  a92=(a16*a105);
  a61=(a1*a100);
  a17=(a7*a89);
  a61=(a61+a17);
  a92=(a92+a61);
  a61=(a86*a92);
  a63=(a63-a61);
  a61=(a7*a49);
  a17=(a72*a100);
  a61=(a61-a17);
  a53=(a53-a61);
  a61=(a74*a53);
  a17=(a72*a105);
  a18=(a7*a4);
  a17=(a17-a18);
  a21=(a21-a17);
  a17=(a102*a21);
  a18=(a4*a100);
  a24=(a49*a105);
  a18=(a18-a24);
  a95=(a95+a18);
  a18=(a80*a95);
  a17=(a17-a18);
  a61=(a61+a17);
  a17=(a85*a61);
  a18=(a16*a53);
  a24=(a1*a21);
  a28=(a89*a95);
  a24=(a24-a28);
  a18=(a18+a24);
  a24=(a73*a18);
  a17=(a17-a24);
  a63=(a63+a17);
  a106=(a106-a63);
  if (res[0]!=0) res[0][6]=a106;
  a106=(a16*a8);
  a63=(a1*a54);
  a17=(a89*a23);
  a63=(a63+a17);
  a106=(a106+a63);
  a63=(a60*a105);
  a17=(a41*a100);
  a24=(a7*a83);
  a17=(a17+a24);
  a63=(a63+a17);
  a17=(a86*a63);
  a24=(a0*a66);
  a17=(a17-a24);
  a53=(a60*a53);
  a21=(a41*a21);
  a95=(a83*a95);
  a21=(a21-a95);
  a53=(a53+a21);
  a21=(a73*a53);
  a61=(a70*a61);
  a21=(a21-a61);
  a17=(a17+a21);
  a106=(a106-a17);
  if (res[0]!=0) res[0][7]=a106;
  a8=(a74*a8);
  a54=(a102*a54);
  a23=(a80*a23);
  a54=(a54+a23);
  a8=(a8+a54);
  a54=(a0*a92);
  a23=(a71*a63);
  a54=(a54-a23);
  a18=(a70*a18);
  a53=(a85*a53);
  a18=(a18-a53);
  a54=(a54+a18);
  a8=(a8-a54);
  if (res[0]!=0) res[0][8]=a8;
  a8=(a60*a58);
  a54=(a41*a87);
  a18=(a83*a33);
  a54=(a54+a18);
  a8=(a8+a54);
  a54=(a85*a66);
  a18=(a73*a92);
  a54=(a54-a18);
  a8=(a8-a54);
  if (res[0]!=0) res[0][9]=a8;
  a8=(a16*a58);
  a54=(a1*a87);
  a18=(a89*a33);
  a54=(a54+a18);
  a8=(a8+a54);
  a54=(a73*a63);
  a66=(a70*a66);
  a54=(a54-a66);
  a8=(a8-a54);
  if (res[0]!=0) res[0][10]=a8;
  a58=(a74*a58);
  a87=(a102*a87);
  a33=(a80*a33);
  a87=(a87+a33);
  a58=(a58+a87);
  a92=(a70*a92);
  a63=(a85*a63);
  a92=(a92-a63);
  a58=(a58-a92);
  if (res[0]!=0) res[0][11]=a58;
  a58=(a94*a26);
  a92=(a98*a22);
  a63=(a100*a42);
  a92=(a92+a63);
  a58=(a58-a92);
  a92=(a14*a31);
  a63=(a34*a35);
  a87=(a105*a39);
  a63=(a63+a87);
  a92=(a92+a63);
  a63=(a32*a92);
  a87=(a75*a31);
  a33=(a77*a35);
  a8=(a7*a39);
  a33=(a33+a8);
  a87=(a87+a33);
  a33=(a93*a87);
  a63=(a63-a33);
  a58=(a58+a63);
  a63=(a7*a58);
  a75=(a75*a26);
  a77=(a77*a22);
  a33=(a7*a42);
  a77=(a77+a33);
  a75=(a75-a77);
  a94=(a94*a31);
  a98=(a98*a35);
  a39=(a100*a39);
  a98=(a98+a39);
  a94=(a94+a98);
  a98=(a93*a94);
  a39=(a90*a92);
  a98=(a98-a39);
  a75=(a75+a98);
  a98=(a75*a100);
  a63=(a63-a98);
  a98=(a93*a100);
  a39=(a90*a105);
  a98=(a98-a39);
  a39=(a94*a98);
  a35=(a32*a105);
  a93=(a7*a93);
  a35=(a35-a93);
  a93=(a87*a35);
  a39=(a39-a93);
  a63=(a63+a39);
  a39=(a92*a100);
  a93=(a94*a105);
  a39=(a39-a93);
  a93=(a49*a39);
  a31=(a87*a105);
  a77=(a7*a92);
  a31=(a31-a77);
  a77=(a72*a31);
  a93=(a93-a77);
  a63=(a63-a93);
  a93=(a60*a63);
  a75=(a75*a105);
  a14=(a14*a26);
  a34=(a34*a22);
  a42=(a105*a42);
  a34=(a34+a42);
  a14=(a14-a34);
  a34=(a90*a87);
  a42=(a32*a94);
  a34=(a34-a42);
  a14=(a14+a34);
  a34=(a7*a14);
  a75=(a75-a34);
  a90=(a7*a90);
  a32=(a32*a100);
  a90=(a90-a32);
  a32=(a87*a90);
  a34=(a92*a98);
  a32=(a32-a34);
  a75=(a75+a32);
  a32=(a7*a94);
  a87=(a87*a100);
  a32=(a32-a87);
  a87=(a72*a32);
  a34=(a4*a39);
  a87=(a87-a34);
  a75=(a75-a87);
  a87=(a41*a75);
  a14=(a14*a100);
  a58=(a58*a105);
  a14=(a14-a58);
  a92=(a92*a35);
  a94=(a94*a90);
  a92=(a92-a94);
  a14=(a14+a92);
  a92=(a4*a31);
  a94=(a49*a32);
  a92=(a92-a94);
  a14=(a14-a92);
  a92=(a83*a14);
  a87=(a87+a92);
  a93=(a93+a87);
  a87=(a74*a105);
  a92=(a102*a100);
  a94=(a7*a80);
  a92=(a92+a94);
  a87=(a87+a92);
  a92=(a71*a87);
  a94=(a16*a105);
  a58=(a1*a100);
  a34=(a7*a89);
  a58=(a58+a34);
  a94=(a94+a58);
  a58=(a86*a94);
  a92=(a92-a58);
  a58=(a7*a49);
  a34=(a72*a100);
  a58=(a58-a34);
  a90=(a90-a58);
  a58=(a74*a90);
  a34=(a72*a105);
  a42=(a7*a4);
  a34=(a34-a42);
  a35=(a35-a34);
  a34=(a102*a35);
  a42=(a4*a100);
  a22=(a49*a105);
  a42=(a42-a22);
  a98=(a98-a42);
  a42=(a80*a98);
  a34=(a34+a42);
  a58=(a58+a34);
  a34=(a85*a58);
  a42=(a16*a90);
  a22=(a1*a35);
  a26=(a89*a98);
  a22=(a22+a26);
  a42=(a42+a22);
  a22=(a73*a42);
  a34=(a34-a22);
  a92=(a92+a34);
  a93=(a93-a92);
  if (res[0]!=0) res[0][12]=a93;
  a93=(a16*a63);
  a92=(a1*a75);
  a34=(a89*a14);
  a92=(a92+a34);
  a93=(a93+a92);
  a105=(a60*a105);
  a100=(a41*a100);
  a7=(a7*a83);
  a100=(a100+a7);
  a105=(a105+a100);
  a100=(a86*a105);
  a7=(a0*a87);
  a100=(a100-a7);
  a90=(a60*a90);
  a35=(a41*a35);
  a98=(a83*a98);
  a35=(a35+a98);
  a90=(a90+a35);
  a35=(a73*a90);
  a58=(a70*a58);
  a35=(a35-a58);
  a100=(a100+a35);
  a93=(a93-a100);
  if (res[0]!=0) res[0][13]=a93;
  a63=(a74*a63);
  a75=(a102*a75);
  a14=(a80*a14);
  a75=(a75+a14);
  a63=(a63+a75);
  a75=(a0*a94);
  a14=(a71*a105);
  a75=(a75-a14);
  a42=(a70*a42);
  a90=(a85*a90);
  a42=(a42-a90);
  a75=(a75+a42);
  a63=(a63-a75);
  if (res[0]!=0) res[0][14]=a63;
  a63=(a60*a32);
  a75=(a41*a31);
  a42=(a83*a39);
  a75=(a75+a42);
  a63=(a63+a75);
  a75=(a85*a87);
  a42=(a73*a94);
  a75=(a75-a42);
  a63=(a63-a75);
  if (res[0]!=0) res[0][15]=a63;
  a63=(a16*a32);
  a75=(a1*a31);
  a42=(a89*a39);
  a75=(a75+a42);
  a63=(a63+a75);
  a75=(a73*a105);
  a87=(a70*a87);
  a75=(a75-a87);
  a63=(a63-a75);
  if (res[0]!=0) res[0][16]=a63;
  a32=(a74*a32);
  a31=(a102*a31);
  a39=(a80*a39);
  a31=(a31+a39);
  a32=(a32+a31);
  a94=(a70*a94);
  a105=(a85*a105);
  a94=(a94-a105);
  a32=(a32-a94);
  if (res[0]!=0) res[0][17]=a32;
  a32=(a97*a36);
  a94=(a101*a13);
  a105=(a103*a51);
  a94=(a94+a105);
  a32=(a32+a94);
  a94=(a10*a37);
  a105=(a44*a45);
  a31=(a11*a57);
  a105=(a105+a31);
  a94=(a94+a105);
  a105=(a38*a94);
  a31=(a76*a37);
  a39=(a79*a45);
  a63=(a81*a57);
  a39=(a39+a63);
  a31=(a31+a39);
  a39=(a27*a31);
  a105=(a105-a39);
  a32=(a32+a105);
  a105=(a32*a81);
  a76=(a76*a36);
  a79=(a79*a13);
  a39=(a81*a51);
  a79=(a79+a39);
  a76=(a76+a79);
  a97=(a97*a37);
  a101=(a101*a45);
  a57=(a103*a57);
  a101=(a101+a57);
  a97=(a97+a101);
  a101=(a27*a97);
  a57=(a15*a94);
  a101=(a101-a57);
  a76=(a76+a101);
  a101=(a76*a103);
  a105=(a105-a101);
  a101=(a27*a103);
  a57=(a15*a11);
  a101=(a101-a57);
  a57=(a97*a101);
  a45=(a38*a11);
  a27=(a27*a81);
  a45=(a45-a27);
  a27=(a31*a45);
  a57=(a57-a27);
  a105=(a105+a57);
  a57=(a94*a103);
  a27=(a97*a11);
  a57=(a57-a27);
  a27=(a49*a57);
  a37=(a31*a11);
  a79=(a94*a81);
  a37=(a37-a79);
  a79=(a72*a37);
  a27=(a27-a79);
  a105=(a105-a27);
  a27=(a60*a105);
  a76=(a76*a11);
  a10=(a10*a36);
  a44=(a44*a13);
  a51=(a11*a51);
  a44=(a44+a51);
  a10=(a10+a44);
  a44=(a15*a31);
  a51=(a38*a97);
  a44=(a44-a51);
  a10=(a10+a44);
  a44=(a10*a81);
  a76=(a76-a44);
  a15=(a15*a81);
  a38=(a38*a103);
  a15=(a15-a38);
  a38=(a31*a15);
  a44=(a94*a101);
  a38=(a38-a44);
  a76=(a76+a38);
  a38=(a97*a81);
  a31=(a31*a103);
  a38=(a38-a31);
  a31=(a72*a38);
  a44=(a4*a57);
  a31=(a31-a44);
  a76=(a76-a31);
  a31=(a41*a76);
  a10=(a10*a103);
  a32=(a32*a11);
  a10=(a10-a32);
  a94=(a94*a45);
  a97=(a97*a15);
  a94=(a94-a97);
  a10=(a10+a94);
  a94=(a4*a37);
  a97=(a49*a38);
  a94=(a94-a97);
  a10=(a10-a94);
  a94=(a83*a10);
  a31=(a31+a94);
  a27=(a27+a31);
  a31=(a74*a11);
  a94=(a102*a103);
  a97=(a80*a81);
  a94=(a94+a97);
  a31=(a31+a94);
  a94=(a71*a31);
  a97=(a16*a11);
  a32=(a1*a103);
  a44=(a89*a81);
  a32=(a32+a44);
  a97=(a97+a32);
  a32=(a86*a97);
  a94=(a94-a32);
  a32=(a49*a81);
  a44=(a72*a103);
  a32=(a32-a44);
  a15=(a15-a32);
  a32=(a74*a15);
  a44=(a72*a11);
  a51=(a4*a81);
  a44=(a44-a51);
  a45=(a45-a44);
  a44=(a102*a45);
  a51=(a4*a103);
  a13=(a49*a11);
  a51=(a51-a13);
  a101=(a101-a51);
  a51=(a80*a101);
  a44=(a44+a51);
  a32=(a32+a44);
  a44=(a85*a32);
  a51=(a16*a15);
  a13=(a1*a45);
  a36=(a89*a101);
  a13=(a13+a36);
  a51=(a51+a13);
  a13=(a73*a51);
  a44=(a44-a13);
  a94=(a94+a44);
  a27=(a27-a94);
  if (res[0]!=0) res[0][18]=a27;
  a27=(a16*a105);
  a94=(a1*a76);
  a44=(a89*a10);
  a94=(a94+a44);
  a27=(a27+a94);
  a11=(a60*a11);
  a103=(a41*a103);
  a81=(a83*a81);
  a103=(a103+a81);
  a11=(a11+a103);
  a103=(a86*a11);
  a81=(a0*a31);
  a103=(a103-a81);
  a15=(a60*a15);
  a45=(a41*a45);
  a101=(a83*a101);
  a45=(a45+a101);
  a15=(a15+a45);
  a45=(a73*a15);
  a32=(a70*a32);
  a45=(a45-a32);
  a103=(a103+a45);
  a27=(a27-a103);
  if (res[0]!=0) res[0][19]=a27;
  a105=(a74*a105);
  a76=(a102*a76);
  a10=(a80*a10);
  a76=(a76+a10);
  a105=(a105+a76);
  a76=(a0*a97);
  a10=(a71*a11);
  a76=(a76-a10);
  a51=(a70*a51);
  a15=(a85*a15);
  a51=(a51-a15);
  a76=(a76+a51);
  a105=(a105-a76);
  if (res[0]!=0) res[0][20]=a105;
  a105=(a60*a38);
  a76=(a41*a37);
  a51=(a83*a57);
  a76=(a76+a51);
  a105=(a105+a76);
  a76=(a85*a31);
  a51=(a73*a97);
  a76=(a76-a51);
  a105=(a105-a76);
  if (res[0]!=0) res[0][21]=a105;
  a105=(a16*a38);
  a76=(a1*a37);
  a51=(a89*a57);
  a76=(a76+a51);
  a105=(a105+a76);
  a76=(a73*a11);
  a31=(a70*a31);
  a76=(a76-a31);
  a105=(a105-a76);
  if (res[0]!=0) res[0][22]=a105;
  a38=(a74*a38);
  a37=(a102*a37);
  a57=(a80*a57);
  a37=(a37+a57);
  a38=(a38+a37);
  a97=(a70*a97);
  a11=(a85*a11);
  a97=(a97-a11);
  a38=(a38-a97);
  if (res[0]!=0) res[0][23]=a38;
  a38=(a99*a46);
  a97=(a5*a47);
  a11=(a104*a64);
  a97=(a97+a11);
  a38=(a38+a97);
  a97=(a6*a2);
  a11=(a62*a65);
  a37=(a50*a3);
  a11=(a11+a37);
  a97=(a97+a11);
  a11=(a52*a97);
  a37=(a78*a2);
  a57=(a88*a65);
  a105=(a82*a3);
  a57=(a57+a105);
  a37=(a37+a57);
  a57=(a9*a37);
  a11=(a11-a57);
  a38=(a38+a11);
  a11=(a38*a82);
  a78=(a78*a46);
  a88=(a88*a47);
  a57=(a82*a64);
  a88=(a88+a57);
  a78=(a78+a88);
  a99=(a99*a2);
  a5=(a5*a65);
  a3=(a104*a3);
  a5=(a5+a3);
  a99=(a99+a5);
  a5=(a9*a99);
  a3=(a20*a97);
  a5=(a5-a3);
  a78=(a78+a5);
  a5=(a78*a104);
  a11=(a11-a5);
  a5=(a9*a104);
  a3=(a20*a50);
  a5=(a5-a3);
  a3=(a99*a5);
  a65=(a52*a50);
  a9=(a9*a82);
  a65=(a65-a9);
  a9=(a37*a65);
  a3=(a3-a9);
  a11=(a11+a3);
  a3=(a97*a104);
  a9=(a99*a50);
  a3=(a3-a9);
  a9=(a49*a3);
  a2=(a37*a50);
  a88=(a97*a82);
  a2=(a2-a88);
  a88=(a72*a2);
  a9=(a9-a88);
  a11=(a11-a9);
  a9=(a60*a11);
  a78=(a78*a50);
  a6=(a6*a46);
  a62=(a62*a47);
  a64=(a50*a64);
  a62=(a62+a64);
  a6=(a6+a62);
  a62=(a20*a37);
  a64=(a52*a99);
  a62=(a62-a64);
  a6=(a6+a62);
  a62=(a6*a82);
  a78=(a78-a62);
  a20=(a20*a82);
  a52=(a52*a104);
  a20=(a20-a52);
  a52=(a37*a20);
  a62=(a97*a5);
  a52=(a52-a62);
  a78=(a78+a52);
  a52=(a99*a82);
  a37=(a37*a104);
  a52=(a52-a37);
  a37=(a72*a52);
  a62=(a4*a3);
  a37=(a37-a62);
  a78=(a78-a37);
  a37=(a41*a78);
  a6=(a6*a104);
  a38=(a38*a50);
  a6=(a6-a38);
  a97=(a97*a65);
  a99=(a99*a20);
  a97=(a97-a99);
  a6=(a6+a97);
  a97=(a4*a2);
  a99=(a49*a52);
  a97=(a97-a99);
  a6=(a6-a97);
  a97=(a83*a6);
  a37=(a37+a97);
  a9=(a9+a37);
  a37=(a74*a50);
  a97=(a102*a104);
  a99=(a80*a82);
  a97=(a97+a99);
  a37=(a37+a97);
  a97=(a71*a37);
  a99=(a16*a50);
  a38=(a1*a104);
  a62=(a89*a82);
  a38=(a38+a62);
  a99=(a99+a38);
  a38=(a86*a99);
  a97=(a97-a38);
  a38=(a49*a82);
  a62=(a72*a104);
  a38=(a38-a62);
  a20=(a20-a38);
  a38=(a74*a20);
  a62=(a72*a50);
  a64=(a4*a82);
  a62=(a62-a64);
  a65=(a65-a62);
  a62=(a102*a65);
  a64=(a4*a104);
  a47=(a49*a50);
  a64=(a64-a47);
  a5=(a5-a64);
  a64=(a80*a5);
  a62=(a62+a64);
  a38=(a38+a62);
  a62=(a85*a38);
  a64=(a16*a20);
  a47=(a1*a65);
  a46=(a89*a5);
  a47=(a47+a46);
  a64=(a64+a47);
  a47=(a73*a64);
  a62=(a62-a47);
  a97=(a97+a62);
  a9=(a9-a97);
  if (res[0]!=0) res[0][24]=a9;
  a9=(a16*a11);
  a97=(a1*a78);
  a62=(a89*a6);
  a97=(a97+a62);
  a9=(a9+a97);
  a50=(a60*a50);
  a104=(a41*a104);
  a82=(a83*a82);
  a104=(a104+a82);
  a50=(a50+a104);
  a104=(a86*a50);
  a82=(a0*a37);
  a104=(a104-a82);
  a20=(a60*a20);
  a65=(a41*a65);
  a5=(a83*a5);
  a65=(a65+a5);
  a20=(a20+a65);
  a65=(a73*a20);
  a38=(a70*a38);
  a65=(a65-a38);
  a104=(a104+a65);
  a9=(a9-a104);
  if (res[0]!=0) res[0][25]=a9;
  a11=(a74*a11);
  a78=(a102*a78);
  a6=(a80*a6);
  a78=(a78+a6);
  a11=(a11+a78);
  a78=(a0*a99);
  a6=(a71*a50);
  a78=(a78-a6);
  a64=(a70*a64);
  a20=(a85*a20);
  a64=(a64-a20);
  a78=(a78+a64);
  a11=(a11-a78);
  if (res[0]!=0) res[0][26]=a11;
  a11=(a60*a52);
  a78=(a41*a2);
  a64=(a83*a3);
  a78=(a78+a64);
  a11=(a11+a78);
  a78=(a85*a37);
  a64=(a73*a99);
  a78=(a78-a64);
  a11=(a11-a78);
  if (res[0]!=0) res[0][27]=a11;
  a11=(a16*a52);
  a78=(a1*a2);
  a64=(a89*a3);
  a78=(a78+a64);
  a11=(a11+a78);
  a78=(a73*a50);
  a37=(a70*a37);
  a78=(a78-a37);
  a11=(a11-a78);
  if (res[0]!=0) res[0][28]=a11;
  a52=(a74*a52);
  a2=(a102*a2);
  a3=(a80*a3);
  a2=(a2+a3);
  a52=(a52+a2);
  a99=(a70*a99);
  a50=(a85*a50);
  a99=(a99-a50);
  a52=(a52-a99);
  if (res[0]!=0) res[0][29]=a52;
  a52=(a41*a69);
  a99=(a1*a59);
  a50=(a102*a84);
  a99=(a99+a50);
  a52=(a52+a99);
  a99=(a60*a70);
  a50=(a16*a85);
  a2=(a74*a73);
  a50=(a50+a2);
  a99=(a99+a50);
  a50=(a48*a99);
  a2=(a83*a70);
  a3=(a89*a85);
  a11=(a80*a73);
  a3=(a3+a11);
  a2=(a2+a3);
  a3=(a55*a2);
  a50=(a50-a3);
  a52=(a52+a50);
  a50=(a52*a80);
  a3=(a83*a69);
  a11=(a89*a59);
  a78=(a80*a84);
  a11=(a11+a78);
  a3=(a3+a11);
  a11=(a41*a70);
  a78=(a1*a85);
  a37=(a102*a73);
  a78=(a78+a37);
  a11=(a11+a78);
  a78=(a55*a11);
  a37=(a67*a99);
  a78=(a78-a37);
  a3=(a3+a78);
  a78=(a3*a102);
  a50=(a50-a78);
  a78=(a55*a102);
  a37=(a67*a74);
  a78=(a78-a37);
  a37=(a11*a78);
  a64=(a48*a74);
  a55=(a55*a80);
  a64=(a64-a55);
  a55=(a2*a64);
  a37=(a37-a55);
  a50=(a50+a37);
  a37=(a99*a102);
  a55=(a11*a74);
  a37=(a37-a55);
  a55=(a49*a37);
  a20=(a2*a74);
  a6=(a99*a80);
  a20=(a20-a6);
  a6=(a72*a20);
  a55=(a55-a6);
  a50=(a50-a55);
  a55=(a60*a50);
  a3=(a3*a74);
  a69=(a60*a69);
  a59=(a16*a59);
  a84=(a74*a84);
  a59=(a59+a84);
  a69=(a69+a59);
  a59=(a67*a2);
  a84=(a48*a11);
  a59=(a59-a84);
  a69=(a69+a59);
  a59=(a69*a80);
  a3=(a3-a59);
  a67=(a67*a80);
  a48=(a48*a102);
  a67=(a67-a48);
  a48=(a2*a67);
  a59=(a99*a78);
  a48=(a48-a59);
  a3=(a3+a48);
  a48=(a11*a80);
  a2=(a2*a102);
  a48=(a48-a2);
  a2=(a72*a48);
  a59=(a4*a37);
  a2=(a2-a59);
  a3=(a3-a2);
  a2=(a41*a3);
  a69=(a69*a102);
  a52=(a52*a74);
  a69=(a69-a52);
  a99=(a99*a64);
  a11=(a11*a67);
  a99=(a99-a11);
  a69=(a69+a99);
  a99=(a4*a20);
  a11=(a49*a48);
  a99=(a99-a11);
  a69=(a69-a99);
  a99=(a83*a69);
  a2=(a2+a99);
  a55=(a55+a2);
  a2=casadi_sq(a74);
  a99=casadi_sq(a102);
  a11=casadi_sq(a80);
  a99=(a99+a11);
  a2=(a2+a99);
  a99=(a71*a2);
  a11=(a16*a74);
  a52=(a1*a102);
  a59=(a89*a80);
  a52=(a52+a59);
  a11=(a11+a52);
  a52=(a86*a11);
  a99=(a99-a52);
  a52=(a49*a80);
  a59=(a72*a102);
  a52=(a52-a59);
  a67=(a67-a52);
  a52=(a74*a67);
  a72=(a72*a74);
  a59=(a4*a80);
  a72=(a72-a59);
  a64=(a64-a72);
  a72=(a102*a64);
  a4=(a4*a102);
  a49=(a49*a74);
  a4=(a4-a49);
  a78=(a78-a4);
  a4=(a80*a78);
  a72=(a72+a4);
  a52=(a52+a72);
  a72=(a85*a52);
  a4=(a16*a67);
  a49=(a1*a64);
  a59=(a89*a78);
  a49=(a49+a59);
  a4=(a4+a49);
  a49=(a73*a4);
  a72=(a72-a49);
  a99=(a99+a72);
  a55=(a55-a99);
  if (res[0]!=0) res[0][30]=a55;
  a55=(a16*a50);
  a99=(a1*a3);
  a72=(a89*a69);
  a99=(a99+a72);
  a55=(a55+a99);
  a99=(a60*a74);
  a72=(a41*a102);
  a49=(a83*a80);
  a72=(a72+a49);
  a99=(a99+a72);
  a86=(a86*a99);
  a72=(a0*a2);
  a86=(a86-a72);
  a67=(a60*a67);
  a64=(a41*a64);
  a78=(a83*a78);
  a64=(a64+a78);
  a67=(a67+a64);
  a64=(a73*a67);
  a52=(a70*a52);
  a64=(a64-a52);
  a86=(a86+a64);
  a55=(a55-a86);
  if (res[0]!=0) res[0][31]=a55;
  a50=(a74*a50);
  a3=(a102*a3);
  a69=(a80*a69);
  a3=(a3+a69);
  a50=(a50+a3);
  a0=(a0*a11);
  a71=(a71*a99);
  a0=(a0-a71);
  a4=(a70*a4);
  a67=(a85*a67);
  a4=(a4-a67);
  a0=(a0+a4);
  a50=(a50-a0);
  if (res[0]!=0) res[0][32]=a50;
  a60=(a60*a48);
  a41=(a41*a20);
  a83=(a83*a37);
  a41=(a41+a83);
  a60=(a60+a41);
  a41=(a85*a2);
  a83=(a73*a11);
  a41=(a41-a83);
  a60=(a60-a41);
  if (res[0]!=0) res[0][33]=a60;
  a16=(a16*a48);
  a1=(a1*a20);
  a89=(a89*a37);
  a1=(a1+a89);
  a16=(a16+a1);
  a73=(a73*a99);
  a2=(a70*a2);
  a73=(a73-a2);
  a16=(a16-a73);
  if (res[0]!=0) res[0][34]=a16;
  a74=(a74*a48);
  a102=(a102*a20);
  a80=(a80*a37);
  a102=(a102+a80);
  a74=(a74+a102);
  a70=(a70*a11);
  a85=(a85*a99);
  a70=(a70-a85);
  a74=(a74-a70);
  if (res[0]!=0) res[0][35]=a74;
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
