#ifndef COMPLEX_H
#define COMPLEX_H

#include "type/type.h"
#include <math.h>

#if defined(__aarch64__)
#include <arm_neon.h>
#elif defined(__x86_64__)
#include <xmmintrin.h>
#else
#error "Unsupported Architecture: Library optimized for x86_64 or aarch64 only"
#endif

// NOTE: Complex Number Type Section

typedef struct c32_s c32_t;
typedef struct c64_s c64_t;

// NOTE: Complex Number SMID Section

typedef struct c32x2_s c32x2_t;
typedef struct c32x4_s c32x4_t;
typedef struct c32x8_s c32x8_t;
typedef struct c32x16_s c32x16_t;

typedef struct c64x2_s c64x2_t;
typedef struct c64x4_s c64x4_t;
typedef struct c64x8_s c64x8_t;
typedef struct c64x16_s c64x16_t;

// NOTE: Complex Number Type Section

struct c32_s {
  f32_t re;
  f32_t im;
};

struct c64_s {
  f64_t re;
  f64_t im;
};

// NOTE: Complex Number SMID Section

struct c32x2_s {
  f32_t re[2];
  f32_t im[2];
};

struct c32x4_s {
  f32_t re[4];
  f32_t im[4];
};

struct c32x8_s {
  f32_t re[8];
  f32_t im[8];
};

struct c32x16_s {
  f32_t re[16];
  f32_t im[16];
};

struct c64x2_s {
  f64_t re[2];
  f64_t im[2];
};

struct c64x4_s {
  f64_t re[4];
  f64_t im[4];
};

struct c64x8_s {
  f64_t re[8];
  f64_t im[8];
};

struct c64x16_s {
  f64_t re[16];
  f64_t im[16];
};

// INFO: Function Section

// INFO: Function -> absolute

static inline c32_t c32_zero(void) {
  return (c32_t){
    .re = 0.0f,
    .im = 0.0f,
  };
}

static inline c64_t c64_zero(void) {
  return (c64_t){
    .re = 0.0,
    .im = 0.0,
  };
}

// INFO: Function -> absolute

static inline f32_t c32_abs(c32_t z) {
  return sqrtf((z.re * z.re) + (z.im * z.im));
}

static inline f64_t c64_abs(c64_t z) {
  return sqrt((z.re * z.re) + (z.im * z.im));
}

// INFO: Function -> absolute power 2

static inline f32_t c32_abs_2(c32_t z) {
  return (z.re * z.re) + (z.im * z.im);
}

static inline f64_t c64_abs_2(c64_t z) {
  return (z.re * z.re) + (z.im * z.im);
}

// INFO: Function -> argument

static inline f32_t c32_arg(c32_t z) {
  return atan2f(z.im, z.re);
}

static inline f64_t c64_arg(c64_t z) {
  return atan2(z.im, z.re);
}

// INFO: Function -> addition

static inline c32_t c32_add(c32_t z, c32_t w) {
  return (c32_t){
    .re = z.re + w.re,
    .im = z.im + w.im,
  };
}

static inline c32_t c32_add_n(c32_t z, f32_t n) {
  return (c32_t){
    .re = z.re + n,
    .im = z.im,
  };
}

static inline c64_t c64_add(c64_t z, c64_t w) {
  return (c64_t){
    .re = z.re + w.re,
    .im = z.im + w.im,
  };
}

static inline c64_t c64_add_n(c64_t z, f64_t n) {
  return (c64_t){
    .re = z.re + n,
    .im = z.im,
  };
}

// INFO: Function -> division

static inline c32_t c32_div(c32_t z, c32_t w) {
  const f32_t abs_2 = (w.re * w.re) + (w.im * w.im);

  return (c32_t){.re = ((z.re * w.re) + (z.im * w.im)) / abs_2,
                 .im = ((z.im * w.re) - (z.re * w.im)) / abs_2};
}

static inline c64_t c64_div(c64_t z, c64_t w) {
  const f64_t abs_2 = (w.re * w.re) + (w.im * w.im);

  return (c64_t){
    .re = ((z.re * w.re) + (z.im * w.im)) / abs_2,
    .im = ((z.im * w.re) - (z.re * w.im)) / abs_2,
  };
}

// INFO: Function -> exponential

static inline c32_t c32_e(c32_t z) {
  (void)z;
  return (c32_t){
    .re = 0,
    .im = 0,
  };
}

static inline c64_t c64_e(c64_t z) {
  (void)z;
  return (c64_t){
    .re = 0,
    .im = 0,
  };
}

// INFO: Function -> logarithm natural

static inline c32_t c32_ln(c32_t z) {
  (void)z;
  return (c32_t){
    .re = 0,
    .im = 0,
  };
}

static inline c64_t c64_ln(c64_t z) {
  (void)z;
  return (c64_t){
    .re = 0,
    .im = 0,
  };
}

// INFO: Function -> multiplication

static inline c32_t c32_mul(c32_t z, c32_t w) {
  return (c32_t){
    .re = (z.re * w.re) - (z.im * w.im),
    .im = (z.re * w.im) + (z.im * w.re),
  };
}

static inline c32_t c32_mul_n(c32_t z, f32_t n) {
  (void)z;
  (void)n;
  return (c32_t){
    .re = 0.0f,
    .im = 0.0f,
  };
}

static inline c64_t c64_mul(c64_t z, c64_t w) {
  return (c64_t){
    .re = (z.re * w.re) - (z.im * w.im),
    .im = (z.re * w.im) + (z.im * w.re),
  };
}

static inline c64_t c64_mul_n(c64_t z, f64_t n) {
  (void)z;
  (void)n;
  return (c64_t){
    .re = 0.0,
    .im = 0.0,
  };
}

// INFO: Function -> power

static inline c32_t c32_pow(c32_t z, c32_t w) {
  return c32_e(c32_mul(w, c32_ln(z)));
}

static inline c32_t c32_pow_n(c32_t z, f32_t n) {
  const f32_t r = c32_abs(z);
  const f32_t phi = c32_arg(z);
  const f32_t r_n = powf(r, n);
  const f32_t n_phi = n * phi;

  return (c32_t){
    .re = r_n * cosf(n_phi),
    .im = r_n * sinf(n_phi),
  };
}

static inline c64_t c64_pow(c64_t z, c64_t w) {
  return c64_e(c64_mul(w, c64_ln(z)));
}

static inline c64_t c64_pow_n(c64_t z, f64_t n) {
  const f64_t r = c64_abs(z);
  const f64_t phi = c64_arg(z);
  const f64_t r_n = pow(r, n);
  const f64_t n_phi = n * phi;

  return (c64_t){
    .re = r_n * cos(n_phi),
    .im = r_n * sin(n_phi),
  };
}

// INFO: Function -> substraction

static inline c32_t c32_sub(c32_t z, c32_t w) {
  return (c32_t){
    .re = z.re - w.re,
    .im = z.im - w.im,
  };
}

static inline c32_t c32_sub_n(c32_t z, f32_t n) {
  return (c32_t){
    .re = z.re - n,
    .im = z.re,
  };
}

static inline c64_t c64_sub(c64_t z, c64_t w) {
  return (c64_t){
    .re = z.re - w.re,
    .im = z.im - w.im,
  };
}

static inline c64_t c64_sub_n(c64_t z, f64_t n) {
  return (c64_t){
    .re = z.re - n,
    .im = z.im,
  };
}

// INFO: Function SIMD Section
// INFO: Function SIMD -> absolute
// TODO: static inline void c32x2_abs();
// TODO: static inline void c32x4_abs();
// TODO: static inline void c32x8_abs();
// TODO: static inline void c32x16_abs();
// TODO: static inline void c64x2_abs();
// TODO: static inline void c64x4_abs();
// TODO: static inline void c64x8_abs();
// TODO: static inline void c64x16_abs();
// INFO: Function SIMD -> absolute power 2
// TODO: static inline void c32x2_abs_2();
// TODO: static inline void c32x4_abs_2();
// TODO: static inline void c32x8_abs_2();
// TODO: static inline void c32x16_abs_2();
// TODO: static inline void c64x2_abs_2();
// TODO: static inline void c64x4_abs_2();
// TODO: static inline void c64x8_abs_2();
// TODO: static inline void c64x16_abs_2();
// INFO: Function SIMD -> argument
// TODO: static inline void c32x2_arg();
// TODO: static inline void c32x4_arg();
// TODO: static inline void c32x8_arg();
// TODO: static inline void c32x16_arg();
// TODO: static inline void c64x2_arg();
// TODO: static inline void c64x4_arg();
// TODO: static inline void c64x8_arg();
// TODO: static inline void c64x16_arg();
// INFO: Function SIMD -> addition
// TODO: static inline void c32x2_add();
// TODO: static inline void c32x2_add_n();
// TODO: static inline void c32x4_add();
// TODO: static inline void c32x4_add_n();
// TODO: static inline void c32x8_add();
// TODO: static inline void c32x8_add_n();
// TODO: static inline void c32x16_add();
// TODO: static inline void c32x16_add_n();
// TODO: static inline void c64x2_add();
// TODO: static inline void c64x2_add_n();
// TODO: static inline void c64x4_add();
// TODO: static inline void c64x4_add_n();
// TODO: static inline void c64x8_add();
// TODO: static inline void c64x8_add_n();
// TODO: static inline void c64x16_add();
// TODO: static inline void c64x16_add_n();
// INFO: Function SIMD -> division
// TODO: static inline void c32x2_div();
// TODO: static inline void c32x2_div_n();
// TODO: static inline void c32x4_div();
// TODO: static inline void c32x4_div_n();
// TODO: static inline void c32x8_div();
// TODO: static inline void c32x8_div_n();
// TODO: static inline void c32x16_div();
// TODO: static inline void c32x16_div_n();
// TODO: static inline void c64x2_div();
// TODO: static inline void c64x2_div_n();
// TODO: static inline void c64x4_div();
// TODO: static inline void c64x4_div_n();
// TODO: static inline void c64x8_div();
// TODO: static inline void c64x8_div_n();
// TODO: static inline void c64x16_div();
// TODO: static inline void c64x16_div_n();
// INFO: Function SIMD -> exponential
// TODO: static inline void c32x2_exp();
// TODO: static inline void c32x4_exp();
// TODO: static inline void c32x8_exp();
// TODO: static inline void c32x16_exp();
// TODO: static inline void c64x2_exp();
// TODO: static inline void c64x4_exp();
// TODO: static inline void c64x8_exp();
// TODO: static inline void c64x16_exp();
// INFO: Function SIMD -> logarithm natural
// TODO: static inline void c32x2_ln();
// TODO: static inline void c32x4_ln();
// TODO: static inline void c32x8_ln();
// TODO: static inline void c32x16_ln();
// TODO: static inline void c64x2_ln();
// TODO: static inline void c64x4_ln();
// TODO: static inline void c64x8_ln();
// TODO: static inline void c64x16_ln();
// INFO: Function SIMD -> multiplication
// TODO: static inline void c32x2_mul();
// TODO: static inline void c32x2_mul_n();
// TODO: static inline void c32x4_mul();
// TODO: static inline void c32x4_mul_n();
// TODO: static inline void c32x8_mul();
// TODO: static inline void c32x8_mul_n();
// TODO: static inline void c32x16_mul();
// TODO: static inline void c32x16_mul_n();
// TODO: static inline void c64x2_mul();
// TODO: static inline void c64x2_mul_n();
// TODO: static inline void c64x4_mul();
// TODO: static inline void c64x4_mul_n();
// TODO: static inline void c64x8_mul();
// TODO: static inline void c64x8_mul_n();
// TODO: static inline void c64x16_mul();
// TODO: static inline void c64x16_mul_n();
// INFO: Function SIMD -> power
// TODO: static inline void c32x2_pow();
// TODO: static inline void c32x2_pow_n();
// TODO: static inline void c32x4_pow();
// TODO: static inline void c32x4_pow_n();
// TODO: static inline void c32x8_pow();
// TODO: static inline void c32x8_pow_n();
// TODO: static inline void c32x16_pow();
// TODO: static inline void c32x16_pow_n();
// TODO: static inline void c64x2_pow();
// TODO: static inline void c64x2_pow_n();
// TODO: static inline void c64x4_pow();
// TODO: static inline void c64x4_pow_n();
// TODO: static inline void c64x8_pow();
// TODO: static inline void c64x8_pow_n();
// TODO: static inline void c64x16_pow();
// TODO: static inline void c64x16_pow_n();
// INFO: Function SIMD -> substraction
// TODO: static inline void c32x2_sub();
// TODO: static inline void c32x2_sub_n();
// TODO: static inline void c32x4_sub();
// TODO: static inline void c32x4_sub_n();
// TODO: static inline void c32x8_sub();
// TODO: static inline void c32x8_sub_n();
// TODO: static inline void c32x16_sub();
// TODO: static inline void c32x16_sub_n();
// TODO: static inline void c64x2_sub();
// TODO: static inline void c64x2_sub_n();
// TODO: static inline void c64x4_sub();
// TODO: static inline void c64x4_sub_n();
// TODO: static inline void c64x8_sub();
// TODO: static inline void c64x8_sub_n();
// TODO: static inline void c64x16_sub();
// TODO: static inline void c64x16_sub_n();

