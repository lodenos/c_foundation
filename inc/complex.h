#ifndef COMPLEX_H
#define COMPLEX_H

#include <math.h>
#include "type.h"

// NOTE: Just a basic Complex Number implementation

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
