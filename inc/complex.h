#ifndef COMPLEX_H
#define COMPLEX_H

#include "type.h"
#include "vector.h"

typedef struct c32_s c32_t;
typedef struct c64_s c64_t;

typedef struct c32_v2_s c32_v2_t;
typedef struct c64_v2_s c64_v2_t;

struct c32_s {
  f32_t re;
  f32_t im;
};

struct c64_s {
  f64_t re;
  f64_t im;
};

struct c32_v2_s {
  union {
    struct {
      c32_t a;
      c32_t b;
    };
    struct {
      c32_t start;
      c32_t stop;
    };
  };
};

struct c64_v2_s {
  union {
    struct {
      c64_t a;
      c64_t b;
    };
    struct {
      c64_t start;
      c64_t stop;
    };
  };
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

static inline c32_t c32_add_s(c32_t z, f32_t s) {
  return (c32_t){
    .re = z.re + s,
    .im = z.im,
  };
}

static inline c64_t c64_add_s(c64_t z, f64_t s) {
  return (c64_t){
    .re = z.re + s,
    .im = z.im,
  };
}

static inline f32_t c32_arg(c32_t z) {
  return __builtin_atan2f(z.im, z.re);
}

static inline f64_t c64_arg(c64_t z) {
  return __builtin_atan2(z.im, z.re);
}

static inline c32_t c32_cos(c32_t z) {
  return (c32_t){
    .re = __builtin_cosf(z.re) * __builtin_coshf(z.im),
    .im = -(__builtin_sinf(z.re) * __builtin_sinhf(z.im)),
  };
}

static inline c64_t c64_cos(c64_t z) {
  return (c64_t){
    .re = __builtin_cos(z.re) * __builtin_cosh(z.im),
    .im = -(__builtin_sin(z.re) * __builtin_sinh(z.im)),
  };
}

static inline c32_t c32_cosh(c32_t z) {
  return (c32_t){
    .re = __builtin_coshf(z.re) * __builtin_cosf(z.im),
    .im = __builtin_sinhf(z.re) * __builtin_sinf(z.im),
  };
}

static inline c64_t c64_cosh(c64_t z) {
  return (c64_t){
    .re = __builtin_cosh(z.re) * __builtin_cos(z.im),
    .im = __builtin_sinh(z.re) * __builtin_sin(z.im),
  };
}

static inline c32_t c32_cot(c32_t z) {
  const f32_t re_2x = z.re * 2.0f;
  const f32_t im_2x = z.im * 2.0f;
  const f32_t d = __builtin_coshf(im_2x) - __builtin_cosf(re_2x);

  return (c32_t){
    .re = __builtin_sinf(re_2x) / d,
    .im = -__builtin_sinhf(im_2x) / d,
  };
}

static inline c64_t c64_cot(c64_t z) {
  const f64_t re_2x = z.re * 2.0;
  const f64_t im_2x = z.im * 2.0;
  const f64_t d = __builtin_cosh(im_2x) - __builtin_cos(re_2x);

  return (c64_t){
    .re = __builtin_sin(re_2x) / d,
    .im = -__builtin_sinh(im_2x) / d,
  };
}

static inline c32_t c32_coth(c32_t z) {
  const f32_t re_2x = z.re * 2.0f;
  const f32_t im_2x = z.im * 2.0f;
  const f32_t d = __builtin_coshf(re_2x) - __builtin_cosf(im_2x);

  return (c32_t){
    .re = __builtin_sinhf(re_2x) / d,
    .im = -__builtin_sinf(im_2x) / d,
  };
}

static inline c64_t c64_coth(c64_t z) {
  const f64_t re_2x = z.re * 2.0;
  const f64_t im_2x = z.im * 2.0;
  const f64_t d = __builtin_cosh(re_2x) - __builtin_cos(im_2x);

  return (c64_t){
    .re = __builtin_sinh(re_2x) / d,
    .im = -__builtin_sin(im_2x) / d,
  };
}

static inline c32_t c32_csc(c32_t z) {
  const f32_t d = __builtin_coshf(z.im * 2.0f) - __builtin_cosf(z.re * 2.0f);

  return (c32_t){
    .re = (2.0f * __builtin_sinf(z.re) * __builtin_coshf(z.im)) / d,
    .im = -(2.0f * __builtin_cosf(z.re) * __builtin_sinhf(z.im)) / d,
  };
}

static inline c64_t c64_csc(c64_t z) {
  const f64_t d = __builtin_cosh(z.im * 2.0) - __builtin_cos(z.re * 2.0);

  return (c64_t){
    .re = (2.0 * __builtin_sin(z.re) * __builtin_cosh(z.im)) / d,
    .im = -(2.0 * __builtin_cos(z.re) * __builtin_sinh(z.im)) / d,
  };
}

static inline c32_t c32_csch(c32_t z) {
  const f32_t d = __builtin_coshf(z.re * 2.0f) - __builtin_cosf(z.im * 2.0f);

  return (c32_t){
    .re = (2.0f * __builtin_sinhf(z.re) * __builtin_cosf(z.im)) / d,
    .im = -(2.0f * __builtin_coshf(z.re) * __builtin_sinf(z.im)) / d,
  };
}

static inline c64_t c64_csch(c64_t z) {
  const f64_t d = __builtin_cosh(z.re * 2.0) - __builtin_cos(z.im * 2.0);

  return (c64_t){
    .re = (2.0 * __builtin_sinh(z.re) * __builtin_cos(z.im)) / d,
    .im = -(2.0 * __builtin_cosh(z.re) * __builtin_sin(z.im)) / d,
  };
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

static inline c32_t c32_div_s(c32_t z, f32_t s) {
  return (c32_t){
    .re = z.re / s,
    .im = z.im / s,
  };
}

static inline c64_t c64_div_s(c64_t z, f64_t s) {
  return (c64_t){
    .re = z.re / s,
    .im = z.im / s,
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

static inline c32_t* c32_grid_fill(c32_t* ctx, u32_v2_t frame, c32_v2_t bound) {
  c32_t* head = ctx;
  const c32_t step = (c32_t){
    .re = (bound.b.re - bound.a.re) / (f32_t)(frame.width - 1),
    .im = (bound.b.im - bound.a.im) / (f32_t)(frame.height - 1),
  };
  c32_t z;

  z.im = bound.a.im;
  for (u32_t y = 0; y < frame.height; ++y) {
    z.re = bound.a.re;
    for (u32_t x = 0; x < frame.width; ++x) {
      *head++ = z;
      z.re += step.re;
    }
    z.im += step.im;
  }
  return ctx;
}

static inline c64_t* c64_grid_fill(c64_t* ctx, u32_v2_t frame, c64_v2_t bound) {
  c64_t* head = ctx;
  const c64_t step = (c64_t){
    .re = (bound.b.re - bound.a.re) / (f64_t)(frame.width - 1),
    .im = (bound.b.im - bound.a.im) / (f64_t)(frame.height - 1),
  };
  c64_t z;

  z.im = bound.a.im;
  for (u32_t y = 0; y < frame.height; ++y) {
    z.re = bound.a.re;
    for (u32_t x = 0; x < frame.width; ++x) {
      *head++ = z;
      z.re += step.re;
    }
    z.im += step.im;
  }
  return ctx;
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

static inline c32_t c32_mul_s(c32_t z, float s) {
  return (c32_t){
    .re = z.re * s,
    .im = z.im * s,
  };
}

static inline c64_t c64_mul_s(c64_t z, float s) {
  return (c64_t){
    .re = z.re * s,
    .im = z.im * s,
  };
}

static inline c32_t c32_pow(c32_t z, c32_t w) {
  return c32_e(c32_mul(w, c32_ln(z)));
}

static inline c64_t c64_pow(c64_t z, c64_t w) {
  return c64_e(c64_mul(w, c64_ln(z)));
}

static inline c32_t c32_pow_s(c32_t z, f32_t s) {
  const f32_t r = __builtin_powf(c32_abs(z), s);
  const f32_t phi = c32_arg(z) * s;

  return (c32_t){
    .re = r * __builtin_cosf(phi),
    .im = r * __builtin_sinf(phi),
  };
}

static inline c64_t c64_pow_s(c64_t z, f64_t s) {
  const f64_t r = __builtin_pow(c64_abs(z), s);
  const f64_t phi = c64_arg(z) * s;

  return (c64_t){
    .re = r * __builtin_cos(phi),
    .im = r * __builtin_sin(phi),
  };
}

static inline c32_t c32_sec(c32_t z) {
  const f32_t d = __builtin_cosf(z.re * 2.0f) + __builtin_coshf(z.im * 2.0f);

  return (c32_t){
    .re = (2.0f * __builtin_cosf(z.re) * __builtin_coshf(z.im)) / d,
    .im = (2.0f * __builtin_sinf(z.re) * __builtin_sinhf(z.im)) / d,
  };
}

static inline c64_t c64_sec(c64_t z) {
  const f64_t d = __builtin_cos(z.re * 2.0) + __builtin_cosh(z.im * 2.0);

  return (c64_t){
    .re = (2.0 * __builtin_cos(z.re) * __builtin_cosh(z.im)) / d,
    .im = (2.0 * __builtin_sin(z.re) * __builtin_sinh(z.im)) / d,
  };
}

static inline c32_t c32_sech(c32_t z) {
  const f32_t d = __builtin_coshf(z.re * 2.0f) + __builtin_cosf(z.im * 2.0f);

  return (c32_t){
    .re = (2.0f * __builtin_coshf(z.re) * __builtin_cosf(z.im)) / d,
    .im = -(2.0f * __builtin_sinhf(z.re) * __builtin_sinf(z.im)) / d,
  };
}

static inline c64_t c64_sech(c64_t z) {
  const f64_t d = __builtin_cosh(z.re * 2.0) + __builtin_cos(z.im * 2.0);

  return (c64_t){
    .re = (2.0 * __builtin_cosh(z.re) * __builtin_cos(z.im)) / d,
    .im = -(2.0 * __builtin_sinh(z.re) * __builtin_sin(z.im)) / d,
  };
}

static inline c32_t c32_sin(c32_t z) {
  return (c32_t){
    .re = __builtin_sinf(z.re) * __builtin_coshf(z.im),
    .im = __builtin_cosf(z.re) * __builtin_sinhf(z.im),
  };
}

static inline c64_t c64_sin(c64_t z) {
  return (c64_t){
    .re = __builtin_sin(z.re) * __builtin_cosh(z.im),
    .im = __builtin_cos(z.re) * __builtin_sinh(z.im),
  };
}

static inline c32_t c32_sinh(c32_t z) {
  return (c32_t){
    .re = __builtin_sinhf(z.re) * __builtin_cosf(z.im),
    .im = __builtin_coshf(z.re) * __builtin_sinf(z.im),
  };
}

static inline c64_t c64_sinh(c64_t z) {
  return (c64_t){
    .re = __builtin_sinh(z.re) * __builtin_cos(z.im),
    .im = __builtin_cosh(z.re) * __builtin_sin(z.im),
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

static inline c32_t c32_sub_s(c32_t z, f32_t s) {
  return (c32_t){
    .re = z.re - s,
    .im = z.re,
  };
}

static inline c64_t c64_sub_n(c64_t z, f64_t s) {
  return (c64_t){
    .re = z.re - s,
    .im = z.im,
  };
}

static inline c32_t c32_tan(c32_t z) {
  const f32_t re_x2 = z.re * 2.0f;
  const f32_t im_x2 = z.im * 2.0f;
  const f32_t d = __builtin_cosf(re_x2) + __builtin_coshf(im_x2);

  return (c32_t){
    .re = __builtin_sinf(re_x2) / d,
    .im = __builtin_sinhf(im_x2) / d,
  };
}

static inline c64_t c64_tan(c64_t z) {
  const f64_t re_x2 = z.re * 2.0;
  const f64_t im_x2 = z.im * 2.0;
  const f64_t d = __builtin_cos(re_x2) + __builtin_cosh(im_x2);

  return (c64_t){
    .re = __builtin_sinf(re_x2) / d,
    .im = __builtin_sinhf(im_x2) / d,
  };
}

static inline c32_t c32_tanh(c32_t z) {
  const f32_t re_x2 = z.re * 2.0f;
  const f32_t im_x2 = z.im * 2.0f; 
  const f32_t d = __builtin_coshf(re_x2) + __builtin_cosf(im_x2);

  return (c32_t){
    .re = __builtin_sinhf(re_x2) / d,
    .im = __builtin_sinf(im_x2) / d,
  };
}

static inline c64_t c64_tanh(c64_t z) {
  const f64_t re_x2 = z.re * 2.0;
  const f64_t im_x2 = z.im * 2.0; 
  const f64_t d = __builtin_cosh(re_x2) + __builtin_cos(im_x2);

  return (c64_t){
    .re = __builtin_sinh(re_x2) / d,
    .im = __builtin_sin(im_x2) / d,
  };
}

#endif
