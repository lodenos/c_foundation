#ifndef VECTOR_SMID_H
#define VECTOR_SMID_H

#include "type/type.h"

typedef struct i8v2x2_s i8v2x2_t;
typedef struct i8v2x4_s i8v2x4_t;
typedef struct i8v2x8_s i8v2x8_t;
typedef struct i8v2x16_s i8v2x16_t;

typedef struct i8v3x2_s i8v3x2_t;
typedef struct i8v3x4_s i8v3x4_t;
typedef struct i8v3x8_s i8v3x8_t;
typedef struct i8v3x16_s i8v3x16_t;

typedef struct i8v4x2_s i8v4x2_t;
typedef struct i8v4x4_s i8v4x4_t;
typedef struct i8v4x8_s i8v4x8_t;
typedef struct i8v4x16_s i8v4x16_t;

typedef struct i16v2x2_s i16v2x2_t;
typedef struct i16v2x4_s i16v2x4_t;
typedef struct i16v2x8_s i16v2x8_t;
typedef struct i16v2x16_s i16v2x16_t;

typedef struct i16v3x2_s i16v3x2_t;
typedef struct i16v3x4_s i16v3x4_t;
typedef struct i16v3x8_s i16v3x8_t;
typedef struct i16v3x16_s i16v3x16_t;

typedef struct i16v4x2_s i16v4x2_t;
typedef struct i16v4x4_s i16v4x4_t;
typedef struct i16v4x8_s i16v4x8_t;
typedef struct i16v4x16_s i16v4x16_t;

typedef struct i32v2x2_s i32v2x2_t;
typedef struct i32v2x4_s i32v2x4_t;
typedef struct i32v2x8_s i32v2x8_t;
typedef struct i32v2x16_s i32v2x16_t;

typedef struct i32v3x2_s i32v3x2_t;
typedef struct i32v3x4_s i32v3x4_t;
typedef struct i32v3x8_s i32v3x8_t;
typedef struct i32v3x16_s i32v3x16_t;

typedef struct i32v4x2_s i32v4x2_t;
typedef struct i32v4x4_s i32v4x4_t;
typedef struct i32v4x8_s i32v4x8_t;
typedef struct i32v4x16_s i32v4x16_t;

typedef struct i64v2x2_s i64v2x2_t;
typedef struct i64v2x4_s i64v2x4_t;
typedef struct i64v2x8_s i64v2x8_t;
typedef struct i64v2x16_s i64v2x16_t;

typedef struct i64v3x2_s i64v3x2_t;
typedef struct i64v3x4_s i64v3x4_t;
typedef struct i64v3x8_s i64v3x8_t;
typedef struct i64v3x16_s i64v3x16_t;

typedef struct i64v4x2_s i64v4x2_t;
typedef struct i64v4x4_s i64v4x4_t;
typedef struct i64v4x8_s i64v4x8_t;
typedef struct i64v4x16_s i64v4x16_t;

typedef struct u8v2x2_s u8v2x2_t;
typedef struct u8v2x4_s u8v2x4_t;
typedef struct u8v2x8_s u8v2x8_t;
typedef struct u8v2x16_s u8v2x16_t;

typedef struct u8v3x2_s u8v3x2_t;
typedef struct u8v3x4_s u8v3x4_t;
typedef struct u8v3x8_s u8v3x8_t;
typedef struct u8v3x16_s u8v3x16_t;

typedef struct u8v4x2_s u8v4x2_t;
typedef struct u8v4x4_s u8v4x4_t;
typedef struct u8v4x8_s u8v4x8_t;
typedef struct u8v4x16_s u8v4x16_t;

typedef struct u16v2x2_s u16v2x2_t;
typedef struct u16v2x4_s u16v2x4_t;
typedef struct u16v2x8_s u16v2x8_t;
typedef struct u16v2x16_s u16v2x16_t;

typedef struct u16v3x2_s u16v3x2_t;
typedef struct u16v3x4_s u16v3x4_t;
typedef struct u16v3x8_s u16v3x8_t;
typedef struct u16v3x16_s u16v3x16_t;

typedef struct u16v4x2_s u16v4x2_t;
typedef struct u16v4x4_s u16v4x4_t;
typedef struct u16v4x8_s u16v4x8_t;
typedef struct u16v4x16_s u16v4x16_t;

typedef struct u32v2x2_s u32v2x2_t;
typedef struct u32v2x4_s u32v2x4_t;
typedef struct u32v2x8_s u32v2x8_t;
typedef struct u32v2x16_s u32v2x16_t;

typedef struct u32v3x2_s u32v3x2_t;
typedef struct u32v3x4_s u32v3x4_t;
typedef struct u32v3x8_s u32v3x8_t;
typedef struct u32v3x16_s u32v3x16_t;

typedef struct u32v4x2_s u32v4x2_t;
typedef struct u32v4x4_s u32v4x4_t;
typedef struct u32v4x8_s u32v4x8_t;
typedef struct u32v4x16_s u32v4x16_t;

typedef struct u64v2x2_s u64v2x2_t;
typedef struct u64v2x4_s u64v2x4_t;
typedef struct u64v2x8_s u64v2x8_t;
typedef struct u64v2x16_s u64v2x16_t;

typedef struct u64v3x2_s u64v3x2_t;
typedef struct u64v3x4_s u64v3x4_t;
typedef struct u64v3x8_s u64v3x8_t;
typedef struct u64v3x16_s u64v3x16_t;

typedef struct u64v4x2_s u64v4x2_t;
typedef struct u64v4x4_s u64v4x4_t;
typedef struct u64v4x8_s u64v4x8_t;
typedef struct u64v4x16_s u64v4x16_t;

typedef struct f32v2x2_s f32v2x2_t;
typedef struct f32v2x4_s f32v2x4_t;
typedef struct f32v2x8_s f32v2x8_t;
typedef struct f32v2x16_s f32v2x16_t;

typedef struct f32v3x2_s f32v3x2_t;
typedef struct f32v3x4_s f32v3x4_t;
typedef struct f32v3x8_s f32v3x8_t;
typedef struct f32v3x16_s f32v3x16_t;

typedef struct f32v4x2_s f32v4x2_t;
typedef struct f32v4x4_s f32v4x4_t;
typedef struct f32v4x8_s f32v4x8_t_t;
typedef struct f32v4x16_s f32v4x16_t;

typedef struct f64v2x2_s f64v2x2_t;
typedef struct f64v2x4_s f64v2x4_t;
typedef struct f64v2x8_s f64v2x8_t;
typedef struct f64v2x16_s f64v2x16_t;

typedef struct f64v3x2_s f64v3x2_t;
typedef struct f64v3x4_s f64v3x4_t;
typedef struct f64v3x8_s f64v3x8_t;
typedef struct f64v3x16_s f64v3x16_t;

typedef struct f64v4x2_s f64v4x2_t;
typedef struct f64v4x4_s f64v4x4_t;
typedef struct f64v4x8_s f64v4x8_t;
typedef struct f64v4x16_s f64v4x16_t;

