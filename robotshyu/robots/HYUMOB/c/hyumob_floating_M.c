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
  #define CASADI_PREFIX(ID) hyumob_floating_M_ ## ID
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

static const casadi_int casadi_s0[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s1[45] = {6, 6, 0, 6, 12, 18, 24, 30, 36, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};

/* M:(i0[7])->(o0[6x6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a2, a3, a4, a5;
  a0=5.3537364080000003e+01;
  if (res[0]!=0) res[0][0]=a0;
  a1=0.;
  if (res[0]!=0) res[0][1]=a1;
  if (res[0]!=0) res[0][2]=a1;
  if (res[0]!=0) res[0][3]=a1;
  a2=7.8413944659893868e+00;
  if (res[0]!=0) res[0][4]=a2;
  if (res[0]!=0) res[0][5]=a1;
  if (res[0]!=0) res[0][6]=a1;
  if (res[0]!=0) res[0][7]=a0;
  if (res[0]!=0) res[0][8]=a1;
  a3=-7.8413944659893868e+00;
  if (res[0]!=0) res[0][9]=a3;
  if (res[0]!=0) res[0][10]=a1;
  a4=-1.2389418707146505e+00;
  if (res[0]!=0) res[0][11]=a4;
  if (res[0]!=0) res[0][12]=a1;
  if (res[0]!=0) res[0][13]=a1;
  if (res[0]!=0) res[0][14]=a0;
  if (res[0]!=0) res[0][15]=a1;
  a0=1.2389418707146505e+00;
  if (res[0]!=0) res[0][16]=a0;
  if (res[0]!=0) res[0][17]=a1;
  if (res[0]!=0) res[0][18]=a1;
  if (res[0]!=0) res[0][19]=a3;
  if (res[0]!=0) res[0][20]=a1;
  a3=2.9601506888185418e+00;
  if (res[0]!=0) res[0][21]=a3;
  a3=1.1316049999999999e-02;
  if (res[0]!=0) res[0][22]=a3;
  a5=2.6381490941597396e-01;
  if (res[0]!=0) res[0][23]=a5;
  if (res[0]!=0) res[0][24]=a2;
  if (res[0]!=0) res[0][25]=a1;
  if (res[0]!=0) res[0][26]=a0;
  if (res[0]!=0) res[0][27]=a3;
  a3=6.1029982031821284e+00;
  if (res[0]!=0) res[0][28]=a3;
  a3=4.1300000000000003e-06;
  if (res[0]!=0) res[0][29]=a3;
  if (res[0]!=0) res[0][30]=a1;
  if (res[0]!=0) res[0][31]=a4;
  if (res[0]!=0) res[0][32]=a1;
  if (res[0]!=0) res[0][33]=a5;
  if (res[0]!=0) res[0][34]=a3;
  a3=6.4774960243635862e+00;
  if (res[0]!=0) res[0][35]=a3;
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
