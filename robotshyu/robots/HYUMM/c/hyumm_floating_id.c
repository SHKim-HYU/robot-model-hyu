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
  #define CASADI_PREFIX(ID) hyumm_floating_id_ ## ID
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

static const casadi_int casadi_s0[17] = {13, 1, 0, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const casadi_int casadi_s1[16] = {12, 1, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

/* rnea:(q[13],dq[12],ddq[12])->(tau[12]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a12, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a13, a130, a131, a132, a133, a134, a135, a136, a137, a138, a139, a14, a140, a141, a142, a143, a144, a145, a146, a147, a148, a149, a15, a150, a151, a152, a153, a154, a155, a156, a157, a158, a159, a16, a160, a161, a162, a163, a164, a165, a166, a167, a168, a169, a17, a170, a171, a172, a173, a174, a175, a176, a177, a178, a179, a18, a180, a181, a182, a183, a184, a185, a186, a187, a188, a189, a19, a190, a191, a192, a193, a194, a195, a196, a197, a198, a199, a2, a20, a200, a201, a202, a203, a204, a205, a206, a207, a208, a209, a21, a210, a211, a212, a213, a214, a215, a216, a217, a218, a219, a22, a220, a221, a222, a223, a224, a225, a226, a227, a228, a229, a23, a230, a231, a232, a233, a234, a235, a236, a237, a238, a239, a24, a240, a241, a242, a243, a244, a245, a246, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=5.5207671930000004e+01;
  a1=arg[1]? arg[1][1] : 0;
  a2=arg[1]? arg[1][5] : 0;
  a3=(a1*a2);
  a4=arg[1]? arg[1][2] : 0;
  a5=arg[1]? arg[1][4] : 0;
  a6=(a4*a5);
  a3=(a3-a6);
  a6=(a5*a4);
  a7=(a2*a1);
  a6=(a6-a7);
  a3=(a3+a6);
  a6=arg[2]? arg[2][0] : 0;
  a3=(a3+a6);
  a6=9.8100000000000005e+00;
  a7=2.;
  a8=arg[0]? arg[0][5] : 0;
  a8=(a7*a8);
  a9=arg[0]? arg[0][3] : 0;
  a10=(a8*a9);
  a11=arg[0]? arg[0][4] : 0;
  a12=(a7*a11);
  a13=arg[0]? arg[0][6] : 0;
  a14=(a12*a13);
  a10=(a10-a14);
  a10=(a6*a10);
  a3=(a3+a10);
  a10=-6.5955889565800042e-08;
  a14=arg[2]? arg[2][5] : 0;
  a15=(a10*a14);
  a16=1.4990468809092375e-01;
  a17=arg[2]? arg[2][4] : 0;
  a18=(a16*a17);
  a15=(a15-a18);
  a15=(a3-a15);
  a15=(a0*a15);
  a18=-1.3325055224028888e-02;
  a19=(a18*a5);
  a20=arg[1]? arg[1][3] : 0;
  a21=(a10*a20);
  a19=(a19-a21);
  a19=(a4-a19);
  a19=(a0*a19);
  a21=(a5*a19);
  a22=(a16*a20);
  a23=(a18*a2);
  a22=(a22-a23);
  a22=(a1-a22);
  a22=(a0*a22);
  a23=(a2*a22);
  a21=(a21-a23);
  a21=(a15+a21);
  a23=arg[0]? arg[0][7] : 0;
  a24=cos(a23);
  a25=1.1444445350000001e+01;
  a26=arg[1]? arg[1][6] : 0;
  a27=3.0549999999999999e-01;
  a28=(a27*a20);
  a29=2.9999999999999999e-01;
  a30=(a29*a2);
  a28=(a28-a30);
  a28=(a1-a28);
  a30=(a24*a28);
  a23=sin(a23);
  a31=arg[1]? arg[1][0] : 0;
  a32=(a27*a5);
  a32=(a31+a32);
  a33=(a23*a32);
  a30=(a30-a33);
  a33=(a26*a30);
  a34=(a27*a17);
  a3=(a3+a34);
  a34=(a24*a3);
  a35=(a4*a20);
  a36=(a31*a2);
  a35=(a35-a36);
  a36=(a2*a31);
  a37=(a20*a4);
  a36=(a36-a37);
  a35=(a35+a36);
  a36=arg[2]? arg[2][1] : 0;
  a35=(a35+a36);
  a8=(a8*a11);
  a7=(a7*a9);
  a13=(a7*a13);
  a8=(a8+a13);
  a8=(a6*a8);
  a35=(a35+a8);
  a8=arg[2]? arg[2][3] : 0;
  a13=(a27*a8);
  a36=(a29*a14);
  a13=(a13-a36);
  a13=(a35-a13);
  a36=(a23*a13);
  a34=(a34+a36);
  a33=(a33+a34);
  a34=-4.3103130000000003e-02;
  a36=arg[2]? arg[2][6] : 0;
  a36=(a36+a14);
  a37=(a34*a36);
  a38=1.3245396000000001e-01;
  a39=(a24*a17);
  a40=(a23*a8);
  a39=(a39-a40);
  a40=(a24*a20);
  a41=(a23*a5);
  a40=(a40+a41);
  a41=(a26*a40);
  a39=(a39-a41);
  a41=(a38*a39);
  a37=(a37-a41);
  a37=(a33-a37);
  a37=(a25*a37);
  a41=(a24*a5);
  a42=(a23*a20);
  a41=(a41-a42);
  a42=(a29*a5);
  a42=(a4-a42);
  a43=-2.3749000000000000e-04;
  a44=(a43*a41);
  a45=(a34*a40);
  a44=(a44-a45);
  a44=(a42-a44);
  a44=(a25*a44);
  a45=(a41*a44);
  a46=(a26+a2);
  a47=(a38*a40);
  a48=(a43*a46);
  a47=(a47-a48);
  a47=(a30-a47);
  a47=(a25*a47);
  a48=(a46*a47);
  a45=(a45-a48);
  a45=(a37+a45);
  a48=2.2204460492503131e-16;
  a49=arg[0]? arg[0][8] : 0;
  a50=cos(a49);
  a51=(a48*a50);
  a49=sin(a49);
  a51=(a51+a49);
  a52=5.8476655299999996e+00;
  a53=arg[1]? arg[1][7] : 0;
  a54=(a48*a49);
  a54=(a50-a54);
  a32=(a24*a32);
  a28=(a23*a28);
  a32=(a32+a28);
  a28=-1.0900000000000000e-01;
  a55=(a28*a46);
  a56=2.2200000000000000e-01;
  a57=(a56*a41);
  a55=(a55-a57);
  a55=(a32-a55);
  a57=(a54*a55);
  a58=(a48*a50);
  a59=(a56*a40);
  a59=(a30-a59);
  a60=(a58*a59);
  a61=(a48*a50);
  a61=(a49+a61);
  a62=(a28*a40);
  a62=(a42+a62);
  a63=(a61*a62);
  a60=(a60+a63);
  a57=(a57+a60);
  a60=(a53*a57);
  a63=(a28*a36);
  a64=(a56*a39);
  a63=(a63-a64);
  a33=(a33-a63);
  a63=(a51*a33);
  a64=(a48*a49);
  a13=(a24*a13);
  a3=(a23*a3);
  a13=(a13-a3);
  a3=(a26*a32);
  a13=(a13-a3);
  a26=(a26*a41);
  a3=(a24*a8);
  a65=(a23*a17);
  a3=(a3+a65);
  a26=(a26+a3);
  a3=(a56*a26);
  a3=(a13-a3);
  a65=(a64*a3);
  a49=(a48*a49);
  a49=(a49-a50);
  a50=(a31*a5);
  a66=(a1*a20);
  a50=(a50-a66);
  a66=(a20*a1);
  a67=(a5*a31);
  a66=(a66-a67);
  a50=(a50+a66);
  a66=arg[2]? arg[2][2] : 0;
  a50=(a50+a66);
  a66=1.;
  a7=(a7*a9);
  a12=(a12*a11);
  a7=(a7+a12);
  a66=(a66-a7);
  a6=(a6*a66);
  a50=(a50+a6);
  a6=(a29*a17);
  a6=(a50-a6);
  a66=(a28*a26);
  a66=(a6+a66);
  a7=(a49*a66);
  a65=(a65+a7);
  a63=(a63+a65);
  a60=(a60+a63);
  a63=2.2540000000000001e-05;
  a65=arg[2]? arg[2][7] : 0;
  a7=(a48*a26);
  a7=(a7-a39);
  a65=(a65+a7);
  a7=(a63*a65);
  a12=4.4830689999999999e-02;
  a11=(a54*a26);
  a9=(a58*a39);
  a67=(a61*a36);
  a9=(a9+a67);
  a11=(a11+a9);
  a9=(a51*a40);
  a67=(a64*a41);
  a68=(a49*a46);
  a67=(a67+a68);
  a9=(a9+a67);
  a67=(a53*a9);
  a11=(a11-a67);
  a67=(a12*a11);
  a7=(a7-a67);
  a7=(a60-a7);
  a7=(a52*a7);
  a67=(a54*a40);
  a68=(a58*a41);
  a69=(a61*a46);
  a68=(a68+a69);
  a67=(a67+a68);
  a68=(a48*a55);
  a68=(a68-a59);
  a69=-2.9616699000000002e-01;
  a70=(a69*a67);
  a71=(a63*a9);
  a70=(a70-a71);
  a70=(a68-a70);
  a70=(a52*a70);
  a71=(a67*a70);
  a72=(a48*a40);
  a72=(a72-a41);
  a72=(a53+a72);
  a73=(a12*a9);
  a74=(a69*a72);
  a73=(a73-a74);
  a73=(a57-a73);
  a73=(a52*a73);
  a74=(a72*a73);
  a71=(a71-a74);
  a71=(a7+a71);
  a74=arg[0]? arg[0][9] : 0;
  a75=cos(a74);
  a76=2.6820606400000000e+00;
  a77=arg[1]? arg[1][8] : 0;
  a78=-3.0499999999999999e-02;
  a79=(a78*a9);
  a80=-4.5000000000000001e-01;
  a81=(a80*a72);
  a79=(a79-a81);
  a79=(a57-a79);
  a81=(a75*a79);
  a74=sin(a74);
  a55=(a51*a55);
  a59=(a64*a59);
  a62=(a49*a62);
  a59=(a59+a62);
  a55=(a55+a59);
  a59=(a78*a67);
  a59=(a55+a59);
  a62=(a74*a59);
  a81=(a81-a62);
  a62=(a77*a81);
  a82=(a78*a11);
  a60=(a60+a82);
  a82=(a75*a60);
  a83=(a54*a33);
  a84=(a58*a3);
  a66=(a61*a66);
  a84=(a84+a66);
  a83=(a83+a84);
  a84=(a53*a55);
  a83=(a83-a84);
  a53=(a53*a67);
  a84=(a51*a26);
  a66=(a64*a39);
  a85=(a49*a36);
  a66=(a66+a85);
  a84=(a84+a66);
  a53=(a53+a84);
  a84=(a78*a53);
  a66=(a80*a65);
  a84=(a84-a66);
  a84=(a83-a84);
  a66=(a74*a84);
  a82=(a82+a66);
  a62=(a62+a82);
  a82=2.1420999999999994e-04;
  a66=arg[2]? arg[2][8] : 0;
  a66=(a66+a65);
  a85=(a82*a66);
  a86=-7.0003829999999975e-02;
  a87=(a75*a11);
  a88=(a74*a53);
  a87=(a87-a88);
  a88=(a75*a9);
  a89=(a74*a67);
  a88=(a88+a89);
  a89=(a77*a88);
  a87=(a87-a89);
  a89=(a86*a87);
  a85=(a85-a89);
  a85=(a62-a85);
  a85=(a76*a85);
  a89=(a75*a67);
  a90=(a74*a9);
  a89=(a89-a90);
  a90=(a80*a67);
  a90=(a68-a90);
  a91=-1.6804015999999994e-01;
  a92=(a91*a89);
  a93=(a82*a88);
  a92=(a92-a93);
  a92=(a90-a92);
  a92=(a76*a92);
  a93=(a89*a92);
  a94=(a77+a72);
  a95=(a86*a88);
  a96=(a91*a94);
  a95=(a95-a96);
  a95=(a81-a95);
  a95=(a76*a95);
  a96=(a94*a95);
  a93=(a93-a96);
  a93=(a85+a93);
  a96=arg[0]? arg[0][10] : 0;
  a97=cos(a96);
  a98=(a48*a97);
  a99=-2.2204460492503131e-16;
  a96=sin(a96);
  a100=(a99*a96);
  a98=(a98+a100);
  a100=2.1298737100000000e+00;
  a101=arg[1]? arg[1][9] : 0;
  a102=(a99*a97);
  a103=(a48*a96);
  a102=(a102-a103);
  a59=(a75*a59);
  a79=(a74*a79);
  a59=(a59+a79);
  a79=-7.4999999999999997e-02;
  a103=(a79*a89);
  a103=(a59+a103);
  a104=(a102*a103);
  a105=(a79*a88);
  a106=-2.6700000000000002e-01;
  a107=(a106*a94);
  a105=(a105-a107);
  a105=(a81-a105);
  a107=(a96*a105);
  a108=(a106*a89);
  a108=(a90-a108);
  a109=(a97*a108);
  a107=(a107+a109);
  a104=(a104-a107);
  a107=(a101*a104);
  a109=(a79*a87);
  a62=(a62+a109);
  a109=(a98*a62);
  a84=(a75*a84);
  a60=(a74*a60);
  a84=(a84-a60);
  a60=(a77*a59);
  a84=(a84-a60);
  a77=(a77*a89);
  a60=(a75*a53);
  a110=(a74*a11);
  a60=(a60+a110);
  a77=(a77+a60);
  a60=(a79*a77);
  a110=(a106*a66);
  a60=(a60-a110);
  a60=(a84-a60);
  a110=(a97*a60);
  a33=(a48*a33);
  a33=(a33-a3);
  a3=(a80*a11);
  a3=(a33-a3);
  a111=(a106*a87);
  a111=(a3-a111);
  a112=(a96*a111);
  a110=(a110-a112);
  a109=(a109+a110);
  a107=(a107+a109);
  a109=-7.0984400000000003e-02;
  a110=arg[2]? arg[2][9] : 0;
  a112=(a48*a87);
  a113=(a48*a66);
  a112=(a112+a113);
  a112=(a112-a77);
  a110=(a110+a112);
  a112=(a109*a110);
  a113=7.6491279999999995e-02;
  a114=(a102*a77);
  a115=(a96*a87);
  a116=(a97*a66);
  a115=(a115+a116);
  a114=(a114-a115);
  a115=(a98*a88);
  a116=(a97*a89);
  a117=(a96*a94);
  a116=(a116-a117);
  a115=(a115+a116);
  a116=(a101*a115);
  a114=(a114-a116);
  a116=(a113*a114);
  a112=(a112-a116);
  a112=(a107-a112);
  a112=(a100*a112);
  a116=(a102*a88);
  a117=(a96*a89);
  a118=(a97*a94);
  a117=(a117+a118);
  a116=(a116-a117);
  a117=(a48*a105);
  a118=(a48*a108);
  a117=(a117+a118);
  a117=(a117-a103);
  a118=-2.6846999999999998e-04;
  a119=(a118*a116);
  a120=(a109*a115);
  a119=(a119-a120);
  a119=(a117-a119);
  a119=(a100*a119);
  a120=(a116*a119);
  a121=(a48*a89);
  a122=(a48*a94);
  a121=(a121+a122);
  a121=(a121-a88);
  a121=(a101+a121);
  a122=(a113*a115);
  a123=(a118*a121);
  a122=(a122-a123);
  a122=(a104-a122);
  a122=(a100*a122);
  a123=(a121*a122);
  a120=(a120-a123);
  a120=(a112+a120);
  a123=arg[0]? arg[0][11] : 0;
  a124=cos(a123);
  a125=(a48*a124);
  a123=sin(a123);
  a125=(a125+a123);
  a126=2.2241227100000001e+00;
  a127=arg[1]? arg[1][10] : 0;
  a128=(a48*a123);
  a128=(a124-a128);
  a103=(a98*a103);
  a105=(a97*a105);
  a108=(a96*a108);
  a105=(a105-a108);
  a103=(a103+a105);
  a105=-1.1400000000000000e-01;
  a108=(a105*a121);
  a129=8.3000000000000004e-02;
  a130=(a129*a116);
  a108=(a108-a130);
  a108=(a103-a108);
  a130=(a128*a108);
  a131=(a48*a124);
  a132=(a129*a115);
  a132=(a104-a132);
  a133=(a131*a132);
  a134=(a48*a124);
  a134=(a123+a134);
  a135=(a105*a115);
  a135=(a117+a135);
  a136=(a134*a135);
  a133=(a133+a136);
  a130=(a130+a133);
  a133=(a127*a130);
  a136=(a105*a110);
  a137=(a129*a114);
  a136=(a136-a137);
  a107=(a107-a136);
  a136=(a125*a107);
  a137=(a48*a123);
  a138=(a102*a62);
  a139=(a96*a60);
  a140=(a97*a111);
  a139=(a139+a140);
  a138=(a138-a139);
  a139=(a101*a103);
  a138=(a138-a139);
  a101=(a101*a116);
  a139=(a98*a77);
  a140=(a97*a87);
  a141=(a96*a66);
  a140=(a140-a141);
  a139=(a139+a140);
  a101=(a101+a139);
  a139=(a129*a101);
  a139=(a138-a139);
  a140=(a137*a139);
  a123=(a48*a123);
  a123=(a123-a124);
  a60=(a48*a60);
  a111=(a48*a111);
  a60=(a60+a111);
  a60=(a60-a62);
  a62=(a105*a101);
  a62=(a60+a62);
  a111=(a123*a62);
  a140=(a140+a111);
  a136=(a136+a140);
  a133=(a133+a136);
  a136=-2.3113999999999996e-04;
  a140=arg[2]? arg[2][10] : 0;
  a111=(a48*a101);
  a111=(a111-a114);
  a140=(a140+a111);
  a111=(a136*a140);
  a124=6.4458919999999975e-02;
  a141=(a128*a101);
  a142=(a131*a114);
  a143=(a134*a110);
  a142=(a142+a143);
  a141=(a141+a142);
  a142=(a125*a115);
  a143=(a137*a116);
  a144=(a123*a121);
  a143=(a143+a144);
  a142=(a142+a143);
  a143=(a127*a142);
  a141=(a141-a143);
  a143=(a124*a141);
  a111=(a111-a143);
  a111=(a133-a111);
  a111=(a126*a111);
  a143=(a128*a115);
  a144=(a131*a116);
  a145=(a134*a121);
  a144=(a144+a145);
  a143=(a143+a144);
  a144=(a48*a108);
  a144=(a144-a132);
  a145=-9.7962319999999978e-02;
  a146=(a145*a143);
  a147=(a136*a142);
  a146=(a146-a147);
  a146=(a144-a146);
  a146=(a126*a146);
  a147=(a143*a146);
  a148=(a48*a115);
  a148=(a148-a116);
  a148=(a127+a148);
  a149=(a124*a142);
  a150=(a145*a148);
  a149=(a149-a150);
  a149=(a130-a149);
  a149=(a126*a149);
  a150=(a148*a149);
  a147=(a147-a150);
  a147=(a111+a147);
  a150=arg[0]? arg[0][12] : 0;
  a151=cos(a150);
  a152=(a48*a151);
  a150=sin(a150);
  a153=(a99*a150);
  a152=(a152+a153);
  a153=3.8254932000000003e-01;
  a154=arg[1]? arg[1][11] : 0;
  a99=(a99*a151);
  a155=(a48*a150);
  a99=(a99-a155);
  a108=(a125*a108);
  a132=(a137*a132);
  a135=(a123*a135);
  a132=(a132+a135);
  a108=(a108+a132);
  a132=6.9000000000000006e-02;
  a135=(a132*a143);
  a135=(a108+a135);
  a155=(a99*a135);
  a156=(a132*a142);
  a157=-1.6800000000000001e-01;
  a158=(a157*a148);
  a156=(a156-a158);
  a156=(a130-a156);
  a158=(a150*a156);
  a159=(a157*a143);
  a159=(a144-a159);
  a160=(a151*a159);
  a158=(a158+a160);
  a155=(a155-a158);
  a158=(a154*a155);
  a160=(a132*a141);
  a133=(a133+a160);
  a160=(a152*a133);
  a161=(a128*a107);
  a162=(a131*a139);
  a62=(a134*a62);
  a162=(a162+a62);
  a161=(a161+a162);
  a162=(a127*a108);
  a161=(a161-a162);
  a127=(a127*a143);
  a162=(a125*a101);
  a62=(a137*a114);
  a163=(a123*a110);
  a62=(a62+a163);
  a162=(a162+a62);
  a127=(a127+a162);
  a162=(a132*a127);
  a62=(a157*a140);
  a162=(a162-a62);
  a162=(a161-a162);
  a62=(a151*a162);
  a107=(a48*a107);
  a107=(a107-a139);
  a139=(a157*a141);
  a139=(a107-a139);
  a163=(a150*a139);
  a62=(a62-a163);
  a160=(a160+a62);
  a158=(a158+a160);
  a160=-4.6556000000000001e-04;
  a62=arg[2]? arg[2][11] : 0;
  a163=(a48*a141);
  a164=(a48*a140);
  a163=(a163+a164);
  a163=(a163-a127);
  a62=(a62+a163);
  a163=(a160*a62);
  a164=3.0790970000000001e-02;
  a165=(a99*a127);
  a166=(a150*a141);
  a167=(a151*a140);
  a166=(a166+a167);
  a165=(a165-a166);
  a166=(a152*a142);
  a167=(a151*a143);
  a168=(a150*a148);
  a167=(a167-a168);
  a166=(a166+a167);
  a167=(a154*a166);
  a165=(a165-a167);
  a167=(a164*a165);
  a163=(a163-a167);
  a158=(a158-a163);
  a158=(a153*a158);
  a163=(a99*a142);
  a167=(a150*a143);
  a168=(a151*a148);
  a167=(a167+a168);
  a163=(a163-a167);
  a167=(a48*a156);
  a168=(a48*a159);
  a167=(a167+a168);
  a167=(a167-a135);
  a168=8.1470000000000004e-05;
  a169=(a168*a163);
  a170=(a160*a166);
  a169=(a169-a170);
  a169=(a167-a169);
  a169=(a153*a169);
  a170=(a163*a169);
  a171=(a48*a143);
  a172=(a48*a148);
  a171=(a171+a172);
  a171=(a171-a142);
  a171=(a154+a171);
  a172=(a164*a166);
  a173=(a168*a171);
  a172=(a172-a173);
  a172=(a155-a172);
  a172=(a153*a172);
  a173=(a171*a172);
  a170=(a170-a173);
  a170=(a158+a170);
  a173=(a152*a170);
  a174=(a99*a133);
  a175=(a150*a162);
  a176=(a151*a139);
  a175=(a175+a176);
  a174=(a174-a175);
  a135=(a152*a135);
  a156=(a151*a156);
  a159=(a150*a159);
  a156=(a156-a159);
  a135=(a135+a156);
  a156=(a154*a135);
  a174=(a174-a156);
  a154=(a154*a163);
  a156=(a152*a127);
  a159=(a151*a141);
  a175=(a150*a140);
  a159=(a159-a175);
  a156=(a156+a159);
  a154=(a154+a156);
  a156=(a164*a154);
  a159=(a168*a62);
  a156=(a156-a159);
  a174=(a174-a156);
  a174=(a153*a174);
  a156=(a160*a171);
  a159=(a164*a163);
  a156=(a156-a159);
  a156=(a135-a156);
  a156=(a153*a156);
  a159=(a171*a156);
  a175=(a166*a169);
  a159=(a159-a175);
  a159=(a174+a159);
  a175=(a99*a159);
  a162=(a48*a162);
  a139=(a48*a139);
  a162=(a162+a139);
  a162=(a162-a133);
  a133=(a168*a165);
  a139=(a160*a154);
  a133=(a133-a139);
  a162=(a162-a133);
  a153=(a153*a162);
  a162=(a166*a172);
  a133=(a163*a156);
  a162=(a162-a133);
  a162=(a153+a162);
  a175=(a175-a162);
  a173=(a173+a175);
  a147=(a147+a173);
  a175=(a125*a147);
  a133=(a124*a127);
  a139=(a145*a140);
  a133=(a133-a139);
  a161=(a161-a133);
  a161=(a126*a161);
  a133=(a136*a148);
  a139=(a124*a143);
  a133=(a133-a139);
  a133=(a108-a133);
  a133=(a126*a133);
  a139=(a148*a133);
  a176=(a142*a146);
  a139=(a139-a176);
  a139=(a161+a139);
  a176=(a151*a170);
  a177=(a48*a162);
  a178=(a150*a159);
  a177=(a177-a178);
  a176=(a176+a177);
  a139=(a139+a176);
  a177=(a128*a139);
  a178=(a145*a141);
  a179=(a136*a127);
  a178=(a178-a179);
  a107=(a107-a178);
  a126=(a126*a107);
  a107=(a142*a149);
  a178=(a143*a133);
  a107=(a107-a178);
  a107=(a126+a107);
  a162=(a48*a162);
  a159=(a151*a159);
  a162=(a162-a159);
  a170=(a150*a170);
  a162=(a162-a170);
  a107=(a107+a162);
  a170=(a48*a107);
  a177=(a177+a170);
  a175=(a175+a177);
  a120=(a120+a175);
  a177=(a98*a120);
  a170=(a113*a101);
  a159=(a118*a110);
  a170=(a170-a159);
  a138=(a138-a170);
  a138=(a100*a138);
  a170=(a109*a121);
  a159=(a113*a116);
  a170=(a170-a159);
  a170=(a103-a170);
  a170=(a100*a170);
  a159=(a121*a170);
  a178=(a115*a119);
  a159=(a159-a178);
  a159=(a138+a159);
  a178=(a137*a147);
  a179=(a131*a139);
  a179=(a179-a107);
  a178=(a178+a179);
  a159=(a159+a178);
  a179=(a102*a159);
  a107=(a118*a114);
  a180=(a109*a101);
  a107=(a107-a180);
  a60=(a60-a107);
  a100=(a100*a60);
  a60=(a115*a122);
  a107=(a116*a170);
  a60=(a60-a107);
  a60=(a100+a60);
  a147=(a123*a147);
  a139=(a134*a139);
  a147=(a147+a139);
  a60=(a60+a147);
  a179=(a179-a60);
  a177=(a177+a179);
  a93=(a93+a177);
  a179=(a75*a93);
  a139=(a86*a77);
  a107=(a91*a66);
  a139=(a139-a107);
  a84=(a84-a139);
  a84=(a76*a84);
  a139=(a82*a94);
  a107=(a86*a89);
  a139=(a139-a107);
  a139=(a59-a139);
  a139=(a76*a139);
  a107=(a94*a139);
  a180=(a88*a92);
  a107=(a107-a180);
  a107=(a84+a107);
  a180=(a97*a120);
  a181=(a48*a60);
  a182=(a96*a159);
  a181=(a181-a182);
  a180=(a180+a181);
  a107=(a107+a180);
  a181=(a74*a107);
  a179=(a179-a181);
  a71=(a71+a179);
  a181=(a51*a71);
  a182=(a12*a53);
  a183=(a69*a65);
  a182=(a182-a183);
  a83=(a83-a182);
  a83=(a52*a83);
  a182=(a63*a72);
  a183=(a12*a67);
  a182=(a182-a183);
  a182=(a55-a182);
  a182=(a52*a182);
  a183=(a72*a182);
  a184=(a9*a70);
  a183=(a183-a184);
  a183=(a83+a183);
  a93=(a74*a93);
  a107=(a75*a107);
  a93=(a93+a107);
  a183=(a183+a93);
  a107=(a54*a183);
  a184=(a69*a11);
  a185=(a63*a53);
  a184=(a184-a185);
  a33=(a33-a184);
  a52=(a52*a33);
  a33=(a9*a73);
  a184=(a67*a182);
  a33=(a33-a184);
  a33=(a52+a33);
  a184=(a91*a87);
  a185=(a82*a77);
  a184=(a184-a185);
  a3=(a3-a184);
  a76=(a76*a3);
  a3=(a88*a95);
  a184=(a89*a139);
  a3=(a3-a184);
  a3=(a76+a3);
  a60=(a48*a60);
  a159=(a97*a159);
  a60=(a60-a159);
  a120=(a96*a120);
  a60=(a60-a120);
  a3=(a3+a60);
  a33=(a33+a3);
  a120=(a48*a33);
  a107=(a107+a120);
  a181=(a181+a107);
  a45=(a45+a181);
  a107=(a24*a45);
  a120=(a38*a26);
  a159=(a43*a36);
  a120=(a120-a159);
  a13=(a13-a120);
  a13=(a25*a13);
  a120=(a34*a46);
  a159=(a38*a41);
  a120=(a120-a159);
  a120=(a32-a120);
  a120=(a25*a120);
  a159=(a46*a120);
  a184=(a40*a44);
  a159=(a159-a184);
  a159=(a13+a159);
  a184=(a64*a71);
  a185=(a58*a183);
  a185=(a185-a33);
  a184=(a184+a185);
  a159=(a159+a184);
  a185=(a23*a159);
  a107=(a107-a185);
  a21=(a21+a107);
  if (res[0]!=0) res[0][0]=a21;
  a21=(a16*a8);
  a185=(a18*a14);
  a21=(a21-a185);
  a35=(a35-a21);
  a35=(a0*a35);
  a21=(a10*a2);
  a185=(a16*a5);
  a21=(a21-a185);
  a21=(a31-a21);
  a21=(a0*a21);
  a185=(a2*a21);
  a33=(a20*a19);
  a185=(a185-a33);
  a185=(a35+a185);
  a45=(a23*a45);
  a159=(a24*a159);
  a45=(a45+a159);
  a185=(a185+a45);
  if (res[0]!=0) res[0][1]=a185;
  a185=(a18*a17);
  a159=(a10*a8);
  a185=(a185-a159);
  a50=(a50-a185);
  a0=(a0*a50);
  a50=(a20*a22);
  a185=(a5*a21);
  a50=(a50-a185);
  a50=(a0+a50);
  a185=(a43*a39);
  a159=(a34*a26);
  a185=(a185-a159);
  a6=(a6-a185);
  a25=(a25*a6);
  a6=(a40*a47);
  a185=(a41*a120);
  a6=(a6-a185);
  a6=(a25+a6);
  a71=(a49*a71);
  a183=(a61*a183);
  a71=(a71+a183);
  a6=(a6+a71);
  a50=(a50+a6);
  if (res[0]!=0) res[0][2]=a50;
  a50=1.8391935352501116e+00;
  a183=(a50*a8);
  a185=1.1319025706712402e-02;
  a159=(a185*a17);
  a183=(a183+a159);
  a159=2.2643486265375823e-02;
  a33=(a159*a14);
  a183=(a183+a33);
  a33=(a10*a0);
  a186=(a16*a35);
  a33=(a33-a186);
  a183=(a183+a33);
  a33=(a159*a20);
  a186=4.2613541268404644e-06;
  a187=(a186*a5);
  a33=(a33+a187);
  a187=6.6272675688462561e+00;
  a188=(a187*a2);
  a33=(a33+a188);
  a188=(a18*a22);
  a189=(a10*a21);
  a188=(a188-a189);
  a33=(a33+a188);
  a188=(a5*a33);
  a189=(a185*a20);
  a190=5.1237262540809727e+00;
  a191=(a190*a5);
  a189=(a189+a191);
  a191=(a186*a2);
  a189=(a189+a191);
  a191=(a16*a21);
  a192=(a18*a19);
  a191=(a191-a192);
  a189=(a189+a191);
  a191=(a2*a189);
  a188=(a188-a191);
  a191=(a1*a19);
  a192=(a4*a22);
  a191=(a191-a192);
  a188=(a188+a191);
  a183=(a183+a188);
  a188=3.5065004999999994e-01;
  a191=(a188*a26);
  a192=1.1930999999999999e-04;
  a193=(a192*a39);
  a191=(a191+a193);
  a193=-3.7553000000000000e-04;
  a194=(a193*a36);
  a191=(a191+a194);
  a194=(a34*a25);
  a195=(a38*a13);
  a194=(a194-a195);
  a191=(a191+a194);
  a194=(a193*a40);
  a195=-1.0984447000000000e-01;
  a196=(a195*a41);
  a194=(a194+a196);
  a196=6.0031470000000003e-02;
  a197=(a196*a46);
  a194=(a194+a197);
  a197=(a43*a47);
  a198=(a34*a120);
  a197=(a197-a198);
  a194=(a194+a197);
  a197=(a41*a194);
  a198=(a192*a40);
  a199=3.0479800000000001e-01;
  a200=(a199*a41);
  a198=(a198+a200);
  a200=(a195*a46);
  a198=(a198+a200);
  a200=(a38*a120);
  a201=(a43*a44);
  a200=(a200-a201);
  a198=(a198+a200);
  a200=(a46*a198);
  a197=(a197-a200);
  a200=(a30*a44);
  a201=(a42*a47);
  a200=(a200-a201);
  a197=(a197+a200);
  a191=(a191+a197);
  a197=3.5997429999999997e-02;
  a200=(a197*a53);
  a201=-4.6930000000000000e-05;
  a202=(a201*a11);
  a200=(a200+a202);
  a202=-5.2403459999999999e-02;
  a203=(a202*a65);
  a200=(a200+a203);
  a203=(a63*a52);
  a204=(a12*a83);
  a203=(a203-a204);
  a200=(a200+a203);
  a203=(a202*a9);
  a204=1.7600000000000001e-06;
  a205=(a204*a67);
  a203=(a203+a205);
  a205=7.0024118999999996e-01;
  a206=(a205*a72);
  a203=(a203+a206);
  a206=(a69*a73);
  a207=(a63*a182);
  a206=(a206-a207);
  a203=(a203+a206);
  a206=(a67*a203);
  a207=(a201*a9);
  a208=7.2293306000000002e-01;
  a209=(a208*a67);
  a207=(a207+a209);
  a209=(a204*a72);
  a207=(a207+a209);
  a209=(a12*a182);
  a210=(a69*a70);
  a209=(a209-a210);
  a207=(a207+a209);
  a209=(a72*a207);
  a206=(a206-a209);
  a209=(a57*a70);
  a210=(a68*a73);
  a209=(a209-a210);
  a206=(a206+a209);
  a200=(a200+a206);
  a206=1.6172099999999995e-02;
  a209=(a206*a77);
  a210=-1.1817000000000000e-04;
  a211=(a210*a87);
  a209=(a209+a211);
  a211=3.3418820000000002e-02;
  a212=(a211*a66);
  a209=(a209+a212);
  a212=(a82*a76);
  a213=(a86*a84);
  a212=(a212-a213);
  a209=(a209+a212);
  a212=(a211*a88);
  a213=-4.3710000000000000e-05;
  a214=(a213*a89);
  a212=(a212+a214);
  a214=1.0022522000000000e-01;
  a215=(a214*a94);
  a212=(a212+a215);
  a215=(a91*a95);
  a216=(a82*a139);
  a215=(a215-a216);
  a212=(a212+a215);
  a215=(a89*a212);
  a216=(a210*a88);
  a217=1.1364055000000001e-01;
  a218=(a217*a89);
  a216=(a216+a218);
  a218=(a213*a94);
  a216=(a216+a218);
  a218=(a86*a139);
  a219=(a91*a92);
  a218=(a218-a219);
  a216=(a216+a218);
  a218=(a94*a216);
  a215=(a215-a218);
  a218=(a81*a92);
  a219=(a90*a95);
  a218=(a218-a219);
  a215=(a215+a218);
  a209=(a209+a215);
  a215=2.7988909999999999e-02;
  a218=(a215*a101);
  a219=3.8930000000000002e-05;
  a220=(a219*a114);
  a218=(a218+a220);
  a220=-4.7679999999999998e-05;
  a221=(a220*a110);
  a218=(a218+a221);
  a221=(a109*a100);
  a222=(a113*a138);
  a221=(a221-a222);
  a218=(a218+a221);
  a221=(a220*a115);
  a222=-1.2662959999999999e-02;
  a223=(a222*a116);
  a221=(a221+a223);
  a223=1.4962110000000001e-02;
  a224=(a223*a121);
  a221=(a221+a224);
  a224=(a118*a122);
  a225=(a109*a170);
  a224=(a224-a225);
  a221=(a221+a224);
  a224=(a116*a221);
  a225=(a219*a115);
  a226=1.4430760000000001e-02;
  a227=(a226*a116);
  a225=(a225+a227);
  a227=(a222*a121);
  a225=(a225+a227);
  a227=(a113*a170);
  a228=(a118*a119);
  a227=(a227-a228);
  a225=(a225+a227);
  a227=(a121*a225);
  a224=(a224-a227);
  a227=(a104*a119);
  a228=(a117*a122);
  a227=(a227-a228);
  a224=(a224+a227);
  a218=(a218+a224);
  a224=1.1052970000000002e-02;
  a227=(a224*a127);
  a228=5.5170000000000002e-05;
  a229=(a228*a141);
  a227=(a227+a229);
  a229=-1.4819769999999999e-02;
  a230=(a229*a140);
  a227=(a227+a230);
  a230=(a136*a126);
  a231=(a124*a161);
  a230=(a230-a231);
  a227=(a227+a230);
  a230=(a229*a142);
  a231=-3.7400000000000001e-05;
  a232=(a231*a143);
  a230=(a230+a232);
  a232=2.7547950000000002e-02;
  a233=(a232*a148);
  a230=(a230+a233);
  a233=(a145*a149);
  a234=(a136*a133);
  a233=(a233-a234);
  a230=(a230+a233);
  a233=(a143*a230);
  a234=(a228*a142);
  a235=3.6982910000000001e-02;
  a236=(a235*a143);
  a234=(a234+a236);
  a236=(a231*a148);
  a234=(a234+a236);
  a236=(a124*a133);
  a237=(a145*a146);
  a236=(a236-a237);
  a234=(a234+a236);
  a236=(a148*a234);
  a233=(a233-a236);
  a236=(a130*a146);
  a237=(a144*a149);
  a236=(a236-a237);
  a233=(a233+a236);
  a227=(a227+a233);
  a233=7.8982000000000000e-04;
  a236=(a233*a154);
  a237=-3.3999999999999997e-07;
  a238=(a237*a165);
  a236=(a236+a238);
  a238=8.2999999999999999e-07;
  a239=(a238*a62);
  a236=(a236+a239);
  a239=(a160*a153);
  a240=(a164*a174);
  a239=(a239-a240);
  a236=(a236+a239);
  a239=(a238*a166);
  a240=-5.0799999999999996e-06;
  a241=(a240*a163);
  a239=(a239+a241);
  a241=5.8319000000000003e-04;
  a242=(a241*a171);
  a239=(a239+a242);
  a242=(a168*a172);
  a243=(a160*a156);
  a242=(a242-a243);
  a239=(a239+a242);
  a242=(a163*a239);
  a243=(a237*a166);
  a244=7.9763999999999996e-04;
  a245=(a244*a163);
  a243=(a243+a245);
  a245=(a240*a171);
  a243=(a243+a245);
  a245=(a164*a156);
  a246=(a168*a169);
  a245=(a245-a246);
  a243=(a243+a245);
  a245=(a171*a243);
  a242=(a242-a245);
  a245=(a155*a169);
  a246=(a167*a172);
  a245=(a245-a246);
  a242=(a242+a245);
  a236=(a236+a242);
  a152=(a152*a236);
  a242=(a237*a154);
  a244=(a244*a165);
  a242=(a242+a244);
  a244=(a240*a62);
  a242=(a242+a244);
  a244=(a164*a158);
  a153=(a168*a153);
  a244=(a244-a153);
  a242=(a242+a244);
  a233=(a233*a166);
  a237=(a237*a163);
  a233=(a233+a237);
  a237=(a238*a171);
  a233=(a233+a237);
  a237=(a160*a169);
  a164=(a164*a172);
  a237=(a237-a164);
  a233=(a233+a237);
  a171=(a171*a233);
  a239=(a166*a239);
  a171=(a171-a239);
  a167=(a167*a156);
  a169=(a135*a169);
  a167=(a167-a169);
  a171=(a171+a167);
  a242=(a242+a171);
  a99=(a99*a242);
  a238=(a238*a154);
  a240=(a240*a165);
  a238=(a238+a240);
  a241=(a241*a62);
  a238=(a238+a241);
  a168=(a168*a174);
  a160=(a160*a158);
  a168=(a168-a160);
  a238=(a238+a168);
  a166=(a166*a243);
  a163=(a163*a233);
  a166=(a166-a163);
  a135=(a135*a172);
  a155=(a155*a156);
  a135=(a135-a155);
  a166=(a166+a135);
  a238=(a238+a166);
  a99=(a99-a238);
  a152=(a152+a99);
  a99=(a132*a176);
  a152=(a152-a99);
  a227=(a227+a152);
  a125=(a125*a227);
  a152=(a228*a127);
  a235=(a235*a141);
  a152=(a152+a235);
  a235=(a231*a140);
  a152=(a152+a235);
  a235=(a124*a111);
  a126=(a145*a126);
  a235=(a235-a126);
  a152=(a152+a235);
  a224=(a224*a142);
  a228=(a228*a143);
  a224=(a224+a228);
  a228=(a229*a148);
  a224=(a224+a228);
  a228=(a136*a146);
  a124=(a124*a149);
  a228=(a228-a124);
  a224=(a224+a228);
  a148=(a148*a224);
  a230=(a142*a230);
  a148=(a148-a230);
  a144=(a144*a133);
  a146=(a108*a146);
  a144=(a144-a146);
  a148=(a148+a144);
  a152=(a152+a148);
  a148=(a151*a236);
  a144=(a48*a238);
  a146=(a150*a242);
  a144=(a144-a146);
  a148=(a148+a144);
  a132=(a132*a173);
  a162=(a157*a162);
  a132=(a132-a162);
  a148=(a148+a132);
  a152=(a152+a148);
  a128=(a128*a152);
  a229=(a229*a127);
  a231=(a231*a141);
  a229=(a229+a231);
  a232=(a232*a140);
  a229=(a229+a232);
  a145=(a145*a161);
  a136=(a136*a111);
  a145=(a145-a136);
  a229=(a229+a145);
  a142=(a142*a234);
  a143=(a143*a224);
  a142=(a142-a143);
  a108=(a108*a149);
  a130=(a130*a133);
  a108=(a108-a130);
  a142=(a142+a108);
  a229=(a229+a142);
  a142=(a48*a238);
  a151=(a151*a242);
  a142=(a142-a151);
  a150=(a150*a236);
  a142=(a142-a150);
  a157=(a157*a176);
  a142=(a142+a157);
  a229=(a229+a142);
  a142=(a48*a229);
  a128=(a128+a142);
  a125=(a125+a128);
  a147=(a105*a147);
  a178=(a129*a178);
  a147=(a147-a178);
  a125=(a125+a147);
  a218=(a218+a125);
  a98=(a98*a218);
  a125=(a219*a101);
  a226=(a226*a114);
  a125=(a125+a226);
  a226=(a222*a110);
  a125=(a125+a226);
  a226=(a113*a112);
  a100=(a118*a100);
  a226=(a226-a100);
  a125=(a125+a226);
  a215=(a215*a115);
  a219=(a219*a116);
  a215=(a215+a219);
  a219=(a220*a121);
  a215=(a215+a219);
  a219=(a109*a119);
  a113=(a113*a122);
  a219=(a219-a113);
  a215=(a215+a219);
  a121=(a121*a215);
  a221=(a115*a221);
  a121=(a121-a221);
  a117=(a117*a170);
  a119=(a103*a119);
  a117=(a117-a119);
  a121=(a121+a117);
  a125=(a125+a121);
  a137=(a137*a227);
  a131=(a131*a152);
  a131=(a131-a229);
  a137=(a137+a131);
  a129=(a129*a175);
  a137=(a137+a129);
  a125=(a125+a137);
  a102=(a102*a125);
  a220=(a220*a101);
  a222=(a222*a114);
  a220=(a220+a222);
  a223=(a223*a110);
  a220=(a220+a223);
  a118=(a118*a138);
  a109=(a109*a112);
  a118=(a118-a109);
  a220=(a220+a118);
  a115=(a115*a225);
  a116=(a116*a215);
  a115=(a115-a116);
  a103=(a103*a122);
  a104=(a104*a170);
  a103=(a103-a104);
  a115=(a115+a103);
  a220=(a220+a115);
  a123=(a123*a227);
  a134=(a134*a152);
  a123=(a123+a134);
  a105=(a105*a175);
  a123=(a123-a105);
  a220=(a220+a123);
  a102=(a102-a220);
  a98=(a98+a102);
  a102=(a79*a180);
  a98=(a98-a102);
  a209=(a209+a98);
  a98=(a75*a209);
  a102=(a210*a77);
  a217=(a217*a87);
  a102=(a102+a217);
  a217=(a213*a66);
  a102=(a102+a217);
  a217=(a86*a85);
  a76=(a91*a76);
  a217=(a217-a76);
  a102=(a102+a217);
  a206=(a206*a88);
  a210=(a210*a89);
  a206=(a206+a210);
  a210=(a211*a94);
  a206=(a206+a210);
  a210=(a82*a92);
  a86=(a86*a95);
  a210=(a210-a86);
  a206=(a206+a210);
  a94=(a94*a206);
  a212=(a88*a212);
  a94=(a94-a212);
  a90=(a90*a139);
  a92=(a59*a92);
  a90=(a90-a92);
  a94=(a94+a90);
  a102=(a102+a94);
  a94=(a97*a218);
  a90=(a48*a220);
  a92=(a96*a125);
  a90=(a90-a92);
  a94=(a94+a90);
  a79=(a79*a177);
  a60=(a106*a60);
  a79=(a79-a60);
  a94=(a94+a79);
  a102=(a102+a94);
  a94=(a74*a102);
  a98=(a98-a94);
  a94=(a78*a93);
  a98=(a98-a94);
  a200=(a200+a98);
  a51=(a51*a200);
  a98=(a201*a53);
  a208=(a208*a11);
  a98=(a98+a208);
  a208=(a204*a65);
  a98=(a98+a208);
  a208=(a12*a7);
  a52=(a69*a52);
  a208=(a208-a52);
  a98=(a98+a208);
  a197=(a197*a9);
  a201=(a201*a67);
  a197=(a197+a201);
  a201=(a202*a72);
  a197=(a197+a201);
  a201=(a63*a70);
  a12=(a12*a73);
  a201=(a201-a12);
  a197=(a197+a201);
  a72=(a72*a197);
  a203=(a9*a203);
  a72=(a72-a203);
  a68=(a68*a182);
  a70=(a55*a70);
  a68=(a68-a70);
  a72=(a72+a68);
  a98=(a98+a72);
  a74=(a74*a209);
  a75=(a75*a102);
  a74=(a74+a75);
  a78=(a78*a179);
  a3=(a80*a3);
  a78=(a78-a3);
  a74=(a74+a78);
  a98=(a98+a74);
  a54=(a54*a98);
  a202=(a202*a53);
  a204=(a204*a11);
  a202=(a202+a204);
  a205=(a205*a65);
  a202=(a202+a205);
  a69=(a69*a83);
  a63=(a63*a7);
  a69=(a69-a63);
  a202=(a202+a69);
  a9=(a9*a207);
  a67=(a67*a197);
  a9=(a9-a67);
  a55=(a55*a73);
  a57=(a57*a182);
  a55=(a55-a57);
  a9=(a9+a55);
  a202=(a202+a9);
  a211=(a211*a77);
  a213=(a213*a87);
  a211=(a211+a213);
  a214=(a214*a66);
  a211=(a211+a214);
  a91=(a91*a84);
  a82=(a82*a85);
  a91=(a91-a82);
  a211=(a211+a91);
  a88=(a88*a216);
  a89=(a89*a206);
  a88=(a88-a89);
  a59=(a59*a95);
  a81=(a81*a139);
  a59=(a59-a81);
  a88=(a88+a59);
  a211=(a211+a88);
  a88=(a48*a220);
  a97=(a97*a125);
  a88=(a88-a97);
  a96=(a96*a218);
  a88=(a88-a96);
  a106=(a106*a180);
  a88=(a88+a106);
  a211=(a211+a88);
  a80=(a80*a93);
  a80=(a211+a80);
  a202=(a202+a80);
  a48=(a48*a202);
  a54=(a54+a48);
  a51=(a51+a54);
  a71=(a28*a71);
  a184=(a56*a184);
  a71=(a71-a184);
  a51=(a51+a71);
  a191=(a191+a51);
  a51=(a24*a191);
  a71=(a192*a26);
  a199=(a199*a39);
  a71=(a71+a199);
  a199=(a195*a36);
  a71=(a71+a199);
  a199=(a38*a37);
  a25=(a43*a25);
  a199=(a199-a25);
  a71=(a71+a199);
  a188=(a188*a40);
  a192=(a192*a41);
  a188=(a188+a192);
  a192=(a193*a46);
  a188=(a188+a192);
  a192=(a34*a44);
  a38=(a38*a47);
  a192=(a192-a38);
  a188=(a188+a192);
  a46=(a46*a188);
  a194=(a40*a194);
  a46=(a46-a194);
  a42=(a42*a120);
  a44=(a32*a44);
  a42=(a42-a44);
  a46=(a46+a42);
  a71=(a71+a46);
  a64=(a64*a200);
  a58=(a58*a98);
  a58=(a58-a202);
  a64=(a64+a58);
  a56=(a56*a181);
  a64=(a64+a56);
  a71=(a71+a64);
  a64=(a23*a71);
  a51=(a51-a64);
  a64=(a27*a45);
  a51=(a51-a64);
  a183=(a183+a51);
  if (res[0]!=0) res[0][3]=a183;
  a183=(a185*a8);
  a190=(a190*a17);
  a183=(a183+a190);
  a190=(a186*a14);
  a183=(a183+a190);
  a190=(a16*a15);
  a0=(a18*a0);
  a190=(a190-a0);
  a183=(a183+a190);
  a50=(a50*a20);
  a185=(a185*a5);
  a50=(a50+a185);
  a185=(a159*a2);
  a50=(a50+a185);
  a185=(a10*a19);
  a16=(a16*a22);
  a185=(a185-a16);
  a50=(a50+a185);
  a2=(a2*a50);
  a33=(a20*a33);
  a2=(a2-a33);
  a4=(a4*a21);
  a19=(a31*a19);
  a4=(a4-a19);
  a2=(a2+a4);
  a183=(a183+a2);
  a23=(a23*a191);
  a24=(a24*a71);
  a23=(a23+a24);
  a27=(a27*a107);
  a6=(a29*a6);
  a27=(a27-a6);
  a23=(a23+a27);
  a183=(a183+a23);
  if (res[0]!=0) res[0][4]=a183;
  a159=(a159*a8);
  a186=(a186*a17);
  a159=(a159+a186);
  a187=(a187*a14);
  a159=(a159+a187);
  a18=(a18*a35);
  a10=(a10*a15);
  a18=(a18-a10);
  a159=(a159+a18);
  a20=(a20*a189);
  a5=(a5*a50);
  a20=(a20-a5);
  a31=(a31*a22);
  a1=(a1*a21);
  a31=(a31-a1);
  a20=(a20+a31);
  a159=(a159+a20);
  a193=(a193*a26);
  a195=(a195*a39);
  a193=(a193+a195);
  a196=(a196*a36);
  a193=(a193+a196);
  a43=(a43*a13);
  a34=(a34*a37);
  a43=(a43-a34);
  a193=(a193+a43);
  a40=(a40*a198);
  a41=(a41*a188);
  a40=(a40-a41);
  a32=(a32*a47);
  a30=(a30*a120);
  a32=(a32-a30);
  a40=(a40+a32);
  a193=(a193+a40);
  a49=(a49*a200);
  a61=(a61*a98);
  a49=(a49+a61);
  a28=(a28*a181);
  a49=(a49-a28);
  a193=(a193+a49);
  a29=(a29*a45);
  a29=(a193+a29);
  a159=(a159+a29);
  if (res[0]!=0) res[0][5]=a159;
  if (res[0]!=0) res[0][6]=a193;
  if (res[0]!=0) res[0][7]=a202;
  if (res[0]!=0) res[0][8]=a211;
  if (res[0]!=0) res[0][9]=a220;
  if (res[0]!=0) res[0][10]=a229;
  if (res[0]!=0) res[0][11]=a238;
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
    case 1: return casadi_s1;
    case 2: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rnea_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
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