struct i8v2x2_s {
  union {
    struct {
      i8_t a[2];
      i8_t b[2];
    };
    struct {
      i8_t x[2];
      i8_t y[2];
    };
    struct {
      i8_t width[2];
      i8_t height[2];
    };
  };
};

struct i8v2x4_s {
  union {
    struct {
      i8_t a[4];
      i8_t b[4];
    };
    struct {
      i8_t x[4];
      i8_t y[4];
    };
    struct {
      i8_t width[4];
      i8_t height[4];
    };
  };
};

struct i8v2x8_s {
  union {
    struct {
      i8_t a[8];
      i8_t b[8];
    };
    struct {
      i8_t x[8];
      i8_t y[8];
    };
    struct {
      i8_t width[8];
      i8_t height[8];
    };
  };
};

struct i8v2x16_s {
  union {
    struct {
      i8_t a[16];
      i8_t b[16];
    };
    struct {
      i8_t x[16];
      i8_t y[16];
    };
    struct {
      i8_t width[16];
      i8_t height[16];
    };
  };
};

struct i8v3x2_s {
  union {
    struct {
      i8_t a[2];
      i8_t b[2];
      i8_t c[2];
    };
    struct {
      i8_t x[2];
      i8_t y[2];
      i8_t z[2];
    };
    struct {
      i8_t width[2];
      i8_t height[2];
      i8_t depth[2];
    };
  };
};

struct i8v3x4_s {
  union {
    struct {
      i8_t a[4];
      i8_t b[4];
      i8_t c[4];
    };
    struct {
      i8_t x[4];
      i8_t y[4];
      i8_t z[4];
    };
    struct {
      i8_t width[4];
      i8_t height[4];
      i8_t depth[4];
    };
  };
};

struct i8v3x8_s {
  union {
    struct {
      i8_t a[8];
      i8_t b[8];
      i8_t c[8];
    };
    struct {
      i8_t x[8];
      i8_t y[8];
      i8_t z[8];
    };
    struct {
      i8_t width[8];
      i8_t height[8];
      i8_t depth[8];
    };
  };
};

struct i8v3x16_s {
  union {
    struct {
      i8_t a[16];
      i8_t b[16];
      i8_t c[16];
    };
    struct {
      i8_t x[16];
      i8_t y[16];
      i8_t z[16];
    };
    struct {
      i8_t width[16];
      i8_t height[16];
      i8_t depth[16];
    };
  };
};

struct i8v4x2_s {
  union {
    struct {
      i8_t a[2];
      i8_t b[2];
      i8_t c[2];
      i8_t d[2];
    };
    struct {
      i8_t ax[2];
      i8_t ay[2];
      i8_t bx[2];
      i8_t by[2];
    };
    struct {
      i8v2x2_t va;
      i8v2x2_t vb;
    };
    struct {
      i8_t x[2];
      i8_t y[2];
      i8_t z[2];
      i8_t w[2];
    };
    struct {
      i8_t width[2];
      i8_t height[2];
      i8_t depth[2];
      i8_t spissitude[2];
    };
  };
};

struct i8v4x4_s {
  union {
    struct {
      i8_t a[4];
      i8_t b[4];
      i8_t c[4];
      i8_t d[4];
    };
    struct {
      i8_t ax[4];
      i8_t ay[4];
      i8_t bx[4];
      i8_t by[4];
    };
    struct {
      i8v2x4_t va;
      i8v2x4_t vb;
    };
    struct {
      i8_t x[4];
      i8_t y[4];
      i8_t z[4];
      i8_t w[4];
    };
    struct {
      i8_t width[4];
      i8_t height[4];
      i8_t depth[4];
      i8_t spissitude[4];
    };
  };
};

struct i8v4x8_s {
  union {
    struct {
      i8_t a[8];
      i8_t b[8];
      i8_t c[8];
      i8_t d[8];
    };
    struct {
      i8_t ax[8];
      i8_t ay[8];
      i8_t bx[8];
      i8_t by[8];
    };
    struct {
      i8v2x8_t va;
      i8v2x8_t vb;
    };
    struct {
      i8_t x[8];
      i8_t y[8];
      i8_t z[8];
      i8_t w[8];
    };
    struct {
      i8_t width[8];
      i8_t height[8];
      i8_t depth[8];
      i8_t spissitude[8];
    };
  };
};

struct i8v4x16_s {
  union {
    struct {
      i8_t a[16];
      i8_t b[16];
      i8_t c[16];
      i8_t d[16];
    };
    struct {
      i8_t ax[16];
      i8_t ay[16];
      i8_t bx[16];
      i8_t by[16];
    };
    struct {
      i8v2x16_t va;
      i8v2x16_t vb;
    };
    struct {
      i8_t x[16];
      i8_t y[16];
      i8_t z[16];
      i8_t w[16];
    };
    struct {
      i8_t width[16];
      i8_t height[16];
      i8_t depth[16];
      i8_t spissitude[16];
    };
  };
};

struct i16v2x2_s {
  union {
    struct {
      i16_t a[2];
      i16_t b[2];
    };
    struct {
      i16_t x[2];
      i16_t y[2];
    };
    struct {
      i16_t width[2];
      i16_t height[2];
    };
  };
};

struct i16v2x4_s {
  union {
    struct {
      i16_t a[4];
      i16_t b[4];
    };
    struct {
      i16_t x[4];
      i16_t y[4];
    };
    struct {
      i16_t width[4];
      i16_t height[4];
    };
  };
};

struct i16v2x8_s {
  union {
    struct {
      i16_t a[8];
      i16_t b[8];
    };
    struct {
      i16_t x[8];
      i16_t y[8];
    };
    struct {
      i16_t width[8];
      i16_t height[8];
    };
  };
};

struct i16v2x16_s {
  union {
    struct {
      i16_t a[16];
      i16_t b[16];
    };
    struct {
      i16_t x[16];
      i16_t y[16];
    };
    struct {
      i16_t width[16];
      i16_t height[16];
    };
  };
};

struct i16v3x2_s {
  union {
    struct {
      i16_t a[2];
      i16_t b[2];
      i16_t c[2];
    };
    struct {
      i16_t x[2];
      i16_t y[2];
      i16_t z[2];
    };
    struct {
      i16_t width[2];
      i16_t height[2];
      i16_t depth[2];
    };
  };
};

struct i16v3x4_s {
  union {
    struct {
      i16_t a[4];
      i16_t b[4];
      i16_t c[4];
    };
    struct {
      i16_t x[4];
      i16_t y[4];
      i16_t z[4];
    };
    struct {
      i16_t width[4];
      i16_t height[4];
      i16_t depth[4];
    };
  };
};

struct i16v3x8_s {
  union {
    struct {
      i16_t a[8];
      i16_t b[8];
      i16_t c[8];
    };
    struct {
      i16_t x[8];
      i16_t y[8];
      i16_t z[8];
    };
    struct {
      i16_t width[8];
      i16_t height[8];
      i16_t depth[8];
    };
  };
};

