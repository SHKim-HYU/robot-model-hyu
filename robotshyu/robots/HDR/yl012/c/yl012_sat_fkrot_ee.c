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
  #define CASADI_PREFIX(ID) yl012_sat_fkrot_ee_ ## ID
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
static const casadi_int casadi_s1[15] = {3, 3, 0, 3, 6, 9, 0, 1, 2, 0, 1, 2, 0, 1, 2};

/* fk_rot:(q[6])->(Rot_sat_fixed[3x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][0] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][1] : 0;
  a3=sin(a2);
  a4=(a1*a3);
  a0=sin(a0);
  a5=2.0510354525882235e-10;
  a2=cos(a2);
  a6=(a5*a2);
  a7=-2.0510348974767112e-10;
  a8=(a7*a3);
  a6=(a6+a8);
  a8=(a0*a6);
  a4=(a4-a8);
  a8=arg[0]? arg[0][2] : 0;
  a9=cos(a8);
  a10=(a7*a9);
  a8=sin(a8);
  a10=(a10-a8);
  a11=(a4*a10);
  a12=(a1*a2);
  a13=(a7*a2);
  a14=(a5*a3);
  a13=(a13-a14);
  a14=(a0*a13);
  a12=(a12-a14);
  a14=(a7*a8);
  a14=(a9+a14);
  a15=(a12*a14);
  a11=(a11+a15);
  a15=arg[0]? arg[0][3] : 0;
  a16=cos(a15);
  a17=(a7*a16);
  a15=sin(a15);
  a18=(a5*a15);
  a17=(a17+a18);
  a18=(a11*a17);
  a19=(a7*a9);
  a19=(a19-a8);
  a12=(a12*a19);
  a8=(a7*a8);
  a8=(a8+a9);
  a4=(a4*a8);
  a12=(a12-a4);
  a4=(a12*a16);
  a9=(a5*a1);
  a9=(a9-a0);
  a20=5.5511151231257827e-17;
  a21=(a20*a16);
  a21=(a21+a15);
  a22=(a9*a21);
  a4=(a4+a22);
  a18=(a18+a4);
  a4=-5.0000000000000400e-01;
  a22=arg[0]? arg[0][4] : 0;
  a23=cos(a22);
  a24=(a4*a23);
  a25=-2.7982052848094730e-15;
  a22=sin(a22);
  a26=(a25*a22);
  a24=(a24+a26);
  a26=(a18*a24);
  a27=(a5*a16);
  a28=(a7*a15);
  a27=(a27-a28);
  a28=(a11*a27);
  a29=(a20*a15);
  a29=(a16-a29);
  a30=(a9*a29);
  a31=(a12*a15);
  a30=(a30-a31);
  a28=(a28+a30);
  a30=-1.9721522630525295e-31;
  a31=(a30*a23);
  a31=(a31-a22);
  a32=(a28*a31);
  a12=(a5*a12);
  a9=(a7*a9);
  a12=(a12+a9);
  a11=(a11+a12);
  a12=8.6602540378443638e-01;
  a9=(a12*a23);
  a33=-1.6155445744325999e-15;
  a34=(a33*a22);
  a9=(a9+a34);
  a34=(a11*a9);
  a32=(a32+a34);
  a26=(a26+a32);
  a32=4.9999999999999800e-01;
  a34=arg[0]? arg[0][5] : 0;
  a35=cos(a34);
  a36=(a32*a35);
  a37=(a26*a36);
  a25=(a25*a23);
  a4=(a4*a22);
  a25=(a25-a4);
  a4=(a18*a25);
  a33=(a33*a23);
  a38=(a12*a22);
  a33=(a33-a38);
  a38=(a11*a33);
  a30=(a30*a22);
  a30=(a30+a23);
  a23=(a28*a30);
  a38=(a38-a23);
  a4=(a4+a38);
  a34=sin(a34);
  a38=(a4*a34);
  a18=(a12*a18);
  a23=-3.2310891488651735e-15;
  a28=(a23*a28);
  a22=5.0000000000000400e-01;
  a11=(a22*a11);
  a28=(a28+a11);
  a18=(a18+a28);
  a28=-8.6602540378443982e-01;
  a11=(a28*a35);
  a39=(a18*a11);
  a38=(a38+a39);
  a37=(a37+a38);
  if (res[0]!=0) res[0][0]=a37;
  a37=(a0*a3);
  a6=(a1*a6);
  a37=(a37+a6);
  a6=(a37*a10);
  a38=(a0*a2);
  a13=(a1*a13);
  a38=(a38+a13);
  a13=(a38*a14);
  a6=(a6+a13);
  a13=(a6*a17);
  a38=(a38*a19);
  a37=(a37*a8);
  a38=(a38-a37);
  a37=(a38*a16);
  a0=(a5*a0);
  a0=(a0+a1);
  a1=(a0*a21);
  a37=(a37+a1);
  a13=(a13+a37);
  a37=(a13*a24);
  a1=(a6*a27);
  a39=(a0*a29);
  a40=(a38*a15);
  a39=(a39-a40);
  a1=(a1+a39);
  a39=(a1*a31);
  a38=(a5*a38);
  a0=(a7*a0);
  a38=(a38+a0);
  a6=(a6+a38);
  a38=(a6*a9);
  a39=(a39+a38);
  a37=(a37+a39);
  a39=(a37*a36);
  a38=(a13*a25);
  a0=(a6*a33);
  a40=(a1*a30);
  a0=(a0-a40);
  a38=(a38+a0);
  a0=(a38*a34);
  a13=(a12*a13);
  a1=(a23*a1);
  a6=(a22*a6);
  a1=(a1+a6);
  a13=(a13+a1);
  a1=(a13*a11);
  a0=(a0+a1);
  a39=(a39+a0);
  if (res[0]!=0) res[0][1]=a39;
  a39=(a20*a3);
  a39=(a2+a39);
  a10=(a39*a10);
  a20=(a20*a2);
  a20=(a20-a3);
  a14=(a20*a14);
  a10=(a10+a14);
  a17=(a10*a17);
  a20=(a20*a19);
  a39=(a39*a8);
  a20=(a20-a39);
  a16=(a20*a16);
  a21=(a7*a21);
  a16=(a16+a21);
  a17=(a17+a16);
  a24=(a17*a24);
  a27=(a10*a27);
  a7=(a7*a29);
  a15=(a20*a15);
  a7=(a7-a15);
  a27=(a27+a7);
  a31=(a27*a31);
  a5=(a5*a20);
  a20=4.2067441506673032e-20;
  a5=(a5+a20);
  a10=(a10+a5);
  a9=(a10*a9);
  a31=(a31+a9);
  a24=(a24+a31);
  a36=(a24*a36);
  a25=(a17*a25);
  a33=(a10*a33);
  a30=(a27*a30);
  a33=(a33-a30);
  a25=(a25+a33);
  a33=(a25*a34);
  a12=(a12*a17);
  a23=(a23*a27);
  a22=(a22*a10);
  a23=(a23+a22);
  a12=(a12+a23);
  a11=(a12*a11);
  a33=(a33+a11);
  a36=(a36+a33);
  if (res[0]!=0) res[0][2]=a36;
  a4=(a4*a35);
  a28=(a28*a34);
  a36=(a18*a28);
  a4=(a4-a36);
  a34=(a32*a34);
  a36=(a26*a34);
  a4=(a4-a36);
  if (res[0]!=0) res[0][3]=a4;
  a38=(a38*a35);
  a4=(a13*a28);
  a38=(a38-a4);
  a4=(a37*a34);
  a38=(a38-a4);
  if (res[0]!=0) res[0][4]=a38;
  a25=(a25*a35);
  a28=(a12*a28);
  a25=(a25-a28);
  a34=(a24*a34);
  a25=(a25-a34);
  if (res[0]!=0) res[0][5]=a25;
  a25=8.6602540378443982e-01;
  a26=(a25*a26);
  a18=(a32*a18);
  a26=(a26+a18);
  if (res[0]!=0) res[0][6]=a26;
  a37=(a25*a37);
  a13=(a32*a13);
  a37=(a37+a13);
  if (res[0]!=0) res[0][7]=a37;
  a25=(a25*a24);
  a32=(a32*a12);
  a25=(a25+a32);
  if (res[0]!=0) res[0][8]=a25;
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
    case 0: return "Rot_sat_fixed";
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
