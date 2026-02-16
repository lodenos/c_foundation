#ifndef TYPE_H
#define TYPE_H

#include <stdbool.h>

// NOTE: Vector Section

// NOTE: Polar Vector

typedef struct p32_s p32_t;
typedef struct p64_s p64_t;

// NOTE: Spherical Vector

typedef struct s32_s s32_t;
typedef struct s64_s s64_t;

// NOTE: Vector SMID Section

// NOTE: Vector Section

// NOTE: Vector SMID Section

// INFO: Function Section

// TODO: function -> f32v2_abs(...)
// TODO: function -> f32v3_abs(...)
// TODO: function -> f32v4_abs(...)

// TODO: function -> f32v2_add(...)
// TODO: function -> f32v2_add(...)
// TODO: function -> f32v4_add(...)

// TODO: function -> f32v2_sub(...)
// TODO: function -> f32v3_sub(...)
// TODO: function -> f32v4_sub(...)

// TODO: function -> f32v2_mul(...)
// TODO: function -> f32v3_mul(...)
// TODO: function -> f32v4_mul(...)

// TODO: function -> f32v2_div(...)
// TODO: function -> f32v3_div(...)
// TODO: function -> f32v4_div(...)

// TODO: function -> f32v2_abs(...)
// TODO: function -> f32v3_abs(...)
// TODO: function -> f32v4_abs(...)

// TODO: function -> f32v2_add(...)
// TODO: function -> f32v2_add(...)
// TODO: function -> f32v4_add(...)

// TODO: function -> f32v2_sub(...)
// TODO: function -> f32v3_sub(...)
// TODO: function -> f32v4_sub(...)

// TODO: function -> f32v2_mul(...)
// TODO: function -> f32v3_mul(...)
// TODO: function -> f32v4_mul(...)

// TODO: function -> f32v2_div(...)
// TODO: function -> f32v3_div(...)
// TODO: function -> f32v4_div(...)

// TODO: function -> f64v2_abs(...)
// TODO: function -> f64v3_abs(...)
// TODO: function -> f64v4_abs(...)

// TODO: function -> f64v2_add(...)
// TODO: function -> f64v2_add(...)
// TODO: function -> f64v4_add(...)

// TODO: function -> f64v2_sub(...)
// TODO: function -> f64v3_sub(...)
// TODO: function -> f64v4_sub(...)

// TODO: function -> f64v2_mul(...)
// TODO: function -> f64v3_mul(...)
// TODO: function -> f64v4_mul(...)

// TODO: function -> f64v2_div(...)
// TODO: function -> f64v3_div(...)
// TODO: function -> f64v4_div(...)

static inline f32v2_t f32v2_abs(f32v2_t v) {
  return (f32v2_t){
    .x = (v.x < 0) ? -v.x : v.x,
    .y = (v.y < 0) ? -v.y : v.y,
  };
}

static inline f32v2_t f32v2_sub(f32v2_t a, f32v2_t b) {
  return (f32v2_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
  };
}

static inline f32v2_t f32v2_div(f32v2_t a, f32v2_t b) {
  return (f32v2_t){
    .x = a.x / b.x,
    .y = a.y / b.y,
  };
}

static inline void
f32v2_periodic_tiling(f32v2_t* ptr, f32v4_t* range, u32v2_t* division) {
  f32v2_t step = f32v2_sub(range->vb, range->va);
  f32v2_t point = range->va;

  step = (f32v2_t){
    .x = step.x / (f32_t)division->x,
    .y = step.y / (f32_t)division->y,
  };
  for (u32_t y = 0; y < division->y; ++y) {
    point.x = range->ax;
    for (u32_t x = 0; x < division->x; ++x) {
      *ptr++ = point;
      point.x += step.x;
    }
    point.y += step.y;
  }
}

#endif