struct i16v3x16_s {
  union {
    struct {
      i16_t a[16];
      i16_t b[16];
      i16_t c[16];
    };
    struct {
      i16_t x[16];
      i16_t y[16];
      i16_t z[16];
    };
    struct {
      i16_t width[16];
      i16_t height[16];
      i16_t depth[16];
    };
  };
};

struct i16v4x2_s {
  union {
    struct {
      i16_t a[2];
      i16_t b[2];
      i16_t c[2];
      i16_t d[2];
    };
    struct {
      i16_t ax[2];
      i16_t ay[2];
      i16_t bx[2];
      i16_t by[2];
    };
    struct {
      i16v2x2_t va;
      i16v2x2_t vb;
    };
    struct {
      i16_t x[2];
      i16_t y[2];
      i16_t z[2];
      i16_t w[2];
    };
    struct {
      i16_t width[2];
      i16_t height[2];
      i16_t depth[2];
      i16_t spissitude[2];
    };
  };
};

struct i16v4x4_s {
  union {
    struct {
      i16_t a[4];
      i16_t b[4];
      i16_t c[4];
      i16_t d[4];
    };
    struct {
      i16_t ax[4];
      i16_t ay[4];
      i16_t bx[4];
      i16_t by[4];
    };
    struct {
      i16v2x4_t va;
      i16v2x4_t vb;
    };
    struct {
      i16_t x[4];
      i16_t y[4];
      i16_t z[4];
      i16_t w[4];
    };
    struct {
      i16_t width[4];
      i16_t height[4];
      i16_t depth[4];
      i16_t spissitude[4];
    };
  };
};

struct i16v4x8_s {
  union {
    struct {
      i16_t a[8];
      i16_t b[8];
      i16_t c[8];
      i16_t d[8];
    };
    struct {
      i16_t ax[8];
      i16_t ay[8];
      i16_t bx[8];
      i16_t by[8];
    };
    struct {
      i16v2x8_t va;
      i16v2x8_t vb;
    };
    struct {
      i16_t x[8];
      i16_t y[8];
      i16_t z[8];
      i16_t w[8];
    };
    struct {
      i16_t width[8];
      i16_t height[8];
      i16_t depth[8];
      i16_t spissitude[8];
    };
  };
};

struct i16v4x16_s {
  union {
    struct {
      i16_t a[16];
      i16_t b[16];
      i16_t c[16];
      i16_t d[16];
    };
    struct {
      i16_t ax[16];
      i16_t ay[16];
      i16_t bx[16];
      i16_t by[16];
    };
    struct {
      i16v2x16_t va;
      i16v2x16_t vb;
    };
    struct {
      i16_t x[16];
      i16_t y[16];
      i16_t z[16];
      i16_t w[16];
    };
    struct {
      i16_t width[16];
      i16_t height[16];
      i16_t depth[16];
      i16_t spissitude[16];
    };
  };
};

struct i32v2x2_s {
  union {
    struct {
      i32_t a[2];
      i32_t b[2];
    };
    struct {
      i32_t x[2];
      i32_t y[2];
    };
    struct {
      i32_t width[2];
      i32_t height[2];
    };
  };
};

struct i32v2x4_s {
  union {
    struct {
      i32_t a[4];
      i32_t b[4];
    };
    struct {
      i32_t x[4];
      i32_t y[4];
    };
    struct {
      i32_t width[4];
      i32_t height[4];
    };
  };
};

struct i32v2x8_s {
  union {
    struct {
      i32_t a[8];
      i32_t b[8];
    };
    struct {
      i32_t x[8];
      i32_t y[8];
    };
    struct {
      i32_t width[8];
      i32_t height[8];
    };
  };
};

struct i32v2x16_s {
  union {
    struct {
      i32_t a[16];
      i32_t b[16];
    };
    struct {
      i32_t x[16];
      i32_t y[16];
    };
    struct {
      i32_t width[16];
      i32_t height[16];
    };
  };
};

struct i32v3x2_s {
  union {
    struct {
      i32_t a[2];
      i32_t b[2];
      i32_t c[2];
    };
    struct {
      i32_t x[2];
      i32_t y[2];
      i32_t z[2];
    };
    struct {
      i32_t width[2];
      i32_t height[2];
      i32_t depth[2];
    };
  };
};

struct i32v3x4_s {
  union {
    struct {
      i32_t a[4];
      i32_t b[4];
      i32_t c[4];
    };
    struct {
      i32_t x[4];
      i32_t y[4];
      i32_t z[4];
    };
    struct {
      i32_t width[4];
      i32_t height[4];
      i32_t depth[4];
    };
  };
};

struct i32v3x8_s {
  union {
    struct {
      i32_t a[8];
      i32_t b[8];
      i32_t c[8];
    };
    struct {
      i32_t x[8];
      i32_t y[8];
      i32_t z[8];
    };
    struct {
      i32_t width[8];
      i32_t height[8];
      i32_t depth[8];
    };
  };
};

struct i32v3x16_s {
  union {
    struct {
      i32_t a[16];
      i32_t b[16];
      i32_t c[16];
    };
    struct {
      i32_t x[16];
      i32_t y[16];
      i32_t z[16];
    };
    struct {
      i32_t width[16];
      i32_t height[16];
      i32_t depth[16];
    };
  };
};

struct i32v4x2_s {
  union {
    struct {
      i32_t a[2];
      i32_t b[2];
      i32_t c[2];
      i32_t d[2];
    };
    struct {
      i32_t ax[2];
      i32_t ay[2];
      i32_t bx[2];
      i32_t by[2];
    };
    struct {
      i32v2x2_t va;
      i32v2x2_t vb;
    };
    struct {
      i32_t x[2];
      i32_t y[2];
      i32_t z[2];
      i32_t w[2];
    };
    struct {
      i32_t width[2];
      i32_t height[2];
      i32_t depth[2];
      i32_t spissitude[2];
    };
  };
};

struct i32v4x4_s {
  union {
    struct {
      i32_t a[4];
      i32_t b[4];
      i32_t c[4];
      i32_t d[4];
    };
    struct {
      i32_t ax[4];
      i32_t ay[4];
      i32_t bx[4];
      i32_t by[4];
    };
    struct {
      i32v2x4_t va;
      i32v2x4_t vb;
    };
    struct {
      i32_t x[4];
      i32_t y[4];
      i32_t z[4];
      i32_t w[4];
    };
    struct {
      i32_t width[4];
      i32_t height[4];
      i32_t depth[4];
      i32_t spissitude[4];
    };
  };
};

struct i32v4x8_s {
  union {
    struct {
      i32_t a[8];
      i32_t b[8];
      i32_t c[8];
      i32_t d[8];
    };
    struct {
      i32_t ax[8];
      i32_t ay[8];
      i32_t bx[8];
      i32_t by[8];
    };
    struct {
      i32v2x8_t va;
      i32v2x8_t vb;
    };
    struct {
      i32_t x[8];
      i32_t y[8];
      i32_t z[8];
      i32_t w[8];
    };
    struct {
      i32_t width[8];
      i32_t height[8];
      i32_t depth[8];
      i32_t spissitude[8];
    };
  };
};

