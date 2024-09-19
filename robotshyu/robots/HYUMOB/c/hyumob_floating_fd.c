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
  #define CASADI_PREFIX(ID) hyumob_floating_fd_ ## ID
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
static const casadi_int casadi_s1[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};

/* aba:(q[7],dq[6],tau[6])->(ddq[6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a3, a4, a5, a6, a7, a8, a9;
  a0=2.3033656387848510e-02;
  a1=arg[2]? arg[2][0] : 0;
  a2=arg[1]? arg[1][4] : 0;
  a3=5.3537364080000003e+01;
  a4=arg[1]? arg[1][2] : 0;
  a5=(a3*a4);
  a6=-2.3141630000000000e-02;
  a7=(a6*a2);
  a7=(a3*a7);
  a5=(a5-a7);
  a8=(a2*a5);
  a9=arg[1]? arg[1][5] : 0;
  a10=arg[1]? arg[1][1] : 0;
  a11=(a3*a10);
  a12=1.4646582999999999e-01;
  a13=arg[1]? arg[1][3] : 0;
  a14=(a12*a13);
  a15=(a6*a9);
  a14=(a14-a15);
  a14=(a3*a14);
  a11=(a11-a14);
  a15=(a9*a11);
  a8=(a8-a15);
  a1=(a1-a8);
  a0=(a0*a1);
  a8=2.7164327077711184e-05;
  a15=arg[2]? arg[2][1] : 0;
  a16=arg[1]? arg[1][0] : 0;
  a17=(a3*a16);
  a18=(a12*a2);
  a3=(a3*a18);
  a17=(a17+a3);
  a18=(a9*a17);
  a19=(a13*a5);
  a18=(a18-a19);
  a15=(a15-a18);
  a8=(a8*a15);
  a18=6.8810864674165903e-04;
  a19=arg[2]? arg[2][2] : 0;
  a20=(a13*a11);
  a21=(a2*a17);
  a20=(a20-a21);
  a19=(a19-a20);
  a18=(a18*a19);
  a8=(a8+a18);
  a0=(a0+a8);
  a8=1.8583723772692888e-04;
  a18=arg[2]? arg[2][3] : 0;
  a20=(a6*a11);
  a21=8.2352259999999997e-02;
  a22=(a21*a13);
  a23=4.1300000000000003e-06;
  a24=(a23*a2);
  a22=(a22+a24);
  a24=6.4488248900000000e+00;
  a24=(a24*a9);
  a22=(a22+a24);
  a20=(a20+a22);
  a22=(a2*a20);
  a17=(a12*a17);
  a6=(a6*a5);
  a17=(a17-a6);
  a6=1.1316049999999999e-02;
  a5=(a6*a13);
  a24=4.9258307200000004e+00;
  a24=(a24*a2);
  a5=(a5+a24);
  a23=(a23*a9);
  a5=(a5+a23);
  a17=(a17+a5);
  a5=(a9*a17);
  a22=(a22-a5);
  a5=(a10*a7);
  a23=(a4*a14);
  a5=(a5-a23);
  a22=(a22-a5);
  a18=(a18-a22);
  a8=(a8*a18);
  a22=-2.9734666345527891e-02;
  a5=arg[2]? arg[2][4] : 0;
  a23=1.8116543399999996e+00;
  a23=(a23*a13);
  a6=(a6*a2);
  a23=(a23+a6);
  a21=(a21*a9);
  a23=(a23+a21);
  a12=(a12*a11);
  a23=(a23-a12);
  a12=(a9*a23);
  a20=(a13*a20);
  a12=(a12-a20);
  a20=(a4*a3);
  a7=(a16*a7);
  a20=(a20+a7);
  a12=(a12+a20);
  a5=(a5-a12);
  a22=(a22*a5);
  a12=-2.3541207283367242e-06;
  a20=arg[2]? arg[2][5] : 0;
  a17=(a13*a17);
  a23=(a2*a23);
  a17=(a17-a23);
  a14=(a16*a14);
  a3=(a10*a3);
  a14=(a14+a3);
  a17=(a17-a14);
  a20=(a20-a17);
  a12=(a12*a20);
  a22=(a22+a12);
  a8=(a8+a22);
  a0=(a0+a8);
  a8=(a10*a9);
  a22=(a4*a2);
  a8=(a8-a22);
  a22=(a2*a4);
  a12=(a9*a10);
  a22=(a22-a12);
  a8=(a8+a22);
  a22=9.8100000000000005e+00;
  a12=2.;
  a17=arg[0]? arg[0][5] : 0;
  a17=(a12*a17);
  a14=arg[0]? arg[0][3] : 0;
  a3=(a17*a14);
  a23=arg[0]? arg[0][4] : 0;
  a7=(a12*a23);
  a11=arg[0]? arg[0][6] : 0;
  a21=(a7*a11);
  a3=(a3-a21);
  a3=(a22*a3);
  a8=(a8+a3);
  a0=(a0-a8);
  if (res[0]!=0) res[0][0]=a0;
  a0=2.7164327077711564e-05;
  a0=(a0*a1);
  a8=3.0562114592661897e-02;
  a8=(a8*a15);
  a3=4.2919690308065721e-06;
  a3=(a3*a19);
  a8=(a8+a3);
  a0=(a0+a8);
  a8=8.0731354270986516e-02;
  a8=(a8*a18);
  a3=-1.8546528618798946e-04;
  a3=(a3*a5);
  a21=2.5575545266348899e-03;
  a21=(a21*a20);
  a3=(a3+a21);
  a8=(a8+a3);
  a0=(a0+a8);
  a8=(a4*a13);
  a3=(a16*a9);
  a8=(a8-a3);
  a9=(a9*a16);
  a4=(a13*a4);
  a9=(a9-a4);
  a8=(a8+a9);
  a17=(a17*a23);
  a12=(a12*a14);
  a11=(a12*a11);
  a17=(a17+a11);
  a17=(a22*a17);
  a8=(a8+a17);
  a0=(a0-a8);
  if (res[0]!=0) res[0][1]=a0;
  a0=6.8810864674165946e-04;
  a0=(a0*a1);
  a8=4.2919690308065255e-06;
  a8=(a8*a15);
  a17=1.8787265103549559e-02;
  a17=(a17*a19);
  a8=(a8+a17);
  a0=(a0+a8);
  a8=2.9362320178697165e-05;
  a8=(a8*a18);
  a17=-4.6980831415877585e-03;
  a17=(a17*a5);
  a11=-3.7195153893914361e-07;
  a11=(a11*a20);
  a17=(a17+a11);
  a8=(a8+a17);
  a0=(a0+a8);
  a8=(a16*a2);
  a17=(a10*a13);
  a8=(a8-a17);
  a13=(a13*a10);
  a2=(a2*a16);
  a13=(a13-a2);
  a8=(a8+a13);
  a13=1.;
  a12=(a12*a14);
  a7=(a7*a23);
  a12=(a12+a7);
  a13=(a13-a12);
  a22=(a22*a13);
  a8=(a8+a22);
  a0=(a0-a8);
  if (res[0]!=0) res[0][2]=a0;
  a0=1.8583723772692964e-04;
  a0=(a0*a1);
  a8=8.0731354270985906e-02;
  a8=(a8*a15);
  a22=2.9362320178697192e-05;
  a22=(a22*a19);
  a8=(a8+a22);
  a0=(a0+a8);
  a8=5.5231021269491098e-01;
  a8=(a8*a18);
  a22=-1.2688095081762663e-03;
  a22=(a22*a5);
  a13=-7.0530662209255992e-03;
  a13=(a13*a20);
  a22=(a22+a13);
  a8=(a8+a22);
  a0=(a0+a8);
  if (res[0]!=0) res[0][3]=a0;
  a0=-2.9734666345527926e-02;
  a0=(a0*a1);
  a8=-1.8546528618798791e-04;
  a8=(a8*a15);
  a22=-4.6980831415877611e-03;
  a22=(a22*a19);
  a8=(a8+a22);
  a0=(a0+a8);
  a8=-1.2688095081762681e-03;
  a8=(a8*a18);
  a22=2.0301435731138037e-01;
  a22=(a22*a5);
  a13=1.6072832334591110e-05;
  a13=(a13*a20);
  a22=(a22+a13);
  a8=(a8+a22);
  a0=(a0+a8);
  if (res[0]!=0) res[0][4]=a0;
  a0=-2.3541207283367391e-06;
  a0=(a0*a1);
  a1=2.5575545266348929e-03;
  a1=(a1*a15);
  a15=-3.7195153893914456e-07;
  a15=(a15*a19);
  a1=(a1+a15);
  a0=(a0+a1);
  a1=-7.0530662209256105e-03;
  a1=(a1*a18);
  a18=1.6072832334591113e-05;
  a18=(a18*a5);
  a5=1.5515707945930007e-01;
  a5=(a5*a20);
  a18=(a18+a5);
  a1=(a1+a18);
  a0=(a0+a1);
  if (res[0]!=0) res[0][5]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int aba(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int aba_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int aba_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void aba_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int aba_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void aba_release(int mem) {
}

CASADI_SYMBOL_EXPORT void aba_incref(void) {
}

CASADI_SYMBOL_EXPORT void aba_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int aba_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int aba_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real aba_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* aba_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    case 1: return "dq";
    case 2: return "tau";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* aba_name_out(casadi_int i) {
  switch (i) {
    case 0: return "ddq";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* aba_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* aba_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int aba_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif