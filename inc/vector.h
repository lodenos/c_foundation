#ifndef VECTOR_H
#define VECTOR_H

#include "type.h"

typedef struct i8_v2_s i8_v2_t;
typedef struct i8_v3_s i8_v3_t;
typedef struct i8_v4_s i8_v4_t;

typedef struct u8_v2_s u8_v2_t;
typedef struct u8_v3_s u8_v3_t;
typedef struct u8_v4_s u8_v4_t;

typedef struct i16_v2_s i16_v2_t;
typedef struct i16_v3_s i16_v3_t;
typedef struct i16_v4_s i16_v4_t;

typedef struct u16_v2_s u16_v2_t;
typedef struct u16_v3_s u16_v3_t;
typedef struct u16_v4_s u16_v4_t;

typedef struct i32_v2_s i32_v2_t;
typedef struct i32_v3_s i32_v3_t;
typedef struct i32_v4_s i32_v4_t;

typedef struct u32_v2_s u32_v2_t;
typedef struct u32_v3_s u32_v3_t;
typedef struct u32_v4_s u32_v4_t;

typedef struct i64_v2_s i64_v2_t;
typedef struct i64_v3_s i64_v3_t;
typedef struct i64_v4_s i64_v4_t;

typedef struct u64_v2_s u64_v2_t;
typedef struct u64_v3_s u64_v3_t;
typedef struct u64_v4_s u64_v4_t;

typedef struct f32_v2_s f32_v2_t;
typedef struct f32_v3_s f32_v3_t;
typedef struct f32_v4_s f32_v4_t;

typedef struct f64_v2_s f64_v2_t;
typedef struct f64_v3_s f64_v3_t;
typedef struct f64_v4_s f64_v4_t;

struct i8_v2_s {
  union {
    struct {
      i8_t a, b;
    };
    struct {
      i8_t x, y;
    };
    struct {
      i8_t horizontal, vertical;
    };
    struct {
      i8_t row, column;
    };
    struct {
      i8_t start, stop;
    };
    struct {
      i8_t width, height;
    };
  };
};

struct i8_v3_s {
  union {
    struct {
      i8_t a, b, c;
    };
    struct {
      i8_t x, y, z;
    };
    struct {
      i8_t width, height, depth;
    };
  };
};

struct i8_v4_s {
  union {
    struct {
      i8_t a, b, c, d;
    };
    struct {
      i8_t ax, ay, bx, by;
    };
    struct {
      i8_v2_t av, bv;
    };
    struct {
      i8_t x, y, z, w;
    };
    struct {
      i8_t px, py, width, height;
    };
    struct {
      i8_t north, east, south, west;
    };
    struct {
      i8_t top, right, bottom, left;
    };
    struct {
      i8_t top_left, top_right, bottom_right, bottom_left;
    };
  };
};

struct u8_v2_s {
  union {
    struct {
      u8_t a, b;
    };
    struct {
      u8_t x, y;
    };
    struct {
      u8_t horizontal, vertical;
    };
    struct {
      u8_t row, column;
    };
    struct {
      u8_t start, stop;
    };
    struct {
      u8_t width, height;
    };
  };
};

struct u8_v3_s {
  union {
    struct {
      u8_t a, b, c;
    };
    struct {
      u8_t x, y, z;
    };
    struct {
      u8_t width, height, depth;
    };
  };
};

struct u8_v4_s {
  union {
    struct {
      u8_t a, b, c, d;
    };
    struct {
      u8_t ax, ay, bx, by;
    };
    struct {
      u8_v2_t av, bv;
    };
    struct {
      u8_t x, y, z, w;
    };
    struct {
      u8_t px, py, width, height;
    };
    struct {
      u8_t north, east, south, west;
    };
    struct {
      u8_t top, right, bottom, left;
    };
    struct {
      u8_t top_left, top_right, bottom_right, bottom_left;
    };
  };
};

struct i16_v2_s {
  union {
    struct {
      i16_t a, b;
    };
    struct {
      i16_t x, y;
    };
    struct {
      i16_t horizontal, vertical;
    };
    struct {
      i16_t row, column;
    };
    struct {
      i16_t start, stop;
    };
    struct {
      i16_t width, height;
    };
  };
};

struct i16_v3_s {
  union {
    struct {
      i16_t a, b, c;
    };
    struct {
      i16_t x, y, z;
    };
    struct {
      i16_t width, height, depth;
    };
  };
};

struct i16_v4_s {
  union {
    struct {
      i16_t a, b, c, d;
    };
    struct {
      i16_t ax, ay, bx, by;
    };
    struct {
      i16_v2_t av, bv;
    };
    struct {
      i16_t x, y, z, w;
    };
    struct {
      i16_t px, py, width, height;
    };
    struct {
      i16_t north, east, south, west;
    };
    struct {
      i16_t top, right, bottom, left;
    };
    struct {
      i16_t top_left, top_right, bottom_right, bottom_left;
    };
  };
};

struct u16_v2_s {
  union {
    struct {
      u16_t a, b;
    };
    struct {
      u16_t x, y;
    };
    struct {
      u16_t horizontal, vertical;
    };
    struct {
      u16_t row, column;
    };
    struct {
      u16_t start, stop;
    };
    struct {
      u16_t width, height;
    };
  };
};

struct u16_v3_s {
  union {
    struct {
      u16_t a, b, c;
    };
    struct {
      u16_t x, y, z;
    };
    struct {
      u16_t width, height, depth;
    };
  };
};

struct u16_v4_s {
  union {
    struct {
      u16_t a, b, c, d;
    };
    struct {
      u16_t ax, ay, bx, by;
    };
    struct {
      u16_v2_t av, bv;
    };
    struct {
      u16_t x, y, z, w;
    };
    struct {
      u16_t px, py, width, height;
    };
    struct {
      u16_t north, east, south, west;
    };
    struct {
      u16_t top, right, bottom, left;
    };
    struct {
      u16_t top_left, top_right, bottom_right, bottom_left;
    };
  };
};


struct i32_v2_s {
  union {
    struct {
      i32_t a, b;
    };
    struct {
      i32_t x, y;
    };
    struct {
      i32_t horizontal, vertical;
    };
    struct {
      i32_t row, column;
    };
    struct {
      i32_t start, stop;
    };
    struct {
      i32_t width, height;
    };
  };
};

struct i32_v3_s {
  union {
    struct {
      i32_t a, b, c;
    };
    struct {
      i32_t x, y, z;
    };
    struct {
      i32_t width, height, depth;
    };
  };
};

struct i32_v4_s {
  union {
    struct {
      i32_t a, b, c, d;
    };
    struct {
      i32_t ax, ay, bx, by;
    };
    struct {
      i32_v2_t av, bv;
    };
    struct {
      i32_t x, y, z, w;
    };
    struct {
      i32_t px, py, width, height;
    };
    struct {
      i32_t north, east, south, west;
    };
    struct {
      i32_t top, right, bottom, left;
    };
    struct {
      i32_t top_left, top_right, bottom_right, bottom_left;
    };
  };
};

struct u32_v2_s {
  union {
    struct {
      u32_t a, b;
    };
    struct {
      u32_t x, y;
    };
    struct {
      u32_t horizontal, vertical;
    };
    struct {
      u32_t row, column;
    };
    struct {
      u32_t start, stop;
    };
    struct {
      u32_t width, height;
    };
  };
};

struct u32_v3_s {
  union {
    struct {
      u32_t a, b, c;
    };
    struct {
      u32_t x, y, z;
    };
    struct {
      u32_t width, height, depth;
    };
  };
};

struct u32_v4_s {
  union {
    struct {
      u32_t a, b, c, d;
    };
    struct {
      u32_t ax, ay, bx, by;
    };
    struct {
      u32_v2_t av, bv;
    };
    struct {
      u32_t x, y, z, w;
    };
    struct {
      u32_t px, py, width, height;
    };
    struct {
      u32_t north, east, south, west;
    };
    struct {
      u32_t top, right, bottom, left;
    };
    struct {
      u32_t top_left, top_right, bottom_right, bottom_left;
    };
  };
};

struct i64_v2_s {
  union {
    struct {
      i64_t a, b;
    };
    struct {
      i64_t x, y;
    };
    struct {
      i64_t horizontal, vertical;
    };
    struct {
      i64_t row, column;
    };
    struct {
      i64_t start, stop;
    };
    struct {
      i64_t width, height;
    };
  };
};

struct i64_v3_s {
  union {
    struct {
      i64_t a, b, c;
    };
    struct {
      i64_t x, y, z;
    };
    struct {
      i64_t width, height, depth;
    };
  };
};

struct i64_v4_s {
  union {
    struct {
      i64_t a, b, c, d;
    };
    struct {
      i64_t ax, ay, bx, by;
    };
    struct {
      i64_v2_t av, bv;
    };
    struct {
      i64_t x, y, z, w;
    };
    struct {
      i64_t px, py, width, height;
    };
    struct {
      i64_t north, east, south, west;
    };
    struct {
      i64_t top, right, bottom, left;
    };
    struct {
      i64_t top_left, top_right, bottom_right, bottom_left;
    };
  };
};

struct u64_v2_s {
  union {
    struct {
      u64_t a, b;
    };
    struct {
      u64_t x, y;
    };
    struct {
      u64_t horizontal, vertical;
    };
    struct {
      u64_t row, column;
    };
    struct {
      u64_t start, stop;
    };
    struct {
      u64_t width, height;
    };
  };
};

struct u64_v3_s {
  union {
    struct {
      u64_t a, b, c;
    };
    struct {
      u64_t x, y, z;
    };
    struct {
      u64_t width, height, depth;
    };
  };
};

struct u64_v4_s {
  union {
    struct {
      u64_t a, b, c, d;
    };
    struct {
      u64_t ax, ay, bx, by;
    };
    struct {
      u64_v2_t av, bv;
    };
    struct {
      u64_t x, y, z, w;
    };
    struct {
      u64_t px, py, width, height;
    };
    struct {
      u64_t north, east, south, west;
    };
    struct {
      u64_t top, right, bottom, left;
    };
    struct {
      u64_t top_left, top_right, bottom_right, bottom_left;
    };
  };
};

struct f32_v2_s {
  union {
    struct {
      f32_t a, b;
    };
    struct {
      f32_t x, y;
    };
    struct {
      f32_t horizontal, vertical;
    };
    struct {
      f32_t row, column;
    };
    struct {
      f32_t start, stop;
    };
    struct {
      f32_t width, height;
    };
  };
};

struct f32_v3_s {
  union {
    struct {
      f32_t a, b, c;
    };
    struct {
      f32_t x, y, z;
    };
    struct {
      f32_t width, height, depth;
    };
  };
};

struct f32_v4_s {
  union {
    struct {
      f32_t a, b, c, d;
    };
    struct {
      f32_t ax, ay, bx, by;
    };
    struct {
      f32_v2_t av, bv;
    };
    struct {
      f32_t x, y, z, w;
    };
    struct {
      f32_t px, py, width, height;
    };
    struct {
      f32_t north, east, south, west;
    };
    struct {
      f32_t top, right, bottom, left;
    };
    struct {
      f32_t top_left, top_right, bottom_right, bottom_left;
    };
  };
};

struct f64_v2_s {
  union {
    struct {
      f64_t a, b;
    };
    struct {
      f64_t x, y;
    };
    struct {
      f64_t horizontal, vertical;
    };
    struct {
      f64_t row, column;
    };
    struct {
      f64_t start, stop;
    };
    struct {
      f64_t width, height;
    };
  };
};

struct f64_v3_s {
  union {
    struct {
      f64_t a, b, c;
    };
    struct {
      f64_t x, y, z;
    };
    struct {
      f64_t width, height, depth;
    };
  };
};

struct f64_v4_s {
  union {
    struct {
      f64_t a, b, c, d;
    };
    struct {
      f64_t ax, ay, bx, by;
    };
    struct {
      f64_v2_t av, bv;
    };
    struct {
      f64_t x, y, z, w;
    };
    struct {
      f64_t px, py, width, height;
    };
    struct {
      f64_t north, east, south, west;
    };
    struct {
      f64_t top, right, bottom, left;
    };
    struct {
      f64_t top_left, top_right, bottom_right, bottom_left;
    };
  };
};

static inline f32_v2_t f32_v2_add(f32_v2_t a, f32_v2_t b) {
  return (f32_v2_t){
    .x = a.x + b.x,
    .y = a.y + b.y,
  };  
}

static inline f32_v2_t f32_v2_add_n(f32_v2_t a, f32_t n) {
  return (f32_v2_t){
    .x = a.x + n,
    .y = a.y + n,
  };
}

static inline f32_t f32_v2_dist(f32_v2_t a, f32_v2_t b) {
  const f32_v2_t v = (f32_v2_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
  };

  return __builtin_sqrtf(v.x * v.x + v.y * v.y);
}

static inline f32_t f32_v2_dist_2(f32_v2_t a, f32_v2_t b) {
  const f32_v2_t v = (f32_v2_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
  };

  return v.x * v.x + v.y * v.y;
}

static inline f32_t f32_v2_mag(f32_v2_t v) {
  return __builtin_sqrtf(v.x * v.x + v.y * v.y);
}

static inline f32_t f32_v2_mag_2(f32_v2_t v) {
  return v.x * v.x + v.y * v.y;
}

static inline f32_v2_t f32_v2_max(f32_v2_t a, f32_v2_t b) {
  return (f32_v2_t){
    .x = (a.x > b.x) ? a.x : b.x,
    .y = (a.y > b.y) ? a.y : b.y,
  };
}

static inline f32_v2_t f32_v2_min(f32_v2_t a, f32_v2_t b) {
  return (f32_v2_t){
    .x = (a.x < b.x) ? a.x : b.x,
    .y = (a.y < b.y) ? a.y : b.y,
  };
}

static inline f32_v2_t f32_v2_mul(f32_v2_t a, f32_v2_t b) {
  return (f32_v2_t){
    .x = a.x * b.x,
    .y = a.y * b.y,
  };
}

static inline f32_v2_t f32_v3_mul_n(f32_v2_t a, f32_t n) {
  return (f32_v2_t){
    .x = a.x * n,
    .y = a.y * n,
  };
}

static inline f32_v2_t f32_v2_neg(f32_v2_t v) {
  return (f32_v2_t){
    .x = -v.x,
    .y = -v.y,
  };
}

static inline f32_v2_t f32_v2_norm(f32_v2_t v) {
  const f32_t mag = __builtin_sqrt(v.x * v.x + v.y * v.y);

  return (f32_v2_t){
    .x = v.x / mag,
    .y = v.y / mag,
  };
}

static inline f32_v2_t f32_v2_sub(f32_v2_t a, f32_v2_t b) {
  return (f32_v2_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
  };
}

static inline f32_v2_t f32_v3_sub_n(f32_v2_t a, f32_t n) {
  return (f32_v2_t){
    .x = a.x - n,
    .y = a.y - n,
  };
}

static inline f64_v2_t f64_v2_add(f64_v2_t a, f64_v2_t b) {
  return (f64_v2_t){
    .x = a.x + b.x,
    .y = a.y + b.y,
  };  
}

static inline f64_v2_t f64_v2_add_n(f64_v2_t a, f64_t n) {
  return (f64_v2_t){
    .x = a.x + n,
    .y = a.y + n,
  };
}

static inline f64_t f64_v2_dist(f64_v2_t a, f64_v2_t b) {
  const f64_v2_t v = (f64_v2_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
  };

  return __builtin_sqrt(v.x * v.x + v.y * v.y);
}

static inline f64_t f64_v2_dist_2(f64_v2_t a, f64_v2_t b) {
  const f64_v2_t v = (f64_v2_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
  };

  return v.x * v.x + v.y * v.y;
}

static inline f64_t f64_v2_mag(f64_v2_t v) {
  return __builtin_sqrt(v.x * v.x + v.y * v.y);
}

static inline f64_t f64_v2_mag_2(f64_v2_t v) {
  return v.x * v.x + v.y * v.y;
}

static inline f64_v2_t f64_v2_max(f64_v2_t a, f64_v2_t b) {
  return (f64_v2_t){
    .x = (a.x > b.x) ? a.x : b.x,
    .y = (a.y > b.y) ? a.y : b.y,
  };
}

static inline f64_v2_t f64_v2_min(f64_v2_t a, f64_v2_t b) {
  return (f64_v2_t){
    .x = (a.x < b.x) ? a.x : b.x,
    .y = (a.y < b.y) ? a.y : b.y,
  };
}

static inline f64_v2_t f64_v2_mul(f64_v2_t a, f64_v2_t b) {
  return (f64_v2_t){
    .x = a.x * b.x,
    .y = a.y * b.y,
  };
}

static inline f64_v2_t f64_v2_mul_n(f64_v2_t a, f64_t n) {
  return (f64_v2_t){
    .x = a.x * n,
    .y = a.y * n,
  };
}

static inline f64_v2_t f64_v43_neg(f64_v2_t v) {
  return (f64_v2_t){
    .x = -v.x,
    .y = -v.y,
  };
}

static inline f64_v2_t f64_v2_norm(f64_v2_t v) {
  const f64_t mag = __builtin_sqrt(v.x * v.x + v.y * v.y);

  return (f64_v2_t){
    .x = v.x / mag,
    .y = v.y / mag,
  };
}

static inline f64_v2_t f64_v2_sub(f64_v2_t a, f64_v2_t b) {
  return (f64_v2_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
  };
}

static inline f64_v2_t f64_v2_sub_n(f64_v2_t a, f64_t n) {
  return (f64_v2_t){
    .x = a.x - n,
    .y = a.y - n,
  };
}

static inline f32_v3_t f32_v3_add(f32_v3_t a, f32_v3_t b) {
  return (f32_v3_t){
    .x = a.x + b.x,
    .y = a.y + b.y,
    .z = a.z + b.z,
  };  
}

static inline f32_v3_t f32_v3_add_n(f32_v3_t a, f32_t n) {
  return (f32_v3_t){
    .x = a.x + n,
    .y = a.y + n,
    .z = a.z + n,
  };
}

static inline f32_v3_t f32_v3_cross(f32_v3_t a, f32_v3_t b) {
  return (f32_v3_t) {
    .x = a.y * b.z - a.z * b.y,
    .y = a.z * b.x - a.x * b.z,
    .z = a.x * b.y - a.y * b.x,
  };
}

static inline f32_t f32_v3_dist(f32_v3_t a, f32_v3_t b) {
  const f32_v3_t v = (f32_v3_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
  };

  return __builtin_sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
}

static inline f32_t f32_v3_dist_2(f32_v3_t a, f32_v3_t b) {
  const f32_v3_t v = (f32_v3_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
  };

  return v.x * v.x + v.y * v.y + v.z * v.z;
}

static inline f32_t f32_v3_mag(f32_v3_t v) {
  return __builtin_sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
}

static inline f32_t f32_v3_mag_2(f32_v3_t v) {
  return v.x * v.x + v.y * v.y + v.z * v.z;
}

static inline f32_v3_t f32_v3_max(f32_v3_t a, f32_v3_t b) {
  return (f32_v3_t){
    .x = (a.x > b.x) ? a.x : b.x,
    .y = (a.y > b.y) ? a.y : b.y,
    .z = (a.z > b.z) ? a.z : b.z,
  };
}

static inline f32_v3_t f32_v3_min(f32_v3_t a, f32_v3_t b) {
  return (f32_v3_t){
    .x = (a.x < b.x) ? a.x : b.x,
    .y = (a.y < b.y) ? a.y : b.y,
    .z = (a.z < b.z) ? a.z : b.z,
  };
}

static inline f32_v3_t f32_v3_mul(f32_v3_t a, f32_v3_t b) {
  return (f32_v3_t){
    .x = a.x * b.x,
    .y = a.y * b.y,
    .z = a.z * b.z,
  };
}

static inline f32_v3_t f32_v3_mul_n(f32_v3_t a, f32_t n) {
  return (f32_v3_t){
    .x = a.x * n,
    .y = a.y * n,
    .z = a.z * n,
  };
}

static inline f32_v3_t f32_v3_neg(f32_v3_t v) {
  return (f32_v3_t){
    .x = -v.x,
    .y = -v.y,
    .z = -v.z,
  };
}

static inline f32_v3_t f32_v3_norm(f32_v3_t v) {
  const f32_t mag = __builtin_sqrt(v.x * v.x + v.y * v.y + v.z * v.z);

  return (f32_v3_t){
    .x = v.x / mag,
    .y = v.y / mag,
    .z = v.z / mag,
  };
}

static inline f32_v3_t f32_v3_sub(f32_v3_t a, f32_v3_t b) {
  return (f32_v3_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
  };
}

static inline f32_v3_t f32_v3_sub_n(f32_v3_t a, f32_t n) {
  return (f32_v3_t){
    .x = a.x - n,
    .y = a.y - n,
    .z = a.z - n,
  };
}

static inline f64_v3_t f64_v3_add(f64_v3_t a, f64_v3_t b) {
  return (f64_v3_t){
    .x = a.x + b.x,
    .y = a.y + b.y,
    .z = a.z + b.z,
  };  
}

static inline f64_v3_t f64_v3_add_n(f64_v3_t a, f64_t n) {
  return (f64_v3_t){
    .x = a.x + n,
    .y = a.y + n,
    .z = a.z + n,
  };
}

static inline f64_v3_t f64_v3_cross(f64_v3_t a, f64_v3_t b) {
  return (f64_v3_t) {
    .x = a.y * b.z - a.z * b.y,
    .y = a.z * b.x - a.x * b.z,
    .z = a.x * b.y - a.y * b.x,
  };
}

