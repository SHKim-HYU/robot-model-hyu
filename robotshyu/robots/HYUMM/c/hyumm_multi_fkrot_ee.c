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
  #define CASADI_PREFIX(ID) hyumm_multi_fkrot_ee_ ## ID
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

static const casadi_int casadi_s0[19] = {15, 1, 0, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
static const casadi_int casadi_s1[15] = {3, 3, 0, 3, 6, 9, 0, 1, 2, 0, 1, 2, 0, 1, 2};

/* fk_rot:(q[15])->(Rot_l_indy7_tcp[3x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a4, a5, a6, a7, a8, a9;
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
  a9=(a9*a12);
  a16=(a16-a9);
  a9=(a16*a19);
  a4=(a5*a4);
  a4=(a4+a10);
  a10=(a4*a18);
  a9=(a9-a10);
  a22=(a22+a9);
  a9=arg[0]? arg[0][7] : 0;
  a10=cos(a9);
  a23=(a5*a10);
  a9=sin(a9);
  a23=(a23+a9);
  a24=(a22*a23);
  a25=(a21*a19);
  a26=(a5*a18);
  a25=(a25-a26);
  a26=(a14*a25);
  a27=(a16*a18);
  a28=(a4*a19);
  a27=(a27+a28);
  a26=(a26-a27);
  a27=(a5*a9);
  a28=(a26*a27);
  a16=(a5*a16);
  a4=(a5*a4);
  a16=(a16+a4);
  a16=(a16-a14);
  a14=(a5*a9);
  a14=(a14-a10);
  a4=(a16*a14);
  a28=(a28+a4);
  a24=(a24+a28);
  a28=arg[0]? arg[0][8] : 0;
  a4=cos(a28);
  a29=(a5*a4);
  a28=sin(a28);
  a30=(a21*a28);
  a29=(a29+a30);
  a30=(a24*a29);
  a31=(a5*a9);
  a31=(a10-a31);
  a32=(a22*a31);
  a33=(a5*a10);
  a34=(a26*a33);
  a10=(a5*a10);
  a9=(a9+a10);
  a16=(a16*a9);
  a34=(a34+a16);
  a32=(a32+a34);
  a34=(a32*a4);
  a22=(a5*a22);
  a22=(a22-a26);
  a26=(a22*a28);
  a34=(a34-a26);
  a30=(a30+a34);
  if (res[0]!=0) res[0][0]=a30;
  a30=(a0*a3);
  a34=(a1*a2);
  a30=(a30+a34);
  a8=(a30*a8);
  a1=(a1*a3);
  a0=(a0*a2);
  a1=(a1-a0);
  a11=(a1*a11);
  a8=(a8+a11);
  a11=(a8*a13);
  a15=(a30*a15);
  a17=(a1*a17);
  a15=(a15+a17);
  a17=(a15*a12);
  a11=(a11+a17);
  a17=(a11*a20);
  a15=(a15*a13);
  a8=(a8*a12);
  a15=(a15-a8);
  a8=(a15*a19);
  a30=(a5*a30);
  a30=(a30-a1);
  a1=(a30*a18);
  a8=(a8-a1);
  a17=(a17+a8);
  a8=(a17*a23);
  a1=(a11*a25);
  a0=(a15*a18);
  a2=(a30*a19);
  a0=(a0+a2);
  a1=(a1-a0);
  a0=(a1*a27);
  a15=(a5*a15);
  a30=(a5*a30);
  a15=(a15+a30);
  a15=(a15-a11);
  a11=(a15*a14);
  a0=(a0+a11);
  a8=(a8+a0);
  a0=(a8*a29);
  a11=(a17*a31);
  a30=(a1*a33);
  a15=(a15*a9);
  a30=(a30+a15);
  a11=(a11+a30);
  a30=(a11*a4);
  a17=(a5*a17);
  a17=(a17-a1);
  a1=(a17*a28);
  a30=(a30-a1);
  a0=(a0+a30);
  if (res[0]!=0) res[0][1]=a0;
  a0=(a5*a6);
  a0=(a0-a7);
  a30=(a0*a13);
  a7=(a5*a7);
  a6=(a6+a7);
  a7=(a6*a12);
  a30=(a30+a7);
  a20=(a30*a20);
  a6=(a6*a13);
  a0=(a0*a12);
  a6=(a6-a0);
  a19=(a6*a19);
  a20=(a20+a19);
  a23=(a20*a23);
  a25=(a30*a25);
  a18=(a6*a18);
  a25=(a25-a18);
  a27=(a25*a27);
  a6=(a5*a6);
  a6=(a6-a30);
  a14=(a6*a14);
  a27=(a27+a14);
  a23=(a23+a27);
  a29=(a23*a29);
  a31=(a20*a31);
  a33=(a25*a33);
  a6=(a6*a9);
  a33=(a33+a6);
  a31=(a31+a33);
  a33=(a31*a4);
  a20=(a5*a20);
  a20=(a20-a25);
  a25=(a20*a28);
  a33=(a33-a25);
  a29=(a29+a33);
  if (res[0]!=0) res[0][2]=a29;
  a21=(a21*a4);
  a29=(a5*a28);
  a21=(a21-a29);
  a29=(a24*a21);
  a33=(a32*a28);
  a25=(a22*a4);
  a33=(a33+a25);
  a29=(a29-a33);
  if (res[0]!=0) res[0][3]=a29;
  a29=(a8*a21);
  a33=(a11*a28);
  a25=(a17*a4);
  a33=(a33+a25);
  a29=(a29-a33);
  if (res[0]!=0) res[0][4]=a29;
  a21=(a23*a21);
  a28=(a31*a28);
  a4=(a20*a4);
  a28=(a28+a4);
  a21=(a21-a28);
  if (res[0]!=0) res[0][5]=a21;
  a32=(a5*a32);
  a22=(a5*a22);
  a32=(a32+a22);
  a32=(a32-a24);
  if (res[0]!=0) res[0][6]=a32;
  a11=(a5*a11);
  a17=(a5*a17);
  a11=(a11+a17);
  a11=(a11-a8);
  if (res[0]!=0) res[0][7]=a11;
  a31=(a5*a31);
  a5=(a5*a20);
  a31=(a31+a5);
  a31=(a31-a23);
  if (res[0]!=0) res[0][8]=a31;
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_rot(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int fk_rot_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_rot_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_rot_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int fk_rot_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_rot_release(int mem) {
}

CASADI_SYMBOL_EXPORT void fk_rot_incref(void) {
}

CASADI_SYMBOL_EXPORT void fk_rot_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int fk_rot_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int fk_rot_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real fk_rot_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_rot_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_rot_name_out(casadi_int i) {
  switch (i) {
    case 0: return "Rot_l_indy7_tcp";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_rot_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_rot_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int fk_rot_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif