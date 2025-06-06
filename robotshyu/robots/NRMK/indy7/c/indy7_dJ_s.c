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
  #define CASADI_PREFIX(ID) indy7_dJ_s_ ## ID
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

/* dJ_s:(q[6],v[6])->(dJ_s[6x6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a4, a5, a6, a7, a8, a9;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a0;
  if (res[0]!=0) res[0][3]=a0;
  if (res[0]!=0) res[0][4]=a0;
  if (res[0]!=0) res[0][5]=a0;
  a0=2.2204460492503131e-16;
  a1=arg[0]? arg[0][1] : 0;
  a2=sin(a1);
  a3=(a0*a2);
  a1=cos(a1);
  a3=(a3-a1);
  a4=(a0*a1);
  a4=(a4+a2);
  a5=-1.0900000000000000e-01;
  a6=arg[1]? arg[1][0] : 0;
  a7=(a5*a6);
  a8=(a4*a7);
  a9=(a3*a8);
  a10=(a0*a1);
  a10=(a2+a10);
  a11=(a0*a2);
  a11=(a1-a11);
  a12=(a11*a7);
  a13=(a10*a12);
  a9=(a9+a13);
  a13=arg[0]? arg[0][0] : 0;
  a14=sin(a13);
  a15=(a5*a14);
  a16=(a14*a4);
  a13=cos(a13);
  a2=(a0*a2);
  a17=(a13*a2);
  a16=(a16+a17);
  a17=(a3*a6);
  a18=(a16*a17);
  a19=(a14*a11);
  a1=(a0*a1);
  a20=(a13*a1);
  a19=(a19+a20);
  a6=(a10*a6);
  a20=(a19*a6);
  a21=(a0*a14);
  a21=(a21-a13);
  a22=arg[1]? arg[1][1] : 0;
  a23=(a21*a22);
  a20=(a20+a23);
  a18=(a18+a20);
  a20=(a15*a18);
  a5=(a5*a13);
  a4=(a13*a4);
  a2=(a14*a2);
  a4=(a4-a2);
  a2=(a4*a17);
  a11=(a13*a11);
  a1=(a14*a1);
  a11=(a11-a1);
  a1=(a11*a6);
  a13=(a0*a13);
  a13=(a13+a14);
  a14=(a13*a22);
  a1=(a1+a14);
  a2=(a2+a1);
  a1=(a5*a2);
  a20=(a20+a1);
  a9=(a9+a20);
  a20=(a9*a21);
  a1=(a15*a21);
  a14=(a5*a13);
  a1=(a1+a14);
  a14=(a18*a1);
  a23=(a3*a17);
  a24=(a10*a6);
  a23=(a23+a24);
  a24=2.9949999999999999e-01;
  a25=(a24*a13);
  a26=(a23*a25);
  a14=(a14+a26);
  a20=(a20-a14);
  if (res[0]!=0) res[0][6]=a20;
  a1=(a2*a1);
  a20=(a24*a21);
  a14=(a23*a20);
  a1=(a1-a14);
  a9=(a9*a13);
  a1=(a1-a9);
  if (res[0]!=0) res[0][7]=a1;
  a1=(a5*a23);
  a9=(a24*a18);
  a1=(a1-a9);
  a9=(a4*a8);
  a14=(a11*a12);
  a7=(a0*a7);
  a26=(a13*a7);
  a14=(a14+a26);
  a9=(a9+a14);
  a1=(a1-a9);
  a1=(a1*a21);
  a9=(a24*a2);
  a14=(a15*a23);
  a9=(a9+a14);
  a14=(a16*a8);
  a26=(a19*a12);
  a27=(a21*a7);
  a26=(a26+a27);
  a14=(a14+a26);
  a9=(a9-a14);
  a9=(a9*a13);
  a1=(a1-a9);
  a25=(a2*a25);
  a20=(a18*a20);
  a25=(a25+a20);
  a1=(a1+a25);
  if (res[0]!=0) res[0][8]=a1;
  a1=(a23*a21);
  a1=(-a1);
  if (res[0]!=0) res[0][9]=a1;
  a23=(a23*a13);
  if (res[0]!=0) res[0][10]=a23;
  a2=(a2*a21);
  a18=(a18*a13);
  a2=(a2-a18);
  if (res[0]!=0) res[0][11]=a2;
  a2=arg[0]? arg[0][2] : 0;
  a18=cos(a2);
  a23=(a16*a18);
  a2=sin(a2);
  a1=(a19*a2);
  a23=(a23+a1);
  a1=(a18*a17);
  a25=(a2*a6);
  a1=(a1+a25);
  a25=(a23*a1);
  a19=(a19*a18);
  a20=(a16*a2);
  a19=(a19-a20);
  a20=(a18*a6);
  a9=(a2*a17);
  a20=(a20-a9);
  a9=(a19*a20);
  a14=arg[1]? arg[1][2] : 0;
  a14=(a14+a22);
  a26=(a21*a14);
  a9=(a9+a26);
  a25=(a25+a9);
  a9=-4.5000000000000001e-01;
  a26=(a9*a4);
  a27=-3.0499999999999999e-02;
  a28=(a27*a13);
  a26=(a26+a28);
  a26=(a26-a15);
  a15=(a26*a21);
  a16=(a9*a16);
  a28=(a27*a21);
  a16=(a16+a28);
  a5=(a5+a16);
  a16=(a5*a13);
  a15=(a15-a16);
  a16=(a25*a15);
  a28=(a3*a18);
  a29=(a10*a2);
  a28=(a28+a29);
  a29=(a28*a1);
  a10=(a10*a18);
  a30=(a3*a2);
  a10=(a10-a30);
  a30=(a10*a20);
  a29=(a29+a30);
  a3=(a9*a3);
  a24=(a24+a3);
  a3=(a24*a13);
  a30=(a29*a3);
  a16=(a16-a30);
  a30=(a27*a6);
  a30=(a30-a8);
  a8=(a18*a30);
  a27=(a27*a17);
  a22=(a9*a22);
  a27=(a27-a22);
  a12=(a12+a27);
  a27=(a2*a12);
  a8=(a8-a27);
  a27=(a28*a8);
  a30=(a2*a30);
  a12=(a18*a12);
  a30=(a30+a12);
  a12=(a10*a30);
  a27=(a27-a12);
  a12=(a26*a25);
  a22=(a4*a18);
  a17=(a11*a2);
  a22=(a22+a17);
  a17=(a22*a1);
  a11=(a11*a18);
  a4=(a4*a2);
  a11=(a11-a4);
  a4=(a11*a20);
  a2=(a13*a14);
  a4=(a4+a2);
  a17=(a17+a4);
  a4=(a5*a17);
  a12=(a12-a4);
  a27=(a27+a12);
  a12=(a27*a21);
  a16=(a16-a12);
  if (res[0]!=0) res[0][12]=a16;
  a27=(a27*a13);
  a16=(a24*a21);
  a12=(a29*a16);
  a15=(a17*a15);
  a12=(a12+a15);
  a27=(a27-a12);
  if (res[0]!=0) res[0][13]=a27;
  a27=(a22*a8);
  a12=(a11*a30);
  a9=(a9*a6);
  a7=(a7+a9);
  a9=(a13*a7);
  a12=(a12+a9);
  a27=(a27-a12);
  a12=(a5*a29);
  a9=(a24*a25);
  a12=(a12-a9);
  a27=(a27+a12);
  a27=(a27*a21);
  a12=(a23*a8);
  a9=(a19*a30);
  a6=(a21*a7);
  a9=(a9+a6);
  a12=(a12-a9);
  a9=(a24*a17);
  a6=(a26*a29);
  a9=(a9-a6);
  a12=(a12+a9);
  a12=(a12*a13);
  a27=(a27-a12);
  a3=(a17*a3);
  a16=(a25*a16);
  a3=(a3+a16);
  a27=(a27+a3);
  if (res[0]!=0) res[0][14]=a27;
  a27=(a29*a21);
  a27=(-a27);
  if (res[0]!=0) res[0][15]=a27;
  a29=(a29*a13);
  if (res[0]!=0) res[0][16]=a29;
  a17=(a17*a21);
  a25=(a25*a13);
  a17=(a17-a25);
  if (res[0]!=0) res[0][17]=a17;
  a17=arg[0]? arg[0][3] : 0;
  a25=cos(a17);
  a29=(a0*a25);
  a27=-2.2204460492503131e-16;
  a17=sin(a17);
  a3=(a27*a17);
  a29=(a29+a3);
  a3=(a23*a29);
  a16=(a19*a25);
  a12=(a21*a17);
  a16=(a16-a12);
  a3=(a3+a16);
  a16=-7.4999999999999997e-02;
  a12=(a16*a20);
  a8=(a8+a12);
  a12=(a29*a8);
  a9=-2.6700000000000002e-01;
  a6=(a9*a20);
  a7=(a7+a6);
  a6=(a17*a7);
  a15=(a16*a1);
  a4=(a9*a14);
  a15=(a15-a4);
  a30=(a30+a15);
  a15=(a25*a30);
  a6=(a6-a15);
  a12=(a12+a6);
  a6=(a3*a12);
  a15=(a27*a25);
  a4=(a0*a17);
  a15=(a15-a4);
  a4=(a23*a15);
  a2=(a19*a17);
  a18=(a21*a25);
  a2=(a2+a18);
  a4=(a4-a2);
  a2=(a15*a8);
  a18=(a17*a30);
  a31=(a25*a7);
  a18=(a18+a31);
  a2=(a2+a18);
  a18=(a4*a2);
  a19=(a0*a19);
  a31=(a0*a21);
  a19=(a19+a31);
  a19=(a19-a23);
  a30=(a0*a30);
  a7=(a0*a7);
  a30=(a30+a7);
  a8=(a8+a30);
  a30=(a19*a8);
  a18=(a18-a30);
  a6=(a6+a18);
  a18=(a9*a28);
  a24=(a24+a18);
  a18=(a22*a29);
  a30=(a11*a25);
  a7=(a13*a17);
  a30=(a30-a7);
  a18=(a18+a30);
  a30=(a29*a1);
  a7=(a25*a20);
  a31=(a17*a14);
  a7=(a7-a31);
  a30=(a30+a7);
  a7=(a18*a30);
  a31=(a22*a15);
  a32=(a11*a17);
  a33=(a13*a25);
  a32=(a32+a33);
  a31=(a31-a32);
  a32=(a15*a1);
  a33=(a17*a20);
  a34=(a25*a14);
  a33=(a33+a34);
  a32=(a32-a33);
  a33=(a31*a32);
  a11=(a0*a11);
  a34=(a0*a13);
  a11=(a11+a34);
  a11=(a11-a22);
  a34=arg[1]? arg[1][3] : 0;
  a20=(a0*a20);
  a14=(a0*a14);
  a20=(a20+a14);
  a20=(a20-a1);
  a34=(a34+a20);
  a20=(a11*a34);
  a33=(a33+a20);
  a7=(a7+a33);
  a33=(a24*a7);
  a22=(a9*a22);
  a13=(a16*a13);
  a22=(a22+a13);
  a26=(a26+a22);
  a29=(a28*a29);
  a25=(a10*a25);
  a29=(a29+a25);
  a25=(a29*a30);
  a15=(a28*a15);
  a17=(a10*a17);
  a15=(a15-a17);
  a17=(a15*a32);
  a10=(a0*a10);
  a10=(a10-a28);
  a28=(a10*a34);
  a17=(a17+a28);
  a25=(a25+a17);
  a17=(a26*a25);
  a33=(a33-a17);
  a6=(a6+a33);
  a33=(a6*a10);
  a17=(a29*a12);
  a28=(a15*a2);
  a22=(a10*a8);
  a28=(a28-a22);
  a17=(a17+a28);
  a28=(a3*a30);
  a22=(a4*a32);
  a13=(a19*a34);
  a22=(a22+a13);
  a28=(a28+a22);
  a22=(a26*a28);
  a9=(a9*a23);
  a16=(a16*a21);
  a9=(a9+a16);
  a5=(a5+a9);
  a9=(a5*a7);
  a22=(a22-a9);
  a17=(a17+a22);
  a22=(a17*a19);
  a33=(a33-a22);
  a22=(a26*a19);
  a9=(a5*a11);
  a22=(a22-a9);
  a9=(a28*a22);
  a16=(a24*a11);
  a21=(a26*a10);
  a16=(a16-a21);
  a21=(a25*a16);
  a9=(a9-a21);
  a33=(a33+a9);
  if (res[0]!=0) res[0][18]=a33;
  a17=(a17*a11);
  a33=(a18*a12);
  a9=(a31*a2);
  a21=(a11*a8);
  a9=(a9-a21);
  a33=(a33+a9);
  a9=(a5*a25);
  a21=(a24*a28);
  a9=(a9-a21);
  a33=(a33+a9);
  a9=(a33*a10);
  a17=(a17-a9);
  a9=(a5*a10);
  a21=(a24*a19);
  a9=(a9-a21);
  a21=(a25*a9);
  a22=(a7*a22);
  a21=(a21-a22);
  a17=(a17+a21);
  if (res[0]!=0) res[0][19]=a17;
  a33=(a33*a19);
  a6=(a6*a11);
  a33=(a33-a6);
  a16=(a7*a16);
  a9=(a28*a9);
  a16=(a16-a9);
  a33=(a33+a16);
  if (res[0]!=0) res[0][20]=a33;
  a33=(a28*a10);
  a16=(a25*a19);
  a33=(a33-a16);
  if (res[0]!=0) res[0][21]=a33;
  a25=(a25*a11);
  a33=(a7*a10);
  a25=(a25-a33);
  if (res[0]!=0) res[0][22]=a25;
  a7=(a7*a19);
  a28=(a28*a11);
  a7=(a7-a28);
  if (res[0]!=0) res[0][23]=a7;
  a7=arg[0]? arg[0][4] : 0;
  a28=cos(a7);
  a25=(a0*a28);
  a7=sin(a7);
  a25=(a25+a7);
  a33=(a3*a25);
  a16=(a0*a7);
  a9=(a4*a16);
  a6=(a0*a7);
  a6=(a6-a28);
  a17=(a19*a6);
  a9=(a9+a17);
  a33=(a33+a9);
  a9=-1.1400000000000000e-01;
  a17=(a9*a34);
  a21=8.3000000000000004e-02;
  a22=(a21*a32);
  a17=(a17-a22);
  a12=(a12-a17);
  a17=(a25*a12);
  a22=(a21*a30);
  a2=(a2-a22);
  a22=(a16*a2);
  a23=(a9*a30);
  a23=(a23-a8);
  a8=(a6*a23);
  a22=(a22+a8);
  a17=(a17+a22);
  a22=(a33*a17);
  a8=(a0*a7);
  a8=(a28-a8);
  a13=(a3*a8);
  a20=(a0*a28);
  a1=(a4*a20);
  a28=(a0*a28);
  a7=(a7+a28);
  a28=(a19*a7);
  a1=(a1+a28);
  a13=(a13+a1);
  a1=(a8*a12);
  a28=(a20*a2);
  a23=(a7*a23);
  a28=(a28+a23);
  a1=(a1+a28);
  a28=(a13*a1);
  a3=(a0*a3);
  a3=(a3-a4);
  a12=(a0*a12);
  a12=(a12-a2);
  a2=(a3*a12);
  a28=(a28+a2);
  a22=(a22+a28);
  a28=(a9*a15);
  a2=(a21*a10);
  a28=(a28+a2);
  a24=(a24+a28);
  a28=(a18*a25);
  a2=(a31*a16);
  a23=(a11*a6);
  a2=(a2+a23);
  a28=(a28+a2);
  a2=(a25*a30);
  a23=(a16*a32);
  a14=(a6*a34);
  a23=(a23+a14);
  a2=(a2+a23);
  a23=(a28*a2);
  a14=(a18*a8);
  a35=(a31*a20);
  a36=(a11*a7);
  a35=(a35+a36);
  a14=(a14+a35);
  a35=(a8*a30);
  a36=(a20*a32);
  a34=(a7*a34);
  a36=(a36+a34);
  a35=(a35+a36);
  a36=(a14*a35);
  a18=(a0*a18);
  a18=(a18-a31);
  a34=arg[1]? arg[1][4] : 0;
  a30=(a0*a30);
  a30=(a30-a32);
  a34=(a34+a30);
  a30=(a18*a34);
  a36=(a36+a30);
  a23=(a23+a36);
  a36=(a24*a23);
  a31=(a9*a31);
  a11=(a21*a11);
  a31=(a31+a11);
  a26=(a26+a31);
  a25=(a29*a25);
  a16=(a15*a16);
  a6=(a10*a6);
  a16=(a16+a6);
  a25=(a25+a16);
  a16=(a25*a2);
  a8=(a29*a8);
  a20=(a15*a20);
  a10=(a10*a7);
  a20=(a20+a10);
  a8=(a8+a20);
  a20=(a8*a35);
  a29=(a0*a29);
  a29=(a29-a15);
  a15=(a29*a34);
  a20=(a20+a15);
  a16=(a16+a20);
  a20=(a26*a16);
  a36=(a36-a20);
  a22=(a22+a36);
  a36=(a22*a29);
  a20=(a25*a17);
  a15=(a8*a1);
  a10=(a29*a12);
  a15=(a15+a10);
  a20=(a20+a15);
  a15=(a33*a2);
  a10=(a13*a35);
  a7=(a3*a34);
  a10=(a10+a7);
  a15=(a15+a10);
  a10=(a26*a15);
  a9=(a9*a4);
  a21=(a21*a19);
  a9=(a9+a21);
  a5=(a5+a9);
  a9=(a5*a23);
  a10=(a10-a9);
  a20=(a20+a10);
  a10=(a20*a3);
  a36=(a36-a10);
  a10=(a26*a3);
  a9=(a5*a18);
  a10=(a10-a9);
  a9=(a15*a10);
  a21=(a24*a18);
  a19=(a26*a29);
  a21=(a21-a19);
  a19=(a16*a21);
  a9=(a9-a19);
  a36=(a36+a9);
  if (res[0]!=0) res[0][24]=a36;
  a20=(a20*a18);
  a36=(a28*a17);
  a9=(a14*a1);
  a19=(a18*a12);
  a9=(a9+a19);
  a36=(a36+a9);
  a9=(a5*a16);
  a19=(a24*a15);
  a9=(a9-a19);
  a36=(a36+a9);
  a9=(a36*a29);
  a20=(a20-a9);
  a9=(a5*a29);
  a19=(a24*a3);
  a9=(a9-a19);
  a19=(a16*a9);
  a10=(a23*a10);
  a19=(a19-a10);
  a20=(a20+a19);
  if (res[0]!=0) res[0][25]=a20;
  a36=(a36*a3);
  a22=(a22*a18);
  a36=(a36-a22);
  a21=(a23*a21);
  a9=(a15*a9);
  a21=(a21-a9);
  a36=(a36+a21);
  if (res[0]!=0) res[0][26]=a36;
  a36=(a15*a29);
  a21=(a16*a3);
  a36=(a36-a21);
  if (res[0]!=0) res[0][27]=a36;
  a16=(a16*a18);
  a36=(a23*a29);
  a16=(a16-a36);
  if (res[0]!=0) res[0][28]=a16;
  a23=(a23*a3);
  a15=(a15*a18);
  a23=(a23-a15);
  if (res[0]!=0) res[0][29]=a23;
  a23=arg[0]? arg[0][5] : 0;
  a15=cos(a23);
  a16=(a0*a15);
  a23=sin(a23);
  a36=(a27*a23);
  a16=(a16+a36);
  a36=(a33*a16);
  a21=(a13*a15);
  a9=(a3*a23);
  a21=(a21-a9);
  a36=(a36+a21);
  a21=6.9000000000000006e-02;
  a9=(a21*a35);
  a17=(a17+a9);
  a9=(a16*a17);
  a22=(a21*a2);
  a20=-1.6800000000000001e-01;
  a19=(a20*a34);
  a22=(a22-a19);
  a1=(a1-a22);
  a22=(a15*a1);
  a19=(a20*a35);
  a12=(a12-a19);
  a19=(a23*a12);
  a22=(a22-a19);
  a9=(a9+a22);
  a22=(a36*a9);
  a27=(a27*a15);
  a19=(a0*a23);
  a27=(a27-a19);
  a19=(a33*a27);
  a10=(a13*a23);
  a4=(a3*a15);
  a10=(a10+a4);
  a19=(a19-a10);
  a10=(a27*a17);
  a4=(a23*a1);
  a7=(a15*a12);
  a4=(a4+a7);
  a10=(a10-a4);
  a4=(a19*a10);
  a13=(a0*a13);
  a7=(a0*a3);
  a13=(a13+a7);
  a13=(a13-a33);
  a1=(a0*a1);
  a12=(a0*a12);
  a1=(a1+a12);
  a1=(a1-a17);
  a17=(a13*a1);
  a4=(a4+a17);
  a22=(a22+a4);
  a4=(a20*a25);
  a17=(a21*a29);
  a4=(a4+a17);
  a24=(a24+a4);
  a4=(a28*a16);
  a17=(a14*a15);
  a12=(a18*a23);
  a17=(a17-a12);
  a4=(a4+a17);
  a17=(a16*a2);
  a12=(a15*a35);
  a7=(a23*a34);
  a12=(a12-a7);
  a17=(a17+a12);
  a12=(a4*a17);
  a7=(a28*a27);
  a6=(a14*a23);
  a31=(a18*a15);
  a6=(a6+a31);
  a7=(a7-a6);
  a6=(a27*a2);
  a31=(a23*a35);
  a11=(a15*a34);
  a31=(a31+a11);
  a6=(a6-a31);
  a31=(a7*a6);
  a14=(a0*a14);
  a11=(a0*a18);
  a14=(a14+a11);
  a14=(a14-a28);
  a11=arg[1]? arg[1][5] : 0;
  a35=(a0*a35);
  a34=(a0*a34);
  a35=(a35+a34);
  a35=(a35-a2);
  a11=(a11+a35);
  a35=(a14*a11);
  a31=(a31+a35);
  a12=(a12+a31);
  a31=(a24*a12);
  a28=(a20*a28);
  a18=(a21*a18);
  a28=(a28+a18);
  a26=(a26+a28);
  a16=(a25*a16);
  a28=(a8*a15);
  a18=(a29*a23);
  a28=(a28-a18);
  a16=(a16+a28);
  a28=(a16*a17);
  a27=(a25*a27);
  a23=(a8*a23);
  a15=(a29*a15);
  a23=(a23+a15);
  a27=(a27-a23);
  a23=(a27*a6);
  a8=(a0*a8);
  a0=(a0*a29);
  a8=(a8+a0);
  a8=(a8-a25);
  a25=(a8*a11);
  a23=(a23+a25);
  a28=(a28+a23);
  a23=(a26*a28);
  a31=(a31-a23);
  a22=(a22+a31);
  a31=(a22*a8);
  a16=(a16*a9);
  a27=(a27*a10);
  a23=(a8*a1);
  a27=(a27+a23);
  a16=(a16+a27);
  a36=(a36*a17);
  a19=(a19*a6);
  a11=(a13*a11);
  a19=(a19+a11);
  a36=(a36+a19);
  a19=(a26*a36);
  a20=(a20*a33);
  a21=(a21*a3);
  a20=(a20+a21);
  a5=(a5+a20);
  a20=(a5*a12);
  a19=(a19-a20);
  a16=(a16+a19);
  a19=(a16*a13);
  a31=(a31-a19);
  a19=(a26*a13);
  a20=(a5*a14);
  a19=(a19-a20);
  a20=(a36*a19);
  a21=(a24*a14);
  a26=(a26*a8);
  a21=(a21-a26);
  a26=(a28*a21);
  a20=(a20-a26);
  a31=(a31+a20);
  if (res[0]!=0) res[0][30]=a31;
  a16=(a16*a14);
  a4=(a4*a9);
  a7=(a7*a10);
  a1=(a14*a1);
  a7=(a7+a1);
  a4=(a4+a7);
  a7=(a5*a28);
  a1=(a24*a36);
  a7=(a7-a1);
  a4=(a4+a7);
  a7=(a4*a8);
  a16=(a16-a7);
  a5=(a5*a8);
  a24=(a24*a13);
  a5=(a5-a24);
  a24=(a28*a5);
  a19=(a12*a19);
  a24=(a24-a19);
  a16=(a16+a24);
  if (res[0]!=0) res[0][31]=a16;
  a4=(a4*a13);
  a22=(a22*a14);
  a4=(a4-a22);
  a21=(a12*a21);
  a5=(a36*a5);
  a21=(a21-a5);
  a4=(a4+a21);
  if (res[0]!=0) res[0][32]=a4;
  a4=(a36*a8);
  a21=(a28*a13);
  a4=(a4-a21);
  if (res[0]!=0) res[0][33]=a4;
  a28=(a28*a14);
  a8=(a12*a8);
  a28=(a28-a8);
  if (res[0]!=0) res[0][34]=a28;
  a12=(a12*a13);
  a36=(a36*a14);
  a12=(a12-a36);
  if (res[0]!=0) res[0][35]=a12;
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_s(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int dJ_s_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_s_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void dJ_s_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int dJ_s_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void dJ_s_release(int mem) {
}

CASADI_SYMBOL_EXPORT void dJ_s_incref(void) {
}

CASADI_SYMBOL_EXPORT void dJ_s_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int dJ_s_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int dJ_s_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real dJ_s_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* dJ_s_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    case 1: return "v";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* dJ_s_name_out(casadi_int i) {
  switch (i) {
    case 0: return "dJ_s";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* dJ_s_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* dJ_s_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int dJ_s_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

CASADI_SYMBOL_EXPORT int dJ_s_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 1*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 0*sizeof(casadi_int);
  if (sz_w) *sz_w = 0*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
