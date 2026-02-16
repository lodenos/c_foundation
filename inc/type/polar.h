#ifndef POLAR_H
#define POLAR_H

#include "type/type.h"

// NOTE: Polar 2D

struct p32_s {
  union {
    struct {
      f32_t r;
      f32_t p;
    };
    struct {
      f32_t rho;
      f32_t phi;
    };
  };
};

struct p64_s {
  union {
    struct {
      f64_t r;
      f64_t p;
    };
    struct {
      f64_t rho;
      f64_t phi;
    };
  };
};

// NOTE: Polar 3D

struct s32_s {
  union {
    struct {
      f32_t r;
      f32_t p;
      f32_t t;
    };
    struct {
      f32_t rho;
      f32_t phi;
      f32_t theta;
    };
  };
};

struct s64_s {
  union {
    struct {
      f64_t r;
      f64_t p;
      f64_t t;
    };
    struct {
      f64_t rho;
      f64_t phi;
      f64_t theta;
    };
  };
};

#endif
