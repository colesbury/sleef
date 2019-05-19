//          Copyright Naoki Shibata 2010 - 2019.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

// Always use -ffp-contract=off option to compile SLEEF.

#define __SLEEFSIMDSP_C__

#include "sleefsimdsp.h"

EXPORT CONST VECTOR_CC vint2 xilogbf(vfloat d) { return vilogbf(d); }
EXPORT CONST VECTOR_CC vfloat xldexpf(vfloat x, vint2 q) { return vldexpf(x, q); }
EXPORT CONST VECTOR_CC vfloat xsinf(vfloat d) { return vsinf(d); }
EXPORT CONST VECTOR_CC vfloat xcosf(vfloat d) { return vcosf(d); }
EXPORT CONST VECTOR_CC vfloat xtanf(vfloat d) { return vtanf(d); }
EXPORT CONST VECTOR_CC vfloat xsinf_u1(vfloat d) { return vsinf_u1(d); }
EXPORT CONST VECTOR_CC vfloat xcosf_u1(vfloat d) { return vcosf_u1(d); }
EXPORT CONST VECTOR_CC vfloat xfastsinf_u3500(vfloat d) { return vfastsinf_u3500(d); }
EXPORT CONST VECTOR_CC vfloat xfastcosf_u3500(vfloat d) { return vfastcosf_u3500(d); }
EXPORT CONST VECTOR_CC vfloat xtanf_u1(vfloat d) { return vtanf_u1(d); }
#if !defined(DETERMINISTIC)
EXPORT CONST VECTOR_CC vfloat xatanf(vfloat d) { return vatanf(d); }
EXPORT CONST VECTOR_CC vfloat xatan2f(vfloat y, vfloat x) { return vatan2f(y, x); }
EXPORT CONST VECTOR_CC vfloat xasinf(vfloat d) { return vasinf(d); }
EXPORT CONST VECTOR_CC vfloat xacosf(vfloat d) { return vacosf(d); }
EXPORT CONST VECTOR_CC vfloat xatan2f_u1(vfloat y, vfloat x) { return vatan2f_u1(y, x); }
EXPORT CONST VECTOR_CC vfloat xasinf_u1(vfloat d) { return vasinf_u1(d); }
EXPORT CONST VECTOR_CC vfloat xacosf_u1(vfloat d) { return vacosf_u1(d); }
EXPORT CONST VECTOR_CC vfloat xatanf_u1(vfloat d) { return vatanf_u1(d); }
EXPORT CONST VECTOR_CC vfloat xlogf(vfloat d) { return vlogf(d); }
EXPORT CONST VECTOR_CC vfloat xexpf(vfloat d) { return vexpf(d); }
#endif
EXPORT CONST VECTOR_CC vfloat xsqrtf_u35(vfloat d) { return vsqrtf_u35(d); }
#if !defined(DETERMINISTIC)
EXPORT CONST VECTOR_CC vfloat xcbrtf(vfloat d) { return vcbrtf(d); }
EXPORT CONST VECTOR_CC vfloat xcbrtf_u1(vfloat d) { return vcbrtf_u1(d); }
EXPORT CONST VECTOR_CC vfloat xlogf_u1(vfloat d) { return vlogf_u1(d); }
EXPORT CONST VECTOR_CC vfloat xpowf(vfloat x, vfloat y) { return vpowf(x, y); }
EXPORT CONST VECTOR_CC vfloat xfastpowf_u3500(vfloat x, vfloat y) { return vfastpowf_u3500(x, y); }
EXPORT CONST VECTOR_CC vfloat xsinhf(vfloat x) { return vsinhf(x); }
EXPORT CONST VECTOR_CC vfloat xcoshf(vfloat x) { return vcoshf(x); }
EXPORT CONST VECTOR_CC vfloat xtanhf(vfloat x) { return vtanhf(x); }
EXPORT CONST VECTOR_CC vfloat xsinhf_u35(vfloat x) { return vsinhf_u35(x); }
EXPORT CONST VECTOR_CC vfloat xcoshf_u35(vfloat x) { return vcoshf_u35(x); }
EXPORT CONST VECTOR_CC vfloat xtanhf_u35(vfloat x) { return vtanhf_u35(x); }
EXPORT CONST VECTOR_CC vfloat xasinhf(vfloat x) { return vasinhf(x); }
EXPORT CONST VECTOR_CC vfloat xacoshf(vfloat x) { return vacoshf(x); }
EXPORT CONST VECTOR_CC vfloat xatanhf(vfloat x) { return vatanhf(x); }
EXPORT CONST VECTOR_CC vfloat xexp2f(vfloat d) { return vexp2f(d); }
EXPORT CONST VECTOR_CC vfloat xexp2f_u35(vfloat d) { return vexp2f_u35(d); }
EXPORT CONST VECTOR_CC vfloat xexp10f(vfloat d) { return vexp10f(d); }
EXPORT CONST VECTOR_CC vfloat xexp10f_u35(vfloat d) { return vexp10f_u35(d); }
EXPORT CONST VECTOR_CC vfloat xexpm1f(vfloat a) { return vexpm1f(a); }
EXPORT CONST VECTOR_CC vfloat xlog10f(vfloat d) { return vlog10f(d); }
EXPORT CONST VECTOR_CC vfloat xlog2f(vfloat d) { return vlog2f(d); }
EXPORT CONST VECTOR_CC vfloat xlog2f_u35(vfloat d) { return vlog2f_u35(d); }
EXPORT CONST VECTOR_CC vfloat xlog1pf(vfloat d) { return vlog1pf(d); }
EXPORT CONST VECTOR_CC vfloat xfabsf(vfloat x) { return vfabsf(x); }
EXPORT CONST VECTOR_CC vfloat xcopysignf(vfloat x, vfloat y) { return vcopysignf(x, y); }
EXPORT CONST VECTOR_CC vfloat xfmaxf(vfloat x, vfloat y) { return vfmaxf(x, y); }
EXPORT CONST VECTOR_CC vfloat xfminf(vfloat x, vfloat y) { return vfminf(x, y); }
EXPORT CONST VECTOR_CC vfloat xfdimf(vfloat x, vfloat y) { return vfdimf(x, y); }
EXPORT CONST VECTOR_CC vfloat xtruncf(vfloat x) { return vtruncf(x); }
EXPORT CONST VECTOR_CC vfloat xfloorf(vfloat x) { return vfloorf(x); }
EXPORT CONST VECTOR_CC vfloat xceilf(vfloat x) { return vceilf(x); }
EXPORT CONST VECTOR_CC vfloat xroundf(vfloat d) { return vroundf(d); }
EXPORT CONST VECTOR_CC vfloat xrintf(vfloat d) { return vrintf(d); }
EXPORT CONST VECTOR_CC vfloat xfmaf(vfloat x, vfloat y, vfloat z) { return vfmaf(x, y, z); }
#endif
EXPORT CONST VECTOR_CC vfloat xsqrtf(vfloat d) { return vsqrtf(d); }
#if !defined(DETERMINISTIC)
EXPORT CONST VECTOR_CC vfloat xhypotf_u05(vfloat x, vfloat y) { return vhypotf_u05(x, y); }
EXPORT CONST VECTOR_CC vfloat xhypotf_u35(vfloat x, vfloat y) { return vhypotf_u35(x, y); }
EXPORT CONST VECTOR_CC vfloat xnextafterf(vfloat x, vfloat y) { return vnextafterf(x, y); }
EXPORT CONST VECTOR_CC vfloat xfrfrexpf(vfloat x) { return vfrfrexpf(x); }
EXPORT CONST VECTOR_CC vint2 xexpfrexpf(vfloat x) { return vexpfrexpf(x); }
EXPORT CONST VECTOR_CC vfloat xfmodf(vfloat x, vfloat y) { return vfmodf(x, y); }
EXPORT CONST VECTOR_CC vfloat xsinpif_u05(vfloat d) { return vsinpif_u05(d); }
EXPORT CONST VECTOR_CC vfloat xcospif_u05(vfloat d) { return vcospif_u05(d); }
EXPORT CONST VECTOR_CC vfloat xtgammaf_u1(vfloat a) { return vtgammaf_u1(a); }
EXPORT CONST VECTOR_CC vfloat xlgammaf_u1(vfloat a) { return vlgammaf_u1(a); }
EXPORT CONST VECTOR_CC vfloat xerff_u1(vfloat a) { return verff_u1(a); }
EXPORT CONST VECTOR_CC vfloat xerfcf_u15(vfloat a) { return verfcf_u15(a); }
#endif

#if !defined(ENABLE_GNUABI)
EXPORT CONST VECTOR_CC vfloat2 xsincosf(vfloat d) { return vsincosf(d); }
EXPORT CONST VECTOR_CC vfloat2 xsincosf_u1(vfloat d) { return vsincosf_u1(d); }
#if !defined(DETERMINISTIC)
EXPORT CONST VECTOR_CC vfloat2 xsincospif_u05(vfloat d) { return vsincospif_u05(d); }
EXPORT CONST VECTOR_CC vfloat2 xsincospif_u35(vfloat d) { return vsincospif_u35(d); }
EXPORT VECTOR_CC vfloat2 xmodff(vfloat d) { return vmodff(d); }
EXPORT VECTOR_CC vfloat xsqrtf_u05(vfloat d) { return vsqrtf_u05(d); }
#endif // !defined(DETERMINISTIC)
#else  // !defined(ENABLE_GNUABI)
EXPORT VECTOR_CC void xsincosf(vfloat a, float *ps, float *pc) {
  vfloat2 r = vsincosf(a);
  vstoreu_v_p_vf(ps, r.x);
  vstoreu_v_p_vf(pc, r.y);
}

EXPORT VECTOR_CC void xsincosf_u1(vfloat a, float *ps, float *pc) {
  vfloat2 r = vsincosf_u1(a);
  vstoreu_v_p_vf(ps, r.x);
  vstoreu_v_p_vf(pc, r.y);
}