struct i32v4x16_s {
  union {
    struct {
      i32_t a[16];
      i32_t b[16];
      i32_t c[16];
      i32_t d[16];
    };
    struct {
      i32_t ax[16];
      i32_t ay[16];
      i32_t bx[16];
      i32_t by[16];
    };
    struct {
      i32v2x16_t va;
      i32v2x16_t vb;
    };
    struct {
      i32_t x[16];
      i32_t y[16];
      i32_t z[16];
      i32_t w[16];
    };
    struct {
      i32_t width[16];
      i32_t height[16];
      i32_t depth[16];
      i32_t spissitude[16];
    };
  };
};

struct i64v2x2_s {
  union {
    struct {
      i64_t a[2];
      i64_t b[2];
    };
    struct {
      i64_t x[2];
      i64_t y[2];
    };
    struct {
      i64_t width[2];
      i64_t height[2];
    };
  };
};

struct i64v2x4_s {
  union {
    struct {
      i64_t a[4];
      i64_t b[4];
    };
    struct {
      i64_t x[4];
      i64_t y[4];
    };
    struct {
      i64_t width[4];
      i64_t height[4];
    };
  };
};

struct i64v2x8_s {
  union {
    struct {
      i64_t a[8];
      i64_t b[8];
    };
    struct {
      i64_t x[8];
      i64_t y[8];
    };
    struct {
      i64_t width[8];
      i64_t height[8];
    };
  };
};

struct i64v2x16_s {
  union {
    struct {
      i64_t a[16];
      i64_t b[16];
    };
    struct {
      i64_t x[16];
      i64_t y[16];
    };
    struct {
      i64_t width[16];
      i64_t height[16];
    };
  };
};

struct i64v3x2_s {
  union {
    struct {
      i64_t a[2];
      i64_t b[2];
      i64_t c[2];
    };
    struct {
      i64_t x[2];
      i64_t y[2];
      i64_t z[2];
    };
    struct {
      i64_t width[2];
      i64_t height[2];
      i64_t depth[2];
    };
  };
};

struct i64v3x4_s {
  union {
    struct {
      i64_t a[4];
      i64_t b[4];
      i64_t c[4];
    };
    struct {
      i64_t x[4];
      i64_t y[4];
      i64_t z[4];
    };
    struct {
      i64_t width[4];
      i64_t height[4];
      i64_t depth[4];
    };
  };
};

struct i64v3x8_s {
  union {
    struct {
      i64_t a[8];
      i64_t b[8];
      i64_t c[8];
    };
    struct {
      i64_t x[8];
      i64_t y[8];
      i64_t z[8];
    };
    struct {
      i64_t width[8];
      i64_t height[8];
      i64_t depth[8];
    };
  };
};

struct i64v3x16_s {
  union {
    struct {
      i64_t a[16];
      i64_t b[16];
      i64_t c[16];
    };
    struct {
      i64_t x[16];
      i64_t y[16];
      i64_t z[16];
    };
    struct {
      i64_t width[16];
      i64_t height[16];
      i64_t depth[16];
    };
  };
};

struct i64v4x2_s {
  union {
    struct {
      i64_t a[2];
      i64_t b[2];
      i64_t c[2];
      i64_t d[2];
    };
    struct {
      i64_t ax[2];
      i64_t ay[2];
      i64_t bx[2];
      i64_t by[2];
    };
    struct {
      i64v2x2_t va;
      i64v2x2_t vb;
    };
    struct {
      i64_t x[2];

      i64_t y[2];
      i64_t z[2];
      i64_t w[2];
    };
    struct {
      i64_t width[2];
      i64_t height[2];
      i64_t depth[2];
      i64_t spissitude[2];
    };
  };
};

struct i64v4x4_s {
  union {
    struct {
      i64_t a[4];
      i64_t b[4];
      i64_t c[4];
      i64_t d[4];
    };
    struct {
      i64_t ax[4];
      i64_t ay[4];
      i64_t bx[4];
      i64_t by[4];
    };
    struct {
      i64v2x4_t va;
      i64v2x4_t vb;
    };
    struct {
      i64_t x[4];
      i64_t y[4];
      i64_t z[4];
      i64_t w[4];
    };
    struct {
      i64_t width[4];
      i64_t height[4];
      i64_t depth[4];
      i64_t spissitude[4];
    };
  };
};

struct i64v4x8_s {
  union {
    struct {
      i64_t a[8];
      i64_t b[8];
      i64_t c[8];
      i64_t d[8];
    };
    struct {
      i64_t ax[8];
      i64_t ay[8];
      i64_t bx[8];
      i64_t by[8];
    };
    struct {
      i64v2x8_t va;
      i64v2x8_t vb;
    };
    struct {
      i64_t x[8];
      i64_t y[8];
      i64_t z[8];
      i64_t w[8];
    };
    struct {
      i64_t width[8];
      i64_t height[8];
      i64_t depth[8];
      i64_t spissitude[8];
    };
  };
};

struct i64v4x16_s {
  union {
    struct {
      i64_t a[16];
      i64_t b[16];
      i64_t c[16];
      i64_t d[16];
    };
    struct {
      i64_t ax[16];
      i64_t ay[16];
      i64_t bx[16];
      i64_t by[16];
    };
    struct {
      i64v2x16_t va;
      i64v2x16_t vb;
    };
    struct {
      i64_t x[16];
      i64_t y[16];
      i64_t z[16];
      i64_t w[16];
    };
    struct {
      i64_t width[16];
      i64_t height[16];
      i64_t depth[16];
      i64_t spissitude[16];
    };
  };
};

struct u8v2x2_s {
  union {
    struct {
      u8_t a[2];
      u8_t b[2];
    };
    struct {
      u8_t x[2];
      u8_t y[2];
    };
    struct {
      u8_t width[2];
      u8_t height[2];
    };
  };
};

struct u8v2x4_s {
  union {
    struct {
      u8_t a[4];
      u8_t b[4];
    };
    struct {
      u8_t x[4];
      u8_t y[4];
    };
    struct {
      u8_t width[4];
      u8_t height[4];
    };
  };
};

struct u8v2x8_s {
  union {
    struct {
      u8_t a[8];
      u8_t b[8];
    };
    struct {
      u8_t x[8];
      u8_t y[8];
    };
    struct {
      u8_t width[8];
      u8_t height[8];
    };
  };
};

struct u8v2x16_s {
  union {
    struct {
      u8_t a[16];
      u8_t b[16];
    };
    struct {
      u8_t x[16];
      u8_t y[16];
    };
    struct {
      u8_t width[16];
      u8_t height[16];
    };
  };
};

struct u8v3x2_s {
  union {
    struct {
      u8_t a[2];
      u8_t b[2];
      u8_t c[2];
    };
    struct {
      u8_t x[2];
      u8_t y[2];
      u8_t z[2];
    };
    struct {
      u8_t width[2];
      u8_t height[2];
      u8_t depth[2];
    };
  };
};