static inline f64_t f64_v3_dist(f64_v3_t a, f64_v3_t b) {
  const f64_v3_t v = (f64_v3_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
  };

  return __builtin_sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

static inline f64_t f64_v3_dist_2(f64_v3_t a, f64_v3_t b) {
  const f64_v3_t v = (f64_v3_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
  };

  return v.x * v.x + v.y * v.y + v.z * v.z;
}

static inline f64_t f64_v3_mag(f64_v3_t v) {
  return __builtin_sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

static inline f64_t f64_v3_mag_2(f64_v3_t v) {
  return v.x * v.x + v.y * v.y + v.z * v.z;
}

static inline f64_v3_t f64_v3_max(f64_v3_t a, f64_v3_t b) {
  return (f64_v3_t){
    .x = (a.x > b.x) ? a.x : b.x,
    .y = (a.y > b.y) ? a.y : b.y,
    .z = (a.z > b.z) ? a.z : b.z,
  };
}

static inline f64_v3_t f64_v3_min(f64_v3_t a, f64_v3_t b) {
  return (f64_v3_t){
    .x = (a.x < b.x) ? a.x : b.x,
    .y = (a.y < b.y) ? a.y : b.y,
    .z = (a.z < b.z) ? a.z : b.z,
  };
}

static inline f64_v3_t f64_v3_mul(f64_v3_t a, f64_v3_t b) {
  return (f64_v3_t){
    .x = a.x * b.x,
    .y = a.y * b.y,
    .z = a.z * b.z,
  };
}

static inline f64_v3_t f64_v3_mul_n(f64_v3_t a, f64_t n) {
  return (f64_v3_t){
    .x = a.x * n,
    .y = a.y * n,
    .z = a.z * n,
  };
}

static inline f64_v3_t f64_v43_neg(f64_v3_t v) {
  return (f64_v3_t){
    .x = -v.x,
    .y = -v.y,
    .z = -v.z,
  };
}

static inline f64_v3_t f64_v3_norm(f64_v3_t v) {
  const f64_t mag = __builtin_sqrt(v.x * v.x + v.y * v.y + v.z * v.z);

  return (f64_v3_t){
    .x = v.x / mag,
    .y = v.y / mag,
    .z = v.z / mag,
  };
}

static inline f64_v3_t f64_v3_sub(f64_v3_t a, f64_v3_t b) {
  return (f64_v3_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
  };
}

static inline f64_v3_t f64_v3_sub_n(f64_v3_t a, f64_t n) {
  return (f64_v3_t){
    .x = a.x - n,
    .y = a.y - n,
    .z = a.z - n,
  };
}

static inline f32_v4_t f32_v4_add(f32_v4_t a, f32_v4_t b) {
  return (f32_v4_t){
    .x = a.x + b.x,
    .y = a.y + b.y,
    .z = a.z + b.z,
    .w = a.w + b.w,
  };  
}

static inline f32_v4_t f32_v4_add_n(f32_v4_t a, f32_t n) {
  return (f32_v4_t){
    .x = a.x + n,
    .y = a.y + n,
    .z = a.z + n,
    .w = a.w + n,
  };
}

static inline f32_t f32_v4_dist(f32_v4_t a, f32_v4_t b) {
  const f32_v4_t v = (f32_v4_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
    .w = a.w - b.w,
  };

  return __builtin_sqrtf(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
}

static inline f32_t f32_v4_dist_2(f32_v4_t a, f32_v4_t b) {
  const f32_v4_t v = (f32_v4_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
    .w = a.w - b.w,
  };

  return v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w;
}

static inline f32_t f32_v4_mag(f32_v4_t v) {
  return __builtin_sqrtf(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
}

static inline f32_t f32_v4_mag_2(f32_v4_t v) {
  return v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w;
}

static inline f32_v4_t f32_v4_max(f32_v4_t a, f32_v4_t b) {
  return (f32_v4_t){
    .x = (a.x > b.x) ? a.x : b.x,
    .y = (a.y > b.y) ? a.y : b.y,
    .z = (a.z > b.z) ? a.z : b.z,
    .w = (a.w > b.w) ? a.w : b.w
  };
}

static inline f32_v4_t f32_v4_min(f32_v4_t a, f32_v4_t b) {
  return (f32_v4_t){
    .x = (a.x < b.x) ? a.x : b.x,
    .y = (a.y < b.y) ? a.y : b.y,
    .z = (a.z < b.z) ? a.z : b.z,
    .w = (a.w < b.w) ? a.w : b.w
  };
}

static inline f32_v4_t f32_v4_mul(f32_v4_t a, f32_v4_t b) {
  return (f32_v4_t){
    .x = a.x * b.x,
    .y = a.y * b.y,
    .z = a.z * b.z,
    .w = a.w * b.w,
  };
}

static inline f32_v4_t f32_v4_mul_n(f32_v4_t a, f32_t n) {
  return (f32_v4_t){
    .x = a.x * n,
    .y = a.y * n,
    .z = a.z * n,
    .w = a.w * n,
  };
}

static inline f32_v4_t f32_v4_neg(f32_v4_t v) {
  return (f32_v4_t){
    .x = -v.x,
    .y = -v.y,
    .z = -v.z,
    .w = -v.w,
  };
}

static inline f32_v4_t f32_v4_norm(f32_v4_t v) {
  const f32_t mag = __builtin_sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);

  return (f32_v4_t){
    .x = v.x / mag,
    .y = v.y / mag,
    .z = v.z / mag,
    .w = v.w / mag,
  };
}

static inline f32_v4_t f32_v4_sub(f32_v4_t a, f32_v4_t b) {
  return (f32_v4_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
    .w = a.w - b.w,
  };
}

static inline f32_v4_t f32_v4_sub_n(f32_v4_t a, f32_t n) {
  return (f32_v4_t){
    .x = a.x - n,
    .y = a.y - n,
    .z = a.z - n,
    .w = a.w - n,
  };
}

static inline f64_v4_t f64_v4_add(f64_v4_t a, f64_v4_t b) {
  return (f64_v4_t){
    .x = a.x + b.x,
    .y = a.y + b.y,
    .z = a.z + b.z,
    .w = a.w + b.w,
  };  
}

static inline f64_v4_t f64_v4_add_n(f64_v4_t a, f64_t n) {
  return (f64_v4_t){
    .x = a.x + n,
    .y = a.y + n,
    .z = a.z + n,
    .w = a.w + n,
  };
}

static inline f64_t f64_v4_dist(f64_v4_t a, f64_v4_t b) {
  const f64_v4_t v = (f64_v4_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
    .w = a.w - b.w,
  };

  return __builtin_sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
}

static inline f64_t f64_v4_dist_2(f64_v4_t a, f64_v4_t b) {
  const f64_v4_t v = (f64_v4_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
    .w = a.w - b.w,
  };

  return v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w;
}

static inline f64_t f64_v4_mag(f64_v4_t v) {
  return __builtin_sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
}

static inline f64_t f64_v4_mag_2(f64_v4_t v) {
  return v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w;
}

static inline f64_v4_t f64_v4_max(f64_v4_t a, f64_v4_t b) {
  return (f64_v4_t){
    .x = (a.x > b.x) ? a.x : b.x,
    .y = (a.y > b.y) ? a.y : b.y,
    .z = (a.z > b.z) ? a.z : b.z,
    .w = (a.w > b.w) ? a.w : b.w
  };
}

static inline f64_v4_t f64_v4_min(f64_v4_t a, f64_v4_t b) {
  return (f64_v4_t){
    .x = (a.x < b.x) ? a.x : b.x,
    .y = (a.y < b.y) ? a.y : b.y,
    .z = (a.z < b.z) ? a.z : b.z,
    .w = (a.w < b.w) ? a.w : b.w
  };
}

static inline f64_v4_t f64_v4_mul(f64_v4_t a, f64_v4_t b) {
  return (f64_v4_t){
    .x = a.x * b.x,
    .y = a.y * b.y,
    .z = a.z * b.z,
    .w = a.w * b.w,
  };
}

static inline f64_v4_t f64_v4_mul_n(f64_v4_t a, f64_t n) {
  return (f64_v4_t){
    .x = a.x * n,
    .y = a.y * n,
    .z = a.z * n,
    .w = a.w * n,
  };
}

static inline f64_v4_t f64_v4_neg(f64_v4_t v) {
  return (f64_v4_t){
    .x = -v.x,
    .y = -v.y,
    .z = -v.z,
    .w = -v.w,
  };
}

static inline f64_v4_t f64_v4_norm(f64_v4_t v) {
  const f64_t mag = __builtin_sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);

  return (f64_v4_t){
    .x = v.x / mag,
    .y = v.y / mag,
    .z = v.z / mag,
    .w = v.w / mag,
  };
}

static inline f64_v4_t f64_v4_sub(f64_v4_t a, f64_v4_t b) {
  return (f64_v4_t){
    .x = a.x - b.x,
    .y = a.y - b.y,
    .z = a.z - b.z,
    .w = a.w - b.w,
  };
}

static inline f64_v4_t f64_v4_sub_n(f64_v4_t a, f64_t n) {
  return (f64_v4_t){
    .x = a.x - n,
    .y = a.y - n,
    .z = a.z - n,
    .w = a.w - n,
  };
}

#endif
