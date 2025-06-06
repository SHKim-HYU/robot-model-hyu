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
  #define CASADI_PREFIX(ID) yl012_CoM_x_ ## ID
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
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};

/* centerOfMass:(q[6])->(CoM Position[3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][0] : 0;
  a1=cos(a0);
  a2=1.4935106885499993e-03;
  a3=arg[0]? arg[0][1] : 0;
  a4=sin(a3);
  a5=4.0337015400220002e+00;
  a6=-2.0510348974767112e-10;
  a7=arg[0]? arg[0][2] : 0;
  a8=cos(a7);
  a9=(a6*a8);
  a7=sin(a7);
  a9=(a9-a7);
  a10=1.6962017944550001e-01;
  a11=arg[0]? arg[0][3] : 0;
  a12=cos(a11);
  a13=(a6*a12);
  a14=2.0510354525882235e-10;
  a11=sin(a11);
  a15=(a14*a11);
  a13=(a13+a15);
  a15=4.9130510687999999e-02;
  a16=-5.0000000000000400e-01;
  a17=arg[0]? arg[0][4] : 0;
  a18=cos(a17);
  a19=(a16*a18);
  a20=-2.7982052848094730e-15;
  a17=sin(a17);
  a21=(a20*a17);
  a19=(a19+a21);
  a21=4.1037731045999996e-02;
  a22=1.4633423948000001e-04;
  a23=4.9999999999999800e-01;
  a24=arg[0]? arg[0][5] : 0;
  a25=cos(a24);
  a26=(a23*a25);
  a26=(a22*a26);
  a27=3.1691723083947257e-02;
  a28=-2.1091152130400001e-04;
  a24=sin(a24);
  a23=(a23*a24);
  a23=(a28*a23);
  a27=(a27-a23);
  a26=(a26+a27);
  a27=9.0391121040000008e-02;
  a26=(a26+a27);
  a21=(a21+a26);
  a19=(a19*a21);
  a20=(a20*a18);
  a16=(a16*a17);
  a20=(a20-a16);
  a16=9.7318803292800000e-04;
  a26=(a22*a24);
  a27=(a28*a25);
  a26=(a26+a27);
  a16=(a16+a26);
  a20=(a20*a16);
  a26=8.6602540378443638e-01;
  a27=2.2217587527360000e-01;
  a23=-8.6602540378443982e-01;
  a25=(a23*a25);
  a22=(a22*a25);
  a25=1.8297224853599928e-02;
  a23=(a23*a24);
  a28=(a28*a23);
  a25=(a25-a28);
  a22=(a22+a25);
  a25=1.6866661416000001e-01;
  a22=(a22+a25);
  a27=(a27+a22);
  a22=(a26*a27);
  a20=(a20+a22);
  a19=(a19+a20);
  a20=3.0433492158999997e-01;
  a19=(a19+a20);
  a15=(a15+a19);
  a13=(a13*a15);
  a19=(a14*a12);
  a20=(a6*a11);
  a19=(a19-a20);
  a20=-3.5410283427059997e-03;
  a22=-1.9721522630525295e-31;
  a25=(a22*a18);
  a25=(a25-a17);
  a25=(a25*a21);
  a28=-3.2310891488651735e-15;
  a28=(a28*a27);
  a22=(a22*a17);
  a22=(a22+a18);
  a22=(a22*a16);
  a28=(a28-a22);
  a25=(a25+a28);
  a20=(a20+a25);
  a19=(a19*a20);
  a25=5.4052550799299992e-01;
  a28=(a26*a18);
  a22=-1.6155445744325999e-15;
  a23=(a22*a17);
  a28=(a28+a23);
  a28=(a28*a21);
  a22=(a22*a18);
  a26=(a26*a17);
  a22=(a22-a26);
  a22=(a22*a16);
  a16=5.0000000000000400e-01;
  a16=(a16*a27);
  a22=(a22+a16);
  a28=(a28+a22);
  a22=1.0050790691400000e+00;
  a28=(a28+a22);
  a25=(a25+a28);
  a19=(a19+a25);
  a13=(a13+a19);
  a19=1.0605575927599999e+00;
  a13=(a13+a19);
  a10=(a10+a13);
  a9=(a9*a10);
  a13=(a6*a7);
  a13=(a13+a8);
  a19=9.0727367989899995e-04;
  a28=(a12*a15);
  a22=(a14*a25);
  a16=(a11*a20);
  a22=(a22-a16);
  a28=(a28+a22);
  a19=(a19+a28);
  a13=(a13*a19);
  a9=(a9-a13);
  a13=8.5086090260000002e+00;
  a9=(a9+a13);
  a5=(a5+a9);
  a9=(a4*a5);
  a3=cos(a3);
  a13=5.3193878412439999e-03;
  a28=(a6*a7);
  a28=(a8+a28);
  a28=(a28*a10);
  a8=(a6*a8);
  a8=(a8-a7);
  a8=(a8*a19);
  a28=(a28+a8);
  a13=(a13+a28);
  a28=(a3*a13);
  a8=7.8034554033350001e-01;
  a19=4.3884774413470001e-01;
  a7=5.5511151231257827e-17;
  a10=(a7*a12);
  a10=(a10+a11);
  a10=(a10*a15);
  a11=(a7*a11);
  a12=(a12-a11);
  a12=(a12*a20);
  a25=(a6*a25);
  a12=(a12+a25);
  a10=(a10+a12);
  a12=9.4196817104000008e-01;
  a10=(a10+a12);
  a19=(a19+a10);
  a10=1.7331556872099998e+00;
  a19=(a19+a10);
  a8=(a8+a19);
  a19=(a14*a8);
  a28=(a28+a19);
  a9=(a9+a28);
  a2=(a2+a9);
  a9=(a1*a2);
  a0=sin(a0);
  a28=2.9980006761799993e-01;
  a19=(a14*a3);
  a10=(a6*a4);
  a19=(a19+a10);
  a19=(a19*a5);
  a10=(a6*a3);
  a14=(a14*a4);
  a10=(a10-a14);
  a10=(a10*a13);
  a10=(a10+a8);
  a19=(a19+a10);
  a10=3.1343867949999997e+00;
  a19=(a19+a10);
  a28=(a28+a19);
  a19=(a0*a28);
  a9=(a9-a19);
  a19=3.6690989999999999e+01;
  a9=(a9/a19);
  if (res[0]!=0) res[0][0]=a9;
  a0=(a0*a2);
  a1=(a1*a28);
  a0=(a0+a1);
  a0=(a0/a19);
  if (res[0]!=0) res[0][1]=a0;
  a0=1.2562568693499998e+00;
  a1=(a7*a4);
  a1=(a3+a1);
  a1=(a1*a5);
  a7=(a7*a3);
  a7=(a7-a4);
  a7=(a7*a13);
  a6=(a6*a8);
  a7=(a7+a6);
  a1=(a1+a7);
  a7=4.2899874379999998e+00;
  a1=(a1+a7);
  a0=(a0+a1);
  a1=4.2102911025000003e+00;
  a0=(a0+a1);
  a0=(a0/a19);
  if (res[0]!=0) res[0][2]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int centerOfMass(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int centerOfMass_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int centerOfMass_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void centerOfMass_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int centerOfMass_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void centerOfMass_release(int mem) {
}

CASADI_SYMBOL_EXPORT void centerOfMass_incref(void) {
}

CASADI_SYMBOL_EXPORT void centerOfMass_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int centerOfMass_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int centerOfMass_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real centerOfMass_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* centerOfMass_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* centerOfMass_name_out(casadi_int i) {
  switch (i) {
    case 0: return "CoM Position";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* centerOfMass_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* centerOfMass_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int centerOfMass_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

CASADI_SYMBOL_EXPORT int centerOfMass_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 1*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 0*sizeof(casadi_int);
  if (sz_w) *sz_w = 0*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