struct u8v3x4_s {
  union {
    struct {
      u8_t a[4];
      u8_t b[4];
      u8_t c[4];
    };
    struct {
      u8_t x[4];
      u8_t y[4];
      u8_t z[4];
    };
    struct {
      u8_t width[4];
      u8_t height[4];
      u8_t depth[4];
    };
  };
};

struct u8v3x8_s {
  union {
    struct {
      u8_t a[8];
      u8_t b[8];
      u8_t c[8];
    };
    struct {
      u8_t x[8];
      u8_t y[8];
      u8_t z[8];
    };
    struct {
      u8_t width[8];
      u8_t height[8];
      u8_t depth[8];
    };
  };
};

struct u8v3x16_s {
  union {
    struct {
      u8_t a[16];
      u8_t b[16];
      u8_t c[16];
    };

    struct {
      u8_t x[16];
      u8_t y[16];
      u8_t z[16];
    };
    struct {
      u8_t width[16];
      u8_t height[16];
      u8_t depth[16];
    };
  };
};

struct u8v4x2_s {
  union {
    struct {
      u8_t a[2];
      u8_t b[2];
      u8_t c[2];
      u8_t d[2];
    };
    struct {
      u8_t ax[2];
      u8_t ay[2];
      u8_t bx[2];
      u8_t by[2];
    };
    struct {
      u8v2x2_t va;
      u8v2x2_t vb;
    };
    struct {
      u8_t x[2];
      u8_t y[2];
      u8_t z[2];
      u8_t w[2];
    };
    struct {
      u8_t width[2];
      u8_t height[2];
      u8_t depth[2];
      u8_t spissitude[2];
    };
  };
};

struct u8v4x4_s {
  union {
    struct {
      u8_t a[4];
      u8_t b[4];
      u8_t c[4];
      u8_t d[4];
    };
    struct {
      u8_t ax[4];
      u8_t ay[4];
      u8_t bx[4];
      u8_t by[4];
    };
    struct {
      u8v2x4_t va;
      u8v2x4_t vb;
    };
    struct {
      u8_t x[4];
      u8_t y[4];
      u8_t z[4];
      u8_t w[4];
    };
    struct {
      u8_t width[4];
      u8_t height[4];
      u8_t depth[4];
      u8_t spissitude[4];
    };
  };
};

struct u8v4x8_s {
  union {
    struct {
      u8_t a[8];
      u8_t b[8];
      u8_t c[8];
      u8_t d[8];
    };
    struct {
      u8_t ax[8];
      u8_t ay[8];
      u8_t bx[8];
      u8_t by[8];
    };
    struct {
      u8v2x8_t va;
      u8v2x8_t vb;
    };
    struct {
      u8_t x[8];
      u8_t y[8];
      u8_t z[8];
      u8_t w[8];
    };
    struct {
      u8_t width[8];
      u8_t height[8];
      u8_t depth[8];
      u8_t spissitude[8];
    };
  };
};

struct u8v4x16_s {
  union {
    struct {
      u8_t a[16];
      u8_t b[16];
      u8_t c[16];
      u8_t d[16];
    };
    struct {
      u8_t ax[16];
      u8_t ay[16];
      u8_t bx[16];
      u8_t by[16];
    };
    struct {
      u8v2x16_t va;
      u8v2x16_t vb;
    };
    struct {
      u8_t x[16];
      u8_t y[16];
      u8_t z[16];
      u8_t w[16];
    };
    struct {
      u8_t width[16];
      u8_t height[16];
      u8_t depth[16];
      u8_t spissitude[16];
    };
  };
};

struct u16v2x2_s {
  union {
    struct {
      u16_t a[2];
      u16_t b[2];
    };
    struct {
      u16_t x[2];
      u16_t y[2];
    };
    struct {
      u16_t width[2];
      u16_t height[2];
    };
  };
};

struct u16v2x4_s {
  union {
    struct {
      u16_t a[4];
      u16_t b[4];
    };
    struct {
      u16_t x[4];
      u16_t y[4];
    };
    struct {
      u16_t width[4];
      u16_t height[4];
    };
  };
};

struct u16v2x8_s {
  union {
    struct {
      u16_t a[8];
      u16_t b[8];
    };
    struct {
      u16_t x[8];
      u16_t y[8];
    };
    struct {
      u16_t width[8];
      u16_t height[8];
    };
  };
};

struct u16v2x16_s {
  union {
    struct {
      u16_t a[16];
      u16_t b[16];
    };
    struct {
      u16_t x[16];
      u16_t y[16];
    };
    struct {
      u16_t width[16];
      u16_t height[16];
    };
  };
};

struct u16v3x2_s {
  union {
    struct {
      u16_t a[2];
      u16_t b[2];
      u16_t c[2];
    };
    struct {
      u16_t x[2];
      u16_t y[2];
      u16_t z[2];
    };
    struct {
      u16_t width[2];
      u16_t height[2];
      u16_t depth[2];
    };
  };
};

struct u16v3x4_s {
  union {
    struct {
      u16_t a[4];
      u16_t b[4];
      u16_t c[4];
    };
    struct {
      u16_t x[4];
      u16_t y[4];
      u16_t z[4];
    };
    struct {
      u16_t width[4];
      u16_t height[4];
      u16_t depth[4];
    };
  };
};

struct u16v3x8_s {
  union {
    struct {
      u16_t a[8];
      u16_t b[8];
      u16_t c[8];
    };
    struct {
      u16_t x[8];
      u16_t y[8];
      u16_t z[8];
    };
    struct {
      u16_t width[8];
      u16_t height[8];
      u16_t depth[8];
    };
  };
};

struct u16v3x16_s {
  union {
    struct {
      u16_t a[16];
      u16_t b[16];
      u16_t c[16];
    };
    struct {
      u16_t x[16];
      u16_t y[16];
      u16_t z[16];
    };
    struct {
      u16_t width[16];
      u16_t height[16];
      u16_t depth[16];
    };
  };
};

struct u16v4x2_s {
  union {
    struct {
      u16_t a[2];
      u16_t b[2];
      u16_t c[2];
      u16_t d[2];
    };
    struct {
      u16_t ax[2];
      u16_t ay[2];
      u16_t bx[2];
      u16_t by[2];
    };
    struct {
      u16v2x2_t va;
      u16v2x2_t vb;
    };
    struct {
      u16_t x[2];
      u16_t y[2];
      u16_t z[2];
      u16_t w[2];
    };
    struct {
      u16_t width[2];
      u16_t height[2];
      u16_t depth[2];
      u16_t spissitude[2];
    };
  };
};

struct u16v4x4_s {
  union {
    struct {
      u16_t a[4];
      u16_t b[4];
      u16_t c[4];
      u16_t d[4];
    };
    struct {
      u16_t ax[4];
      u16_t ay[4];
      u16_t bx[4];
      u16_t by[4];
    };
    struct {
      u16v2x4_t va;
      u16v2x4_t vb;
    };
    struct {
      u16_t x[4];
      u16_t y[4];
      u16_t z[4];
      u16_t w[4];
    };
    struct {
      u16_t width[4];
      u16_t height[4];
      u16_t depth[4];
      u16_t spissitude[4];
    };
  };
};