EXPORT VECTOR_CC void xsincospif_u05(vfloat a, float *ps, float *pc) {
  vfloat2 r = vsincospif_u05(a);
  vstoreu_v_p_vf(ps, r.x);
  vstoreu_v_p_vf(pc, r.y);
}

EXPORT VECTOR_CC void xsincospif_u35(vfloat a, float *ps, float *pc) {
  vfloat2 r = vsincospif_u35(a);
  vstoreu_v_p_vf(ps, r.x);
  vstoreu_v_p_vf(pc, r.y);
}

EXPORT CONST VECTOR_CC vfloat xmodff(vfloat a, float *iptr) {
  vfloat2 r = vmodff(a);
  vstoreu_v_p_vf(iptr, r.y);
  return r.x;
}
#endif // !defined(ENABLE_GNUABI)


#if !defined(DETERMINISTIC) && !defined(ENABLE_GNUABI)
// See sleefsimddp.c for explanation of these macros

#ifdef ENABLE_ALIAS
#define DALIAS_vf_vf(FUNC) EXPORT CONST VECTOR_CC vfloat y ## FUNC(vfloat) __attribute__((alias( stringify(x ## FUNC) )));
#define DALIAS_vf2_vf(FUNC) EXPORT CONST VECTOR_CC vfloat2 y ## FUNC(vfloat) __attribute__((alias( stringify(x ## FUNC) )));
#define DALIAS_vf_vf_vf(FUNC) EXPORT CONST VECTOR_CC vfloat y ## FUNC(vfloat, vfloat) __attribute__((alias( stringify(x ## FUNC) )));
#define DALIAS_vf_vf_vf_vf(FUNC) EXPORT CONST VECTOR_CC vfloat y ## FUNC(vfloat, vfloat, vfloat) __attribute__((alias( stringify(x ## FUNC) )));
#else
#define DALIAS_vf_vf(FUNC) EXPORT CONST VECTOR_CC vfloat y ## FUNC(vfloat d) { return x ## FUNC (d); }
#define DALIAS_vf2_vf(FUNC) EXPORT CONST VECTOR_CC vfloat2 y ## FUNC(vfloat d) { return x ## FUNC (d); }
#define DALIAS_vf_vf_vf(FUNC) EXPORT CONST VECTOR_CC vfloat y ## FUNC(vfloat x, vfloat y) { return x ## FUNC (x, y); }
#define DALIAS_vf_vf_vf_vf(FUNC) EXPORT CONST VECTOR_CC vfloat y ## FUNC(vfloat x, vfloat y, vfloat z) { return x ## FUNC (x, y, z); }
#endif

