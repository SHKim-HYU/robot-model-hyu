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
  #define CASADI_PREFIX(ID) hyumm_offset_r_fk_ee_ ## ID
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

static const casadi_int casadi_s0[13] = {9, 1, 0, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};
static const casadi_int casadi_s1[23] = {4, 4, 0, 4, 8, 12, 16, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};

/* fk_T:(q[9])->(T_indy7_tcp[4x4]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][2] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][3] : 0;
  a3=cos(a2);
  a4=(a1*a3);
  a0=sin(a0);
  a2=sin(a2);
  a5=(a0*a2);
  a4=(a4-a5);
  a5=2.2204460492503131e-16;
  a6=arg[0]? arg[0][4] : 0;
  a7=cos(a6);
  a8=(a5*a7);
  a6=sin(a6);
  a8=(a8+a6);
  a9=(a4*a8);
  a10=(a1*a2);
  a11=(a0*a3);
  a10=(a10+a11);
  a11=(a5*a6);
  a12=(a10*a11);
  a9=(a9-a12);
  a12=arg[0]? arg[0][5] : 0;
  a13=cos(a12);
  a14=(a9*a13);
  a15=(a5*a6);
  a15=(a7-a15);
  a16=(a4*a15);
  a17=(a5*a7);
  a18=(a10*a17);
  a16=(a16-a18);
  a12=sin(a12);
  a18=(a16*a12);
  a14=(a14+a18);
  a18=arg[0]? arg[0][6] : 0;
  a19=cos(a18);
  a20=(a5*a19);
  a21=-2.2204460492503131e-16;
  a18=sin(a18);
  a22=(a21*a18);
  a20=(a20+a22);
  a22=(a14*a20);
  a16=(a16*a13);
  a23=(a9*a12);
  a16=(a16-a23);
  a23=(a16*a19);
  a4=(a5*a4);
  a4=(a4+a10);
  a24=(a4*a18);
  a23=(a23-a24);
  a22=(a22+a23);
  a23=arg[0]? arg[0][7] : 0;
  a24=cos(a23);
  a25=(a5*a24);
  a23=sin(a23);
  a25=(a25+a23);
  a26=(a22*a25);
  a27=(a21*a19);
  a28=(a5*a18);
  a27=(a27-a28);
  a28=(a14*a27);
  a29=(a16*a18);
  a30=(a4*a19);
  a29=(a29+a30);
  a28=(a28-a29);
  a29=(a5*a23);
  a30=(a28*a29);
  a16=(a5*a16);
  a31=(a5*a4);
  a16=(a16+a31);
  a16=(a16-a14);
  a31=(a5*a23);
  a31=(a31-a24);
  a32=(a16*a31);
  a30=(a30+a32);
  a26=(a26+a30);
  a30=arg[0]? arg[0][8] : 0;
  a32=cos(a30);
  a33=(a5*a32);
  a30=sin(a30);
  a34=(a21*a30);
  a33=(a33+a34);
  a34=(a26*a33);
  a35=(a5*a23);
  a35=(a24-a35);
  a36=(a22*a35);
  a37=(a5*a24);
  a38=(a28*a37);
  a24=(a5*a24);
  a23=(a23+a24);
  a24=(a16*a23);
  a38=(a38+a24);
  a36=(a36+a38);
  a38=(a36*a32);
  a22=(a5*a22);
  a22=(a22-a28);
  a24=(a22*a30);
  a38=(a38-a24);
  a34=(a34+a38);
  if (res[0]!=0) res[0][0]=a34;
  a34=(a0*a3);
  a38=(a1*a2);
  a34=(a34+a38);
  a8=(a34*a8);
  a3=(a1*a3);
  a2=(a0*a2);
  a3=(a3-a2);
  a11=(a3*a11);
  a8=(a8+a11);
  a11=(a8*a13);
  a15=(a34*a15);
  a17=(a3*a17);
  a15=(a15+a17);
  a17=(a15*a12);
  a11=(a11+a17);
  a17=(a11*a20);
  a15=(a15*a13);
  a2=(a8*a12);
  a15=(a15-a2);
  a2=(a15*a19);
  a34=(a5*a34);
  a34=(a34-a3);
  a38=(a34*a18);
  a2=(a2-a38);
  a17=(a17+a2);
  a2=(a17*a25);
  a38=(a11*a27);
  a24=(a15*a18);
  a39=(a34*a19);
  a24=(a24+a39);
  a38=(a38-a24);
  a24=(a38*a29);
  a15=(a5*a15);
  a39=(a5*a34);
  a15=(a15+a39);
  a15=(a15-a11);
  a39=(a15*a31);
  a24=(a24+a39);
  a2=(a2+a24);
  a24=(a2*a33);
  a39=(a17*a35);
  a40=(a38*a37);
  a41=(a15*a23);
  a40=(a40+a41);
  a39=(a39+a40);
  a40=(a39*a32);
  a17=(a5*a17);
  a17=(a17-a38);
  a41=(a17*a30);
  a40=(a40-a41);
  a24=(a24+a40);
  if (res[0]!=0) res[0][1]=a24;
  a24=(a5*a6);
  a24=(a24-a7);
  a40=(a24*a13);
  a7=(a5*a7);
  a6=(a6+a7);
  a7=(a6*a12);
  a40=(a40+a7);
  a20=(a40*a20);
  a6=(a6*a13);
  a12=(a24*a12);
  a6=(a6-a12);
  a19=(a6*a19);
  a20=(a20+a19);
  a25=(a20*a25);
  a27=(a40*a27);
  a18=(a6*a18);
  a27=(a27-a18);
  a29=(a27*a29);
  a6=(a5*a6);
  a6=(a6-a40);
  a31=(a6*a31);
  a29=(a29+a31);
  a25=(a25+a29);
  a33=(a25*a33);
  a35=(a20*a35);
  a37=(a27*a37);
  a23=(a6*a23);
  a37=(a37+a23);
  a35=(a35+a37);
  a37=(a35*a32);
  a20=(a5*a20);
  a20=(a20-a27);
  a23=(a20*a30);
  a37=(a37-a23);
  a33=(a33+a37);
  if (res[0]!=0) res[0][2]=a33;
  a33=0.;
  if (res[0]!=0) res[0][3]=a33;
  a21=(a21*a32);
  a37=(a5*a30);
  a21=(a21-a37);
  a37=(a26*a21);
  a23=(a36*a30);
  a29=(a22*a32);
  a23=(a23+a29);
  a37=(a37-a23);
  if (res[0]!=0) res[0][4]=a37;
  a37=(a2*a21);
  a23=(a39*a30);
  a29=(a17*a32);
  a23=(a23+a29);
  a37=(a37-a23);
  if (res[0]!=0) res[0][5]=a37;
  a21=(a25*a21);
  a30=(a35*a30);
  a32=(a20*a32);
  a30=(a30+a32);
  a21=(a21-a30);
  if (res[0]!=0) res[0][6]=a21;
  if (res[0]!=0) res[0][7]=a33;
  a36=(a5*a36);
  a21=(a5*a22);
  a36=(a36+a21);
  a36=(a36-a26);
  if (res[0]!=0) res[0][8]=a36;
  a39=(a5*a39);
  a21=(a5*a17);
  a39=(a39+a21);
  a39=(a39-a2);
  if (res[0]!=0) res[0][9]=a39;
  a35=(a5*a35);
  a5=(a5*a20);
  a35=(a35+a5);
  a35=(a35-a25);
  if (res[0]!=0) res[0][10]=a35;
  if (res[0]!=0) res[0][11]=a33;
  a33=arg[0]? arg[0][0] : 0;
  a5=2.9999999999999999e-01;
  a21=(a5*a1);
  a30=-4.0000000000000002e-01;
  a32=(a30*a0);
  a21=(a21-a32);
  a33=(a33+a21);
  a21=-1.0900000000000000e-01;
  a10=(a21*a10);
  a33=(a33-a10);
  a10=-4.5000000000000001e-01;
  a9=(a10*a9);
  a32=-3.0499999999999999e-02;
  a37=(a32*a4);
  a9=(a9+a37);
  a33=(a33+a9);
  a9=-2.6700000000000002e-01;
  a14=(a9*a14);
  a37=-7.4999999999999997e-02;
  a4=(a37*a4);
  a14=(a14+a4);
  a33=(a33+a14);
  a14=-1.1400000000000000e-01;
  a28=(a14*a28);
  a4=8.3000000000000004e-02;
  a16=(a4*a16);
  a28=(a28+a16);
  a33=(a33+a28);
  a28=-1.6800000000000001e-01;
  a26=(a28*a26);
  a16=6.9000000000000006e-02;
  a22=(a16*a22);
  a26=(a26+a22);
  a33=(a33+a26);
  a26=2.3000000000000001e-01;
  a36=(a26*a36);
  a33=(a33+a36);
  if (res[0]!=0) res[0][12]=a33;
  a33=arg[0]? arg[0][1] : 0;
  a5=(a5*a0);
  a30=(a30*a1);
  a5=(a5+a30);
  a33=(a33+a5);
  a21=(a21*a3);
  a33=(a33+a21);
  a8=(a10*a8);
  a32=(a32*a34);
  a8=(a8+a32);
  a33=(a33+a8);
  a11=(a9*a11);
  a37=(a37*a34);
  a11=(a11+a37);
  a33=(a33+a11);
  a38=(a14*a38);
  a15=(a4*a15);
  a38=(a38+a15);
  a33=(a33+a38);
  a2=(a28*a2);
  a17=(a16*a17);
  a2=(a2+a17);
  a33=(a33+a2);
  a39=(a26*a39);
  a33=(a33+a39);
  if (res[0]!=0) res[0][13]=a33;
  a33=5.2749999999999997e-01;
  a10=(a10*a24);
  a33=(a33+a10);
  a9=(a9*a40);
  a33=(a33+a9);
  a14=(a14*a27);
  a4=(a4*a6);
  a14=(a14+a4);
  a33=(a33+a14);
  a28=(a28*a25);
  a16=(a16*a20);
  a28=(a28+a16);
  a33=(a33+a28);
  a26=(a26*a35);
  a33=(a33+a26);
  if (res[0]!=0) res[0][14]=a33;
  a33=1.;
  if (res[0]!=0) res[0][15]=a33;
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_T(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int fk_T_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_T_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_T_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int fk_T_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_T_release(int mem) {
}

CASADI_SYMBOL_EXPORT void fk_T_incref(void) {
}

CASADI_SYMBOL_EXPORT void fk_T_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int fk_T_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int fk_T_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real fk_T_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_T_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_T_name_out(casadi_int i) {
  switch (i) {
    case 0: return "T_indy7_tcp";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_T_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_T_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int fk_T_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif