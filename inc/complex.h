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

#endif