struct u16v4x8_s {
  union {
    struct {
      u16_t a[8];
      u16_t b[8];
      u16_t c[8];
      u16_t d[8];
    };
    struct {
      u16_t ax[8];
      u16_t ay[8];
      u16_t bx[8];
      u16_t by[8];
    };
    struct {
      u16v2x8_t va;
      u16v2x8_t vb;
    };
    struct {
      u16_t x[8];
      u16_t y[8];
      u16_t z[8];
      u16_t w[8];
    };
    struct {
      u16_t width[8];
      u16_t height[8];
      u16_t depth[8];
      u16_t spissitude[8];
    };
  };
};

struct u16v4x16_s {
  union {
    struct {
      u16_t a[16];
      u16_t b[16];
      u16_t c[16];
      u16_t d[16];
    };
    struct {
      u16_t ax[16];
      u16_t ay[16];
      u16_t bx[16];
      u16_t by[16];
    };
    struct {
      u16v2x16_t va;
      u16v2x16_t vb;
    };
    struct {
      u16_t x[16];
      u16_t y[16];
      u16_t z[16];
      u16_t w[16];
    };
    struct {
      u16_t width[16];
      u16_t height[16];
      u16_t depth[16];
      u16_t spissitude[16];
    };
  };
};

struct u32v2x2_s {
  union {
    struct {
      u32_t a[2];
      u32_t b[2];
    };
    struct {
      u32_t x[2];
      u32_t y[2];
    };
    struct {
      u32_t width[2];
      u32_t height[2];
    };
  };
};

struct u32v2x4_s {
  union {
    struct {
      u32_t a[4];
      u32_t b[4];
    };
    struct {
      u32_t x[4];
      u32_t y[4];
    };
    struct {
      u32_t width[4];
      u32_t height[4];
    };
  };
};

struct u32v2x8_s {
  union {
    struct {
      u32_t a[8];
      u32_t b[8];
    };
    struct {
      u32_t x[8];
      u32_t y[8];
    };
    struct {
      u32_t width[8];
      u32_t height[8];
    };
  };
};

struct u32v2x16_s {
  union {
    struct {
      u32_t a[16];
      u32_t b[16];
    };
    struct {
      u32_t x[16];
      u32_t y[16];
    };
    struct {
      u32_t width[16];
      u32_t height[16];
    };
  };
};

struct u32v3x2_s {
  union {
    struct {
      u32_t a[2];
      u32_t b[2];
      u32_t c[2];
    };
    struct {
      u32_t x[2];
      u32_t y[2];
      u32_t z[2];
    };
    struct {
      u32_t width[2];
      u32_t height[2];
      u32_t depth[2];
    };
  };
};

struct u32v3x4_s {
  union {
    struct {
      u32_t a[4];
      u32_t b[4];
      u32_t c[4];
    };
    struct {
      u32_t x[4];
      u32_t y[4];
      u32_t z[4];
    };
    struct {
      u32_t width[4];
      u32_t height[4];
      u32_t depth[4];
    };
  };
};

struct u32v3x8_s {
  union {
    struct {
      u32_t a[8];
      u32_t b[8];
      u32_t c[8];
    };
    struct {
      u32_t x[8];
      u32_t y[8];
      u32_t z[8];
    };
    struct {
      u32_t width[8];
      u32_t height[8];
      u32_t depth[8];
    };
  };
};

struct u32v3x16_s {
  union {
    struct {
      u32_t a[16];
      u32_t b[16];
      u32_t c[16];
    };
    struct {
      u32_t x[16];
      u32_t y[16];
      u32_t z[16];
    };
    struct {
      u32_t width[16];
      u32_t height[16];
      u32_t depth[16];
    };
  };
};

struct u32v4x2_s {
  union {
    struct {
      u32_t a[2];
      u32_t b[2];
      u32_t c[2];
      u32_t d[2];
    };
    struct {
      u32_t ax[2];
      u32_t ay[2];
      u32_t bx[2];
      u32_t by[2];
    };
    struct {
      u32v2x2_t va;
      u32v2x2_t vb;
    };
    struct {
      u32_t x[2];
      u32_t y[2];
      u32_t z[2];
      u32_t w[2];
    };
    struct {
      u32_t width[2];
      u32_t height[2];
      u32_t depth[2];
      u32_t spissitude[2];
    };
  };
};

struct u32v4x4_s {
  union {
    struct {
      u32_t a[4];
      u32_t b[4];
      u32_t c[4];
      u32_t d[4];
    };
    struct {
      u32_t ax[4];
      u32_t ay[4];
      u32_t bx[4];
      u32_t by[4];
    };
    struct {
      u32v2x4_t va;
      u32v2x4_t vb;
    };
    struct {
      u32_t x[4];
      u32_t y[4];
      u32_t z[4];
      u32_t w[4];
    };
    struct {
      u32_t width[4];
      u32_t height[4];
      u32_t depth[4];
      u32_t spissitude[4];
    };
  };
};

struct u32v4x8_s {
  union {
    struct {
      u32_t a[8];
      u32_t b[8];
      u32_t c[8];
      u32_t d[8];
    };
    struct {
      u32_t ax[8];
      u32_t ay[8];
      u32_t bx[8];
      u32_t by[8];
    };
    struct {
      u32v2x8_t va;
      u32v2x8_t vb;
    };
    struct {
      u32_t x[8];
      u32_t y[8];
      u32_t z[8];
      u32_t w[8];
    };
    struct {
      u32_t width[8];
      u32_t height[8];
      u32_t depth[8];
      u32_t spissitude[8];
    };
  };
};

struct u32v4x16_s {
  union {
    struct {
      u32_t a[16];
      u32_t b[16];
      u32_t c[16];
      u32_t d[16];
    };
    struct {
      u32_t ax[16];
      u32_t ay[16];
      u32_t bx[16];
      u32_t by[16];
    };
    struct {
      u32v2x16_t va;
      u32v2x16_t vb;
    };
    struct {
      u32_t x[16];
      u32_t y[16];
      u32_t z[16];
      u32_t w[16];
    };
    struct {
      u32_t width[16];
      u32_t height[16];
      u32_t depth[16];
      u32_t spissitude[16];
    };
  };
};

struct u64v2x2_s {
  union {
    struct {
      u64_t a[2];
      u64_t b[2];
    };
    struct {
      u64_t x[2];
      u64_t y[2];
    };
    struct {
      u64_t width[2];
      u64_t height[2];
    };
  };
};

struct u64v2x4_s {
  union {
    struct {
      u64_t a[4];
      u64_t b[4];
    };
    struct {
      u64_t x[4];
      u64_t y[4];
    };
    struct {
      u64_t width[4];
      u64_t height[4];
    };
  };
};

struct u64v2x8_s {
  union {
    struct {
      u64_t a[8];
      u64_t b[8];
    };
    struct {
      u64_t x[8];
      u64_t y[8];
    };
    struct {
      u64_t width[8];
      u64_t height[8];
    };
  };
};

