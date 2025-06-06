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
  #define CASADI_PREFIX(ID) hyu_spa_CoM_x_ ## ID
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
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};

/* centerOfMass:(q[7])->(CoM Position[3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][0] : 0;
  a1=cos(a0);
  a2=1.9880243688408000e-03;
  a3=5.3637644033999990e-04;
  a4=arg[0]? arg[0][2] : 0;
  a5=cos(a4);
  a6=-1.8595062505414998e-03;
  a7=arg[0]? arg[0][3] : 0;
  a8=cos(a7);
  a9=-1.2475493558465000e-03;
  a10=arg[0]? arg[0][4] : 0;
  a11=cos(a10);
  a12=5.8833013939859995e-04;
  a13=1.3080657636563996e-03;
  a14=arg[0]? arg[0][6] : 0;
  a15=cos(a14);
  a16=(a13*a15);
  a17=-5.0393515576063995e-03;
  a14=sin(a14);
  a18=(a17*a14);
  a16=(a16+a18);
  a12=(a12+a16);
  a12=(a6+a12);
  a16=(a11*a12);
  a10=sin(a10);
  a18=-1.6142534741815000e-03;
  a19=6.3711696540259995e-04;
  a20=arg[0]? arg[0][5] : 0;
  a21=cos(a20);
  a22=(a19*a21);
  a20=sin(a20);
  a23=-2.9893519275224795e-02;
  a17=(a17*a15);
  a13=(a13*a14);
  a17=(a17-a13);
  a13=-4.9613805359999999e-02;
  a17=(a17+a13);
  a23=(a23+a17);
  a17=(a20*a23);
  a22=(a22-a17);
  a18=(a18+a22);
  a22=(a10*a18);
  a16=(a16-a22);
  a9=(a9+a16);
  a16=(a8*a9);
  a7=sin(a7);
  a22=-4.8477501697389104e-02;
  a17=-7.8078709860371992e-02;
  a19=(a19*a20);
  a21=(a21*a23);
  a19=(a19+a21);
  a21=-1.8215338833600001e-01;
  a19=(a19+a21);
  a19=(a17+a19);
  a21=-2.8151503295399999e-01;
  a19=(a19+a21);
  a22=(a22+a19);
  a19=(a7*a22);
  a16=(a16+a19);
  a6=(a6+a16);
  a16=(a5*a6);
  a4=sin(a4);
  a19=1.6142534741815000e-03;
  a21=-2.1200896785180000e-04;
  a10=(a10*a12);
  a11=(a11*a18);
  a10=(a10+a11);
  a21=(a21+a10);
  a19=(a19+a21);
  a21=(a4*a19);
  a16=(a16-a21);
  a3=(a3+a16);
  a2=(a2+a3);
  a3=(a1*a2);
  a0=sin(a0);
  a16=2.0285389665680001e-04;
  a21=arg[0]? arg[0][1] : 0;
  a10=sin(a21);
  a11=-1.4453407951709998e-03;
  a4=(a4*a6);
  a5=(a5*a19);
  a4=(a4+a5);
  a11=(a11+a4);
  a4=(a10*a11);
  a21=cos(a21);
  a5=-5.0127608880823495e-02;
  a8=(a8*a22);
  a7=(a7*a9);
  a8=(a8-a7);
  a7=-3.8704117657199999e-01;
  a8=(a8+a7);
  a17=(a17+a8);
  a8=-4.7524161871799997e-01;
  a17=(a17+a8);
  a5=(a5+a17);
  a17=(a21*a5);
  a4=(a4+a17);
  a16=(a16+a4);
  a4=(a0*a16);
  a3=(a3+a4);
  a4=4.4995606800000001e+00;
  a3=(a3/a4);
  if (res[0]!=0) res[0][0]=a3;
  a3=-3.1033217833782004e-02;
  a21=(a21*a11);
  a10=(a10*a5);
  a21=(a21-a10);
  a10=-2.0850120143999998e-01;
  a21=(a21+a10);
  a3=(a3+a21);
  a21=-1.3980135032759999e+00;
  a3=(a3+a21);
  a3=(a3/a4);
  if (res[0]!=0) res[0][1]=a3;
  a1=(a1*a16);
  a0=(a0*a2);
  a1=(a1-a0);
  a0=7.0508115855600000e+00;
  a1=(a1+a0);
  a1=(a1/a4);
  if (res[0]!=0) res[0][2]=a1;
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


#ifdef __cplusplus
} /* extern "C" */
#endif
