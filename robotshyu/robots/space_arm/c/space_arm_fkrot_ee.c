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
  #define CASADI_PREFIX(ID) space_arm_fkrot_ee_ ## ID
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
static const casadi_int casadi_s1[15] = {3, 3, 0, 3, 6, 9, 0, 1, 2, 0, 1, 2, 0, 1, 2};

/* fk_rot:(q[13])->(Rot_tcp_fixed[3x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][4] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][5] : 0;
  a3=cos(a2);
  a4=(a1*a3);
  a5=arg[0]? arg[0][6] : 0;
  a6=cos(a5);
  a7=(a4*a6);
  a2=sin(a2);
  a8=(a1*a2);
  a5=sin(a5);
  a9=(a8*a5);
  a7=(a7-a9);
  a9=arg[0]? arg[0][8] : 0;
  a10=cos(a9);
  a11=(a7*a10);
  a0=sin(a0);
  a12=arg[0]? arg[0][7] : 0;
  a13=sin(a12);
  a14=(a0*a13);
  a4=(a4*a5);
  a8=(a8*a6);
  a4=(a4+a8);
  a12=cos(a12);
  a8=(a4*a12);
  a14=(a14-a8);
  a9=sin(a9);
  a8=(a14*a9);
  a11=(a11+a8);
  a8=arg[0]? arg[0][10] : 0;
  a15=cos(a8);
  a16=(a11*a15);
  a14=(a14*a10);
  a7=(a7*a9);
  a14=(a14-a7);
  a7=arg[0]? arg[0][9] : 0;
  a17=cos(a7);
  a18=(a14*a17);
  a4=(a4*a13);
  a19=(a0*a12);
  a4=(a4+a19);
  a7=sin(a7);
  a19=(a4*a7);
  a18=(a18+a19);
  a8=sin(a8);
  a19=(a18*a8);
  a16=(a16+a19);
  a19=arg[0]? arg[0][12] : 0;
  a20=cos(a19);
  a21=(a16*a20);
  a18=(a18*a15);
  a11=(a11*a8);
  a18=(a18-a11);
  a11=arg[0]? arg[0][11] : 0;
  a22=cos(a11);
  a23=(a18*a22);
  a4=(a4*a17);
  a14=(a14*a7);
  a4=(a4-a14);
  a11=sin(a11);
  a14=(a4*a11);
  a23=(a23+a14);
  a19=sin(a19);
  a14=(a23*a19);
  a21=(a21+a14);
  if (res[0]!=0) res[0][0]=a21;
  a21=arg[0]? arg[0][3] : 0;
  a14=sin(a21);
  a24=(a14*a0);
  a25=(a24*a3);
  a21=cos(a21);
  a26=(a21*a2);
  a25=(a25+a26);
  a26=(a25*a6);
  a27=(a21*a3);
  a24=(a24*a2);
  a27=(a27-a24);
  a24=(a27*a5);
  a26=(a26+a24);
  a24=(a26*a10);
  a27=(a27*a6);
  a25=(a25*a5);
  a27=(a27-a25);
  a25=(a27*a12);
  a28=(a14*a1);
  a29=(a28*a13);
  a25=(a25-a29);
  a29=(a25*a9);
  a24=(a24+a29);
  a29=(a24*a15);
  a25=(a25*a10);
  a26=(a26*a9);
  a25=(a25-a26);
  a26=(a25*a17);
  a27=(a27*a13);
  a28=(a28*a12);
  a27=(a27+a28);
  a28=(a27*a7);
  a26=(a26-a28);
  a28=(a26*a8);
  a29=(a29+a28);
  a28=(a29*a20);
  a26=(a26*a15);
  a24=(a24*a8);
  a26=(a26-a24);
  a24=(a26*a22);
  a25=(a25*a7);
  a27=(a27*a17);
  a25=(a25+a27);
  a27=(a25*a11);
  a24=(a24-a27);
  a27=(a24*a19);
  a28=(a28+a27);
  if (res[0]!=0) res[0][1]=a28;
  a28=(a14*a2);
  a0=(a21*a0);
  a27=(a0*a3);
  a28=(a28-a27);
  a27=(a28*a6);
  a0=(a0*a2);
  a14=(a14*a3);
  a0=(a0+a14);
  a14=(a0*a5);
  a27=(a27+a14);
  a14=(a27*a10);
  a0=(a0*a6);
  a28=(a28*a5);
  a0=(a0-a28);
  a28=(a0*a12);
  a21=(a21*a1);
  a1=(a21*a13);
  a28=(a28+a1);
  a1=(a28*a9);
  a14=(a14+a1);
  a1=(a14*a15);
  a28=(a28*a10);
  a27=(a27*a9);
  a28=(a28-a27);
  a27=(a28*a17);
  a21=(a21*a12);
  a0=(a0*a13);
  a21=(a21-a0);
  a0=(a21*a7);
  a27=(a27+a0);
  a0=(a27*a8);
  a1=(a1+a0);
  a0=(a1*a20);
  a27=(a27*a15);
  a14=(a14*a8);
  a27=(a27-a14);
  a14=(a27*a22);
  a21=(a21*a17);
  a28=(a28*a7);
  a21=(a21-a28);
  a28=(a21*a11);
  a14=(a14+a28);
  a28=(a14*a19);
  a0=(a0+a28);
  if (res[0]!=0) res[0][2]=a0;
  a23=(a23*a20);
  a16=(a16*a19);
  a23=(a23-a16);
  if (res[0]!=0) res[0][3]=a23;
  a24=(a24*a20);
  a29=(a29*a19);
  a24=(a24-a29);
  if (res[0]!=0) res[0][4]=a24;
  a14=(a14*a20);
  a1=(a1*a19);
  a14=(a14-a1);
  if (res[0]!=0) res[0][5]=a14;
  a4=(a4*a22);
  a18=(a18*a11);
  a4=(a4-a18);
  if (res[0]!=0) res[0][6]=a4;
  a26=(a26*a11);
  a25=(a25*a22);
  a26=(a26+a25);
  a26=(-a26);
  if (res[0]!=0) res[0][7]=a26;
  a21=(a21*a22);
  a27=(a27*a11);
  a21=(a21-a27);
  if (res[0]!=0) res[0][8]=a21;
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
    case 0: return "Rot_tcp_fixed";
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

CASADI_SYMBOL_EXPORT int fk_rot_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 1*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 0*sizeof(casadi_int);
  if (sz_w) *sz_w = 0*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