struct u64v2x16_s {
  union {
    struct {
      u64_t a[16];
      u64_t b[16];
    };
    struct {
      u64_t x[16];
      u64_t y[16];
    };
    struct {
      u64_t width[16];
      u64_t height[16];
    };
  };
};

struct u64v3x2_s {
  union {
    struct {
      u64_t a[2];
      u64_t b[2];
      u64_t c[2];
    };
    struct {
      u64_t x[2];
      u64_t y[2];
      u64_t z[2];
    };
    struct {
      u64_t width[2];
      u64_t height[2];
      u64_t depth[2];
    };
  };
};

struct u64v3x4_s {
  union {
    struct {
      u64_t a[4];
      u64_t b[4];
      u64_t c[4];
    };
    struct {
      u64_t x[4];
      u64_t y[4];
      u64_t z[4];
    };
    struct {
      u64_t width[4];
      u64_t height[4];
      u64_t depth[4];
    };
  };
};

struct u64v3x8_s {
  union {
    struct {
      u64_t a[8];
      u64_t b[8];
      u64_t c[8];
    };
    struct {
      u64_t x[8];
      u64_t y[8];
      u64_t z[8];
    };
    struct {
      u64_t width[8];
      u64_t height[8];
      u64_t depth[8];
    };
  };
};

struct u64v3x16_s {
  union {
    struct {
      u64_t a[16];
      u64_t b[16];
      u64_t c[16];
    };
    struct {
      u64_t x[16];
      u64_t y[16];
      u64_t z[16];
    };
    struct {
      u64_t width[16];
      u64_t height[16];
      u64_t depth[16];
    };
  };
};

struct u64v4x2_s {
  union {
    struct {
      u64_t a[2];
      u64_t b[2];
      u64_t c[2];
      u64_t d[2];
    };
    struct {
      u64_t ax[2];
      u64_t ay[2];
      u64_t bx[2];
      u64_t by[2];
    };
    struct {
      u64v2x2_t va;
      u64v2x2_t vb;
    };
    struct {
      u64_t x[2];
      u64_t y[2];
      u64_t z[2];
      u64_t w[2];
    };
    struct {
      u64_t width[2];
      u64_t height[2];
      u64_t depth[2];
      u64_t spissitude[2];
    };
  };
};

struct u64v4x4_s {
  union {
    struct {
      u64_t a[4];
      u64_t b[4];
      u64_t c[4];
      u64_t d[4];
    };
    struct {
      u64_t ax[4];
      u64_t ay[4];
      u64_t bx[4];
      u64_t by[4];
    };
    struct {
      u64v2x4_t va;
      u64v2x4_t vb;
    };
    struct {
      u64_t x[4];
      u64_t y[4];
      u64_t z[4];
      u64_t w[4];
    };
    struct {
      u64_t width[4];
      u64_t height[4];
      u64_t depth[4];
      u64_t spissitude[4];
    };
  };
};

struct u64v4x8_s {
  union {
    struct {
      u64_t a[8];
      u64_t b[8];
      u64_t c[8];
      u64_t d[8];
    };
    struct {
      u64_t ax[8];
      u64_t ay[8];
      u64_t bx[8];
      u64_t by[8];
    };
    struct {
      u64v2x8_t va;
      u64v2x8_t vb;
    };
    struct {
      u64_t x[8];
      u64_t y[8];
      u64_t z[8];
      u64_t w[8];
    };
    struct {
      u64_t width[8];
      u64_t height[8];
      u64_t depth[8];
      u64_t spissitude[8];
    };
  };
};

struct u64v4x16_s {
  union {
    struct {
      u64_t a[16];
      u64_t b[16];
      u64_t c[16];
      u64_t d[16];
    };
    struct {
      u64_t ax[16];
      u64_t ay[16];
      u64_t bx[16];
      u64_t by[16];
    };
    struct {
      u64v2x16_t va;
      u64v2x16_t vb;
    };
    struct {
      u64_t x[16];
      u64_t y[16];
      u64_t z[16];
      u64_t w[16];
    };
    struct {
      u64_t width[16];
      u64_t height[16];
      u64_t depth[16];
      u64_t spissitude[16];
    };
  };
};

struct f32v2x2_s {
  union {
    struct {
      f32_t a[2];
      f32_t b[2];
    };
    struct {
      f32_t x[2];
      f32_t y[2];
    };
    struct {
      f32_t width[2];
      f32_t height[2];
    };
  };
};

struct f32v2x4_s {
  union {
    struct {
      f32_t a[4];
      f32_t b[4];
    };
    struct {
      f32_t x[4];
      f32_t y[4];
    };
    struct {
      f32_t width[4];
      f32_t height[4];
    };
  };
};

struct f32v2x8_s {
  union {
    struct {
      f32_t a[8];
      f32_t b[8];
    };
    struct {
      f32_t x[8];
      f32_t y[8];
    };
    struct {
      f32_t width[8];
      f32_t height[8];
    };
  };
};

struct f32v2x16_s {
  union {
    struct {
      f32_t a[16];
      f32_t b[16];
    };
    struct {
      f32_t x[16];
      f32_t y[16];
    };
    struct {
      f32_t width[16];
      f32_t height[16];
    };
  };
};

struct f32v3x2_s {
  union {
    struct {
      f32_t a[2];
      f32_t b[2];
      f32_t c[2];
    };
    struct {
      f32_t x[2];
      f32_t y[2];
      f32_t z[2];
    };
    struct {
      f32_t width[2];
      f32_t height[2];
      f32_t depth[2];
    };
  };
};

struct f32v3x4_s {
  union {
    struct {
      f32_t a[4];
      f32_t b[4];
      f32_t c[4];
    };
    struct {
      f32_t x[4];
      f32_t y[4];
      f32_t z[4];
    };
    struct {
      f32_t width[4];
      f32_t height[4];
      f32_t depth[4];
    };
  };
};

struct f32v3x8_s {
  union {
    struct {
      f32_t a[8];
      f32_t b[8];
      f32_t c[8];
    };
    struct {
      f32_t x[8];
      f32_t y[8];
      f32_t z[8];
    };
    struct {
      f32_t width[8];
      f32_t height[8];
      f32_t depth[8];
    };
  };
};

struct f32v3x16_s {
  union {
    struct {
      f32_t a[16];
      f32_t b[16];
      f32_t c[16];
    };
    struct {
      f32_t x[16];
      f32_t y[16];
      f32_t z[16];
    };
    struct {
      f32_t width[16];
      f32_t height[16];
      f32_t depth[16];
    };
  };
};

struct f32v4x2_s {
  union {
    struct {
      f32_t a[2];
      f32_t b[2];
      f32_t c[2];
      f32_t d[2];
    };
    struct {
      f32_t ax[2];
      f32_t ay[2];
      f32_t bx[2];
      f32_t by[2];
    };
    struct {
      f32v2x2_t va;
      f32v2x2_t vb;
    };
    struct {
      f32_t x[2];
      f32_t y[2];
      f32_t z[2];
      f32_t w[2];
    };
    struct {
      f32_t width[2];
      f32_t height[2];
      f32_t depth[2];
      f32_t spissitude[2];
    };
  };
};