DALIAS_vf2_vf(sincospif_u05)
DALIAS_vf2_vf(sincospif_u35)
DALIAS_vf2_vf(modff)
DALIAS_vf_vf(atanf)
DALIAS_vf_vf_vf(atan2f)
DALIAS_vf_vf(asinf)
DALIAS_vf_vf(acosf)
DALIAS_vf_vf_vf(atan2f_u1)
DALIAS_vf_vf(asinf_u1)
DALIAS_vf_vf(acosf_u1)
DALIAS_vf_vf(atanf_u1)
DALIAS_vf_vf(logf)
DALIAS_vf_vf(expf)
DALIAS_vf_vf(cbrtf)
DALIAS_vf_vf(cbrtf_u1)
DALIAS_vf_vf(logf_u1)
DALIAS_vf_vf_vf(powf)
DALIAS_vf_vf(sinhf)
DALIAS_vf_vf(coshf)
DALIAS_vf_vf(tanhf)
DALIAS_vf_vf(sinhf_u35)
DALIAS_vf_vf(coshf_u35)
DALIAS_vf_vf(tanhf_u35)
DALIAS_vf_vf(asinhf)
DALIAS_vf_vf(acoshf)
DALIAS_vf_vf(atanhf)
DALIAS_vf_vf(exp2f)
DALIAS_vf_vf(exp2f_u35)
DALIAS_vf_vf(exp10f)
DALIAS_vf_vf(exp10f_u35)
DALIAS_vf_vf(expm1f)
DALIAS_vf_vf(log10f)
DALIAS_vf_vf(log2f)
DALIAS_vf_vf(log2f_u35)
DALIAS_vf_vf(log1pf)
DALIAS_vf_vf(fabsf)
DALIAS_vf_vf_vf(copysignf)
DALIAS_vf_vf_vf(fmaxf)
DALIAS_vf_vf_vf(fminf)
DALIAS_vf_vf_vf(fdimf)
DALIAS_vf_vf(truncf)
DALIAS_vf_vf(floorf)
DALIAS_vf_vf(ceilf)
DALIAS_vf_vf(roundf)
DALIAS_vf_vf(rintf)
DALIAS_vf_vf_vf_vf(fmaf)
DALIAS_vf_vf_vf(hypotf_u05)
DALIAS_vf_vf_vf(hypotf_u35)
DALIAS_vf_vf_vf(nextafterf)
DALIAS_vf_vf(frfrexpf)
DALIAS_vf_vf_vf(fmodf)
DALIAS_vf_vf(sinpif_u05)
DALIAS_vf_vf(cospif_u05)
DALIAS_vf_vf(tgammaf_u1)
DALIAS_vf_vf(lgammaf_u1)
DALIAS_vf_vf(erff_u1)
DALIAS_vf_vf(erfcf_u15)
DALIAS_vf_vf_vf(fastpowf_u3500)
#endif // #if !defined(DETERMINISTIC) && !defined(ENABLE_GNUABI)

#ifndef ENABLE_GNUABI
EXPORT CONST int xgetIntf(int name) {
  if (1 <= name && name <= 10) return vavailability_i(name);
  return 0;
}

EXPORT CONST void *xgetPtrf(int name) {
  if (name == 0) return ISANAME;
  return (void *)0;
}
#endif

