//          Copyright Naoki Shibata 2010 - 2019.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

// Always use -ffp-contract=off option to compile SLEEF.

#define __SLEEFSIMDDP_C__

#include "sleefsimddp.h"

EXPORT CONST VECTOR_CC vint xilogb(vdouble d) { return vilogb(d); }
EXPORT CONST VECTOR_CC vdouble xldexp(vdouble x, vint q) { return vldexp(x, q); }
EXPORT CONST VECTOR_CC vdouble xsin(vdouble d) { return vsin(d); }
EXPORT CONST VECTOR_CC vdouble xsin_u1(vdouble d) { return vsin_u1(d); }
EXPORT CONST VECTOR_CC vdouble xcos(vdouble d) { return vcos(d); }
EXPORT CONST VECTOR_CC vdouble xcos_u1(vdouble d) { return vcos_u1(d); }
EXPORT CONST VECTOR_CC vdouble xsinpi_u05(vdouble d) { return vsinpi_u05(d); }
EXPORT CONST VECTOR_CC vdouble xcospi_u05(vdouble d) { return vcospi_u05(d); }
EXPORT CONST VECTOR_CC vdouble xtan(vdouble d) { return vtan(d); }
EXPORT CONST VECTOR_CC vdouble xtan_u1(vdouble d) { return vtan_u1(d); }
EXPORT CONST VECTOR_CC vdouble xatan2(vdouble y, vdouble x) { return vatan2(y, x); }
EXPORT CONST VECTOR_CC vdouble xatan2_u1(vdouble y, vdouble x) { return vatan2_u1(y, x); }
EXPORT CONST VECTOR_CC vdouble xasin(vdouble d) { return vasin(d); }
EXPORT CONST VECTOR_CC vdouble xasin_u1(vdouble d) { return vasin_u1(d); }
EXPORT CONST VECTOR_CC vdouble xacos(vdouble d) { return vacos(d); }
EXPORT CONST VECTOR_CC vdouble xacos_u1(vdouble d) { return vacos_u1(d); }
EXPORT CONST VECTOR_CC vdouble xatan_u1(vdouble d) { return vatan_u1(d); }
EXPORT CONST VECTOR_CC vdouble xatan(vdouble s) { return vatan(s); }
#if !defined(DETERMINISTIC)
EXPORT CONST VECTOR_CC vdouble xlog(vdouble d) { return vlog(d); }
#endif
EXPORT CONST VECTOR_CC vdouble xexp(vdouble d) { return vexp(d); }
#if !defined(DETERMINISTIC)
EXPORT CONST VECTOR_CC vdouble xlog_u1(vdouble d) { return vlog_u1(d); }
EXPORT CONST VECTOR_CC vdouble xpow(vdouble x, vdouble y) { return vpow(x, y); }
EXPORT CONST VECTOR_CC vdouble xsinh(vdouble x) { return vsinh(x); }
EXPORT CONST VECTOR_CC vdouble xcosh(vdouble x) { return vcosh(x); }
EXPORT CONST VECTOR_CC vdouble xtanh(vdouble x) { return vtanh(x); }
EXPORT CONST VECTOR_CC vdouble xsinh_u35(vdouble x) { return vsinh_u35(x); }
EXPORT CONST VECTOR_CC vdouble xcosh_u35(vdouble x) { return vcosh_u35(x); }
EXPORT CONST VECTOR_CC vdouble xtanh_u35(vdouble x) { return vtanh_u35(x); }
EXPORT CONST VECTOR_CC vdouble xasinh(vdouble x) { return vasinh(x); }
EXPORT CONST VECTOR_CC vdouble xacosh(vdouble x) { return vacosh(x); }
EXPORT CONST VECTOR_CC vdouble xatanh(vdouble x) { return vatanh(x); }
EXPORT CONST VECTOR_CC vdouble xcbrt(vdouble d) { return vcbrt(d); }
EXPORT CONST VECTOR_CC vdouble xcbrt_u1(vdouble d) { return vcbrt_u1(d); }
#endif
EXPORT CONST VECTOR_CC vdouble xexp2(vdouble d) { return vexp2(d); }
EXPORT CONST VECTOR_CC vdouble xexp2_u35(vdouble d) { return vexp2_u35(d); }
EXPORT CONST VECTOR_CC vdouble xexp10(vdouble d) { return vexp10(d); }
EXPORT CONST VECTOR_CC vdouble xexp10_u35(vdouble d) { return vexp10_u35(d); }
#if !defined(DETERMINISTIC)
EXPORT CONST VECTOR_CC vdouble xexpm1(vdouble a) { return vexpm1(a); }
EXPORT CONST VECTOR_CC vdouble xlog10(vdouble d) { return vlog10(d); }
EXPORT CONST VECTOR_CC vdouble xlog2(vdouble d) { return vlog2(d); }
EXPORT CONST VECTOR_CC vdouble xlog2_u35(vdouble d) { return vlog2_u35(d); }
EXPORT CONST VECTOR_CC vdouble xlog1p(vdouble d) { return vlog1p(d); }
EXPORT CONST VECTOR_CC vdouble xfabs(vdouble x) { return vfabs(x); }
EXPORT CONST VECTOR_CC vdouble xcopysign(vdouble x, vdouble y) { return vcopysign(x, y); }
EXPORT CONST VECTOR_CC vdouble xfmax(vdouble x, vdouble y) { return vfmax(x, y); }
EXPORT CONST VECTOR_CC vdouble xfmin(vdouble x, vdouble y) { return vfmin(x, y); }
EXPORT CONST VECTOR_CC vdouble xfdim(vdouble x, vdouble y) { return vfdim(x, y); }
EXPORT CONST VECTOR_CC vdouble xtrunc(vdouble x) { return vtrunc(x); }
EXPORT CONST VECTOR_CC vdouble xfloor(vdouble x) { return vfloor(x); }
EXPORT CONST VECTOR_CC vdouble xceil(vdouble x) { return vceil(x); }
EXPORT CONST VECTOR_CC vdouble xround(vdouble d) { return vround(d); }
EXPORT CONST VECTOR_CC vdouble xrint(vdouble d) { return vrint(d); }
EXPORT CONST VECTOR_CC vdouble xnextafter(vdouble x, vdouble y) { return vnextafter(x, y); }
EXPORT CONST VECTOR_CC vdouble xfrfrexp(vdouble x) { return vfrfrexp(x); }
EXPORT CONST VECTOR_CC vint xexpfrexp(vdouble x) { return vexpfrexp(x); }
EXPORT CONST VECTOR_CC vdouble xfma(vdouble x, vdouble y, vdouble z) { return vfma(x, y, z); }
EXPORT CONST VECTOR_CC vdouble xsqrt(vdouble d) { return vsqrt(d); }
EXPORT CONST VECTOR_CC vdouble xsqrt_u35(vdouble d) { return vsqrt_u35(d); }
EXPORT CONST VECTOR_CC vdouble xhypot_u05(vdouble x, vdouble y) { return vhypot_u05(x, y); }
EXPORT CONST VECTOR_CC vdouble xhypot_u35(vdouble x, vdouble y) { return vhypot_u35(x, y); }
EXPORT CONST VECTOR_CC vdouble xfmod(vdouble x, vdouble y) { return vfmod(x, y); }
EXPORT CONST VECTOR_CC vdouble xtgamma_u1(vdouble a) { return vtgamma_u1(a); }
EXPORT CONST VECTOR_CC vdouble xlgamma_u1(vdouble a) { return vlgamma_u1(a); }
EXPORT CONST VECTOR_CC vdouble xerf_u1(vdouble a) { return verf_u1(a); }
EXPORT CONST VECTOR_CC vdouble xerfc_u15(vdouble a) { return verfc_u15(a); }
#endif

#if !defined(ENABLE_GNUABI)
EXPORT CONST VECTOR_CC vdouble2 xsincos(vdouble d) { return vsincos(d); }
EXPORT CONST VECTOR_CC vdouble2 xsincos_u1(vdouble d) { return vsincos_u1(d); }
#if !defined(DETERMINISTIC)
EXPORT CONST VECTOR_CC vdouble2 xsincospi_u05(vdouble d) { return vsincospi_u05(d); }
EXPORT CONST VECTOR_CC vdouble2 xsincospi_u35(vdouble d) { return vsincospi_u35(d); }
EXPORT VECTOR_CC vdouble2 xmodf(vdouble d) { return vmodf(d); }
EXPORT VECTOR_CC vdouble xsqrt_u05(vdouble d) { return vsqrt_u05(d); }
#endif // !defined(DETERMINISTIC)
#else // !defined(ENABLE_GNUABI)
EXPORT VECTOR_CC void xsincos(vdouble a, double *ps, double *pc) {
  vdouble2 r = vsincos(a);
  vstoreu_v_p_vd(ps, r.x);
  vstoreu_v_p_vd(pc, r.y);
}

EXPORT VECTOR_CC void xsincos_u1(vdouble a, double *ps, double *pc) {
  vdouble2 r = vsincos_u1(a);
  vstoreu_v_p_vd(ps, r.x);
  vstoreu_v_p_vd(pc, r.y);
}

EXPORT VECTOR_CC void xsincospi_u05(vdouble a, double *ps, double *pc) {
  vdouble2 r = vsincospi_u05(a);
  vstoreu_v_p_vd(ps, r.x);
  vstoreu_v_p_vd(pc, r.y);
}

EXPORT VECTOR_CC void xsincospi_u35(vdouble a, double *ps, double *pc) {
  vdouble2 r = vsincospi_u35(a);
  vstoreu_v_p_vd(ps, r.x);
  vstoreu_v_p_vd(pc, r.y);
}

EXPORT CONST VECTOR_CC vdouble xmodf(vdouble a, double *iptr) {
  vdouble2 r = vmodf(a);
  vstoreu_v_p_vd(iptr, r.y);
  return r.x;
}
#endif // !defined(ENABLE_GNUABI)


#if !defined(DETERMINISTIC) && !defined(ENABLE_GNUABI)
// The normal and deterministic versions of implementations are common
// for the functions like sincospi_u05. Aliases are defined by
// DALIAS_* macros for such functions. The defined aliases
// (e.g. ysincospi_u05) are renamed(e.g. to
// Sleef_cinz_sincospid2_u05sse2) by rename*.h.

#ifdef ENABLE_ALIAS
#define DALIAS_vd_vd(FUNC) EXPORT CONST VECTOR_CC vdouble y ## FUNC(vdouble) __attribute__((alias( stringify(x ## FUNC) )));
#define DALIAS_vd2_vd(FUNC) EXPORT CONST VECTOR_CC vdouble2 y ## FUNC(vdouble) __attribute__((alias( stringify(x ## FUNC) )));
#define DALIAS_vi_vd(FUNC) EXPORT CONST VECTOR_CC vint y ## FUNC(vdouble) __attribute__((alias( stringify(x ## FUNC) )));
#define DALIAS_vd_vd_vd(FUNC) EXPORT CONST VECTOR_CC vdouble y ## FUNC(vdouble, vdouble) __attribute__((alias( stringify(x ## FUNC) )));
#define DALIAS_vd_vd_vd_vd(FUNC) EXPORT CONST VECTOR_CC vdouble y ## FUNC(vdouble, vdouble, vdouble) __attribute__((alias( stringify(x ## FUNC) )));
#else
#define DALIAS_vd_vd(FUNC) EXPORT CONST VECTOR_CC vdouble y ## FUNC(vdouble d) { return x ## FUNC (d); }
#define DALIAS_vd2_vd(FUNC) EXPORT CONST VECTOR_CC vdouble2 y ## FUNC(vdouble d) { return x ## FUNC (d); }
#define DALIAS_vi_vd(FUNC) EXPORT CONST VECTOR_CC vint y ## FUNC(vdouble d) { return x ## FUNC (d); }
#define DALIAS_vd_vd_vd(FUNC) EXPORT CONST VECTOR_CC vdouble y ## FUNC(vdouble x, vdouble y) { return x ## FUNC (x, y); }
#define DALIAS_vd_vd_vd_vd(FUNC) EXPORT CONST VECTOR_CC vdouble y ## FUNC(vdouble x, vdouble y, vdouble z) { return x ## FUNC (x, y, z); }
#endif

DALIAS_vd2_vd(sincospi_u05)
DALIAS_vd2_vd(sincospi_u35)
DALIAS_vd2_vd(modf)
DALIAS_vd_vd(log)
DALIAS_vd_vd(log_u1)
DALIAS_vd_vd_vd(pow)
DALIAS_vd_vd(sinh)
DALIAS_vd_vd(cosh)
DALIAS_vd_vd(tanh)
DALIAS_vd_vd(sinh_u35)
DALIAS_vd_vd(cosh_u35)
DALIAS_vd_vd(tanh_u35)
DALIAS_vd_vd(asinh)
DALIAS_vd_vd(acosh)
DALIAS_vd_vd(atanh)
DALIAS_vd_vd(cbrt)
DALIAS_vd_vd(cbrt_u1)
DALIAS_vd_vd(expm1)
DALIAS_vd_vd(log10)
DALIAS_vd_vd(log2)
DALIAS_vd_vd(log2_u35)
DALIAS_vd_vd(log1p)
DALIAS_vd_vd(fabs)
DALIAS_vd_vd_vd(copysign)
DALIAS_vd_vd_vd(fmax)
DALIAS_vd_vd_vd(fmin)
DALIAS_vd_vd_vd(fdim)
DALIAS_vd_vd(trunc)
DALIAS_vd_vd(floor)
DALIAS_vd_vd(ceil)
DALIAS_vd_vd(round)
DALIAS_vd_vd(rint)
DALIAS_vd_vd_vd(nextafter)
DALIAS_vd_vd(frfrexp)
DALIAS_vi_vd(expfrexp)
DALIAS_vd_vd_vd_vd(fma)
DALIAS_vd_vd(sqrt_u05)
DALIAS_vd_vd(sqrt_u35)
DALIAS_vd_vd_vd(hypot_u05)
DALIAS_vd_vd_vd(hypot_u35)
DALIAS_vd_vd_vd(fmod)
DALIAS_vd_vd(tgamma_u1)
DALIAS_vd_vd(lgamma_u1)
DALIAS_vd_vd(erf_u1)
DALIAS_vd_vd(erfc_u15)
#endif // #if !defined(DETERMINISTIC) && !defined(ENABLE_GNUABI)

#ifndef ENABLE_GNUABI
EXPORT CONST int xgetInt(int name) {
  if (1 <= name && name <= 10) return vavailability_i(name);
  return 0;
}

EXPORT CONST void *xgetPtr(int name) {
  if (name == 0) return ISANAME;
  return (void *)0;
}
#endif

#if defined(ALIAS_NO_EXT_SUFFIX) && !defined(DETERMINISTIC)
#include ALIAS_NO_EXT_SUFFIX
#endif