struct f32v4x4_s {
  union {
    struct {
      f32_t a[4];
      f32_t b[4];
      f32_t c[4];
      f32_t d[4];
    };
    struct {
      f32_t ax[4];
      f32_t ay[4];
      f32_t bx[4];
      f32_t by[4];
    };
    struct {
      f32v2x4_t va;
      f32v2x4_t vb;
    };
    struct {
      f32_t x[4];
      f32_t y[4];
      f32_t z[4];
      f32_t w[4];
    };
    struct {
      f32_t width[4];
      f32_t height[4];
      f32_t depth[4];
      f32_t spissitude[4];
    };
  };
};

struct f32v4x8_s {
  union {
    struct {
      f32_t a[8];
      f32_t b[8];
      f32_t c[8];
      f32_t d[8];
    };
    struct {
      f32_t ax[8];
      f32_t ay[8];
      f32_t bx[8];
      f32_t by[8];
    };
    struct {
      f32v2x8_t va;
      f32v2x8_t vb;
    };
    struct {
      f32_t x[8];
      f32_t y[8];
      f32_t z[8];
      f32_t w[8];
    };
    struct {
      f32_t width[8];
      f32_t height[8];
      f32_t depth[8];
      f32_t spissitude[8];
    };
  };
};

struct f32v4x16_s {
  union {
    struct {
      f32_t a[16];
      f32_t b[16];
      f32_t c[16];
      f32_t d[16];
    };
    struct {
      f32_t ax[16];
      f32_t ay[16];
      f32_t bx[16];
      f32_t by[16];
    };
    struct {
      f32v2x16_t va;
      f32v2x16_t vb;
    };
    struct {
      f32_t x[16];
      f32_t y[16];
      f32_t z[16];
      f32_t w[16];
    };
    struct {
      f32_t width[16];
      f32_t height[16];
      f32_t depth[16];
      f32_t spissitude[16];
    };
  };
};

struct f64v2x2_s {
  union {
    struct {
      f64_t a[2];
      f64_t b[2];
    };
    struct {
      f64_t x[2];
      f64_t y[2];
    };
    struct {
      f64_t width[2];
      f64_t height[2];
    };
  };
};

struct f64v2x4_s {
  union {
    struct {
      f64_t a[4];
      f64_t b[4];
    };
    struct {
      f64_t x[4];
      f64_t y[4];
    };
    struct {
      f64_t width[4];
      f64_t height[4];
    };
  };
};

struct f64v2x8_s {
  union {
    struct {
      f64_t a[8];
      f64_t b[8];
    };
    struct {
      f64_t x[8];
      f64_t y[8];
    };
    struct {
      f64_t width[8];
      f64_t height[8];
    };
  };
};

struct f64v2x16_s {
  union {
    struct {
      f64_t a[16];
      f64_t b[16];
    };
    struct {
      f64_t x[16];
      f64_t y[16];
    };
    struct {
      f64_t width[16];
      f64_t height[16];
    };
  };
};

struct f64v3x2_s {
  union {
    struct {
      f64_t a[2];
      f64_t b[2];
      f64_t c[2];
    };
    struct {
      f64_t x[2];
      f64_t y[2];
      f64_t z[2];
    };
    struct {
      f64_t width[2];
      f64_t height[2];
      f64_t depth[2];
    };
  };
};

struct f64v3x4_s {
  union {
    struct {
      f64_t a[4];
      f64_t b[4];
      f64_t c[4];
    };
    struct {
      f64_t x[4];
      f64_t y[4];
      f64_t z[4];
    };
    struct {
      f64_t width[4];
      f64_t height[4];
      f64_t depth[4];
    };
  };
};

struct f64v3x8_s {
  union {
    struct {
      f64_t a[8];
      f64_t b[8];
      f64_t c[8];
    };
    struct {
      f64_t x[8];
      f64_t y[8];
      f64_t z[8];
    };
    struct {
      f64_t width[8];
      f64_t height[8];
      f64_t depth[8];
    };
  };
};

struct f64v3x16_s {
  union {
    struct {
      f64_t a[16];
      f64_t b[16];
      f64_t c[16];
    };
    struct {
      f64_t x[16];
      f64_t y[16];
      f64_t z[16];
    };
    struct {
      f64_t width[16];
      f64_t height[16];
      f64_t depth[16];
    };
  };
};

struct f64v4x2_s {
  union {
    struct {
      f64_t a[2];
      f64_t b[2];
      f64_t c[2];
      f64_t d[2];
    };
    struct {
      f64_t ax[2];
      f64_t ay[2];
      f64_t bx[2];
      f64_t by[2];
    };
    struct {
      f64v2x2_t va;
      f64v2x2_t vb;
    };
    struct {
      f64_t x[2];
      f64_t y[2];
      f64_t z[2];
      f64_t w[2];
    };
    struct {
      f64_t width[2];
      f64_t height[2];
      f64_t depth[2];
      f64_t spissitude[2];
    };
  };
};

struct f64v4x4_s {
  union {
    struct {
      f64_t a[4];
      f64_t b[4];
      f64_t c[4];
      f64_t d[4];
    };
    struct {
      f64_t ax[4];
      f64_t ay[4];
      f64_t bx[4];
      f64_t by[4];
    };
    struct {
      f64v2x4_t va;
      f64v2x4_t vb;
    };
    struct {
      f64_t x[4];
      f64_t y[4];
      f64_t z[4];
      f64_t w[4];
    };
    struct {
      f64_t width[4];
      f64_t height[4];
      f64_t depth[4];
      f64_t spissitude[4];
    };
  };
};

struct f64v4x8_s {
  union {
    struct {
      f64_t a[8];
      f64_t b[8];
      f64_t c[8];
      f64_t d[8];
    };
    struct {
      f64_t ax[8];
      f64_t ay[8];
      f64_t bx[8];
      f64_t by[8];
    };
    struct {
      f64v2x8_t va;
      f64v2x8_t vb;
    };
    struct {
      f64_t x[8];
      f64_t y[8];
      f64_t z[8];
      f64_t w[8];
    };
    struct {
      f64_t width[8];
      f64_t height[8];
      f64_t depth[8];
      f64_t spissitude[8];
    };
  };
};

struct f64v4x16_s {
  union {
    struct {
      f64_t a[16];
      f64_t b[16];
      f64_t c[16];
      f64_t d[16];
    };
    struct {
      f64_t ax[16];
      f64_t ay[16];
      f64_t bx[16];
      f64_t by[16];
    };
    struct {
      f64v2x16_t va;
      f64v2x16_t vb;
    };
    struct {
      f64_t x[16];
      f64_t y[16];
      f64_t z[16];
      f64_t w[16];
    };
    struct {
      f64_t width[16];
      f64_t height[16];
      f64_t depth[16];
      f64_t spissitude[16];
    };
  };
};

#endif
