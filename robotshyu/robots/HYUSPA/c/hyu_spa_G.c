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
  #define CASADI_PREFIX(ID) hyu_spa_G_ ## ID
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

static const casadi_int casadi_s0[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};

/* generalized_gravity:(i0[7])->(o0[7]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a6, a7, a8, a9;
  a0=arg[0]? arg[0][1] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][2] : 0;
  a3=sin(a2);
  a4=2.1536300000000001e-03;
  a5=7.4955004999999997e-01;
  a6=9.8100000000000005e+00;
  a7=arg[0]? arg[0][0] : 0;
  a8=cos(a7);
  a8=(a6*a8);
  a9=(a1*a8);
  a10=(a5*a9);
  a11=(a4*a10);
  a12=-1.0416744000000000e-01;
  a7=sin(a7);
  a6=(a6*a7);
  a7=(a3*a6);
  a2=cos(a2);
  a0=sin(a0);
  a13=(a0*a8);
  a14=(a2*a13);
  a7=(a7+a14);
  a14=(a5*a7);
  a15=(a12*a14);
  a11=(a11-a15);
  a15=arg[0]? arg[0][3] : 0;
  a16=cos(a15);
  a17=-3.6605999999999997e-04;
  a18=5.7916453000000001e-01;
  a15=sin(a15);
  a19=(a3*a13);
  a20=(a2*a6);
  a19=(a19-a20);
  a20=(a15*a19);
  a21=(a16*a9);
  a20=(a20+a21);
  a21=(a18*a20);
  a22=(a17*a21);
  a23=-8.3702470000000001e-02;
  a24=(a18*a7);
  a25=(a23*a24);
  a22=(a22-a25);
  a25=arg[0]? arg[0][4] : 0;
  a26=cos(a25);
  a27=-2.1536300000000001e-03;
  a28=(a5*a20);
  a29=(a27*a28);
  a30=(a26*a7);
  a25=sin(a25);
  a31=(a16*a19);
  a32=(a15*a9);
  a31=(a31-a32);
  a32=(a25*a31);
  a30=(a30-a32);
  a32=(a5*a30);
  a33=(a12*a32);
  a29=(a29-a33);
  a33=1.6953000000000001e-04;
  a34=5.9063953999999996e-01;
  a35=arg[0]? arg[0][5] : 0;
  a36=cos(a35);
  a37=(a36*a20);
  a35=sin(a35);
  a38=(a35*a30);
  a37=(a37-a38);
  a38=(a34*a37);
  a39=(a33*a38);
  a40=-5.0612119999999997e-02;
  a30=(a36*a30);
  a20=(a35*a20);
  a30=(a30+a20);
  a20=(a34*a30);
  a41=(a40*a20);
  a39=(a39-a41);
  a41=arg[0]? arg[0][6] : 0;
  a42=cos(a41);
  a43=9.0915846072198148e-04;
  a44=5.9064053999999999e-01;
  a41=sin(a41);
  a45=(a26*a31);
  a7=(a25*a7);
  a45=(a45+a7);
  a7=(a41*a45);
  a46=(a42*a37);
  a7=(a7+a46);
  a7=(a44*a7);
  a46=(a43*a7);
  a47=-8.5320109547617571e-03;
  a30=(a44*a30);
  a48=(a47*a30);
  a46=(a46-a48);
  a48=(a42*a46);
  a49=2.2146562504097664e-03;
  a50=(a49*a30);
  a51=(a42*a45);
  a37=(a41*a37);
  a51=(a51-a37);
  a44=(a44*a51);
  a43=(a43*a44);
  a50=(a50-a43);
  a43=(a41*a50);
  a48=(a48+a43);
  a43=-8.4000000000000005e-02;
  a51=(a43*a30);
  a48=(a48-a51);
  a39=(a39+a48);
  a48=-1.5420000000000000e-01;
  a30=(a20+a30);
  a51=(a36*a30);
  a37=(a42*a7);
  a52=(a41*a44);
  a37=(a37-a52);
  a37=(a38+a37);
  a52=(a35*a37);
  a51=(a51-a52);
  a52=(a48*a51);
  a52=(a39-a52);
  a29=(a29+a52);
  a52=(a26*a29);
  a53=(a5*a45);
  a54=(a12*a53);
  a55=-2.4808299999999998e-03;
  a56=(a55*a28);
  a54=(a54-a56);
  a34=(a34*a45);
  a40=(a40*a34);
  a45=9.9609000000000004e-04;
  a38=(a45*a38);
  a40=(a40-a38);
  a47=(a47*a44);
  a49=(a49*a7);
  a47=(a47-a49);
  a44=(a42*a44);
  a7=(a41*a7);
  a44=(a44+a7);
  a43=(a43*a44);
  a43=(a47+a43);
  a40=(a40+a43);
  a43=(a36*a40);
  a45=(a45*a20);
  a33=(a33*a34);
  a45=(a45-a33);
  a42=(a42*a50);
  a41=(a41*a46);
  a42=(a42-a41);
  a45=(a45+a42);
  a42=(a35*a45);
  a43=(a43-a42);
  a34=(a34+a44);
  a44=(a48*a34);
  a43=(a43+a44);
  a54=(a54+a43);
  a43=(a25*a54);
  a52=(a52-a43);
  a43=-1.4580000000000001e-01;
  a34=(a53+a34);
  a44=(a25*a34);
  a51=(a32+a51);
  a42=(a26*a51);
  a44=(a44+a42);
  a42=(a43*a44);
  a52=(a52-a42);
  a22=(a22+a52);
  a52=(a16*a22);
  a42=-2.1540499999999998e-03;
  a41=(a42*a24);
  a18=(a18*a31);
  a17=(a17*a18);
  a41=(a41-a17);
  a32=(a55*a32);
  a27=(a27*a53);
  a32=(a32-a27);
  a40=(a35*a40);
  a45=(a36*a45);
  a40=(a40+a45);
  a32=(a32+a40);
  a41=(a41+a32);
  a40=(a15*a41);
  a52=(a52+a40);
  a24=(a24+a44);
  a44=(a48*a24);
  a52=(a52-a44);
  a11=(a11+a52);
  a52=(a3*a11);
  a5=(a5*a19);
  a12=(a12*a5);
  a10=(a55*a10);
  a12=(a12-a10);
  a23=(a23*a18);
  a42=(a42*a21);
  a23=(a23-a42);
  a29=(a25*a29);
  a54=(a26*a54);
  a29=(a29+a54);
  a26=(a26*a34);
  a25=(a25*a51);
  a26=(a26-a25);
  a25=(a43*a26);
  a29=(a29+a25);
  a23=(a23+a29);
  a18=(a18+a26);
  a18=(a16*a18);
  a35=(a35*a30);
  a36=(a36*a37);
  a35=(a35+a36);
  a28=(a28+a35);
  a21=(a21+a28);
  a21=(a15*a21);
  a18=(a18+a21);
  a48=(a48*a18);
  a48=(a23+a48);
  a12=(a12+a48);
  a48=(a2*a12);
  a52=(a52+a48);
  a18=(a5+a18);
  a48=(a2*a18);
  a24=(a14+a24);
  a21=(a3*a24);
  a48=(a48-a21);
  a48=(a43*a48);
  a52=(a52+a48);
  a48=-8.3325389999999999e-02;
  a21=6.0158864999999995e-01;
  a28=(a21*a6);
  a35=(a48*a28);
  a36=8.9159999999999999e-04;
  a9=(a21*a9);
  a37=(a36*a9);
  a35=(a35+a37);
  a52=(a52-a35);
  a1=(a1*a52);
  a21=(a21*a13);
  a36=(a36*a21);
  a13=-2.4025399999999999e-03;
  a28=(a13*a28);
  a36=(a36+a28);
  a55=(a55*a14);
  a4=(a4*a5);
  a55=(a55-a4);
  a16=(a16*a41);
  a15=(a15*a22);
  a16=(a16-a15);
  a55=(a55+a16);
  a36=(a36+a55);
  a0=(a0*a36);
  a1=(a1-a0);
  a0=3.1774000000000000e-04;
  a36=6.3842732000000002e-01;
  a6=(a36*a6);
  a0=(a0*a6);
  a6=3.1139399999999999e-03;
  a36=(a36*a8);
  a6=(a6*a36);
  a0=(a0+a6);
  a1=(a1-a0);
  if (res[0]!=0) res[0][0]=a1;
  a13=(a13*a9);
  a48=(a48*a21);
  a13=(a13-a48);
  a11=(a2*a11);
  a12=(a3*a12);
  a11=(a11-a12);
  a3=(a3*a18);
  a2=(a2*a24);
  a3=(a3+a2);
  a43=(a43*a3);
  a11=(a11-a43);
  a13=(a13+a11);
  if (res[0]!=0) res[0][1]=a13;
  if (res[0]!=0) res[0][2]=a55;
  if (res[0]!=0) res[0][3]=a23;
  if (res[0]!=0) res[0][4]=a32;
  if (res[0]!=0) res[0][5]=a39;
  if (res[0]!=0) res[0][6]=a47;
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
