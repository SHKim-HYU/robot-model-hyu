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
  #define CASADI_PREFIX(ID) indy7_v2_J_s_ ## ID
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

static const casadi_int casadi_s0[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s1[45] = {6, 6, 0, 6, 12, 18, 24, 30, 36, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};

/* J_s:(q[6])->(J_s[6x6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a4, a5, a6, a7, a8, a9;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a0;
  if (res[0]!=0) res[0][3]=a0;
  if (res[0]!=0) res[0][4]=a0;
  a0=1.;
  if (res[0]!=0) res[0][5]=a0;
  a0=-2.0510348974767112e-10;
  a1=-1.0900000000000000e-01;
  a2=arg[0]? arg[0][0] : 0;
  a3=cos(a2);
  a4=(a1*a3);
  a5=(a0*a4);
  a6=2.9949999999999999e-01;
  a7=(a6*a3);
  a5=(a5+a7);
  if (res[0]!=0) res[0][6]=a5;
  a2=sin(a2);
  a5=(a6*a2);
  a1=(a1*a2);
  a7=(a0*a1);
  a5=(a5+a7);
  if (res[0]!=0) res[0][7]=a5;
  a5=(a1*a3);
  a7=(a4*a2);
  a5=(a5-a7);
  if (res[0]!=0) res[0][8]=a5;
  if (res[0]!=0) res[0][9]=a2;
  a5=(-a3);
  if (res[0]!=0) res[0][10]=a5;
  if (res[0]!=0) res[0][11]=a0;
  a7=4.5000000000000001e-01;
  a8=arg[0]? arg[0][1] : 0;
  a9=cos(a8);
  a10=(a0*a9);
  a11=(a3*a10);
  a8=sin(a8);
  a12=(a2*a8);
  a11=(a11-a12);
  a12=(a7*a11);
  a13=-3.0499999999999999e-02;
  a14=(a13*a3);
  a12=(a12-a14);
  a4=(a4+a12);
  a12=(a0*a4);
  a14=(a7*a9);
  a15=6.2556564373039687e-12;
  a14=(a14+a15);
  a6=(a6+a14);
  a14=(a6*a3);
  a12=(a12+a14);
  if (res[0]!=0) res[0][12]=a12;
  a12=(a6*a2);
  a13=(a13*a2);
  a14=(a3*a8);
  a10=(a2*a10);
  a14=(a14+a10);
  a7=(a7*a14);
  a13=(a13-a7);
  a13=(a13-a1);
  a1=(a0*a13);
  a12=(a12-a1);
  if (res[0]!=0) res[0][13]=a12;
  a12=(a13*a3);
  a1=(a4*a2);
  a12=(a12+a1);
  a12=(-a12);
  if (res[0]!=0) res[0][14]=a12;
  if (res[0]!=0) res[0][15]=a2;
  if (res[0]!=0) res[0][16]=a5;
  if (res[0]!=0) res[0][17]=a0;
  a5=-2.6700000000000002e-01;
  a12=(a2*a9);
  a1=(a0*a8);
  a7=(a3*a1);
  a12=(a12+a7);
  a7=arg[0]? arg[0][2] : 0;
  a10=sin(a7);
  a15=1.0206823934513925e-11;
  a7=cos(a7);
  a16=(a15*a7);
  a16=(a10+a16);
  a17=(a12*a16);
  a18=-1.0206823934513925e-11;
  a19=(a18*a10);
  a19=(a19+a7);
  a20=(a11*a19);
  a17=(a17-a20);
  a20=(a5*a17);
  a21=-7.4999999999999997e-02;
  a22=(a21*a3);
  a20=(a20-a22);
  a4=(a4+a20);
  a20=(a15*a10);
  a20=(a20-a7);
  a22=(a8*a20);
  a7=(a18*a7);
  a7=(a7-a10);
  a10=(a9*a7);
  a22=(a22+a10);
  a10=(a15*a22);
  a23=4.2067441506673032e-20;
  a8=(a8*a16);
  a24=(a9*a19);
  a8=(a8-a24);
  a23=(a23-a8);
  a10=(a10+a23);
  a23=(a4*a10);
  a24=(a5*a8);
  a25=1.5382761731075335e-11;
  a24=(a24+a25);
  a6=(a6+a24);
  a12=(a12*a20);
  a11=(a11*a7);
  a12=(a12+a11);
  a11=(a15*a12);
  a24=(a0*a3);
  a24=(a17+a24);
  a11=(a11-a24);
  a24=(a6*a11);
  a23=(a23-a24);
  if (res[0]!=0) res[0][18]=a23;
  a9=(a3*a9);
  a1=(a2*a1);
  a9=(a9-a1);
  a20=(a9*a20);
  a7=(a14*a7);
  a20=(a20-a7);
  a15=(a15*a20);
  a7=(a0*a2);
  a9=(a9*a16);
  a14=(a14*a19);
  a9=(a9+a14);
  a7=(a7-a9);
  a15=(a15+a7);
  a7=(a6*a15);
  a5=(a5*a9);
  a21=(a21*a2);
  a5=(a5+a21);
  a13=(a13+a5);
  a5=(a13*a10);
  a7=(a7-a5);
  if (res[0]!=0) res[0][19]=a7;
  a7=(a13*a11);
  a5=(a4*a15);
  a7=(a7-a5);
  if (res[0]!=0) res[0][20]=a7;
  if (res[0]!=0) res[0][21]=a15;
  if (res[0]!=0) res[0][22]=a11;
  if (res[0]!=0) res[0][23]=a10;
  a7=-1.1400000000000000e-01;
  a5=arg[0]? arg[0][3] : 0;
  a21=sin(a5);
  a14=-2.0934551898781983e-21;
  a5=cos(a5);
  a19=(a14*a5);
  a19=(a21+a19);
  a16=(a12*a19);
  a1=2.0510360076997358e-10;
  a23=(a1*a5);
  a24=(a18*a21);
  a23=(a23-a24);
  a24=(a17*a23);
  a25=(a3*a5);
  a24=(a24+a25);
  a16=(a16+a24);
  a24=(a7*a16);
  a25=8.3500000000000005e-02;
  a26=(a25*a11);
  a24=(a24+a26);
  a4=(a4+a24);
  a24=(a0*a10);
  a26=(a22*a19);
  a27=(a8*a23);
  a28=(a0*a5);
  a27=(a27-a28);
  a26=(a26+a27);
  a24=(a24-a26);
  a27=(a4*a24);
  a28=(a7*a26);
  a29=(a25*a10);
  a28=(a28+a29);
  a6=(a6+a28);
  a28=(a0*a11);
  a28=(a28-a16);
  a29=(a6*a28);
  a27=(a27-a29);
  if (res[0]!=0) res[0][24]=a27;
  a27=(a0*a15);
  a19=(a20*a19);
  a23=(a9*a23);
  a29=(a2*a5);
  a23=(a23-a29);
  a19=(a19+a23);
  a27=(a27-a19);
  a23=(a6*a27);
  a7=(a7*a19);
  a25=(a25*a15);
  a7=(a7+a25);
  a13=(a13+a7);
  a7=(a13*a24);
  a23=(a23-a7);
  if (res[0]!=0) res[0][25]=a23;
  a23=(a13*a28);
  a7=(a4*a27);
  a23=(a23-a7);
  if (res[0]!=0) res[0][26]=a23;
  if (res[0]!=0) res[0][27]=a27;
  if (res[0]!=0) res[0][28]=a28;
  if (res[0]!=0) res[0][29]=a24;
  a23=5.1999999999999998e-02;
  a7=arg[0]? arg[0][4] : 0;
  a25=cos(a7);
  a29=(a0*a25);
  a16=(a16*a29);
  a11=(a11*a25);
  a16=(a16+a11);
  a14=(a14*a21);
  a14=(a14-a5);
  a12=(a12*a14);
  a18=(a18*a5);
  a1=(a1*a21);
  a18=(a18+a1);
  a17=(a17*a18);
  a3=(a3*a21);
  a17=(a17+a3);
  a12=(a12+a17);
  a7=sin(a7);
  a12=(a12*a7);
  a16=(a16-a12);
  a12=(a23*a16);
  a17=8.5000000000000006e-02;
  a3=(a17*a28);
  a12=(a12+a3);
  a4=(a4+a12);
  a26=(a26*a29);
  a10=(a10*a25);
  a26=(a26+a10);
  a22=(a22*a14);
  a8=(a8*a18);
  a10=(a0*a21);
  a8=(a8-a10);
  a22=(a22+a8);
  a22=(a22*a7);
  a26=(a26-a22);
  a22=(a0*a24);
  a22=(a26+a22);
  a8=(a4*a22);
  a26=(a23*a26);
  a24=(a17*a24);
  a26=(a26+a24);
  a6=(a6+a26);
  a28=(a0*a28);
  a16=(a16+a28);
  a28=(a6*a16);
  a8=(a8-a28);
  if (res[0]!=0) res[0][30]=a8;
  a19=(a19*a29);
  a15=(a15*a25);
  a19=(a19+a15);
  a20=(a20*a14);
  a9=(a9*a18);
  a2=(a2*a21);
  a9=(a9-a2);
  a20=(a20+a9);
  a20=(a20*a7);
  a19=(a19-a20);
  a0=(a0*a27);
  a0=(a19+a0);
  a6=(a6*a0);
  a23=(a23*a19);
  a17=(a17*a27);
  a23=(a23+a17);
  a13=(a13+a23);
  a23=(a13*a22);
  a6=(a6-a23);
  if (res[0]!=0) res[0][31]=a6;
  a13=(a13*a16);
  a4=(a4*a0);
  a13=(a13-a4);
  if (res[0]!=0) res[0][32]=a13;
  if (res[0]!=0) res[0][33]=a0;
  if (res[0]!=0) res[0][34]=a16;
  if (res[0]!=0) res[0][35]=a22;
  return 0;
}

CASADI_SYMBOL_EXPORT int J_s(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int J_s_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int J_s_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_s_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int J_s_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void J_s_release(int mem) {
}

CASADI_SYMBOL_EXPORT void J_s_incref(void) {
}

CASADI_SYMBOL_EXPORT void J_s_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int J_s_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int J_s_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real J_s_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_s_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* J_s_name_out(casadi_int i) {
  switch (i) {
    case 0: return "J_s";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_s_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* J_s_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int J_s_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif