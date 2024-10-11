#ifndef COMPLEX_H
#define COMPLEX_H

#include <math.h>
#include "type.h"

// NOTE: Just a basic Complex Number implementation

typedef struct c32_s c32_t;
typedef struct c64_s c64_t;

// INFO: for SIMD

typedef struct c32x2_s  c32x2_t;
typedef struct c32x4_s  c32x4_t;
typedef struct c32x8_s  c32x8_t;
typedef struct c32x16_s c32x16_t;

typedef struct c32x2_s  c32x2_t;
typedef struct c32x4_s  c32x4_t;
typedef struct c32x8_s  c32x8_t;
typedef struct c32x16_s c32x16_t;

// Complex float 32

struct c32_s {
  f32_t re;
  f32_t im;
};

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

// Complex float 64

struct c64_s {
  f64_t re;
  f64_t im;
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

// TODO: Argument
// TODO: Exponential
// TODO: Power & Root

// Absolute - [type]_abs(z)

static __inline__ f32_t c32_abs(c32_t z) {
  return sqrtf((z.re * z.re) + (z.im * z.im));
}

static __inline__ f64_t c64_abs(c64_t z) {
  return sqrt((z.re * z.re) + (z.im * z.im));
}

// Absolute power 2 - [type]_abs_2(z)

static __inline__ f32_t c32_abs_2(c32_t z) {
  return (z.re * z.re) + (z.im * z.im);
}

static __inline__ f64_t c64_abs_2(c64_t z) {
  return (z.re * z.re) + (z.im * z.im);
}

// Addition - [type]_add(z, w)

static __inline__ c32_t c32_add(c32_t z, c32_t w) {
  return (c32_t){
    .re = z.re + w.re,
    .im = z.im + w.im
  };
}

static __inline__ void c32x2_add(c32x4_t* z, c32x4_t* w, c32x4_t* r) {
  float32x2_t z_re;
  float32x2_t z_im;
  float32x2_t w_re;
  float32x2_t w_im;

  z_re = vld1_f32(z->re);
  z_im = vld1_f32(z->im);
  w_re = vld1_f32(w->re);
  w_im = vld1_f32(w->im);
  vst1_f32(r->re, vadd_f32(z_re, w_re));
  vst1_f32(r->im, vadd_f32(z_im, w_im));
}

static __inline__ void c32x4_add(c32x4_t* z, c32x4_t* w, c32x4_t* r) {
  float32x4_t z_re;
  float32x4_t z_im;
  float32x4_t w_re;
  float32x4_t w_im;

  z_re = vld1q_f32(z->re);
  z_im = vld1q_f32(z->im);
  w_re = vld1q_f32(w->re);
  w_im = vld1q_f32(w->im);
  vst1q_f32(r->re, vaddq_f32(z_re, w_re));
  vst1q_f32(r->im, vaddq_f32(z_im, w_im));
}

static __inline__ c64_t c64_add(c64_t z, c64_t w) {
  return (c64_t){
    .re = z.re + w.re,
    .im = z.im + w.im
  };
}

// Division - [type]_div(z, w)

static __inline__ c32_t c32_div(c32_t z, c32_t w) {
  f32_t abs_2;

  abs_2 = (w.re * w.re) + (w.im * w.im);
  return (c32_t){
    .re = ((z.re * w.re) + (z.im * w.im)) / abs_2,
    .im = ((z.im * w.re) - (z.re * w.im)) / abs_2
  };
}

static __inline__ c64_t c64_div(c64_t z, c64_t w) {
  f64_t abs_2;

  abs_2 = (w.re * w.re) + (w.im * w.im);
  return (c64_t){
    .re = ((z.re * w.re) + (z.im * w.im)) / abs_2,
    .im = ((z.im * w.re) - (z.re * w.im)) / abs_2
  };
}

// Multiplication - [type]_mul(z, w)

static __inline__ c32_t c32_mul(c32_t z, c32_t w) {
  return (c32_t){
    .re = (z.re * w.re) - (z.im * w.im),
    .im = (z.re * w.im) + (z.im * w.re)
  };
}

static __inline__ c64_t c64_mul(c64_t z, c64_t w) {
  return (c64_t){
    .re = (z.re * w.re) - (z.im * w.im),
    .im = (z.re * w.im) + (z.im * w.re)
  };
}

// Substraction - [type]_sub(z, w)

static __inline__ c32_t c32_sub(c32_t z, c32_t w) {
  return (c32_t){
    .re = z.re - w.re,
    .im = z.im - w.im
  };
}

static __inline__ c64_t c64_sub(c64_t z, c64_t w) {
  return (c64_t){
    .re = z.re - w.re,
    .im = z.im - w.im
  };
}

#endif
