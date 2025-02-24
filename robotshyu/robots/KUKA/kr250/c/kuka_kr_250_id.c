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
  #define CASADI_PREFIX(ID) kuka_kr_250_id_ ## ID
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

static const casadi_int casadi_s0[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};

/* rnea:(q[6],dq[6],ddq[6])->(tau[6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a12, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a13, a130, a131, a132, a133, a134, a135, a136, a137, a138, a139, a14, a140, a141, a142, a143, a144, a145, a146, a147, a148, a149, a15, a150, a151, a152, a153, a154, a155, a156, a157, a158, a159, a16, a160, a161, a162, a163, a164, a165, a166, a167, a168, a169, a17, a170, a171, a172, a173, a174, a175, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=1.3983700000000001e+01;
  a1=arg[2]? arg[2][0] : 0;
  a0=(a0*a1);
  a2=-2.9919600000000001e-02;
  a3=2.5457300000000001e+02;
  a4=9.8100000000000005e+00;
  a5=9.7931777202934950e-12;
  a6=arg[0]? arg[0][0] : 0;
  a7=cos(a6);
  a7=(a5*a7);
  a7=(a4*a7);
  a8=(a2*a1);
  a8=(a7+a8);
  a8=(a3*a8);
  a2=(a2*a8);
  a8=-4.4684000000000000e-03;
  a6=sin(a6);
  a5=(a5*a6);
  a4=(a4*a5);
  a5=(a8*a1);
  a5=(a4-a5);
  a3=(a3*a5);
  a8=(a8*a3);
  a2=(a2-a8);
  a0=(a0+a2);
  a2=arg[0]? arg[0][1] : 0;
  a8=sin(a2);
  a3=5.6097200000000029e+00;
  a5=arg[1]? arg[1][1] : 0;
  a2=cos(a2);
  a6=arg[1]? arg[1][0] : 0;
  a9=(a2*a6);
  a10=(a5*a9);
  a11=(a8*a1);
  a10=(a10+a11);
  a11=(a3*a10);
  a12=1.8095600000000001e-01;
  a13=(a2*a1);
  a14=(a8*a6);
  a15=(a5*a14);
  a13=(a13-a15);
  a15=(a12*a13);
  a11=(a11+a15);
  a15=4.3700299999999999e+00;
  a16=arg[2]? arg[2][1] : 0;
  a17=4.8966386501092529e-12;
  a18=(a17*a1);
  a16=(a16+a18);
  a18=(a15*a16);
  a11=(a11+a18);
  a18=9.3673499999999995e-04;
  a19=3.3152800000000002e+02;
  a20=-4.8036025157571776e-11;
  a21=3.3000000000000002e-01;
  a1=(a21*a1);
  a7=(a7+a1);
  a20=(a20-a7);
  a1=4.4928299999999999e-01;
  a22=(a1*a13);
  a23=(a18*a10);
  a22=(a22-a23);
  a22=(a20-a22);
  a22=(a19*a22);
  a23=(a18*a22);
  a24=-2.2289300000000001e-01;
  a25=(a17*a2);
  a26=(a25*a7);
  a27=-9.8100000000000005e+00;
  a28=(a27*a2);
  a26=(a26+a28);
  a28=(a8*a4);
  a26=(a26-a28);
  a28=(a17*a8);
  a29=(a21*a6);
  a30=(a28*a29);
  a31=(a5*a30);
  a26=(a26-a31);
  a31=(a24*a10);
  a32=(a1*a16);
  a31=(a31-a32);
  a31=(a26-a31);
  a31=(a19*a31);
  a32=(a24*a31);
  a23=(a23-a32);
  a11=(a11+a23);
  a23=(a15*a14);
  a32=-6.5738799999999998e-03;
  a33=(a32*a9);
  a23=(a23+a33);
  a33=6.4941400000000002e+01;
  a6=(a17*a6);
  a6=(a5+a6);
  a34=(a33*a6);
  a23=(a23+a34);
  a34=(a25*a29);
  a35=(a24*a14);
  a36=(a1*a6);
  a35=(a35-a36);
  a35=(a34-a35);
  a35=(a19*a35);
  a36=(a1*a35);
  a37=(a18*a6);
  a38=(a24*a9);
  a37=(a37-a38);
  a37=(a30-a37);
  a37=(a19*a37);
  a38=(a18*a37);
  a36=(a36-a38);
  a23=(a23+a36);
  a36=(a9*a23);
  a38=(a12*a14);
  a39=6.5632599999999996e+01;
  a40=(a39*a9);
  a38=(a38+a40);
  a40=(a32*a6);
  a38=(a38+a40);
  a40=(a24*a37);
  a41=(a1*a9);
  a42=(a18*a14);
  a41=(a41-a42);
  a41=(a29+a41);
  a41=(a19*a41);
  a42=(a1*a41);
  a40=(a40+a42);
  a38=(a38+a40);
  a40=(a6*a38);
  a36=(a36-a40);
  a40=(a29*a35);
  a42=(a34*a41);
  a40=(a40-a42);
  a36=(a36+a40);
  a11=(a11+a36);
  a36=arg[0]? arg[0][2] : 0;
  a40=cos(a36);
  a42=1.6684699999999992e+00;
  a43=arg[1]? arg[1][2] : 0;
  a44=(a40*a9);
  a36=sin(a36);
  a45=(a36*a14);
  a44=(a44-a45);
  a45=(a43*a44);
  a46=(a40*a10);
  a47=(a36*a13);
  a46=(a46+a47);
  a45=(a45+a46);
  a46=(a42*a45);
  a47=1.5618399999999999e-02;
  a48=(a40*a13);
  a49=(a36*a10);
  a48=(a48-a49);
  a49=(a40*a14);
  a50=(a36*a9);
  a49=(a49+a50);
  a50=(a43*a49);
  a48=(a48-a50);
  a50=(a47*a48);
  a46=(a46+a50);
  a50=-3.7419400000000003e-01;
  a51=arg[2]? arg[2][2] : 0;
  a51=(a51+a16);
  a52=(a50*a51);
  a46=(a46+a52);
  a52=-1.1350499999999999e-01;
  a53=1.7232499999999999e+02;
  a54=1.1499999999999999e+00;
  a55=(a54*a13);
  a20=(a20-a55);
  a55=3.7510700000000002e-01;
  a56=(a55*a48);
  a57=(a52*a45);
  a56=(a56-a57);
  a56=(a20-a56);
  a56=(a53*a56);
  a57=(a52*a56);
  a58=8.6968199999999996e-02;
  a59=-9.5000000000000001e-02;
  a60=(a59*a10);
  a61=(a54*a16);
  a60=(a60-a61);
  a26=(a26-a60);
  a60=(a40*a26);
  a5=(a5*a34);
  a4=(a2*a4);
  a7=(a28*a7);
  a27=(a27*a8);
  a7=(a7+a27);
  a4=(a4+a7);
  a5=(a5+a4);
  a4=(a59*a13);
  a4=(a5+a4);
  a7=(a36*a4);
  a60=(a60-a7);
  a7=(a59*a9);
  a7=(a30+a7);
  a27=(a40*a7);
  a61=(a59*a14);
  a62=(a54*a6);
  a61=(a61-a62);
  a61=(a34-a61);
  a62=(a36*a61);
  a27=(a27+a62);
  a62=(a43*a27);
  a60=(a60-a62);
  a62=(a58*a45);
  a63=(a55*a51);
  a62=(a62-a63);
  a62=(a60-a62);
  a62=(a53*a62);
  a63=(a58*a62);
  a57=(a57-a63);
  a46=(a46+a57);
  a57=(a50*a49);
  a63=9.9506100000000000e-02;
  a64=(a63*a44);
  a57=(a57+a64);
  a64=1.4909100000000000e+01;
  a65=(a43+a6);
  a66=(a64*a65);
  a57=(a57+a66);
  a61=(a40*a61);
  a7=(a36*a7);
  a61=(a61-a7);
  a7=(a58*a49);
  a66=(a55*a65);
  a7=(a7-a66);
  a7=(a61-a7);
  a7=(a53*a7);
  a66=(a55*a7);
  a67=(a52*a65);
  a68=(a58*a44);
  a67=(a67-a68);
  a67=(a27-a67);
  a67=(a53*a67);
  a68=(a52*a67);
  a66=(a66-a68);
  a57=(a57+a66);
  a66=(a44*a57);
  a68=(a47*a49);
  a69=1.4978899999999999e+01;
  a70=(a69*a44);
  a68=(a68+a70);
  a70=(a63*a65);
  a68=(a68+a70);
  a70=(a58*a67);
  a71=(a54*a9);
  a71=(a29+a71);
  a72=(a55*a44);
  a73=(a52*a49);
  a72=(a72-a73);
  a72=(a71+a72);
  a72=(a53*a72);
  a73=(a55*a72);
  a70=(a70+a73);
  a68=(a68+a70);
  a70=(a65*a68);
  a66=(a66-a70);
  a70=(a71*a7);
  a73=(a61*a72);
  a70=(a70-a73);
  a66=(a66+a70);
  a46=(a46+a66);
  a66=arg[0]? arg[0][3] : 0;
  a70=cos(a66);
  a73=(a17*a70);
  a74=3.3203700000000003e-01;
  a75=arg[1]? arg[1][3] : 0;
  a76=(a70*a44);
  a66=sin(a66);
  a77=(a66*a65);
  a76=(a76-a77);
  a77=(a17*a66);
  a78=(a77*a49);
  a76=(a76-a78);
  a78=(a75*a76);
  a79=(a73*a45);
  a80=(a66*a48);
  a81=(a70*a51);
  a80=(a80+a81);
  a79=(a79+a80);
  a78=(a78+a79);
  a79=(a74*a78);
  a80=3.8385800000000003e-06;
  a81=(a70*a48);
  a82=(a66*a51);
  a81=(a81-a82);
  a82=(a77*a45);
  a81=(a81-a82);
  a82=(a73*a49);
  a83=(a66*a44);
  a84=(a70*a65);
  a83=(a83+a84);
  a82=(a82+a83);
  a83=(a75*a82);
  a81=(a81-a83);
  a83=(a80*a81);
  a79=(a79+a83);
  a83=1.5100100000000000e-02;
  a84=arg[2]? arg[2][3] : 0;
  a85=(a17*a51);
  a85=(a85-a45);
  a84=(a84+a85);
  a85=(a83*a84);
  a79=(a79+a85);
  a85=4.4148300000000000e-06;
  a86=1.8857500000000002e+01;
  a87=8.7849999999999995e-01;
  a88=(a87*a48);
  a89=-1.1500000000000000e-01;
  a90=(a89*a45);
  a88=(a88-a90);
  a20=(a20-a88);
  a88=(a17*a20);
  a43=(a43*a61);
  a4=(a40*a4);
  a26=(a36*a26);
  a4=(a4+a26);
  a43=(a43+a4);
  a4=(a89*a51);
  a26=9.5000000000000001e-02;
  a90=(a26*a48);
  a4=(a4-a90);
  a4=(a43-a4);
  a88=(a88-a4);
  a90=4.4925099999999999e-03;
  a91=(a90*a81);
  a92=(a85*a78);
  a91=(a91-a92);
  a91=(a88-a91);
  a91=(a86*a91);
  a92=(a85*a91);
  a93=-1.7462100000000000e-01;
  a94=(a26*a45);
  a95=(a87*a51);
  a94=(a94-a95);
  a60=(a60-a94);
  a94=(a70*a60);
  a95=(a66*a20);
  a94=(a94-a95);
  a95=(a77*a4);
  a94=(a94-a95);
  a95=(a89*a65);
  a96=(a26*a44);
  a95=(a95-a96);
  a95=(a27-a95);
  a96=(a73*a95);
  a97=(a26*a49);
  a98=(a87*a65);
  a97=(a97-a98);
  a97=(a61-a97);
  a98=(a66*a97);
  a99=(a87*a44);
  a100=(a89*a49);
  a99=(a99-a100);
  a99=(a71+a99);
  a100=(a70*a99);
  a98=(a98-a100);
  a96=(a96+a98);
  a98=(a75*a96);
  a94=(a94-a98);
  a98=(a93*a78);
  a100=(a90*a84);
  a98=(a98-a100);
  a98=(a94-a98);
  a98=(a86*a98);
  a100=(a93*a98);
  a92=(a92-a100);
  a79=(a79+a92);
  a92=(a83*a82);
  a100=-8.3409500000000002e-06;
  a101=(a100*a76);
  a92=(a92+a101);
  a101=4.6258300000000002e-02;
  a102=(a17*a65);
  a102=(a102-a49);
  a102=(a75+a102);
  a103=(a101*a102);
  a92=(a92+a103);
  a97=(a70*a97);
  a103=(a66*a99);
  a97=(a97+a103);
  a103=(a77*a95);
  a97=(a97-a103);
  a103=(a93*a82);
  a104=(a90*a102);
  a103=(a103-a104);
  a103=(a97-a103);
  a103=(a86*a103);
  a104=(a90*a103);
  a105=(a85*a102);
  a106=(a93*a76);
  a105=(a105-a106);
  a105=(a96-a105);
  a105=(a86*a105);
  a106=(a85*a105);
  a104=(a104-a106);
  a92=(a92+a104);
  a104=(a76*a92);
  a106=(a80*a82);
  a107=3.3070999999999995e-01;
  a108=(a107*a76);
  a106=(a106+a108);
  a108=(a100*a102);
  a106=(a106+a108);
  a108=(a93*a105);
  a99=(a17*a99);
  a95=(a95+a99);
  a99=(a90*a76);
  a109=(a85*a82);
  a99=(a99-a109);
  a99=(a95+a99);
  a99=(a86*a99);
  a109=(a90*a99);
  a108=(a108+a109);
  a106=(a106+a108);
  a108=(a102*a106);
  a104=(a104-a108);
  a108=(a95*a103);
  a109=(a97*a99);
  a108=(a108-a109);
  a104=(a104+a108);
  a79=(a79+a104);
  a104=arg[0]? arg[0][4] : 0;
  a108=cos(a104);
  a109=(a17*a108);
  a110=3.6729200000000001e-01;
  a111=arg[1]? arg[1][4] : 0;
  a112=(a108*a76);
  a104=sin(a104);
  a113=(a104*a102);
  a112=(a112+a113);
  a113=(a17*a104);
  a114=(a113*a82);
  a112=(a112-a114);
  a114=(a111*a112);
  a115=(a109*a78);
  a116=(a104*a81);
  a117=(a108*a84);
  a116=(a116-a117);
  a115=(a115+a116);
  a114=(a114+a115);
  a115=(a110*a114);
  a116=-1.1269800000000000e-04;
  a117=(a108*a81);
  a118=(a104*a84);
  a117=(a117+a118);
  a118=(a113*a78);
  a117=(a117-a118);
  a118=(a109*a82);
  a119=(a104*a76);
  a120=(a108*a102);
  a119=(a119-a120);
  a118=(a118+a119);
  a119=(a111*a118);
  a117=(a117-a119);
  a119=(a116*a117);
  a115=(a115+a119);
  a119=1.0983999999999999e-01;
  a120=arg[2]? arg[2][4] : 0;
  a121=(a17*a84);
  a121=(a78+a121);
  a120=(a120+a121);
  a121=(a119*a120);
  a115=(a115+a121);
  a121=2.2443299999999999e-05;
  a122=3.7375000000000000e+01;
  a75=(a75*a97);
  a4=(a73*a4);
  a60=(a66*a60);
  a20=(a70*a20);
  a60=(a60+a20);
  a4=(a4+a60);
  a75=(a75+a4);
  a4=-3.4150000000000003e-01;
  a60=(a4*a81);
  a60=(a75+a60);
  a20=5.8999999999999997e-02;
  a123=(a20*a81);
  a88=(a88-a123);
  a123=(a17*a88);
  a123=(a60+a123);
  a124=5.7693399999999999e-02;
  a125=(a124*a117);
  a126=(a121*a114);
  a125=(a125-a126);
  a125=(a123-a125);
  a125=(a122*a125);
  a126=(a121*a125);
  a127=-1.2657699999999999e-02;
  a128=(a4*a78);
  a129=(a20*a84);
  a128=(a128-a129);
  a94=(a94-a128);
  a128=(a108*a94);
  a129=(a104*a88);
  a128=(a128+a129);
  a129=(a113*a60);
  a128=(a128-a129);
  a129=(a4*a76);
  a129=(a96+a129);
  a130=(a109*a129);
  a131=(a4*a82);
  a132=(a20*a102);
  a131=(a131-a132);
  a131=(a97-a131);
  a132=(a104*a131);
  a133=(a20*a76);
  a133=(a95+a133);
  a134=(a108*a133);
  a132=(a132+a134);
  a130=(a130+a132);
  a132=(a111*a130);
  a128=(a128-a132);
  a132=(a127*a114);
  a134=(a124*a120);
  a132=(a132-a134);
  a132=(a128-a132);
  a132=(a122*a132);
  a134=(a127*a132);
  a126=(a126-a134);
  a115=(a115+a126);
  a126=(a119*a118);
  a134=-4.2569199999999999e-05;
  a135=(a134*a112);
  a126=(a126+a135);
  a135=3.7838899999999998e-01;
  a136=(a17*a102);
  a136=(a82+a136);
  a136=(a111+a136);
  a137=(a135*a136);
  a126=(a126+a137);
  a131=(a108*a131);
  a137=(a104*a133);
  a131=(a131-a137);
  a137=(a113*a129);
  a131=(a131-a137);
  a137=(a127*a118);
  a138=(a124*a136);
  a137=(a137-a138);
  a137=(a131-a137);
  a137=(a122*a137);
  a138=(a124*a137);
  a139=(a121*a136);
  a140=(a127*a112);
  a139=(a139-a140);
  a139=(a130-a139);
  a139=(a122*a139);
  a140=(a121*a139);
  a138=(a138-a140);
  a126=(a126+a138);
  a138=(a112*a126);
  a140=(a116*a118);
  a141=5.3328399999999998e-01;
  a142=(a141*a112);
  a140=(a140+a142);
  a142=(a134*a136);
  a140=(a140+a142);
  a142=(a127*a139);
  a133=(a17*a133);
  a129=(a129-a133);
  a133=(a124*a112);
  a143=(a121*a118);
  a133=(a133-a143);
  a133=(a129-a133);
  a133=(a122*a133);
  a143=(a124*a133);
  a142=(a142-a143);
  a140=(a140+a142);
  a142=(a136*a140);
  a138=(a138-a142);
  a142=(a131*a133);
  a143=(a129*a137);
  a142=(a142-a143);
  a138=(a138+a142);
  a115=(a115+a138);
  a138=arg[0]? arg[0][5] : 0;
  a142=cos(a138);
  a143=(a17*a142);
  a144=8.0910813823839803e-03;
  a145=arg[1]? arg[1][5] : 0;
  a146=(a142*a112);
  a138=sin(a138);
  a147=(a138*a136);
  a146=(a146-a147);
  a147=(a17*a138);
  a148=(a147*a118);
  a146=(a146-a148);
  a148=(a145*a146);
  a149=(a143*a114);
  a150=(a138*a117);
  a151=(a142*a120);
  a150=(a150+a151);
  a149=(a149+a150);
  a148=(a148+a149);
  a149=(a144*a148);
  a150=2.7440399677331648e-07;
  a151=(a142*a117);
  a152=(a138*a120);
  a151=(a151-a152);
  a152=(a147*a114);
  a151=(a151-a152);
  a152=(a143*a118);
  a153=(a138*a112);
  a154=(a142*a136);
  a153=(a153+a154);
  a152=(a152+a153);
  a153=(a145*a152);
  a151=(a151-a153);
  a153=(a150*a151);
  a149=(a149+a153);
  a153=2.3671160835241077e-07;
  a154=arg[2]? arg[2][5] : 0;
  a155=(a17*a120);
  a155=(a155-a114);
  a154=(a154+a155);
  a155=(a153*a154);
  a149=(a149+a155);
  a155=-2.1795350793974585e-05;
  a156=3.1373799999999998e+00;
  a157=2.0999999999999999e-01;
  a158=(a157*a117);
  a123=(a123-a158);
  a158=(a17*a123);
  a111=(a111*a131);
  a60=(a109*a60);
  a94=(a104*a94);
  a88=(a108*a88);
  a94=(a94-a88);
  a60=(a60+a94);
  a111=(a111+a60);
  a60=-5.8999999999999997e-02;
  a94=(a60*a117);
  a94=(a111+a94);
  a158=(a158-a94);
  a88=4.5718723091879198e-05;
  a159=(a88*a151);
  a160=(a155*a148);
  a159=(a159-a160);
  a158=(a158-a159);
  a158=(a156*a158);
  a159=(a155*a158);
  a160=-1.1799003186097952e-02;
  a161=(a60*a114);
  a162=(a157*a120);
  a161=(a161-a162);
  a128=(a128-a161);
  a161=(a142*a128);
  a162=(a138*a123);
  a161=(a161-a162);
  a162=(a147*a94);
  a161=(a161-a162);
  a162=(a60*a112);
  a162=(a130+a162);
  a163=(a143*a162);
  a164=(a60*a118);
  a165=(a157*a136);
  a164=(a164-a165);
  a164=(a131-a164);
  a165=(a138*a164);
  a166=(a157*a112);
  a166=(a129-a166);
  a167=(a142*a166);
  a165=(a165+a167);
  a163=(a163+a165);
  a165=(a145*a163);
  a161=(a161-a165);
  a165=(a160*a148);
  a167=(a88*a154);
  a165=(a165-a167);
  a161=(a161-a165);
  a161=(a156*a161);
  a165=(a160*a161);
  a159=(a159-a165);
  a149=(a149+a159);
  a159=(a153*a152);
  a165=2.3359782359283573e-07;
  a167=(a165*a146);
  a159=(a159+a167);
  a167=1.5602500002566057e-02;
  a168=(a17*a136);
  a168=(a168-a118);
  a168=(a145+a168);
  a169=(a167*a168);
  a159=(a159+a169);
  a164=(a142*a164);
  a169=(a138*a166);
  a164=(a164-a169);
  a169=(a147*a162);
  a164=(a164-a169);
  a169=(a160*a152);
  a170=(a88*a168);
  a169=(a169-a170);
  a169=(a164-a169);
  a169=(a156*a169);
  a170=(a88*a169);
  a171=(a155*a168);
  a172=(a160*a146);
  a171=(a171-a172);
  a171=(a163-a171);
  a171=(a156*a171);
  a172=(a155*a171);
  a170=(a170-a172);
  a159=(a159+a170);
  a170=(a146*a159);
  a172=(a150*a152);
  a173=8.1072013839996598e-03;
  a174=(a173*a146);
  a172=(a172+a174);
  a174=(a165*a168);
  a172=(a172+a174);
  a174=(a160*a171);
  a166=(a17*a166);
  a166=(a166-a162);
  a162=(a88*a146);
  a175=(a155*a152);
  a162=(a162-a175);
  a162=(a166-a162);
  a162=(a156*a162);
  a175=(a88*a162);
  a174=(a174-a175);
  a172=(a172+a174);
  a174=(a168*a172);
  a170=(a170-a174);
  a174=(a164*a162);
  a175=(a166*a169);
  a174=(a174-a175);
  a170=(a170+a174);
  a149=(a149+a170);
  a170=(a143*a149);
  a174=(a150*a148);
  a173=(a173*a151);
  a174=(a174+a173);
  a173=(a165*a154);
  a174=(a174+a173);
  a145=(a145*a164);
  a94=(a143*a94);
  a128=(a138*a128);
  a123=(a142*a123);
  a128=(a128+a123);
  a94=(a94+a128);
  a145=(a145+a94);
  a94=(a155*a154);
  a128=(a160*a151);
  a94=(a94-a128);
  a145=(a145-a94);
  a156=(a156*a145);
  a145=(a160*a156);
  a94=(a88*a158);
  a145=(a145-a94);
  a174=(a174+a145);
  a144=(a144*a152);
  a150=(a150*a146);
  a144=(a144+a150);
  a150=(a153*a168);
  a144=(a144+a150);
  a150=(a155*a162);
  a160=(a160*a169);
  a150=(a150-a160);
  a144=(a144+a150);
  a150=(a168*a144);
  a159=(a152*a159);
  a150=(a150-a159);
  a166=(a166*a171);
  a159=(a163*a162);
  a166=(a166-a159);
  a150=(a150+a166);
  a174=(a174+a150);
  a150=(a147*a174);
  a153=(a153*a148);
  a165=(a165*a151);
  a153=(a153+a165);
  a167=(a167*a154);
  a153=(a153+a167);
  a88=(a88*a161);
  a155=(a155*a156);
  a88=(a88-a155);
  a153=(a153+a88);
  a172=(a152*a172);
  a144=(a146*a144);
  a172=(a172-a144);
  a163=(a163*a169);
  a164=(a164*a171);
  a163=(a163-a164);
  a172=(a172+a163);
  a153=(a153+a172);
  a150=(a150+a153);
  a170=(a170-a150);
  a150=(a146*a162);
  a172=(a168*a169);
  a150=(a150-a172);
  a156=(a156+a150);
  a150=(a138*a156);
  a168=(a168*a171);
  a162=(a152*a162);
  a168=(a168-a162);
  a161=(a161+a168);
  a168=(a142*a161);
  a150=(a150+a168);
  a168=(a60*a150);
  a170=(a170-a168);
  a115=(a115+a170);
  a170=(a109*a115);
  a168=(a119*a114);
  a162=(a134*a117);
  a168=(a168+a162);
  a135=(a135*a120);
  a168=(a168+a135);
  a135=(a124*a132);
  a162=(a121*a120);
  a172=(a127*a117);
  a162=(a162-a172);
  a111=(a111-a162);
  a122=(a122*a111);
  a111=(a121*a122);
  a135=(a135-a111);
  a168=(a168+a135);
  a140=(a118*a140);
  a110=(a110*a118);
  a135=(a116*a112);
  a110=(a110+a135);
  a119=(a119*a136);
  a110=(a110+a119);
  a121=(a121*a133);
  a119=(a127*a137);
  a121=(a121-a119);
  a110=(a110+a121);
  a121=(a112*a110);
  a140=(a140-a121);
  a121=(a130*a137);
  a131=(a131*a139);
  a121=(a121-a131);
  a140=(a140+a121);
  a168=(a168+a140);
  a140=(a142*a149);
  a121=(a17*a153);
  a131=(a138*a174);
  a121=(a121-a131);
  a140=(a140+a121);
  a121=(a157*a150);
  a140=(a140+a121);
  a168=(a168+a140);
  a116=(a116*a114);
  a141=(a141*a117);
  a116=(a116+a141);
  a134=(a134*a120);
  a116=(a116+a134);
  a127=(a127*a122);
  a124=(a124*a125);
  a127=(a127-a124);
  a116=(a116+a127);
  a110=(a136*a110);
  a126=(a118*a126);
  a110=(a110-a126);
  a129=(a129*a139);
  a130=(a130*a133);
  a129=(a129-a130);
  a110=(a110+a129);
  a116=(a116+a110);
  a149=(a138*a149);
  a174=(a142*a174);
  a149=(a149+a174);
  a143=(a143*a156);
  a147=(a147*a161);
  a152=(a152*a169);
  a146=(a146*a171);
  a152=(a152-a146);
  a158=(a158+a152);
  a147=(a147+a158);
  a143=(a143-a147);
  a60=(a60*a143);
  a142=(a142*a156);
  a158=(a17*a158);
  a138=(a138*a161);
  a158=(a158-a138);
  a142=(a142+a158);
  a157=(a157*a142);
  a60=(a60-a157);
  a149=(a149+a60);
  a116=(a116+a149);
  a149=(a113*a116);
  a149=(a168-a149);
  a170=(a170+a149);
  a149=(a112*a133);
  a60=(a136*a137);
  a149=(a149-a60);
  a122=(a122+a149);
  a122=(a122+a143);
  a143=(a104*a122);
  a136=(a136*a139);
  a133=(a118*a133);
  a136=(a136-a133);
  a132=(a132+a136);
  a132=(a132+a150);
  a150=(a108*a132);
  a143=(a143+a150);
  a150=(a4*a143);
  a170=(a170-a150);
  a79=(a79+a170);
  a170=(a73*a79);
  a150=(a80*a78);
  a107=(a107*a81);
  a150=(a150+a107);
  a107=(a100*a84);
  a150=(a150+a107);
  a107=(a85*a84);
  a136=(a93*a81);
  a107=(a107-a136);
  a75=(a75-a107);
  a86=(a86*a75);
  a75=(a93*a86);
  a107=(a90*a91);
  a75=(a75-a107);
  a150=(a150+a75);
  a74=(a74*a82);
  a80=(a80*a76);
  a74=(a74+a80);
  a80=(a83*a102);
  a74=(a74+a80);
  a80=(a85*a99);
  a93=(a93*a103);
  a80=(a80+a93);
  a74=(a74-a80);
  a80=(a102*a74);
  a92=(a82*a92);
  a80=(a80-a92);
  a92=(a96*a99);
  a95=(a95*a105);
  a92=(a92-a95);
  a80=(a80+a92);
  a150=(a150+a80);
  a80=(a104*a115);
  a92=(a108*a116);
  a80=(a80+a92);
  a109=(a109*a122);
  a118=(a118*a137);
  a112=(a112*a139);
  a118=(a118-a112);
  a125=(a125+a118);
  a125=(a125+a142);
  a113=(a113*a132);
  a113=(a125-a113);
  a109=(a109+a113);
  a4=(a4*a109);
  a132=(a104*a132);
  a125=(a17*a125);
  a132=(a132+a125);
  a122=(a108*a122);
  a132=(a132-a122);
  a122=(a20*a132);
  a4=(a4-a122);
  a80=(a80+a4);
  a150=(a150+a80);
  a80=(a77*a150);
  a83=(a83*a78);
  a100=(a100*a81);
  a83=(a83+a100);
  a101=(a101*a84);
  a83=(a83+a101);
  a90=(a90*a98);
  a85=(a85*a86);
  a90=(a90-a85);
  a83=(a83+a90);
  a106=(a82*a106);
  a74=(a76*a74);
  a106=(a106-a74);
  a96=(a96*a103);
  a97=(a97*a105);
  a96=(a96-a97);
  a106=(a106+a96);
  a83=(a83+a106);
  a104=(a104*a116);
  a116=(a17*a168);
  a104=(a104+a116);
  a108=(a108*a115);
  a104=(a104-a108);
  a20=(a20*a143);
  a104=(a104+a20);
  a83=(a83+a104);
  a80=(a80+a83);
  a170=(a170-a80);
  a80=(a76*a99);
  a104=(a102*a103);
  a80=(a80+a104);
  a86=(a86-a80);
  a86=(a86+a109);
  a109=(a70*a86);
  a103=(a82*a103);
  a76=(a76*a105);
  a103=(a103-a76);
  a91=(a91+a103);
  a91=(a91+a132);
  a132=(a17*a91);
  a102=(a102*a105);
  a82=(a82*a99);
  a102=(a102+a82);
  a98=(a98+a102);
  a98=(a98+a143);
  a143=(a66*a98);
  a132=(a132-a143);
  a109=(a109+a132);
  a132=(a89*a109);
  a143=(a66*a86);
  a102=(a70*a98);
  a143=(a143+a102);
  a102=(a26*a143);
  a132=(a132-a102);
  a170=(a170+a132);
  a46=(a46+a170);
  a170=(a40*a46);
  a132=(a47*a45);
  a69=(a69*a48);
  a132=(a132+a69);
  a69=(a63*a51);
  a132=(a132+a69);
  a69=(a52*a51);
  a102=(a58*a48);
  a69=(a69-a102);
  a43=(a43-a69);
  a53=(a53*a43);
  a43=(a58*a53);
  a69=(a55*a56);
  a43=(a43-a69);
  a132=(a132+a43);
  a42=(a42*a49);
  a47=(a47*a44);
  a42=(a42+a47);
  a47=(a50*a65);
  a42=(a42+a47);
  a47=(a52*a72);
  a58=(a58*a7);
  a47=(a47+a58);
  a42=(a42-a47);
  a47=(a65*a42);
  a57=(a49*a57);
  a47=(a47-a57);
  a57=(a27*a72);
  a71=(a71*a67);
  a57=(a57-a71);
  a47=(a47+a57);
  a132=(a132+a47);
  a47=(a66*a79);
  a57=(a70*a150);
  a47=(a47+a57);
  a73=(a73*a86);
  a77=(a77*a98);
  a77=(a77+a91);
  a73=(a73-a77);
  a26=(a26*a73);
  a77=(a87*a109);
  a26=(a26-a77);
  a47=(a47+a26);
  a132=(a132+a47);
  a47=(a36*a132);
  a170=(a170-a47);
  a47=(a44*a72);
  a26=(a65*a7);
  a47=(a47+a26);
  a47=(a53-a47);
  a47=(a47+a73);
  a26=(a36*a47);
  a65=(a65*a67);
  a72=(a49*a72);
  a65=(a65+a72);
  a65=(a62+a65);
  a65=(a65+a143);
  a72=(a40*a65);
  a26=(a26+a72);
  a72=(a59*a26);
  a170=(a170-a72);
  a11=(a11+a170);
  a8=(a8*a11);
  a11=(a12*a10);
  a39=(a39*a13);
  a11=(a11+a39);
  a39=(a32*a16);
  a11=(a11+a39);
  a39=(a18*a16);
  a170=(a24*a13);
  a39=(a39-a170);
  a5=(a5-a39);
  a19=(a19*a5);
  a5=(a24*a19);
  a39=(a1*a22);
  a5=(a5-a39);
  a11=(a11+a5);
  a3=(a3*a14);
  a12=(a12*a9);
  a3=(a3+a12);
  a12=(a15*a6);
  a3=(a3+a12);
  a12=(a18*a41);
  a24=(a24*a35);
  a12=(a12+a24);
  a3=(a3-a12);
  a12=(a6*a3);
  a23=(a14*a23);
  a12=(a12-a23);
  a23=(a30*a41);
  a29=(a29*a37);
  a23=(a23-a29);
  a12=(a12+a23);
  a11=(a11+a12);
  a46=(a36*a46);
  a132=(a40*a132);
  a46=(a46+a132);
  a40=(a40*a47);
  a36=(a36*a65);
  a40=(a40-a36);
  a59=(a59*a40);
  a36=(a49*a7);
  a65=(a44*a67);
  a36=(a36-a65);
  a56=(a56+a36);
  a56=(a56+a109);
  a109=(a54*a56);
  a59=(a59-a109);
  a46=(a46+a59);
  a11=(a11+a46);
  a2=(a2*a11);
  a15=(a15*a10);
  a32=(a32*a13);
  a15=(a15+a32);
  a33=(a33*a16);
  a15=(a15+a33);
  a1=(a1*a31);
  a18=(a18*a19);
  a1=(a1-a18);
  a15=(a15+a1);
  a38=(a14*a38);
  a3=(a9*a3);
  a38=(a38-a3);
  a30=(a30*a35);
  a34=(a34*a37);
  a30=(a30-a34);
  a38=(a38+a30);
  a15=(a15+a38);
  a50=(a50*a45);
  a63=(a63*a48);
  a50=(a50+a63);
  a64=(a64*a51);
  a50=(a50+a64);
  a55=(a55*a62);
  a52=(a52*a53);
  a55=(a55-a52);
  a50=(a50+a55);
  a49=(a49*a68);
  a44=(a44*a42);
  a49=(a49-a44);
  a27=(a27*a7);
  a61=(a61*a67);
  a27=(a27-a61);
  a49=(a49+a27);
  a50=(a50+a49);
  a70=(a70*a79);
  a79=(a17*a83);
  a66=(a66*a150);
  a79=(a79-a66);
  a70=(a70+a79);
  a87=(a87*a143);
  a89=(a89*a73);
  a87=(a87-a89);
  a70=(a70+a87);
  a50=(a50+a70);
  a54=(a54*a26);
  a54=(a50+a54);
  a15=(a15+a54);
  a17=(a17*a15);
  a2=(a2+a17);
  a8=(a8+a2);
  a2=(a9*a41);
  a17=(a6*a35);
  a2=(a2+a17);
  a19=(a19-a2);
  a19=(a19+a40);
  a28=(a28*a19);
  a6=(a6*a37);
  a41=(a14*a41);
  a6=(a6+a41);
  a31=(a31+a6);
  a31=(a31+a26);
  a25=(a25*a31);
  a14=(a14*a35);
  a9=(a9*a37);
  a14=(a14-a9);
  a22=(a22+a14);
  a22=(a22+a56);
  a25=(a25-a22);
  a28=(a28+a25);
  a21=(a21*a28);
  a8=(a8+a21);
  a0=(a0+a8);
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a15;
  if (res[0]!=0) res[0][2]=a50;
  if (res[0]!=0) res[0][3]=a83;
  if (res[0]!=0) res[0][4]=a168;
  if (res[0]!=0) res[0][5]=a153;
  return 0;
}

CASADI_SYMBOL_EXPORT int rnea(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int rnea_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int rnea_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void rnea_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int rnea_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void rnea_release(int mem) {
}

CASADI_SYMBOL_EXPORT void rnea_incref(void) {
}

CASADI_SYMBOL_EXPORT void rnea_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int rnea_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int rnea_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real rnea_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* rnea_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    case 1: return "dq";
    case 2: return "ddq";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* rnea_name_out(casadi_int i) {
  switch (i) {
    case 0: return "tau";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rnea_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rnea_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int rnea_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