#if defined(ALIAS_NO_EXT_SUFFIX) && !defined(DETERMINISTIC)
#include ALIAS_NO_EXT_SUFFIX
#endif

#ifdef ENABLE_GNUABI
EXPORT CONST VECTOR_CC vfloat __acosf_finite     (vfloat)         __attribute__((weak, alias(str_xacosf_u1  )));
EXPORT CONST VECTOR_CC vfloat __acoshf_finite    (vfloat)         __attribute__((weak, alias(str_xacoshf    )));
EXPORT CONST VECTOR_CC vfloat __asinf_finite     (double)         __attribute__((weak, alias(str_xasinf_u1  )));
EXPORT CONST VECTOR_CC vfloat __atan2f_finite    (vfloat, vfloat) __attribute__((weak, alias(str_xatan2f_u1 )));
EXPORT CONST VECTOR_CC vfloat __atanhf_finite    (vfloat)         __attribute__((weak, alias(str_xatanhf    )));
EXPORT CONST VECTOR_CC vfloat __coshf_finite     (vfloat)         __attribute__((weak, alias(str_xcoshf     )));
EXPORT CONST VECTOR_CC vfloat __exp10f_finite    (vfloat)         __attribute__((weak, alias(str_xexp10f    )));
EXPORT CONST VECTOR_CC vfloat __exp2f_finite     (vfloat)         __attribute__((weak, alias(str_xexp2f     )));
EXPORT CONST VECTOR_CC vfloat __expf_finite      (vfloat)         __attribute__((weak, alias(str_xexpf      )));
EXPORT CONST VECTOR_CC vfloat __fmodf_finite     (vfloat, vfloat) __attribute__((weak, alias(str_xfmodf     )));
EXPORT CONST VECTOR_CC vfloat __modff_finite      (vfloat, vfloat *) __attribute__((weak, alias(str_xmodff  )));
EXPORT CONST VECTOR_CC vfloat __hypotf_u05_finite(vfloat, vfloat) __attribute__((weak, alias(str_xhypotf_u05)));
EXPORT CONST VECTOR_CC vfloat __lgammaf_u1_finite(vfloat)         __attribute__((weak, alias(str_xlgammaf_u1)));
EXPORT CONST VECTOR_CC vfloat __log10f_finite    (vfloat)         __attribute__((weak, alias(str_xlog10f    )));
EXPORT CONST VECTOR_CC vfloat __logf_finite      (vfloat)         __attribute__((weak, alias(str_xlogf_u1   )));
EXPORT CONST VECTOR_CC vfloat __powf_finite      (vfloat, vfloat) __attribute__((weak, alias(str_xpowf      )));
EXPORT CONST VECTOR_CC vfloat __sinhf_finite     (vfloat)         __attribute__((weak, alias(str_xsinhf     )));
EXPORT CONST VECTOR_CC vfloat __sqrtf_finite     (vfloat)         __attribute__((weak, alias(str_xsqrtf     )));
EXPORT CONST VECTOR_CC vfloat __tgammaf_u1_finite(vfloat)         __attribute__((weak, alias(str_xtgammaf_u1)));

#ifdef HEADER_MASKED
#include HEADER_MASKED
#endif
#endif /* #ifdef ENABLE_GNUABI */

#ifdef ENABLE_MAIN
// gcc -DENABLE_MAIN -Wno-attributes -I../common -I../arch -DENABLE_AVX2 -mavx2 -mfma sleefsimdsp.c ../common/common.c -lm
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
  vfloat vf1 = vcast_vf_f(atof(argv[1]));
  //vfloat vf2 = vcast_vf_f(atof(argv[2]));

  //vfloat r = xpowf(vf1, vf2);
  //vfloat r = xsqrtf_u05(vf1);
  //printf("%g\n", xnextafterf(vf1, vf2)[0]);
  //printf("%g\n", nextafterf(atof(argv[1]), atof(argv[2])));
  printf("t = %.20g\n", xlogf_u1(vf1)[0]);
  printf("c = %.20g\n", logf(atof(argv[1])));

}
#endif