#ifdef ENABLE_MAIN
// gcc -DENABLE_MAIN -Wno-attributes -I../common -I../arch -DENABLE_AVX2 -mavx2 -mfma sleefsimddp.c ../common/common.c -lm
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
  vdouble d1 = vcast_vd_d(atof(argv[1]));
  vdouble d2 = vcast_vd_d(atof(argv[2]));
  //vdouble d3 = vcast_vd_d(atof(argv[3]));
  //vdouble r = xnextafter(d1, d2);
  //int i;
  //double fr = frexp(atof(argv[1]), &i);
  //printf("%.20g\n", xfma(d1, d2, d3)[0]);;
  //printf("test %.20g\n", xtgamma_u1(d1)[0]);
  //printf("corr %.20g\n", tgamma(d1[0]));
  //printf("test %.20g\n", xerf_u1(d1)[0]);
  //printf("corr %.20g\n", erf(d1[0]));
  //printf("test %.20g\n", xerfc_u15(d1)[0]);
  //printf("corr %.20g\n", erfc(d1[0]));
  //printf("%.20g\n", nextafter(d1[0], d2[0]));;
  //printf("%.20g\n", vcast_d_vd(xhypot_u05(d1, d2)));
  //printf("%.20g\n", fr);
  printf("%.20g\n", fmod(atof(argv[1]), atof(argv[2])));
  printf("%.20g\n", xfmod(d1, d2)[0]);
  //vdouble2 r = xsincospi_u35(a);
  //printf("%g, %g\n", vcast_d_vd(r.x), vcast_d_vd(r.y));
}
#endif

#ifdef ENABLE_GNUABI
/* "finite" aliases for compatibility with GLIBC */
EXPORT CONST VECTOR_CC vdouble __acos_finite     (vdouble)          __attribute__((weak, alias(str_xacos     )));
EXPORT CONST VECTOR_CC vdouble __acosh_finite    (vdouble)          __attribute__((weak, alias(str_xacosh    )));
EXPORT CONST VECTOR_CC vdouble __asin_finite     (double)           __attribute__((weak, alias(str_xasin_u1  )));
EXPORT CONST VECTOR_CC vdouble __atan2_finite    (vdouble, vdouble) __attribute__((weak, alias(str_xatan2_u1 )));
EXPORT CONST VECTOR_CC vdouble __atanh_finite    (vdouble)          __attribute__((weak, alias(str_xatanh    )));
EXPORT CONST VECTOR_CC vdouble __cosh_finite     (vdouble)          __attribute__((weak, alias(str_xcosh     )));
EXPORT CONST VECTOR_CC vdouble __exp10_finite    (vdouble)          __attribute__((weak, alias(str_xexp10    )));
EXPORT CONST VECTOR_CC vdouble __exp2_finite     (vdouble)          __attribute__((weak, alias(str_xexp2     )));
EXPORT CONST VECTOR_CC vdouble __exp_finite      (vdouble)          __attribute__((weak, alias(str_xexp      )));
EXPORT CONST VECTOR_CC vdouble __fmod_finite     (vdouble, vdouble) __attribute__((weak, alias(str_xfmod     )));
EXPORT CONST VECTOR_CC vdouble __modf_finite     (vdouble, vdouble *) __attribute__((weak, alias(str_xmodf   )));
EXPORT CONST VECTOR_CC vdouble __hypot_u05_finite(vdouble, vdouble) __attribute__((weak, alias(str_xhypot_u05)));
EXPORT CONST VECTOR_CC vdouble __lgamma_u1_finite(vdouble)          __attribute__((weak, alias(str_xlgamma_u1)));
EXPORT CONST VECTOR_CC vdouble __log10_finite    (vdouble)          __attribute__((weak, alias(str_xlog10    )));
EXPORT CONST VECTOR_CC vdouble __log_finite      (vdouble)          __attribute__((weak, alias(str_xlog_u1   )));
EXPORT CONST VECTOR_CC vdouble __pow_finite      (vdouble, vdouble) __attribute__((weak, alias(str_xpow      )));
EXPORT CONST VECTOR_CC vdouble __sinh_finite     (vdouble)          __attribute__((weak, alias(str_xsinh     )));
EXPORT CONST VECTOR_CC vdouble __sqrt_finite     (vdouble)          __attribute__((weak, alias(str_xsqrt     )));
EXPORT CONST VECTOR_CC vdouble __tgamma_u1_finite(vdouble)          __attribute__((weak, alias(str_xtgamma_u1)));

#ifdef HEADER_MASKED
#include HEADER_MASKED
#endif
#endif /* #ifdef ENABLE_GNUABI */
