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
  #define CASADI_PREFIX(ID) indy7_dualarm_fk_ ## ID
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

static const casadi_int casadi_s0[16] = {12, 1, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
static const casadi_int casadi_s1[23] = {4, 4, 0, 4, 8, 12, 16, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};

/* fk_T:(q[12])->(T_joint0_l[4x4],T_joint1_l[4x4],T_joint2_l[4x4],T_joint3_l[4x4],T_joint4_l[4x4],T_joint5_l[4x4],T_indy7_tcp_l[4x4],T_joint0_r[4x4],T_joint1_r[4x4],T_joint2_r[4x4],T_joint3_r[4x4],T_joint4_r[4x4],T_joint5_r[4x4],T_indy7_tcp_r[4x4]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a4, a5, a6, a7, a8, a9;
  a0=-9.9999999999978684e-01;
  a1=arg[0]? arg[0][0] : 0;
  a2=cos(a1);
  a3=(a0*a2);
  a4=3.2680208626310674e-07;
  a1=sin(a1);
  a5=(a4*a1);
  a3=(a3+a5);
  if (res[0]!=0) res[0][0]=a3;
  a5=6.5358979307624197e-07;
  a6=(a5*a2);
  a7=5.0001100036290658e-01;
  a8=(a7*a1);
  a6=(a6+a8);
  if (res[0]!=0) res[0][1]=a6;
  a8=8.6601905262873913e-01;
  a9=(a8*a1);
  if (res[0]!=0) res[0][2]=a9;
  a10=0.;
  if (res[0]!=0) res[0][3]=a10;
  a4=(a4*a2);
  a0=(a0*a1);
  a4=(a4-a0);
  if (res[0]!=0) res[0][4]=a4;
  a7=(a7*a2);
  a5=(a5*a1);
  a7=(a7-a5);
  if (res[0]!=0) res[0][5]=a7;
  a8=(a8*a2);
  if (res[0]!=0) res[0][6]=a8;
  if (res[0]!=0) res[0][7]=a10;
  a2=5.6602121340770061e-07;
  if (res[0]!=0) res[0][8]=a2;
  a5=8.6601905262855416e-01;
  if (res[0]!=0) res[0][9]=a5;
  a1=-5.0001100036301360e-01;
  if (res[0]!=0) res[0][10]=a1;
  if (res[0]!=0) res[0][11]=a10;
  a0=4.3866644039096795e-08;
  if (res[0]!=0) res[0][12]=a0;
  a11=2.2221647657871293e-01;
  if (res[0]!=0) res[0][13]=a11;
  a12=1.2536491474718665e+00;
  if (res[0]!=0) res[0][14]=a12;
  a13=1.;
  if (res[0]!=0) res[0][15]=a13;
  a14=2.2204460492503131e-16;
  a15=arg[0]? arg[0][1] : 0;
  a16=cos(a15);
  a17=(a14*a16);
  a15=sin(a15);
  a17=(a17+a15);
  a18=(a3*a17);
  a19=(a14*a15);
  a20=(a4*a19);
  a21=(a14*a15);
  a21=(a21-a16);
  a22=(a2*a21);
  a20=(a20+a22);
  a18=(a18+a20);
  if (res[1]!=0) res[1][0]=a18;
  a20=(a6*a17);
  a22=(a7*a19);
  a23=(a5*a21);
  a22=(a22+a23);
  a20=(a20+a22);
  if (res[1]!=0) res[1][1]=a20;
  a17=(a9*a17);
  a19=(a8*a19);
  a21=(a1*a21);
  a19=(a19+a21);
  a17=(a17+a19);
  if (res[1]!=0) res[1][2]=a17;
  if (res[1]!=0) res[1][3]=a10;
  a19=(a14*a15);
  a19=(a16-a19);
  a21=(a3*a19);
  a22=(a14*a16);
  a23=(a4*a22);
  a16=(a14*a16);
  a15=(a15+a16);
  a2=(a2*a15);
  a23=(a23+a2);
  a21=(a21+a23);
  if (res[1]!=0) res[1][4]=a21;
  a23=(a6*a19);
  a2=(a7*a22);
  a5=(a5*a15);
  a2=(a2+a5);
  a23=(a23+a2);
  if (res[1]!=0) res[1][5]=a23;
  a19=(a9*a19);
  a22=(a8*a22);
  a15=(a1*a15);
  a22=(a22+a15);
  a19=(a19+a22);
  if (res[1]!=0) res[1][6]=a19;
  if (res[1]!=0) res[1][7]=a10;
  a3=(a14*a3);
  a3=(a3-a4);
  if (res[1]!=0) res[1][8]=a3;
  a6=(a14*a6);
  a6=(a6-a7);
  if (res[1]!=0) res[1][9]=a6;
  a9=(a14*a9);
  a9=(a9-a8);
  if (res[1]!=0) res[1][10]=a9;
  if (res[1]!=0) res[1][11]=a10;
  a22=-1.0900000000000000e-01;
  a4=(a22*a4);
  a15=1.2565670937650953e-07;
  a4=(a4+a15);
  a0=(a0+a4);
  if (res[1]!=0) res[1][12]=a0;
  a7=(a22*a7);
  a4=1.9225622968353903e-01;
  a7=(a7+a4);
  a11=(a11+a7);
  if (res[1]!=0) res[1][13]=a11;
  a8=(a22*a8);
  a7=-1.1100244208058901e-01;
  a8=(a8+a7);
  a8=(a12+a8);
  if (res[1]!=0) res[1][14]=a8;
  if (res[1]!=0) res[1][15]=a13;
  a4=arg[0]? arg[0][2] : 0;
  a15=cos(a4);
  a2=(a18*a15);
  a4=sin(a4);
  a5=(a21*a4);
  a2=(a2+a5);
  if (res[2]!=0) res[2][0]=a2;
  a5=(a20*a15);
  a16=(a23*a4);
  a5=(a5+a16);
  if (res[2]!=0) res[2][1]=a5;
  a16=(a17*a15);
  a24=(a19*a4);
  a16=(a16+a24);
  if (res[2]!=0) res[2][2]=a16;
  if (res[2]!=0) res[2][3]=a10;
  a21=(a21*a15);
  a24=(a18*a4);
  a21=(a21-a24);
  if (res[2]!=0) res[2][4]=a21;
  a23=(a23*a15);
  a24=(a20*a4);
  a23=(a23-a24);
  if (res[2]!=0) res[2][5]=a23;
  a19=(a19*a15);
  a4=(a17*a4);
  a19=(a19-a4);
  if (res[2]!=0) res[2][6]=a19;
  if (res[2]!=0) res[2][7]=a10;
  if (res[2]!=0) res[2][8]=a3;
  if (res[2]!=0) res[2][9]=a6;
  if (res[2]!=0) res[2][10]=a9;
  if (res[2]!=0) res[2][11]=a10;
  a4=-4.5000000000000001e-01;
  a18=(a4*a18);
  a15=-3.0499999999999999e-02;
  a24=(a15*a3);
  a18=(a18+a24);
  a0=(a0+a18);
  if (res[2]!=0) res[2][12]=a0;
  a20=(a4*a20);
  a18=(a15*a6);
  a20=(a20+a18);
  a11=(a11+a20);
  if (res[2]!=0) res[2][13]=a11;
  a17=(a4*a17);
  a20=(a15*a9);
  a17=(a17+a20);
  a8=(a8+a17);
  if (res[2]!=0) res[2][14]=a8;
  if (res[2]!=0) res[2][15]=a13;
  a17=arg[0]? arg[0][3] : 0;
  a20=cos(a17);
  a18=(a14*a20);
  a24=-2.2204460492503131e-16;
  a17=sin(a17);
  a25=(a24*a17);
  a18=(a18+a25);
  a25=(a2*a18);
  a26=(a21*a20);
  a27=(a3*a17);
  a26=(a26-a27);
  a25=(a25+a26);
  if (res[3]!=0) res[3][0]=a25;
  a26=(a5*a18);
  a27=(a23*a20);
  a28=(a6*a17);
  a27=(a27-a28);
  a26=(a26+a27);
  if (res[3]!=0) res[3][1]=a26;
  a18=(a16*a18);
  a27=(a19*a20);
  a28=(a9*a17);
  a27=(a27-a28);
  a18=(a18+a27);
  if (res[3]!=0) res[3][2]=a18;
  if (res[3]!=0) res[3][3]=a10;
  a27=(a24*a20);
  a28=(a14*a17);
  a27=(a27-a28);
  a28=(a2*a27);
  a29=(a21*a17);
  a30=(a3*a20);
  a29=(a29+a30);
  a28=(a28-a29);
  if (res[3]!=0) res[3][4]=a28;
  a29=(a5*a27);
  a30=(a23*a17);
  a31=(a6*a20);
  a30=(a30+a31);
  a29=(a29-a30);
  if (res[3]!=0) res[3][5]=a29;
  a27=(a16*a27);
  a17=(a19*a17);
  a20=(a9*a20);
  a17=(a17+a20);
  a27=(a27-a17);
  if (res[3]!=0) res[3][6]=a27;
  if (res[3]!=0) res[3][7]=a10;
  a21=(a14*a21);
  a17=(a14*a3);
  a21=(a21+a17);
  a21=(a21-a2);
  if (res[3]!=0) res[3][8]=a21;
  a23=(a14*a23);
  a17=(a14*a6);
  a23=(a23+a17);
  a23=(a23-a5);
  if (res[3]!=0) res[3][9]=a23;
  a19=(a14*a19);
  a17=(a14*a9);
  a19=(a19+a17);
  a19=(a19-a16);
  if (res[3]!=0) res[3][10]=a19;
  if (res[3]!=0) res[3][11]=a10;
  a17=-2.6700000000000002e-01;
  a2=(a17*a2);
  a20=-7.4999999999999997e-02;
  a3=(a20*a3);
  a2=(a2+a3);
  a0=(a0+a2);
  if (res[3]!=0) res[3][12]=a0;
  a5=(a17*a5);
  a6=(a20*a6);
  a5=(a5+a6);
  a11=(a11+a5);
  if (res[3]!=0) res[3][13]=a11;
  a16=(a17*a16);
  a9=(a20*a9);
  a16=(a16+a9);
  a8=(a8+a16);
  if (res[3]!=0) res[3][14]=a8;
  if (res[3]!=0) res[3][15]=a13;
  a16=arg[0]? arg[0][4] : 0;
  a9=cos(a16);
  a5=(a14*a9);
  a16=sin(a16);
  a5=(a5+a16);
  a6=(a25*a5);
  a2=(a14*a16);
  a3=(a28*a2);
  a30=(a14*a16);
  a30=(a30-a9);
  a31=(a21*a30);
  a3=(a3+a31);
  a6=(a6+a3);
  if (res[4]!=0) res[4][0]=a6;
  a3=(a26*a5);
  a31=(a29*a2);
  a32=(a23*a30);
  a31=(a31+a32);
  a3=(a3+a31);
  if (res[4]!=0) res[4][1]=a3;
  a5=(a18*a5);
  a2=(a27*a2);
  a30=(a19*a30);
  a2=(a2+a30);
  a5=(a5+a2);
  if (res[4]!=0) res[4][2]=a5;
  if (res[4]!=0) res[4][3]=a10;
  a2=(a14*a16);
  a2=(a9-a2);
  a30=(a25*a2);
  a31=(a14*a9);
  a32=(a28*a31);
  a9=(a14*a9);
  a16=(a16+a9);
  a9=(a21*a16);
  a32=(a32+a9);
  a30=(a30+a32);
  if (res[4]!=0) res[4][4]=a30;
  a32=(a26*a2);
  a9=(a29*a31);
  a33=(a23*a16);
  a9=(a9+a33);
  a32=(a32+a9);
  if (res[4]!=0) res[4][5]=a32;
  a2=(a18*a2);
  a31=(a27*a31);
  a16=(a19*a16);
  a31=(a31+a16);
  a2=(a2+a31);
  if (res[4]!=0) res[4][6]=a2;
  if (res[4]!=0) res[4][7]=a10;
  a25=(a14*a25);
  a25=(a25-a28);
  if (res[4]!=0) res[4][8]=a25;
  a26=(a14*a26);
  a26=(a26-a29);
  if (res[4]!=0) res[4][9]=a26;
  a18=(a14*a18);
  a18=(a18-a27);
  if (res[4]!=0) res[4][10]=a18;
  if (res[4]!=0) res[4][11]=a10;
  a31=-1.1400000000000000e-01;
  a28=(a31*a28);
  a16=8.3000000000000004e-02;
  a21=(a16*a21);
  a28=(a28+a21);
  a0=(a0+a28);
  if (res[4]!=0) res[4][12]=a0;
  a29=(a31*a29);
  a23=(a16*a23);
  a29=(a29+a23);
  a11=(a11+a29);
  if (res[4]!=0) res[4][13]=a11;
  a27=(a31*a27);
  a19=(a16*a19);
  a27=(a27+a19);
  a8=(a8+a27);
  if (res[4]!=0) res[4][14]=a8;
  if (res[4]!=0) res[4][15]=a13;
  a27=arg[0]? arg[0][5] : 0;
  a19=cos(a27);
  a29=(a14*a19);
  a27=sin(a27);
  a23=(a24*a27);
  a29=(a29+a23);
  a23=(a6*a29);
  a28=(a30*a19);
  a21=(a25*a27);
  a28=(a28-a21);
  a23=(a23+a28);
  if (res[5]!=0) res[5][0]=a23;
  a28=(a3*a29);
  a21=(a32*a19);
  a9=(a26*a27);
  a21=(a21-a9);
  a28=(a28+a21);
  if (res[5]!=0) res[5][1]=a28;
  a29=(a5*a29);
  a21=(a2*a19);
  a9=(a18*a27);
  a21=(a21-a9);
  a29=(a29+a21);
  if (res[5]!=0) res[5][2]=a29;
  if (res[5]!=0) res[5][3]=a10;
  a21=(a24*a19);
  a9=(a14*a27);
  a21=(a21-a9);
  a9=(a6*a21);
  a33=(a30*a27);
  a34=(a25*a19);
  a33=(a33+a34);
  a9=(a9-a33);
  if (res[5]!=0) res[5][4]=a9;
  a33=(a3*a21);
  a34=(a32*a27);
  a35=(a26*a19);
  a34=(a34+a35);
  a33=(a33-a34);
  if (res[5]!=0) res[5][5]=a33;
  a21=(a5*a21);
  a27=(a2*a27);
  a19=(a18*a19);
  a27=(a27+a19);
  a21=(a21-a27);
  if (res[5]!=0) res[5][6]=a21;
  if (res[5]!=0) res[5][7]=a10;
  a30=(a14*a30);
  a27=(a14*a25);
  a30=(a30+a27);
  a30=(a30-a6);
  if (res[5]!=0) res[5][8]=a30;
  a32=(a14*a32);
  a27=(a14*a26);
  a32=(a32+a27);
  a32=(a32-a3);
  if (res[5]!=0) res[5][9]=a32;
  a2=(a14*a2);
  a27=(a14*a18);
  a2=(a2+a27);
  a2=(a2-a5);
  if (res[5]!=0) res[5][10]=a2;
  if (res[5]!=0) res[5][11]=a10;
  a27=-1.6800000000000001e-01;
  a6=(a27*a6);
  a19=6.9000000000000006e-02;
  a25=(a19*a25);
  a6=(a6+a25);
  a0=(a0+a6);
  if (res[5]!=0) res[5][12]=a0;
  a3=(a27*a3);
  a26=(a19*a26);
  a3=(a3+a26);
  a11=(a11+a3);
  if (res[5]!=0) res[5][13]=a11;
  a5=(a27*a5);
  a18=(a19*a18);
  a5=(a5+a18);
  a8=(a8+a5);
  if (res[5]!=0) res[5][14]=a8;
  if (res[5]!=0) res[5][15]=a13;
  if (res[6]!=0) res[6][0]=a23;
  if (res[6]!=0) res[6][1]=a28;
  if (res[6]!=0) res[6][2]=a29;
  if (res[6]!=0) res[6][3]=a10;
  if (res[6]!=0) res[6][4]=a9;
  if (res[6]!=0) res[6][5]=a33;
  if (res[6]!=0) res[6][6]=a21;
  if (res[6]!=0) res[6][7]=a10;
  if (res[6]!=0) res[6][8]=a30;
  if (res[6]!=0) res[6][9]=a32;
  if (res[6]!=0) res[6][10]=a2;
  if (res[6]!=0) res[6][11]=a10;
  a21=5.9999999999999998e-02;
  a30=(a21*a30);
  a0=(a0+a30);
  if (res[6]!=0) res[6][12]=a0;
  a32=(a21*a32);
  a11=(a11+a32);
  if (res[6]!=0) res[6][13]=a11;
  a2=(a21*a2);
  a8=(a8+a2);
  if (res[6]!=0) res[6][14]=a8;
  if (res[6]!=0) res[6][15]=a13;
  a8=arg[0]? arg[0][6] : 0;
  a2=cos(a8);
  if (res[7]!=0) res[7][0]=a2;
  a8=sin(a8);
  a11=(a1*a8);
  if (res[7]!=0) res[7][1]=a11;
  a32=8.6601905262873902e-01;
  a0=(a32*a8);
  if (res[7]!=0) res[7][2]=a0;
  if (res[7]!=0) res[7][3]=a10;
  a30=(-a8);
  if (res[7]!=0) res[7][4]=a30;
  a30=(a1*a2);
  if (res[7]!=0) res[7][5]=a30;
  a32=(a32*a2);
  if (res[7]!=0) res[7][6]=a32;
  if (res[7]!=0) res[7][7]=a10;
  if (res[7]!=0) res[7][8]=a10;
  a33=-8.6601905262873902e-01;
  if (res[7]!=0) res[7][9]=a33;
  if (res[7]!=0) res[7][10]=a1;
  if (res[7]!=0) res[7][11]=a10;
  if (res[7]!=0) res[7][12]=a10;
  a9=-2.2221647657872726e-01;
  if (res[7]!=0) res[7][13]=a9;
  if (res[7]!=0) res[7][14]=a12;
  if (res[7]!=0) res[7][15]=a13;
  a29=arg[0]? arg[0][7] : 0;
  a28=cos(a29);
  a23=(a14*a28);
  a29=sin(a29);
  a23=(a23+a29);
  a5=(a2*a23);
  a18=(a14*a29);
  a3=(a8*a18);
  a5=(a5-a3);
  if (res[8]!=0) res[8][0]=a5;
  a3=(a11*a23);
  a26=(a30*a18);
  a6=(a14*a29);
  a6=(a6-a28);
  a25=(a33*a6);
  a26=(a26+a25);
  a3=(a3+a26);
  if (res[8]!=0) res[8][1]=a3;
  a23=(a0*a23);
  a18=(a32*a18);
  a6=(a1*a6);
  a18=(a18+a6);
  a23=(a23+a18);
  if (res[8]!=0) res[8][2]=a23;
  if (res[8]!=0) res[8][3]=a10;
  a18=(a14*a29);
  a18=(a28-a18);
  a6=(a2*a18);
  a26=(a14*a28);
  a25=(a8*a26);
  a6=(a6-a25);
  if (res[8]!=0) res[8][4]=a6;
  a25=(a11*a18);
  a34=(a30*a26);
  a28=(a14*a28);
  a29=(a29+a28);
  a33=(a33*a29);
  a34=(a34+a33);
  a25=(a25+a34);
  if (res[8]!=0) res[8][5]=a25;
  a18=(a0*a18);
  a26=(a32*a26);
  a1=(a1*a29);
  a26=(a26+a1);
  a18=(a18+a26);
  if (res[8]!=0) res[8][6]=a18;
  if (res[8]!=0) res[8][7]=a10;
  a2=(a14*a2);
  a2=(a2+a8);
  if (res[8]!=0) res[8][8]=a2;
  a11=(a14*a11);
  a11=(a11-a30);
  if (res[8]!=0) res[8][9]=a11;
  a0=(a14*a0);
  a0=(a0-a32);
  if (res[8]!=0) res[8][10]=a0;
  if (res[8]!=0) res[8][11]=a10;
  a8=(a22*a8);
  a26=(-a8);
  if (res[8]!=0) res[8][12]=a26;
  a30=(a22*a30);
  a26=-1.9225622968358005e-01;
  a30=(a30+a26);
  a9=(a9+a30);
  if (res[8]!=0) res[8][13]=a9;
  a22=(a22*a32);
  a22=(a22+a7);
  a12=(a12+a22);
  if (res[8]!=0) res[8][14]=a12;
  if (res[8]!=0) res[8][15]=a13;
  a22=arg[0]? arg[0][8] : 0;
  a7=cos(a22);
  a32=(a5*a7);
  a22=sin(a22);
  a30=(a6*a22);
  a32=(a32+a30);
  if (res[9]!=0) res[9][0]=a32;
  a30=(a3*a7);
  a26=(a25*a22);
  a30=(a30+a26);
  if (res[9]!=0) res[9][1]=a30;
  a26=(a23*a7);
  a1=(a18*a22);
  a26=(a26+a1);
  if (res[9]!=0) res[9][2]=a26;
  if (res[9]!=0) res[9][3]=a10;
  a6=(a6*a7);
  a1=(a5*a22);
  a6=(a6-a1);
  if (res[9]!=0) res[9][4]=a6;
  a25=(a25*a7);
  a1=(a3*a22);
  a25=(a25-a1);
  if (res[9]!=0) res[9][5]=a25;
  a18=(a18*a7);
  a22=(a23*a22);
  a18=(a18-a22);
  if (res[9]!=0) res[9][6]=a18;
  if (res[9]!=0) res[9][7]=a10;
  if (res[9]!=0) res[9][8]=a2;
  if (res[9]!=0) res[9][9]=a11;
  if (res[9]!=0) res[9][10]=a0;
  if (res[9]!=0) res[9][11]=a10;
  a5=(a4*a5);
  a22=(a15*a2);
  a5=(a5+a22);
  a5=(a5-a8);
  if (res[9]!=0) res[9][12]=a5;
  a3=(a4*a3);
  a8=(a15*a11);
  a3=(a3+a8);
  a9=(a9+a3);
  if (res[9]!=0) res[9][13]=a9;
  a4=(a4*a23);
  a15=(a15*a0);
  a4=(a4+a15);
  a12=(a12+a4);
  if (res[9]!=0) res[9][14]=a12;
  if (res[9]!=0) res[9][15]=a13;
  a4=arg[0]? arg[0][9] : 0;
  a15=cos(a4);
  a23=(a14*a15);
  a4=sin(a4);
  a3=(a24*a4);
  a23=(a23+a3);
  a3=(a32*a23);
  a8=(a6*a15);
  a22=(a2*a4);
  a8=(a8-a22);
  a3=(a3+a8);
  if (res[10]!=0) res[10][0]=a3;
  a8=(a30*a23);
  a22=(a25*a15);
  a7=(a11*a4);
  a22=(a22-a7);
  a8=(a8+a22);
  if (res[10]!=0) res[10][1]=a8;
  a23=(a26*a23);
  a22=(a18*a15);
  a7=(a0*a4);
  a22=(a22-a7);
  a23=(a23+a22);
  if (res[10]!=0) res[10][2]=a23;
  if (res[10]!=0) res[10][3]=a10;
  a22=(a24*a15);
  a7=(a14*a4);
  a22=(a22-a7);
  a7=(a32*a22);
  a1=(a6*a4);
  a29=(a2*a15);
  a1=(a1+a29);
  a7=(a7-a1);
  if (res[10]!=0) res[10][4]=a7;
  a1=(a30*a22);
  a29=(a25*a4);
  a34=(a11*a15);
  a29=(a29+a34);
  a1=(a1-a29);
  if (res[10]!=0) res[10][5]=a1;
  a22=(a26*a22);
  a4=(a18*a4);
  a15=(a0*a15);
  a4=(a4+a15);
  a22=(a22-a4);
  if (res[10]!=0) res[10][6]=a22;
  if (res[10]!=0) res[10][7]=a10;
  a6=(a14*a6);
  a4=(a14*a2);
  a6=(a6+a4);
  a6=(a6-a32);
  if (res[10]!=0) res[10][8]=a6;
  a25=(a14*a25);
  a4=(a14*a11);
  a25=(a25+a4);
  a25=(a25-a30);
  if (res[10]!=0) res[10][9]=a25;
  a18=(a14*a18);
  a4=(a14*a0);
  a18=(a18+a4);
  a18=(a18-a26);
  if (res[10]!=0) res[10][10]=a18;
  if (res[10]!=0) res[10][11]=a10;
  a32=(a17*a32);
  a2=(a20*a2);
  a32=(a32+a2);
  a5=(a5+a32);
  if (res[10]!=0) res[10][12]=a5;
  a30=(a17*a30);
  a11=(a20*a11);
  a30=(a30+a11);
  a9=(a9+a30);
  if (res[10]!=0) res[10][13]=a9;
  a17=(a17*a26);
  a20=(a20*a0);
  a17=(a17+a20);
  a12=(a12+a17);
  if (res[10]!=0) res[10][14]=a12;
  if (res[10]!=0) res[10][15]=a13;
  a17=arg[0]? arg[0][10] : 0;
  a20=cos(a17);
  a0=(a14*a20);
  a17=sin(a17);
  a0=(a0+a17);
  a26=(a3*a0);
  a30=(a14*a17);
  a11=(a7*a30);
  a32=(a14*a17);
  a32=(a32-a20);
  a2=(a6*a32);
  a11=(a11+a2);
  a26=(a26+a11);
  if (res[11]!=0) res[11][0]=a26;
  a11=(a8*a0);
  a2=(a1*a30);
  a4=(a25*a32);
  a2=(a2+a4);
  a11=(a11+a2);
  if (res[11]!=0) res[11][1]=a11;
  a0=(a23*a0);
  a30=(a22*a30);
  a32=(a18*a32);
  a30=(a30+a32);
  a0=(a0+a30);
  if (res[11]!=0) res[11][2]=a0;
  if (res[11]!=0) res[11][3]=a10;
  a30=(a14*a17);
  a30=(a20-a30);
  a32=(a3*a30);
  a2=(a14*a20);
  a4=(a7*a2);
  a20=(a14*a20);
  a17=(a17+a20);
  a20=(a6*a17);
  a4=(a4+a20);
  a32=(a32+a4);
  if (res[11]!=0) res[11][4]=a32;
  a4=(a8*a30);
  a20=(a1*a2);
  a15=(a25*a17);
  a20=(a20+a15);
  a4=(a4+a20);
  if (res[11]!=0) res[11][5]=a4;
  a30=(a23*a30);
  a2=(a22*a2);
  a17=(a18*a17);
  a2=(a2+a17);
  a30=(a30+a2);
  if (res[11]!=0) res[11][6]=a30;
  if (res[11]!=0) res[11][7]=a10;
  a3=(a14*a3);
  a3=(a3-a7);
  if (res[11]!=0) res[11][8]=a3;
  a8=(a14*a8);
  a8=(a8-a1);
  if (res[11]!=0) res[11][9]=a8;
  a23=(a14*a23);
  a23=(a23-a22);
  if (res[11]!=0) res[11][10]=a23;
  if (res[11]!=0) res[11][11]=a10;
  a7=(a31*a7);
  a6=(a16*a6);
  a7=(a7+a6);
  a5=(a5+a7);
  if (res[11]!=0) res[11][12]=a5;
  a1=(a31*a1);
  a25=(a16*a25);
  a1=(a1+a25);
  a9=(a9+a1);
  if (res[11]!=0) res[11][13]=a9;
  a31=(a31*a22);
  a16=(a16*a18);
  a31=(a31+a16);
  a12=(a12+a31);
  if (res[11]!=0) res[11][14]=a12;
  if (res[11]!=0) res[11][15]=a13;
  a31=arg[0]? arg[0][11] : 0;
  a16=cos(a31);
  a18=(a14*a16);
  a31=sin(a31);
  a22=(a24*a31);
  a18=(a18+a22);
  a22=(a26*a18);
  a1=(a32*a16);
  a25=(a3*a31);
  a1=(a1-a25);
  a22=(a22+a1);
  if (res[12]!=0) res[12][0]=a22;
  a1=(a11*a18);
  a25=(a4*a16);
  a7=(a8*a31);
  a25=(a25-a7);
  a1=(a1+a25);
  if (res[12]!=0) res[12][1]=a1;
  a18=(a0*a18);
  a25=(a30*a16);
  a7=(a23*a31);
  a25=(a25-a7);
  a18=(a18+a25);
  if (res[12]!=0) res[12][2]=a18;
  if (res[12]!=0) res[12][3]=a10;
  a24=(a24*a16);
  a25=(a14*a31);
  a24=(a24-a25);
  a25=(a26*a24);
  a7=(a32*a31);
  a6=(a3*a16);
  a7=(a7+a6);
  a25=(a25-a7);
  if (res[12]!=0) res[12][4]=a25;
  a7=(a11*a24);
  a6=(a4*a31);
  a2=(a8*a16);
  a6=(a6+a2);
  a7=(a7-a6);
  if (res[12]!=0) res[12][5]=a7;
  a24=(a0*a24);
  a31=(a30*a31);
  a16=(a23*a16);
  a31=(a31+a16);
  a24=(a24-a31);
  if (res[12]!=0) res[12][6]=a24;
  if (res[12]!=0) res[12][7]=a10;
  a32=(a14*a32);
  a31=(a14*a3);
  a32=(a32+a31);
  a32=(a32-a26);
  if (res[12]!=0) res[12][8]=a32;
  a4=(a14*a4);
  a31=(a14*a8);
  a4=(a4+a31);
  a4=(a4-a11);
  if (res[12]!=0) res[12][9]=a4;
  a30=(a14*a30);
  a14=(a14*a23);
  a30=(a30+a14);
  a30=(a30-a0);
  if (res[12]!=0) res[12][10]=a30;
  if (res[12]!=0) res[12][11]=a10;
  a26=(a27*a26);
  a3=(a19*a3);
  a26=(a26+a3);
  a5=(a5+a26);
  if (res[12]!=0) res[12][12]=a5;
  a11=(a27*a11);
  a8=(a19*a8);
  a11=(a11+a8);
  a9=(a9+a11);
  if (res[12]!=0) res[12][13]=a9;
  a27=(a27*a0);
  a19=(a19*a23);
  a27=(a27+a19);
  a12=(a12+a27);
  if (res[12]!=0) res[12][14]=a12;
  if (res[12]!=0) res[12][15]=a13;
  if (res[13]!=0) res[13][0]=a22;
  if (res[13]!=0) res[13][1]=a1;
  if (res[13]!=0) res[13][2]=a18;
  if (res[13]!=0) res[13][3]=a10;
  if (res[13]!=0) res[13][4]=a25;
  if (res[13]!=0) res[13][5]=a7;
  if (res[13]!=0) res[13][6]=a24;
  if (res[13]!=0) res[13][7]=a10;
  if (res[13]!=0) res[13][8]=a32;
  if (res[13]!=0) res[13][9]=a4;
  if (res[13]!=0) res[13][10]=a30;
  if (res[13]!=0) res[13][11]=a10;
  a32=(a21*a32);
  a5=(a5+a32);
  if (res[13]!=0) res[13][12]=a5;
  a4=(a21*a4);
  a9=(a9+a4);
  if (res[13]!=0) res[13][13]=a9;
  a21=(a21*a30);
  a12=(a12+a21);
  if (res[13]!=0) res[13][14]=a12;
  if (res[13]!=0) res[13][15]=a13;
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

CASADI_SYMBOL_EXPORT casadi_int fk_T_n_out(void) { return 14;}

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
    case 0: return "T_joint0_l";
    case 1: return "T_joint1_l";
    case 2: return "T_joint2_l";
    case 3: return "T_joint3_l";
    case 4: return "T_joint4_l";
    case 5: return "T_joint5_l";
    case 6: return "T_indy7_tcp_l";
    case 7: return "T_joint0_r";
    case 8: return "T_joint1_r";
    case 9: return "T_joint2_r";
    case 10: return "T_joint3_r";
    case 11: return "T_joint4_r";
    case 12: return "T_joint5_r";
    case 13: return "T_indy7_tcp_r";
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
    case 1: return casadi_s1;
    case 2: return casadi_s1;
    case 3: return casadi_s1;
    case 4: return casadi_s1;
    case 5: return casadi_s1;
    case 6: return casadi_s1;
    case 7: return casadi_s1;
    case 8: return casadi_s1;
    case 9: return casadi_s1;
    case 10: return casadi_s1;
    case 11: return casadi_s1;
    case 12: return casadi_s1;
    case 13: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int fk_T_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 14;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
