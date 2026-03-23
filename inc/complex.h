#ifndef COMPLEX_H
#define COMPLEX_H

#include "type.h"

typedef struct c32_s c32_t;
typedef struct c64_s c64_t;

struct c32_s {
  f32_t re;
  f32_t im;
};

struct c64_s {
  f64_t re;
  f64_t im;
};

static inline f32_t c32_abs(c32_t z) {
  return __builtin_sqrtf((z.re * z.re) + (z.im * z.im));
}

static inline f64_t c64_abs(c64_t z) {
  return __builtin_sqrt((z.re * z.re) + (z.im * z.im));
}

static inline f32_t c32_abs_2(c32_t z) {
  return (z.re * z.re) + (z.im * z.im);
}

static inline f64_t c64_abs_2(c64_t z) {
  return (z.re * z.re) + (z.im * z.im);
}

static inline c32_t c32_add(c32_t z, c32_t w) {
  return (c32_t){
    .re = z.re + w.re,
    .im = z.im + w.im,
  };
}

static inline c64_t c64_add(c64_t z, c64_t w) {
  return (c64_t){
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

static inline c64_t c64_add_n(c64_t z, f64_t n) {
  return (c64_t){
    .re = z.re + n,
    .im = z.im,
  };
}

static inline f32_t c32_arg(c32_t z) {
  return __builtin_atan2f(z.im, z.re);
}

static inline f64_t c64_arg(c64_t z) {
  return __builtin_atan2(z.im, z.re);
}

static inline c32_t c32_div(c32_t z, c32_t w) {
  const f32_t abs_2 = (w.re * w.re) + (w.im * w.im);

  return (c32_t){
    .re = ((z.re * w.re) + (z.im * w.im)) / abs_2,
    .im = ((z.im * w.re) - (z.re * w.im)) / abs_2,
  };
}

static inline c64_t c64_div(c64_t z, c64_t w) {
  const f64_t abs_2 = (w.re * w.re) + (w.im * w.im);

  return (c64_t){
    .re = ((z.re * w.re) + (z.im * w.im)) / abs_2,
    .im = ((z.im * w.re) - (z.re * w.im)) / abs_2,
  };
}

static inline c32_t c32_div_n(c32_t z, f32_t n) {
  return (c32_t){
    .re = z.re / n,
    .im = z.im / n,
  };
}

static inline c64_t c64_div_n(c64_t z, f64_t n) {
  return (c64_t){
    .re = z.re / n,
    .im = z.im / n,
  };
}

static inline c32_t c32_e(c32_t z) {
  const f32_t r = __builtin_expf(z.re);
  
  return (c32_t){
    .re = r * __builtin_cosf(z.im),
    .im = r * __builtin_sinf(z.im),
  };
}

static inline c64_t c64_e(c64_t z) {
  const f64_t r = __builtin_exp(z.re);
  
  return (c64_t){
    .re = r * __builtin_cos(z.im),
    .im = r * __builtin_sin(z.im),
  };
}

static inline c32_t c32_ln(c32_t z) {
  const f32_t r = __builtin_sqrtf(z.re * z.re + z.im * z.im);
  
  return (c32_t){
    .re = __builtin_logf(r),
    .im = __builtin_atan2f(z.im, z.re),
  };
}

static inline c64_t c64_ln(c64_t z) {
  const f64_t r = __builtin_sqrt(z.re * z.re + z.im * z.im);
  
  return (c64_t){
    .re = __builtin_log(r),
    .im = __builtin_atan2(z.im, z.re),
  };
}

static inline c32_t c32_mul(c32_t z, c32_t w) {
  return (c32_t){
    .re = (z.re * w.re) - (z.im * w.im),
    .im = (z.re * w.im) + (z.im * w.re),
  };
}

static inline c64_t c64_mul(c64_t z, c64_t w) {
  return (c64_t){
    .re = (z.re * w.re) - (z.im * w.im),
    .im = (z.re * w.im) + (z.im * w.re),
  };
}

static inline c32_t c32_mul_n(c32_t z, float n) {
  return (c32_t){
    .re = z.re * n,
    .im = z.im * n
  };
}

static inline c64_t c64_mul_n(c64_t z, float n) {
  return (c64_t){
    .re = z.re * n,
    .im = z.im * n
  };
}

static inline c32_t c32_pow(c32_t z, c32_t w) {
  return c32_e(c32_mul(w, c32_ln(z)));
}

static inline c64_t c64_pow(c64_t z, c64_t w) {
  return c64_e(c64_mul(w, c64_ln(z)));
}

static inline c32_t c32_pow_n(c32_t z, f32_t n) {
  const f32_t r = __builtin_powf(c32_abs(z), n);
  const f32_t phi = c32_arg(z) * n;

  return (c32_t){
    .re = r * __builtin_cosf(phi),
    .im = r * __builtin_sinf(phi),
  };
}

static inline c64_t c64_pow_n(c64_t z, f64_t n) {
  const f64_t r = __builtin_pow(c64_abs(z), n);
  const f64_t phi = c64_arg(z) * n;

  return (c64_t){
    .re = r * __builtin_cos(phi),
    .im = r * __builtin_sin(phi),
  };
}

static inline c32_t c32_sub(c32_t z, c32_t w) {
  return (c32_t){
    .re = z.re - w.re,
    .im = z.im - w.im,
  };
}

static inline c64_t c64_sub(c64_t z, c64_t w) {
  return (c64_t){
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

static inline c64_t c64_sub_n(c64_t z, f64_t n) {
  return (c64_t){
    .re = z.re - n,
    .im = z.im,
  };
}

#endif
