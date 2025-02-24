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
  #define CASADI_PREFIX(ID) hyumm_floating_M_ ## ID
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

static const casadi_int casadi_s0[17] = {13, 1, 0, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const casadi_int casadi_s1[159] = {12, 12, 0, 12, 24, 36, 48, 60, 72, 84, 96, 108, 120, 132, 144, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

/* M:(i0[13])->(o0[12x12]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a12, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a13, a130, a131, a132, a133, a134, a135, a136, a137, a138, a139, a14, a140, a141, a142, a143, a144, a145, a146, a147, a148, a149, a15, a150, a151, a152, a153, a154, a155, a156, a157, a158, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=7.9918389189999999e+01;
  if (res[0]!=0) res[0][0]=a0;
  a1=0.;
  if (res[0]!=0) res[0][1]=a1;
  if (res[0]!=0) res[0][2]=a1;
  if (res[0]!=0) res[0][3]=a1;
  a2=1.0355424983876226e-01;
  a3=3.0919939090929521e-01;
  a4=3.0549999999999999e-01;
  a5=6.1344318364439335e-02;
  a6=5.3686308537366989e-01;
  a7=2.2200000000000000e-01;
  a8=2.2204460492503131e-16;
  a9=arg[0]? arg[0][8] : 0;
  a10=sin(a9);
  a11=(a8*a10);
  a9=cos(a9);
  a11=(a11-a9);
  a12=-1.3054801758144083e-01;
  a13=5.5920807520972926e-01;
  a14=-4.5000000000000001e-01;
  a15=arg[0]? arg[0][9] : 0;
  a16=cos(a15);
  a17=-6.0751828037451716e-02;
  a18=6.3846839923592225e-01;
  a19=-2.6700000000000002e-01;
  a20=arg[0]? arg[0][10] : 0;
  a21=cos(a20);
  a22=(a8*a21);
  a23=-2.2204460492503131e-16;
  a20=sin(a20);
  a24=(a23*a20);
  a22=(a22+a24);
  a24=-1.2072240537968498e-04;
  a25=5.5033186061874695e-01;
  a26=arg[0]? arg[0][11] : 0;
  a27=cos(a26);
  a28=(a8*a27);
  a26=sin(a26);
  a28=(a28+a26);
  a29=-8.3585590411344224e-02;
  a30=1.4675774919025775e-01;
  a31=-1.6800000000000001e-01;
  a32=8.1470000000000004e-05;
  a33=arg[0]? arg[0][12] : 0;
  a34=cos(a33);
  a35=(a8*a34);
  a33=sin(a33);
  a36=(a23*a33);
  a35=(a35+a36);
  a36=(a32*a35);
  a37=-4.6556000000000001e-04;
  a38=(a23*a34);
  a39=(a8*a33);
  a38=(a38-a39);
  a39=(a37*a38);
  a40=-3.0790970000000001e-02;
  a39=(a39+a40);
  a36=(a36+a39);
  a36=(a31+a36);
  a39=(a30*a36);
  a29=(a29+a39);
  a39=(a28*a29);
  a40=(a8*a26);
  a40=(a27-a40);
  a41=-1.9721841385216381e-04;
  a42=(a32*a34);
  a43=6.8369687689084914e-18;
  a44=(a37*a33);
  a44=(a43-a44);
  a42=(a42+a44);
  a44=(a30*a42);
  a41=(a41+a44);
  a44=(a40*a41);
  a45=5.4999073985565097e-02;
  a46=6.9000000000000006e-02;
  a37=(a37*a34);
  a43=(a43-a37);
  a32=(a32*a33);
  a43=(a43-a32);
  a43=(a46+a43);
  a30=(a30*a43);
  a45=(a45+a30);
  a30=(a8*a45);
  a44=(a44+a30);
  a39=(a39+a44);
  a44=(a25*a39);
  a24=(a24+a44);
  a44=(a22*a24);
  a23=(a23*a21);
  a30=(a8*a20);
  a23=(a23-a30);
  a30=-3.1919423073094616e-02;
  a32=-1.1400000000000000e-01;
  a37=(a8*a26);
  a47=(a37*a29);
  a48=(a8*a27);
  a49=(a48*a41);
  a49=(a49-a45);
  a47=(a47+a49);
  a47=(a32+a47);
  a49=(a25*a47);
  a30=(a30+a49);
  a49=(a23*a30);
  a50=3.4395691556490450e-02;
  a51=8.3000000000000004e-02;
  a52=(a8*a26);
  a52=(a52-a27);
  a53=(a52*a29);
  a27=(a8*a27);
  a26=(a26+a27);
  a27=(a26*a41);
  a53=(a53+a27);
  a53=(a51+a53);
  a25=(a25*a53);
  a50=(a50+a25);
  a49=(a49-a50);
  a44=(a44+a49);
  a44=(a19+a44);
  a49=(a18*a44);
  a17=(a17+a49);
  a49=(a16*a17);
  a15=sin(a15);
  a25=7.7443684199673057e-05;
  a27=(a21*a24);
  a54=(a8*a50);
  a55=(a20*a30);
  a54=(a54-a55);
  a27=(a27+a54);
  a54=(a18*a27);
  a25=(a25+a54);
  a54=(a15*a25);
  a49=(a49-a54);
  a49=(a14+a49);
  a54=(a13*a49);
  a12=(a12+a54);
  a54=(a11*a12);
  a55=(a8*a9);
  a55=(a10+a55);
  a56=9.9354499847726989e-06;
  a57=(a15*a17);
  a58=(a16*a25);
  a57=(a57+a58);
  a58=(a13*a57);
  a56=(a56+a58);
  a58=(a55*a56);
  a54=(a54+a58);
  a54=(a7+a54);
  a58=(a6*a54);
  a5=(a5+a58);
  a58=(a4+a5);
  a59=(a3*a58);
  a2=(a2+a59);
  a59=(a0*a2);
  if (res[0]!=0) res[0][4]=a59;
  a60=-4.5562368685173930e-08;
  a61=arg[0]? arg[0][7] : 0;
  a62=sin(a61);
  a63=-1.0999038585460712e-04;
  a64=(a8*a9);
  a64=(a64+a10);
  a65=(a64*a12);
  a66=(a8*a10);
  a66=(a9-a66);
  a67=(a66*a56);
  a68=1.9761006134775935e-02;
  a69=-3.0499999999999999e-02;
  a70=-2.5308596719516355e-02;
  a71=-7.4999999999999997e-02;
  a72=(a8*a50);
  a73=(a21*a30);
  a72=(a72-a73);
  a73=(a20*a24);
  a72=(a72-a73);
  a72=(a71+a72);
  a18=(a18*a72);
  a70=(a70+a18);
  a18=(a69+a70);
  a13=(a13*a18);
  a68=(a68+a13);
  a13=(a8*a68);
  a67=(a67+a13);
  a65=(a65+a67);
  a67=(a6*a65);
  a63=(a63+a67);
  a67=(a62*a63);
  a61=cos(a61);
  a13=-1.9962650638937606e-02;
  a73=-1.0900000000000000e-01;
  a10=(a8*a10);
  a74=(a10*a12);
  a9=(a8*a9);
  a75=(a9*a56);
  a75=(a75-a68);
  a74=(a74+a75);
  a74=(a73+a74);
  a6=(a6*a74);
  a13=(a13+a6);
  a6=(a61*a13);
  a67=(a67+a6);
  a6=(a3*a67);
  a60=(a60+a6);
  a6=(a0*a60);
  a75=(-a6);
  if (res[0]!=0) res[0][5]=a75;
  a76=-2.4710717260000003e+01;
  a76=(a76*a13);
  a77=(a61*a76);
  a78=2.4710717260000003e+01;
  a79=(a78*a63);
  a80=(a62*a79);
  a77=(a77-a80);
  if (res[0]!=0) res[0][6]=a77;
  a80=-1.3266271910000000e+01;
  a80=(a80*a56);
  a81=(a64*a80);
  a82=1.3266271910000000e+01;
  a83=(a82*a12);
  a84=(a66*a83);
  a81=(a81+a84);
  a84=(a61*a81);
  a85=(a10*a80);
  a86=(a9*a83);
  a85=(a85+a86);
  a86=(a62*a85);
  a84=(a84-a86);
  if (res[0]!=0) res[0][7]=a84;
  a86=-7.4186063799999999e+00;
  a86=(a86*a25);
  a87=(a16*a86);
  a88=7.4186063799999999e+00;
  a89=(a88*a17);
  a90=(a15*a89);
  a87=(a87-a90);
  a90=(a64*a87);
  a86=(a15*a86);
  a89=(a16*a89);
  a86=(a86+a89);
  a89=(a66*a86);
  a90=(a90+a89);
  a89=(a61*a90);
  a91=(a10*a87);
  a92=(a9*a86);
  a91=(a91+a92);
  a92=(a62*a91);
  a89=(a89-a92);
  if (res[0]!=0) res[0][8]=a89;
  a92=-4.7365457400000004e+00;
  a92=(a92*a30);
  a93=(a22*a92);
  a94=4.7365457400000004e+00;
  a95=(a94*a24);
  a96=(a23*a95);
  a93=(a93+a96);
  a96=(a16*a93);
  a97=(a21*a92);
  a98=(a20*a95);
  a97=(a97-a98);
  a98=(a15*a97);
  a96=(a96-a98);
  a98=(a64*a96);
  a99=(a15*a93);
  a100=(a16*a97);
  a99=(a99+a100);
  a100=(a66*a99);
  a92=(a20*a92);
  a95=(a21*a95);
  a92=(a92+a95);
  a95=(a8*a92);
  a100=(a100-a95);
  a98=(a98+a100);
  a100=(a61*a98);
  a95=(a10*a96);
  a101=(a9*a99);
  a101=(a101+a92);
  a95=(a95+a101);
  a101=(a62*a95);
  a100=(a100-a101);
  if (res[0]!=0) res[0][9]=a100;
  a101=-2.6066720299999999e+00;
  a101=(a101*a41);
  a102=(a28*a101);
  a103=2.6066720299999999e+00;
  a104=(a103*a29);
  a105=(a40*a104);
  a102=(a102+a105);
  a105=(a22*a102);
  a106=(a37*a101);
  a107=(a48*a104);
  a106=(a106+a107);
  a107=(a23*a106);
  a101=(a52*a101);
  a104=(a26*a104);
  a101=(a101+a104);
  a107=(a107-a101);
  a105=(a105+a107);
  a107=(a16*a105);
  a104=(a21*a102);
  a108=(a8*a101);
  a109=(a20*a106);
  a108=(a108-a109);
  a104=(a104+a108);
  a108=(a15*a104);
  a107=(a107-a108);
  a108=(a64*a107);
  a109=(a15*a105);
  a110=(a16*a104);
  a109=(a109+a110);
  a110=(a66*a109);
  a111=(a8*a101);
  a112=(a21*a106);
  a111=(a111-a112);
  a112=(a20*a102);
  a111=(a111-a112);
  a112=(a8*a111);
  a110=(a110+a112);
  a108=(a108+a110);
  a110=(a61*a108);
  a112=(a10*a107);
  a113=(a9*a109);
  a113=(a113-a111);
  a112=(a112+a113);
  a113=(a62*a112);
  a110=(a110-a113);
  if (res[0]!=0) res[0][10]=a110;
  a113=1.7809966141920001e-04;
  a114=(a113*a35);
  a115=3.1166293100400002e-05;
  a116=(a115*a38);
  a114=(a114+a116);
  a116=(a28*a114);
  a117=(a113*a34);
  a118=(a115*a33);
  a117=(a117-a118);
  a118=(a40*a117);
  a113=(a113*a33);
  a115=(a115*a34);
  a113=(a113+a115);
  a115=(a8*a113);
  a118=(a118-a115);
  a116=(a116+a118);
  a118=(a22*a116);
  a115=(a37*a114);
  a119=(a48*a117);
  a119=(a119+a113);
  a115=(a115+a119);
  a119=(a23*a115);
  a120=(a52*a114);
  a121=(a26*a117);
  a120=(a120+a121);
  a119=(a119-a120);
  a118=(a118+a119);
  a119=(a16*a118);
  a121=(a21*a116);
  a122=(a8*a120);
  a123=(a20*a115);
  a122=(a122-a123);
  a121=(a121+a122);
  a122=(a15*a121);
  a119=(a119-a122);
  a122=(a64*a119);
  a123=(a15*a118);
  a124=(a16*a121);
  a123=(a123+a124);
  a124=(a66*a123);
  a125=(a8*a120);
  a126=(a21*a115);
  a125=(a125-a126);
  a126=(a20*a116);
  a125=(a125-a126);
  a126=(a8*a125);
  a124=(a124+a126);
  a122=(a122+a124);
  a124=(a61*a122);
  a126=(a10*a119);
  a127=(a9*a123);
  a127=(a127-a125);
  a126=(a126+a127);
  a127=(a62*a126);
  a124=(a124-a127);
  if (res[0]!=0) res[0][11]=a124;
  if (res[0]!=0) res[0][12]=a1;
  if (res[0]!=0) res[0][13]=a0;
  if (res[0]!=0) res[0][14]=a1;
  a127=(-a59);
  if (res[0]!=0) res[0][15]=a127;
  if (res[0]!=0) res[0][16]=a1;
  a128=-9.2049562649264335e-03;
  a129=2.9999999999999999e-01;
  a130=(a61*a63);
  a131=(a62*a13);
  a130=(a130-a131);
  a130=(a129+a130);
  a3=(a3*a130);
  a128=(a128+a3);
  a3=(a0*a128);
  if (res[0]!=0) res[0][17]=a3;
  a76=(a62*a76);
  a79=(a61*a79);
  a76=(a76+a79);
  if (res[0]!=0) res[0][18]=a76;
  a79=(a62*a81);
  a131=(a61*a85);
  a79=(a79+a131);
  if (res[0]!=0) res[0][19]=a79;
  a131=(a62*a90);
  a132=(a61*a91);
  a131=(a131+a132);
  if (res[0]!=0) res[0][20]=a131;
  a132=(a62*a98);
  a133=(a61*a95);
  a132=(a132+a133);
  if (res[0]!=0) res[0][21]=a132;
  a133=(a62*a108);
  a134=(a61*a112);
  a133=(a133+a134);
  if (res[0]!=0) res[0][22]=a133;
  a134=(a62*a122);
  a135=(a61*a126);
  a134=(a134+a135);
  if (res[0]!=0) res[0][23]=a134;
  if (res[0]!=0) res[0][24]=a1;
  if (res[0]!=0) res[0][25]=a1;
  if (res[0]!=0) res[0][26]=a0;
  if (res[0]!=0) res[0][27]=a6;
  a135=(-a3);
  if (res[0]!=0) res[0][28]=a135;
  if (res[0]!=0) res[0][29]=a1;
  if (res[0]!=0) res[0][30]=a1;
  a80=(a11*a80);
  a83=(a55*a83);
  a80=(a80+a83);
  if (res[0]!=0) res[0][31]=a80;
  a83=(a11*a87);
  a136=(a55*a86);
  a83=(a83+a136);
  if (res[0]!=0) res[0][32]=a83;
  a136=(a11*a96);
  a137=(a55*a99);
  a136=(a136+a137);
  if (res[0]!=0) res[0][33]=a136;
  a137=(a11*a107);
  a138=(a55*a109);
  a137=(a137+a138);
  if (res[0]!=0) res[0][34]=a137;
  a138=(a11*a119);
  a139=(a55*a123);
  a138=(a138+a139);
  if (res[0]!=0) res[0][35]=a138;
  if (res[0]!=0) res[0][36]=a1;
  if (res[0]!=0) res[0][37]=a127;
  if (res[0]!=0) res[0][38]=a6;
  a6=1.8391935352501116e+00;
  a127=3.5065004999999994e-01;
  a139=3.5997429999999997e-02;
  a140=1.6172099999999995e-02;
  a141=2.7988909999999999e-02;
  a142=1.1052970000000002e-02;
  a143=4.2107999999999989e-04;
  a144=2.0662999999999996e-04;
  a145=(a144*a34);
  a146=3.6859404417555197e-22;
  a147=-3.3999999999999997e-07;
  a148=(a147*a33);
  a148=(a146-a148);
  a145=(a145+a148);
  a148=(a145*a34);
  a149=(a147*a34);
  a150=-2.2559731860383179e-21;
  a151=2.1444999999999993e-04;
  a152=(a151*a33);
  a152=(a150-a152);
  a149=(a149+a152);
  a152=(a149*a33);
  a148=(a148-a152);
  a143=(a143-a148);
  a152=(a147*a34);
  a146=(a146-a152);
  a144=(a144*a33);
  a146=(a146-a144);
  a144=(a146*a33);
  a151=(a151*a34);
  a150=(a150-a151);
  a147=(a147*a33);
  a150=(a150-a147);
  a147=(a150*a34);
  a144=(a144+a147);
  a143=(a143+a144);
  a147=5.8319000000000003e-04;
  a143=(a143+a147);
  a142=(a142+a143);
  a143=3.2640724284253636e-01;
  a151=-2.3113999999999996e-04;
  a151=(a151-a42);
  a42=casadi_sq(a151);
  a152=6.4458919999999975e-02;
  a152=(a152-a43);
  a43=casadi_sq(a152);
  a42=(a42+a43);
  a42=(a143*a42);
  a142=(a142+a42);
  a42=2.7547950000000002e-02;
  a144=(a147-a144);
  a42=(a42+a144);
  a144=-9.7962319999999978e-02;
  a144=(a144-a36);
  a36=casadi_sq(a144);
  a43=casadi_sq(a151);
  a36=(a36+a43);
  a36=(a143*a36);
  a42=(a42+a36);
  a142=(a142-a42);
  a36=3.6982910000000001e-02;
  a148=(a148+a147);
  a36=(a36+a148);
  a148=casadi_sq(a144);
  a147=casadi_sq(a152);
  a148=(a148+a147);
  a148=(a143*a148);
  a36=(a36+a148);
  a36=(a36-a42);
  a148=(a142+a36);
  a147=(a37*a142);
  a43=5.5170000000000002e-05;
  a145=(a145*a35);
  a149=(a149*a38);
  a145=(a145+a149);
  a149=-5.0799999999999996e-06;
  a153=(a149*a33);
  a154=8.2999999999999999e-07;
  a155=(a154*a34);
  a153=(a153-a155);
  a145=(a145+a153);
  a43=(a43+a145);
  a145=(a143*a144);
  a145=(a145*a151);
  a43=(a43-a145);
  a145=(a48*a43);
  a153=2.;
  a155=-1.4819769999999999e-02;
  a156=(a146*a35);
  a157=(a150*a38);
  a156=(a156+a157);
  a157=(a149*a34);
  a158=(a154*a33);
  a157=(a157+a158);
  a156=(a156+a157);
  a155=(a155+a156);
  a144=(a143*a144);
  a144=(a144*a152);
  a155=(a155-a144);
  a144=(a153*a155);
  a145=(a145-a144);
  a147=(a147+a145);
  a145=(a147*a37);
  a144=(a37*a43);
  a156=(a48*a36);
  a157=-3.7400000000000001e-05;
  a146=(a146*a34);
  a150=(a150*a33);
  a146=(a146-a150);
  a154=(a154*a38);
  a149=(a149*a35);
  a154=(a154-a149);
  a146=(a146+a154);
  a157=(a157+a146);
  a143=(a143*a151);
  a143=(a143*a152);
  a157=(a157-a143);
  a143=(a157+a157);
  a156=(a156-a143);
  a144=(a144+a156);
  a156=(a144*a48);
  a145=(a145+a156);
  a148=(a148-a145);
  a142=(a52*a142);
  a156=(a26*a43);
  a142=(a142+a156);
  a156=(a142*a52);
  a43=(a52*a43);
  a36=(a26*a36);
  a43=(a43+a36);
  a36=(a43*a26);
  a156=(a156+a36);
  a148=(a148-a156);
  a148=(a148+a42);
  a141=(a141+a148);
  a148=1.1721373617072537e+00;
  a36=-7.0984400000000003e-02;
  a36=(a36-a47);
  a47=casadi_sq(a36);
  a143=7.6491279999999995e-02;
  a143=(a143-a53);
  a53=casadi_sq(a143);
  a47=(a47+a53);
  a47=(a148*a47);
  a141=(a141+a47);
  a47=1.4962110000000001e-02;
  a156=(a156+a42);
  a47=(a47+a156);
  a156=-2.6846999999999998e-04;
  a156=(a156-a39);
  a39=casadi_sq(a156);
  a53=casadi_sq(a36);
  a39=(a39+a53);
  a39=(a148*a39);
  a47=(a47+a39);
  a141=(a141-a47);
  a39=1.4430760000000001e-02;
  a145=(a145+a42);
  a39=(a39+a145);
  a145=casadi_sq(a156);
  a53=casadi_sq(a143);
  a145=(a145+a53);
  a145=(a148*a145);
  a39=(a39+a145);
  a39=(a39-a47);
  a145=(a141+a39);
  a53=(a21*a141);
  a152=-4.7679999999999998e-05;
  a151=(a142*a28);
  a146=(a43*a40);
  a151=(a151+a146);
  a146=(a48*a155);
  a154=(a37*a157);
  a146=(a146-a154);
  a151=(a151-a146);
  a152=(a152+a151);
  a151=(a148*a156);
  a151=(a151*a143);
  a152=(a152-a151);
  a151=(a153*a152);
  a146=(a8*a151);
  a154=3.8930000000000002e-05;
  a147=(a147*a28);
  a144=(a144*a40);
  a147=(a147+a144);
  a144=(a26*a155);
  a149=(a52*a157);
  a144=(a144-a149);
  a147=(a147+a144);
  a154=(a154+a147);
  a156=(a148*a156);
  a156=(a156*a36);
  a154=(a154-a156);
  a156=(a20*a154);
  a146=(a146-a156);
  a53=(a53+a146);
  a146=(a53*a21);
  a156=(a21*a154);
  a147=-1.2662959999999999e-02;
  a142=(a142*a37);
  a43=(a43*a48);
  a142=(a142+a43);
  a43=(a40*a155);
  a144=(a28*a157);
  a43=(a43-a144);
  a142=(a142+a43);
  a147=(a147+a142);
  a148=(a148*a36);
  a148=(a148*a143);
  a147=(a147-a148);
  a148=(a147+a147);
  a143=(a8*a148);
  a36=(a20*a39);
  a143=(a143-a36);
  a156=(a156+a143);
  a143=(a156*a20);
  a146=(a146-a143);
  a145=(a145-a146);
  a151=(a8*a151);
  a143=(a21*a154);
  a151=(a151-a143);
  a141=(a20*a141);
  a151=(a151-a141);
  a141=(a151*a20);
  a148=(a8*a148);
  a39=(a21*a39);
  a148=(a148-a39);
  a154=(a20*a154);
  a148=(a148-a154);
  a154=(a148*a21);
  a141=(a141+a154);
  a145=(a145+a141);
  a145=(a145+a47);
  a140=(a140+a145);
  a145=1.7124109634744731e+00;
  a154=2.1420999999999994e-04;
  a154=(a154-a27);
  a27=casadi_sq(a154);
  a39=-7.0003829999999975e-02;
  a39=(a39-a72);
  a72=casadi_sq(a39);
  a27=(a27+a72);
  a27=(a145*a27);
  a140=(a140+a27);
  a27=1.0022522000000000e-01;
  a141=(a47-a141);
  a27=(a27+a141);
  a141=-1.6804015999999994e-01;
  a141=(a141-a44);
  a44=casadi_sq(a141);
  a72=casadi_sq(a154);
  a44=(a44+a72);
  a44=(a145*a44);
  a27=(a27+a44);
  a140=(a140-a27);
  a44=1.1364055000000001e-01;
  a146=(a146+a47);
  a44=(a44+a146);
  a146=casadi_sq(a141);
  a72=casadi_sq(a39);
  a146=(a146+a72);
  a146=(a145*a146);
  a44=(a44+a146);
  a44=(a44-a27);
  a146=(a140+a44);
  a140=(a15*a140);
  a72=-1.1817000000000000e-04;
  a53=(a53*a22);
  a156=(a156*a23);
  a53=(a53+a156);
  a156=(a20*a147);
  a143=(a21*a152);
  a156=(a156-a143);
  a53=(a53+a156);
  a72=(a72+a53);
  a53=(a145*a141);
  a53=(a53*a154);
  a72=(a72-a53);
  a53=(a16*a72);
  a140=(a140+a53);
  a53=(a140*a15);
  a72=(a15*a72);
  a44=(a16*a44);
  a72=(a72+a44);
  a44=(a72*a16);
  a53=(a53+a44);
  a146=(a146-a53);
  a146=(a146+a27);
  a139=(a139+a146);
  a146=3.2700617855015812e+00;
  a44=2.2540000000000001e-05;
  a44=(a44-a57);
  a57=casadi_sq(a44);
  a156=4.4830689999999999e-02;
  a156=(a156-a18);
  a18=casadi_sq(a156);
  a57=(a57+a18);
  a57=(a146*a57);
  a139=(a139+a57);
  a57=7.0024118999999996e-01;
  a57=(a57+a27);
  a18=-2.9616699000000002e-01;
  a18=(a18-a49);
  a49=casadi_sq(a18);
  a143=casadi_sq(a44);
  a49=(a49+a143);
  a49=(a146*a49);
  a57=(a57+a49);
  a139=(a139-a57);
  a49=7.2293306000000002e-01;
  a53=(a53+a27);
  a49=(a49+a53);
  a53=casadi_sq(a18);
  a143=casadi_sq(a156);
  a53=(a53+a143);
  a53=(a146*a53);
  a49=(a49+a53);
  a49=(a49-a57);
  a53=(a139+a49);
  a143=(a10*a139);
  a36=-4.6930000000000000e-05;
  a140=(a140*a16);
  a72=(a72*a15);
  a140=(a140-a72);
  a36=(a36+a140);
  a140=(a146*a18);
  a140=(a140*a44);
  a36=(a36-a140);
  a140=(a9*a36);
  a72=-5.2403459999999999e-02;
  a142=3.3418820000000002e-02;
  a43=(a151*a22);
  a144=(a148*a23);
  a43=(a43+a144);
  a144=(a21*a147);
  a149=(a20*a152);
  a144=(a144+a149);
  a43=(a43+a144);
  a142=(a142+a43);
  a141=(a145*a141);
  a141=(a141*a39);
  a142=(a142-a141);
  a141=(a153*a142);
  a43=(a141*a16);
  a144=-4.3710000000000000e-05;
  a151=(a151*a21);
  a148=(a148*a20);
  a151=(a151-a148);
  a148=(a23*a152);
  a149=(a22*a147);
  a148=(a148-a149);
  a151=(a151+a148);
  a144=(a144+a151);
  a145=(a145*a154);
  a145=(a145*a39);
  a144=(a144-a145);
  a145=(a144+a144);
  a39=(a145*a15);
  a43=(a43-a39);
  a39=(a16*a142);
  a154=(a15*a144);
  a39=(a39-a154);
  a43=(a43-a39);
  a72=(a72+a43);
  a18=(a146*a18);
  a18=(a18*a156);
  a72=(a72-a18);
  a18=(a153*a72);
  a140=(a140-a18);
  a143=(a143+a140);
  a140=(a143*a10);
  a18=(a10*a36);
  a43=(a9*a49);
  a39=1.7600000000000001e-06;
  a141=(a141*a15);
  a145=(a145*a16);
  a141=(a141+a145);
  a145=(a16*a144);
  a154=(a15*a142);
  a145=(a145+a154);
  a141=(a141-a145);
  a39=(a39+a141);
  a146=(a146*a44);
  a146=(a146*a156);
  a39=(a39-a146);
  a146=(a39+a39);
  a43=(a43-a146);
  a18=(a18+a43);
  a43=(a18*a9);
  a140=(a140+a43);
  a53=(a53-a140);
  a139=(a11*a139);
  a43=(a55*a36);
  a139=(a139+a43);
  a43=(a139*a11);
  a36=(a11*a36);
  a49=(a55*a49);
  a36=(a36+a49);
  a49=(a36*a55);
  a43=(a43+a49);
  a53=(a53-a43);
  a53=(a53+a57);
  a127=(a127+a53);
  a53=6.1441002409913503e+00;
  a49=-4.3103130000000003e-02;
  a49=(a49-a74);
  a74=casadi_sq(a49);
  a146=1.3245396000000001e-01;
  a146=(a146-a54);
  a54=casadi_sq(a146);
  a74=(a74+a54);
  a74=(a53*a74);
  a127=(a127+a74);
  a74=6.0031470000000003e-02;
  a43=(a43+a57);
  a74=(a74+a43);
  a43=-2.3749000000000000e-04;
  a43=(a43-a65);
  a65=casadi_sq(a43);
  a54=casadi_sq(a49);
  a65=(a65+a54);
  a65=(a53*a65);
  a74=(a74+a65);
  a127=(a127-a74);
  a65=3.0479800000000001e-01;
  a140=(a140+a57);
  a65=(a65+a140);
  a140=casadi_sq(a43);
  a54=casadi_sq(a146);
  a140=(a140+a54);
  a140=(a53*a140);
  a65=(a65+a140);
  a65=(a65-a74);
  a140=(a127+a65);
  a127=(a62*a127);
  a54=1.1930999999999999e-04;
  a143=(a143*a64);
  a18=(a18*a66);
  a143=(a143+a18);
  a18=(a55*a72);
  a156=(a11*a39);
  a18=(a18-a156);
  a143=(a143+a18);
  a54=(a54+a143);
  a143=(a53*a43);
  a143=(a143*a49);
  a54=(a54-a143);
  a143=(a61*a54);
  a127=(a127+a143);
  a143=(a127*a62);
  a54=(a62*a54);
  a65=(a61*a65);
  a54=(a54+a65);
  a65=(a54*a61);
  a143=(a143+a65);
  a140=(a140-a143);
  a140=(a140+a74);
  a6=(a6+a140);
  a140=1.7070178534276195e+01;
  a65=-6.5955889565800042e-08;
  a65=(a65-a67);
  a67=casadi_sq(a65);
  a18=1.4990468809092375e-01;
  a18=(a18-a58);
  a58=casadi_sq(a18);
  a67=(a67+a58);
  a67=(a140*a67);
  a6=(a6+a67);
  a67=casadi_sq(a60);
  a58=casadi_sq(a2);
  a67=(a67+a58);
  a67=(a0*a67);
  a6=(a6+a67);
  if (res[0]!=0) res[0][39]=a6;
  a6=1.1319025706712402e-02;
  a127=(a127*a61);
  a54=(a54*a62);
  a127=(a127-a54);
  a6=(a6+a127);
  a127=-1.3325055224028888e-02;
  a127=(a127-a130);
  a130=(a140*a127);
  a130=(a130*a65);
  a6=(a6-a130);
  a130=(a0*a128);
  a130=(a130*a60);
  a6=(a6-a130);
  if (res[0]!=0) res[0][40]=a6;
  a130=2.2643486265375823e-02;
  a54=-3.7553000000000000e-04;
  a67=(a139*a64);
  a58=(a36*a66);
  a67=(a67+a58);
  a58=(a9*a72);
  a156=(a10*a39);
  a58=(a58-a156);
  a67=(a67-a58);
  a54=(a54+a67);
  a43=(a53*a43);
  a43=(a43*a146);
  a54=(a54-a43);
  a153=(a153*a54);
  a43=(a153*a61);
  a67=-1.0984447000000000e-01;
  a139=(a139*a10);
  a36=(a36*a9);
  a139=(a139+a36);
  a36=(a66*a72);
  a58=(a64*a39);
  a36=(a36-a58);
  a139=(a139+a36);
  a67=(a67+a139);
  a53=(a53*a49);
  a53=(a53*a146);
  a67=(a67-a53);
  a53=(a67+a67);
  a146=(a53*a62);
  a43=(a43-a146);
  a146=(a61*a54);
  a49=(a62*a67);
  a146=(a146-a49);
  a43=(a43-a146);
  a130=(a130+a43);
  a43=(a140*a127);
  a43=(a43*a18);
  a130=(a130-a43);
  a43=(a0*a128);
  a43=(a43*a2);
  a130=(a130-a43);
  if (res[0]!=0) res[0][41]=a130;
  a43=(a78*a63);
  a43=(a43*a5);
  a43=(a54-a43);
  a146=(a61*a43);
  a49=(a78*a13);
  a49=(a49*a5);
  a49=(a67-a49);
  a5=(a62*a49);
  a146=(a146-a5);
  a5=(a4*a76);
  a146=(a146-a5);
  if (res[0]!=0) res[0][42]=a146;
  a5=(a82*a12);
  a5=(a5*a68);
  a72=(a72-a5);
  a5=(a64*a72);
  a139=(a82*a56);
  a139=(a139*a68);
  a39=(a39-a139);
  a139=(a66*a39);
  a12=casadi_sq(a12);
  a56=casadi_sq(a56);
  a12=(a12+a56);
  a82=(a82*a12);
  a57=(a57+a82);
  a82=(a8*a57);
  a139=(a139+a82);
  a5=(a5+a139);
  a139=(a73*a80);
  a85=(a7*a85);
  a139=(a139-a85);
  a5=(a5+a139);
  a139=(a61*a5);
  a85=(a10*a72);
  a82=(a9*a39);
  a82=(a82-a57);
  a85=(a85+a82);
  a82=(a7*a81);
  a85=(a85+a82);
  a82=(a62*a85);
  a139=(a139-a82);
  a82=(a4*a79);
  a139=(a139-a82);
  if (res[0]!=0) res[0][43]=a139;
  a82=(a88*a17);
  a82=(a82*a70);
  a142=(a142-a82);
  a82=(a16*a142);
  a12=(a88*a25);
  a12=(a12*a70);
  a144=(a144-a12);
  a12=(a15*a144);
  a82=(a82-a12);
  a12=(a69*a86);
  a82=(a82-a12);
  a12=(a64*a82);
  a142=(a15*a142);
  a144=(a16*a144);
  a142=(a142+a144);
  a87=(a69*a87);
  a142=(a142+a87);
  a87=(a66*a142);
  a17=casadi_sq(a17);
  a25=casadi_sq(a25);
  a17=(a17+a25);
  a88=(a88*a17);
  a27=(a27+a88);
  a86=(a14*a86);
  a86=(a27+a86);
  a88=(a8*a86);
  a87=(a87+a88);
  a12=(a12+a87);
  a87=(a73*a83);
  a91=(a7*a91);
  a87=(a87-a91);
  a12=(a12+a87);
  a87=(a61*a12);
  a91=(a10*a82);
  a88=(a9*a142);
  a88=(a88-a86);
  a91=(a91+a88);
  a88=(a7*a90);
  a91=(a91+a88);
  a88=(a62*a91);
  a87=(a87-a88);
  a88=(a4*a131);
  a87=(a87-a88);
  if (res[0]!=0) res[0][44]=a87;
  a88=(a94*a24);
  a88=(a88*a50);
  a152=(a152-a88);
  a88=(a22*a152);
  a17=(a94*a30);
  a17=(a17*a50);
  a147=(a147-a17);
  a17=(a23*a147);
  a24=casadi_sq(a24);
  a30=casadi_sq(a30);
  a24=(a24+a30);
  a94=(a94*a24);
  a47=(a47+a94);
  a17=(a17-a47);
  a88=(a88+a17);
  a17=(a71*a97);
  a88=(a88-a17);
  a17=(a16*a88);
  a94=(a21*a152);
  a24=(a8*a47);
  a30=(a20*a147);
  a24=(a24-a30);
  a94=(a94+a24);
  a93=(a71*a93);
  a24=(a19*a92);
  a93=(a93+a24);
  a94=(a94+a93);
  a93=(a15*a94);
  a17=(a17-a93);
  a93=(a69*a99);
  a17=(a17-a93);
  a93=(a64*a17);
  a88=(a15*a88);
  a94=(a16*a94);
  a88=(a88+a94);
  a96=(a69*a96);
  a92=(a14*a92);
  a96=(a96+a92);
  a88=(a88+a96);
  a96=(a66*a88);
  a92=(a8*a47);
  a147=(a21*a147);
  a92=(a92-a147);
  a152=(a20*a152);
  a92=(a92-a152);
  a97=(a19*a97);
  a92=(a92+a97);
  a99=(a14*a99);
  a99=(a92+a99);
  a97=(a8*a99);
  a96=(a96+a97);
  a93=(a93+a96);
  a96=(a73*a136);
  a95=(a7*a95);
  a96=(a96-a95);
  a93=(a93+a96);
  a96=(a61*a93);
  a95=(a10*a17);
  a97=(a9*a88);
  a97=(a97-a99);
  a95=(a95+a97);
  a97=(a7*a98);
  a95=(a95+a97);
  a97=(a62*a95);
  a96=(a96-a97);
  a97=(a4*a132);
  a96=(a96-a97);
  if (res[0]!=0) res[0][45]=a96;
  a97=(a103*a29);
  a97=(a97*a45);
  a155=(a155-a97);
  a97=(a28*a155);
  a152=(a103*a41);
  a152=(a152*a45);
  a157=(a157-a152);
  a152=(a40*a157);
  a29=casadi_sq(a29);
  a41=casadi_sq(a41);
  a29=(a29+a41);
  a103=(a103*a29);
  a42=(a42+a103);
  a103=(a8*a42);
  a152=(a152+a103);
  a97=(a97+a152);
  a101=(a32*a101);
  a106=(a51*a106);
  a101=(a101-a106);
  a97=(a97+a101);
  a101=(a22*a97);
  a106=(a37*a155);
  a152=(a48*a157);
  a152=(a152-a42);
  a106=(a106+a152);
  a152=(a51*a102);
  a106=(a106+a152);
  a152=(a23*a106);
  a155=(a52*a155);
  a157=(a26*a157);
  a155=(a155+a157);
  a102=(a32*a102);
  a155=(a155-a102);
  a152=(a152-a155);
  a101=(a101+a152);
  a152=(a71*a104);
  a101=(a101-a152);
  a152=(a16*a101);
  a102=(a21*a97);
  a157=(a8*a155);
  a103=(a20*a106);
  a157=(a157-a103);
  a102=(a102+a157);
  a105=(a71*a105);
  a157=(a19*a111);
  a105=(a105-a157);
  a102=(a102+a105);
  a105=(a15*a102);
  a152=(a152-a105);
  a105=(a69*a109);
  a152=(a152-a105);
  a105=(a64*a152);
  a101=(a15*a101);
  a102=(a16*a102);
  a101=(a101+a102);
  a107=(a69*a107);
  a111=(a14*a111);
  a107=(a107-a111);
  a101=(a101+a107);
  a107=(a66*a101);
  a111=(a8*a155);
  a106=(a21*a106);
  a111=(a111-a106);
  a97=(a20*a97);
  a111=(a111-a97);
  a104=(a19*a104);
  a111=(a111+a104);
  a109=(a14*a109);
  a109=(a111+a109);
  a104=(a8*a109);
  a107=(a107+a104);
  a105=(a105+a107);
  a107=(a73*a137);
  a112=(a7*a112);
  a107=(a107-a112);
  a105=(a105+a107);
  a107=(a61*a105);
  a112=(a10*a152);
  a104=(a9*a101);
  a104=(a104-a109);
  a112=(a112+a104);
  a104=(a7*a108);
  a112=(a112+a104);
  a104=(a62*a112);
  a107=(a107-a104);
  a104=(a4*a133);
  a107=(a107-a104);
  if (res[0]!=0) res[0][46]=a107;
  a104=-1.2964039586562341e-07;
  a35=(a104*a35);
  a97=4.0386133176874516e-07;
  a38=(a97*a38);
  a106=-5.8327545519626920e-04;
  a38=(a38+a106);
  a35=(a35+a38);
  a38=(a46*a117);
  a35=(a35-a38);
  a28=(a28*a35);
  a38=(a104*a34);
  a106=1.2951316801152339e-19;
  a102=(a97*a33);
  a102=(a106-a102);
  a38=(a38+a102);
  a46=(a46*a114);
  a113=(a31*a113);
  a46=(a46+a113);
  a38=(a38+a46);
  a40=(a40*a38);
  a97=(a97*a34);
  a106=(a106-a97);
  a104=(a104*a33);
  a106=(a106-a104);
  a31=(a31*a117);
  a106=(a106+a31);
  a31=(a8*a106);
  a40=(a40+a31);
  a28=(a28+a40);
  a120=(a32*a120);
  a115=(a51*a115);
  a120=(a120-a115);
  a28=(a28+a120);
  a22=(a22*a28);
  a37=(a37*a35);
  a48=(a48*a38);
  a48=(a48-a106);
  a37=(a37+a48);
  a51=(a51*a116);
  a37=(a37+a51);
  a23=(a23*a37);
  a52=(a52*a35);
  a26=(a26*a38);
  a52=(a52+a26);
  a32=(a32*a116);
  a52=(a52-a32);
  a23=(a23-a52);
  a22=(a22+a23);
  a23=(a71*a121);
  a22=(a22-a23);
  a23=(a16*a22);
  a32=(a21*a28);
  a116=(a8*a52);
  a26=(a20*a37);
  a116=(a116-a26);
  a32=(a32+a116);
  a71=(a71*a118);
  a118=(a19*a125);
  a71=(a71-a118);
  a32=(a32+a71);
  a71=(a15*a32);
  a23=(a23-a71);
  a71=(a69*a123);
  a23=(a23-a71);
  a64=(a64*a23);
  a15=(a15*a22);
  a16=(a16*a32);
  a15=(a15+a16);
  a69=(a69*a119);
  a125=(a14*a125);
  a69=(a69-a125);
  a15=(a15+a69);
  a66=(a66*a15);
  a69=(a8*a52);
  a21=(a21*a37);
  a69=(a69-a21);
  a20=(a20*a28);
  a69=(a69-a20);
  a19=(a19*a121);
  a69=(a69+a19);
  a14=(a14*a123);
  a14=(a69+a14);
  a8=(a8*a14);
  a66=(a66+a8);
  a64=(a64+a66);
  a66=(a73*a138);
  a126=(a7*a126);
  a66=(a66-a126);
  a64=(a64+a66);
  a66=(a61*a64);
  a10=(a10*a23);
  a9=(a9*a15);
  a9=(a9-a14);
  a10=(a10+a9);
  a7=(a7*a122);
  a10=(a10+a7);
  a7=(a62*a10);
  a66=(a66-a7);
  a7=(a4*a134);
  a66=(a66-a7);
  if (res[0]!=0) res[0][47]=a66;
  if (res[0]!=0) res[0][48]=a59;
  if (res[0]!=0) res[0][49]=a1;
  if (res[0]!=0) res[0][50]=a135;
  if (res[0]!=0) res[0][51]=a6;
  a6=5.1237262540809727e+00;
  a143=(a143+a74);
  a6=(a6+a143);
  a143=casadi_sq(a127);
  a135=casadi_sq(a18);
  a143=(a143+a135);
  a143=(a140*a143);
  a6=(a6+a143);
  a143=casadi_sq(a128);
  a135=casadi_sq(a2);
  a143=(a143+a135);
  a143=(a0*a143);
  a6=(a6+a143);
  if (res[0]!=0) res[0][52]=a6;
  a6=4.2613541268404644e-06;
  a153=(a153*a62);
  a53=(a53*a61);
  a153=(a153+a53);
  a67=(a61*a67);
  a54=(a62*a54);
  a67=(a67+a54);
  a153=(a153-a67);
  a6=(a6+a153);
  a153=(a140*a65);
  a153=(a153*a18);
  a6=(a6-a153);
  a153=(a0*a60);
  a153=(a153*a2);
  a6=(a6-a153);
  if (res[0]!=0) res[0][53]=a6;
  a43=(a62*a43);
  a49=(a61*a49);
  a43=(a43+a49);
  a49=(a4*a77);
  a43=(a43+a49);
  if (res[0]!=0) res[0][54]=a43;
  a5=(a62*a5);
  a85=(a61*a85);
  a5=(a5+a85);
  a85=(a4*a84);
  a49=(a129*a80);
  a85=(a85-a49);
  a5=(a5+a85);
  if (res[0]!=0) res[0][55]=a5;
  a12=(a62*a12);
  a91=(a61*a91);
  a12=(a12+a91);
  a91=(a4*a89);
  a85=(a129*a83);
  a91=(a91-a85);
  a12=(a12+a91);
  if (res[0]!=0) res[0][56]=a12;
  a93=(a62*a93);
  a95=(a61*a95);
  a93=(a93+a95);
  a95=(a4*a100);
  a91=(a129*a136);
  a95=(a95-a91);
  a93=(a93+a95);
  if (res[0]!=0) res[0][57]=a93;
  a105=(a62*a105);
  a112=(a61*a112);
  a105=(a105+a112);
  a112=(a4*a110);
  a95=(a129*a137);
  a112=(a112-a95);
  a105=(a105+a112);
  if (res[0]!=0) res[0][58]=a105;
  a62=(a62*a64);
  a61=(a61*a10);
  a62=(a62+a61);
  a4=(a4*a124);
  a61=(a129*a138);
  a4=(a4-a61);
  a62=(a62+a4);
  if (res[0]!=0) res[0][59]=a62;
  if (res[0]!=0) res[0][60]=a75;
  if (res[0]!=0) res[0][61]=a3;
  if (res[0]!=0) res[0][62]=a1;
  if (res[0]!=0) res[0][63]=a130;
  if (res[0]!=0) res[0][64]=a6;
  a6=6.6272675688462561e+00;
  a6=(a6+a74);
  a127=casadi_sq(a127);
  a65=casadi_sq(a65);
  a127=(a127+a65);
  a140=(a140*a127);
  a6=(a6+a140);
  a128=casadi_sq(a128);
  a60=casadi_sq(a60);
  a128=(a128+a60);
  a0=(a0*a128);
  a6=(a6+a0);
  if (res[0]!=0) res[0][65]=a6;
  a63=casadi_sq(a63);
  a13=casadi_sq(a13);
  a63=(a63+a13);
  a78=(a78*a63);
  a74=(a74+a78);
  a78=(a129*a76);
  a78=(a74+a78);
  if (res[0]!=0) res[0][66]=a78;
  a72=(a11*a72);
  a39=(a55*a39);
  a72=(a72+a39);
  a81=(a73*a81);
  a72=(a72-a81);
  a81=(a129*a79);
  a81=(a72+a81);
  if (res[0]!=0) res[0][67]=a81;
  a82=(a11*a82);
  a142=(a55*a142);
  a82=(a82+a142);
  a90=(a73*a90);
  a82=(a82-a90);
  a90=(a129*a131);
  a90=(a82+a90);
  if (res[0]!=0) res[0][68]=a90;
  a17=(a11*a17);
  a88=(a55*a88);
  a17=(a17+a88);
  a98=(a73*a98);
  a17=(a17-a98);
  a98=(a129*a132);
  a98=(a17+a98);
  if (res[0]!=0) res[0][69]=a98;
  a152=(a11*a152);
  a101=(a55*a101);
  a152=(a152+a101);
  a108=(a73*a108);
  a152=(a152-a108);
  a108=(a129*a133);
  a108=(a152+a108);
  if (res[0]!=0) res[0][70]=a108;
  a11=(a11*a23);
  a55=(a55*a15);
  a11=(a11+a55);
  a73=(a73*a122);
  a11=(a11-a73);
  a129=(a129*a134);
  a129=(a11+a129);
  if (res[0]!=0) res[0][71]=a129;
  if (res[0]!=0) res[0][72]=a77;
  if (res[0]!=0) res[0][73]=a76;
  if (res[0]!=0) res[0][74]=a1;
  if (res[0]!=0) res[0][75]=a146;
  if (res[0]!=0) res[0][76]=a43;
  if (res[0]!=0) res[0][77]=a78;
  if (res[0]!=0) res[0][78]=a74;
  if (res[0]!=0) res[0][79]=a72;
  if (res[0]!=0) res[0][80]=a82;
  if (res[0]!=0) res[0][81]=a17;
  if (res[0]!=0) res[0][82]=a152;
  if (res[0]!=0) res[0][83]=a11;
  if (res[0]!=0) res[0][84]=a84;
  if (res[0]!=0) res[0][85]=a79;
  if (res[0]!=0) res[0][86]=a80;
  if (res[0]!=0) res[0][87]=a139;
  if (res[0]!=0) res[0][88]=a5;
  if (res[0]!=0) res[0][89]=a81;
  if (res[0]!=0) res[0][90]=a72;
  if (res[0]!=0) res[0][91]=a57;
  if (res[0]!=0) res[0][92]=a86;
  if (res[0]!=0) res[0][93]=a99;
  if (res[0]!=0) res[0][94]=a109;
  if (res[0]!=0) res[0][95]=a14;
  if (res[0]!=0) res[0][96]=a89;
  if (res[0]!=0) res[0][97]=a131;
  if (res[0]!=0) res[0][98]=a83;
  if (res[0]!=0) res[0][99]=a87;
  if (res[0]!=0) res[0][100]=a12;
  if (res[0]!=0) res[0][101]=a90;
  if (res[0]!=0) res[0][102]=a82;
  if (res[0]!=0) res[0][103]=a86;
  if (res[0]!=0) res[0][104]=a27;
  if (res[0]!=0) res[0][105]=a92;
  if (res[0]!=0) res[0][106]=a111;
  if (res[0]!=0) res[0][107]=a69;
  if (res[0]!=0) res[0][108]=a100;
  if (res[0]!=0) res[0][109]=a132;
  if (res[0]!=0) res[0][110]=a136;
  if (res[0]!=0) res[0][111]=a96;
  if (res[0]!=0) res[0][112]=a93;
  if (res[0]!=0) res[0][113]=a98;
  if (res[0]!=0) res[0][114]=a17;
  if (res[0]!=0) res[0][115]=a99;
  if (res[0]!=0) res[0][116]=a92;
  if (res[0]!=0) res[0][117]=a47;
  if (res[0]!=0) res[0][118]=a155;
  if (res[0]!=0) res[0][119]=a52;
  if (res[0]!=0) res[0][120]=a110;
  if (res[0]!=0) res[0][121]=a133;
  if (res[0]!=0) res[0][122]=a137;
  if (res[0]!=0) res[0][123]=a107;
  if (res[0]!=0) res[0][124]=a105;
  if (res[0]!=0) res[0][125]=a108;
  if (res[0]!=0) res[0][126]=a152;
  if (res[0]!=0) res[0][127]=a109;
  if (res[0]!=0) res[0][128]=a111;
  if (res[0]!=0) res[0][129]=a155;
  if (res[0]!=0) res[0][130]=a42;
  if (res[0]!=0) res[0][131]=a106;
  if (res[0]!=0) res[0][132]=a124;
  if (res[0]!=0) res[0][133]=a134;
  if (res[0]!=0) res[0][134]=a138;
  if (res[0]!=0) res[0][135]=a66;
  if (res[0]!=0) res[0][136]=a62;
  if (res[0]!=0) res[0][137]=a129;
  if (res[0]!=0) res[0][138]=a11;
  if (res[0]!=0) res[0][139]=a14;
  if (res[0]!=0) res[0][140]=a69;
  if (res[0]!=0) res[0][141]=a52;
  if (res[0]!=0) res[0][142]=a106;
  a106=5.8327545519626920e-04;
  if (res[0]!=0) res[0][143]=a106;
  return 0;
}

CASADI_SYMBOL_EXPORT int M(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int M_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int M_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void M_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int M_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void M_release(int mem) {
}

CASADI_SYMBOL_EXPORT void M_incref(void) {
}

CASADI_SYMBOL_EXPORT void M_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int M_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int M_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real M_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* M_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* M_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* M_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* M_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int M_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