/*
static inline void c32x2_add(c32x2_t* z, c32x2_t* w, c32x2_t* r) {
#if defined(__aarch64__)
  const float32x2_t z_re = vld1_f32(z->re);
  const float32x2_t z_im = vld1_f32(z->im);
  const float32x2_t w_re = vld1_f32(w->re);
  const float32x2_t w_im = vld1_f32(w->im);

  vst1_f32(r->re, vadd_f32(z_re, w_re));
  vst1_f32(r->im, vadd_f32(z_im, w_im));
#elif defined(__x86_64__)
  __m128 z_re = _mm_loadu_ps(z->re);
  __m128 z_im = _mm_loadu_ps(z->im);
  __m128 w_re = _mm_loadu_ps(w->re);
  __m128 w_im = _mm_loadu_ps(w->im);

  _mm_storeu_ps(r->re, _mm_add_ps(z_re, w_re));
  _mm_storeu_ps(r->im, _mm_add_ps(z_im, w_im));
#endif
}

static inline void c32x4_add(c32x4_t* z, c32x4_t* w, c32x4_t* r) {
#if defined(__aarch64__)
  const float32x4_t z_re = vld1q_f32(z->re);
  const float32x4_t z_im = vld1q_f32(z->im);
  const float32x4_t w_re = vld1q_f32(w->re);
  const float32x4_t w_im = vld1q_f32(w->im);

  vst1q_f32(r->re, vaddq_f32(z_re, w_re));
  vst1q_f32(r->im, vaddq_f32(z_im, w_im));
#elif defined(__x86_64__)
  __m128 z_re = _mm_loadu_ps(z->re);
  __m128 z_im = _mm_loadu_ps(z->im);
  __m128 w_re = _mm_loadu_ps(w->re);
  __m128 w_im = _mm_loadu_ps(w->im);

  _mm_storeu_ps(r->re, _mm_add_ps(z_re, w_re));
  _mm_storeu_ps(r->im, _mm_add_ps(z_im, w_im));
#endif
}

static __inline__ void c32x8_add(c32x8_t* z, c32x8_t* w, c32x8_t* r) {
#ifdef __arm64__
  float32x4_t z_re;
  float32x4_t z_im;
  float32x4_t w_re;
  float32x4_t w_im;

  // First Half
  z_re = vld1q_f32(z->re);
  z_im = vld1q_f32(z->im);
  w_re = vld1q_f32(w->re);
  w_im = vld1q_f32(w->im);
  vst1q_f32(r->re, vaddq_f32(z_re, w_re));
  vst1q_f32(r->im, vaddq_f32(z_im, w_im));
  // Second Half
  z_re = vld1q_f32(&z->re[4]);
  z_im = vld1q_f32(&z->im[4]);
  w_re = vld1q_f32(&w->re[4]);
  w_im = vld1q_f32(&w->im[4]);
  vst1q_f32(&r->re[4], vaddq_f32(z_re, w_re));
  vst1q_f32(&r->im[4], vaddq_f32(z_im, w_im));
#else
  __m256 z_re = _mm256_loadu_ps(z->re);
  __m256 z_im = _mm256_loadu_ps(z->im);
  __m256 w_re = _mm256_loadu_ps(w->re);
  __m256 w_im = _mm256_loadu_ps(w->im);

  _mm256_storeu_ps(r->re, _mm256_add_ps(z_re, w_re));
  _mm256_storeu_ps(r->im, _mm256_add_ps(z_im, w_im));
#endif
}

static __inline__ void c32x16_add(c32x16_t* z, c32x16_t* w, c32x16_t* r) {
#ifdef __arm64__
  float32x4_t z_re;
  float32x4_t z_im;
  float32x4_t w_re;
  float32x4_t w_im;

  // First Quarter
  z_re = vld1q_f32(z->re);
  z_im = vld1q_f32(z->im);
  w_re = vld1q_f32(w->re);
  w_im = vld1q_f32(w->im);
  vst1q_f32(r->re, vaddq_f32(z_re, w_re));
  vst1q_f32(r->im, vaddq_f32(z_im, w_im));
  // Second Quarter
  z_re = vld1q_f32(&z->re[4]);
  z_im = vld1q_f32(&z->im[4]);
  w_re = vld1q_f32(&w->re[4]);
  w_im = vld1q_f32(&w->im[4]);
  vst1q_f32(&r->re[4], vaddq_f32(z_re, w_re));
  vst1q_f32(&r->im[4], vaddq_f32(z_im, w_im));
  // Third Quarter
  z_re = vld1q_f32(&z->re[8]);
  z_im = vld1q_f32(&z->im[8]);
  w_re = vld1q_f32(&w->re[8]);
  w_im = vld1q_f32(&w->im[8]);
  vst1q_f32(&r->re[8], vaddq_f32(z_re, w_re));
  vst1q_f32(&r->im[8], vaddq_f32(z_im, w_im));
  // Third Quarter
  z_re = vld1q_f32(&z->re[12]);
  z_im = vld1q_f32(&z->im[12]);
  w_re = vld1q_f32(&w->re[12]);
  w_im = vld1q_f32(&w->im[12]);
  vst1q_f32(&r->re[12], vaddq_f32(z_re, w_re));
  vst1q_f32(&r->im[12], vaddq_f32(z_im, w_im));
#else
  __m512 z_re = _mm512_loadu_ps(z->re);
  __m512 z_im = _mm512_loadu_ps(z->im);
  __m512 w_re = _mm512_loadu_ps(w->re);
  __m512 w_im = _mm512_loadu_ps(w->im);

  _mm512_storeu_ps(r->re, _mm512_add_ps(z_re, w_re));
  _mm512_storeu_ps(r->im, _mm512_add_ps(z_im, w_im));
#endif
}

static __inline__ void c64x2_add(c64x2_t* z, c64x2_t* w, c64x2_t* r) {
  (void)z;
  (void)w;
  (void)r;
#ifdef __arm64__
  // #error "Complex Number Float 64 is not supported on ARM"
#else
#endif
}

static __inline__ void c64x4_add(c32x4_t* z, c32x4_t* w, c32x4_t* r) {
  const float32x4_t z_re = vld1q_f32(z->re);
  const float32x4_t z_im = vld1q_f32(z->im);
  const float32x4_t w_re = vld1q_f32(w->re);
  const float32x4_t w_im = vld1q_f32(w->im);

  vst1q_f32(r->re, vaddq_f32(z_re, w_re));
  vst1q_f32(r->im, vaddq_f32(z_im, w_im));
}

static __inline__ void c64x8_add(c32x8_t* z, c32x8_t* w, c32x8_t* r) {
  float32x4_t z_re;
  float32x4_t z_im;
  float32x4_t w_re;
  float32x4_t w_im;

  // First Half
  z_re = vld1q_f32(z->re);
  z_im = vld1q_f32(z->im);
  w_re = vld1q_f32(w->re);
  w_im = vld1q_f32(w->im);
  vst1q_f32(r->re, vaddq_f32(z_re, w_re));
  vst1q_f32(r->im, vaddq_f32(z_im, w_im));
  // Second Half
  z_re = vld1q_f32(&z->re[4]);
  z_im = vld1q_f32(&z->im[4]);
  w_re = vld1q_f32(&w->re[4]);
  w_im = vld1q_f32(&w->im[4]);
  vst1q_f32(&r->re[4], vaddq_f32(z_re, w_re));
  vst1q_f32(&r->im[4], vaddq_f32(z_im, w_im));
}

static __inline__ void c64x16_add(c32x16_t* z, c32x16_t* w, c32x16_t* r) {
  (void)z;
  (void)w;
  (void)r;
}

//------------------------------------------------------------------------------
// SIMD - Multiplication - [type]_mul(z, w)
//------------------------------------------------------------------------------

static __inline__ void c32x2_mul(c32x2_t* z, c32x2_t* w, c32x2_t* r) {
  const float32x2_t z_re = vld1_f32(z->re);
  const float32x2_t z_im = vld1_f32(z->im);
  const float32x2_t w_re = vld1_f32(w->re);
  const float32x2_t w_im = vld1_f32(w->im);

  vst1_f32(r->re, vsub_f32(vmul_f32(z_re, w_re), vmul_f32(z_im, w_im)));
  vst1_f32(r->im, vadd_f32(vmul_f32(z_re, w_im), vmul_f32(z_im, w_re)));
}

static __inline__ void c32x4_mul(c32x4_t* z, c32x4_t* w, c32x4_t* r) {
  const float32x4_t z_re = vld1q_f32(z->re);
  const float32x4_t z_im = vld1q_f32(z->im);
  const float32x4_t w_re = vld1q_f32(w->re);
  const float32x4_t w_im = vld1q_f32(w->im);

  vst1q_f32(r->re, vsubq_f32(vmulq_f32(z_re, w_re), vmulq_f32(z_im, w_im)));
  vst1q_f32(r->im, vaddq_f32(vmulq_f32(z_re, w_im), vmulq_f32(z_im, w_re)));
}

static __inline__ void c32x8_mul(c32x8_t* z, c32x8_t* w, c32x8_t* r) {
  float32x4_t z_re;
  float32x4_t z_im;
  float32x4_t w_re;
  float32x4_t w_im;

  // First Half
  z_re = vld1q_f32(z->re);
  z_im = vld1q_f32(z->im);
  w_re = vld1q_f32(w->re);
  w_im = vld1q_f32(w->im);
  vst1q_f32(r->re, vsubq_f32(vmulq_f32(z_re, w_re), vmulq_f32(z_im, w_im)));
  vst1q_f32(r->im, vaddq_f32(vmulq_f32(z_re, w_im), vmulq_f32(z_im, w_re)));
  // Second Half
  z_re = vld1q_f32(&z->re[4]);
  z_im = vld1q_f32(&z->im[4]);
  w_re = vld1q_f32(&w->re[4]);
  w_im = vld1q_f32(&w->im[4]);
  vst1q_f32(&r->re[4], vsubq_f32(vmulq_f32(z_re, w_re), vmulq_f32(z_im, w_im)));
  vst1q_f32(&r->im[4], vaddq_f32(vmulq_f32(z_re, w_im), vmulq_f32(z_im, w_re)));
}

static __inline__ void c32x16_mul(c32x16_t* z, c32x16_t* w, c32x16_t* r) {
  float32x4_t z_re;
  float32x4_t z_im;
  float32x4_t w_re;
  float32x4_t w_im;

  // First Quarter
  z_re = vld1q_f32(z->re);
  z_im = vld1q_f32(z->im);
  w_re = vld1q_f32(w->re);
  w_im = vld1q_f32(w->im);
  vst1q_f32(r->re, vsubq_f32(vmulq_f32(z_re, w_re), vmulq_f32(z_im, w_im)));
  vst1q_f32(r->im, vaddq_f32(vmulq_f32(z_re, w_im), vmulq_f32(z_im, w_re)));
  // Second Quarter
  z_re = vld1q_f32(&z->re[4]);
  z_im = vld1q_f32(&z->im[4]);
  w_re = vld1q_f32(&w->re[4]);
  w_im = vld1q_f32(&w->im[4]);
  vst1q_f32(&r->re[4], vsubq_f32(vmulq_f32(z_re, w_re), vmulq_f32(z_im, w_im)));
  vst1q_f32(&r->im[4], vaddq_f32(vmulq_f32(z_re, w_im), vmulq_f32(z_im, w_re)));
  // Third Quarter
  z_re = vld1q_f32(&z->re[8]);
  z_im = vld1q_f32(&z->im[8]);
  w_re = vld1q_f32(&w->re[8]);
  w_im = vld1q_f32(&w->im[8]);
  vst1q_f32(&r->re[8], vsubq_f32(vmulq_f32(z_re, w_re), vmulq_f32(z_im, w_im)));
  vst1q_f32(&r->im[8], vaddq_f32(vmulq_f32(z_re, w_im), vmulq_f32(z_im, w_re)));
  // Last Quarter
  z_re = vld1q_f32(&z->re[12]);
  z_im = vld1q_f32(&z->im[12]);
  w_re = vld1q_f32(&w->re[12]);
  w_im = vld1q_f32(&w->im[12]);
  vst1q_f32(&r->re[12],
            vsubq_f32(vmulq_f32(z_re, w_re), vmulq_f32(z_im, w_im)));
  vst1q_f32(&r->im[12],
            vaddq_f32(vmulq_f32(z_re, w_im), vmulq_f32(z_im, w_re)));
}

static __inline__ void c64x2_mul(c64x2_t* z, c64x2_t* w, c64x2_t* r) {
  (void)z;
  (void)w;
  (void)r;
}

static __inline__ void c64x4_mul(c64x4_t* z, c64x4_t* w, c64x4_t* r) {
  (void)z;
  (void)w;
  (void)r;
}

static __inline__ void c64x8_mul(c64x8_t* z, c64x8_t* w, c64x8_t* r) {
  (void)z;
  (void)w;
  (void)r;
}

static __inline__ void c64x16_mul(c64x16_t* z, c64x16_t* w, c64x16_t* r) {
  (void)z;
  (void)w;
  (void)r;
}

//------------------------------------------------------------------------------
// Convertion
//------------------------------------------------------------------------------

// INFO: target have to be pre-allocated in order to fit without segfault

void c32_to_c32x2(c32_t* from, c32_t* stop, c32x2_t* target);
void c32_to_c32x4(c32_t* from, c32_t* stop, c32x4_t* target);
void c32_to_c32x8(c32_t* from, c32_t* stop, c32x8_t* target);
void c32_to_c32x16(c32_t* from, c32_t* stop, c32x16_t* target);

void c64_to_c64x2(c64_t* from, c64_t* stop, c64x2_t* target);
void c64_to_c64x4(c64_t* from, c64_t* stop, c64x4_t* target);
void c64_to_c64x8(c64_t* from, c64_t* stop, c64x8_t* target);
void c64_to_c64x16(c64_t* from, c64_t* stop, c64x16_t* target);

void c32x2_to_c32(c32x2_t* from, c32x2_t* stop, c32_t* target);
void c32x4_to_c32(c32x4_t* from, c32x4_t* stop, c32_t* target);
void c32x8_to_c32(c32x8_t* from, c32x8_t* stop, c32_t* target);
void c32x16_to_c32(c32x16_t* from, c32x16_t* stop, c32_t* target);

void c64x2_to_c64(c64x2_t* from, c64x2_t* stop, c64_t* target);
void c64x4_to_c64(c64x4_t* from, c64x4_t* stop, c64_t* target);
void c64x8_to_c64(c64x8_t* from, c64x8_t* stop, c64_t* target);
void c64x16_to_c64(c64x16_t* from, c64x16_t* stop, c64_t* target);
*/
#endif
