#ifndef VECTOR_H
#define VECTOR_H

#include "type.h"

// Singed 8 bits

typedef struct v2_i8_s v2_i8_t;
typedef struct v3_i8_s v3_i8_t;
typedef struct v4_i8_s v4_i8_t;

// Unsinged 8 bits

typedef struct v2_u8_s v2_u8_t;
typedef struct v3_u8_s v3_u8_t;
typedef struct v4_u8_s v4_u8_t;

// Singed 16 bits

typedef struct v2_i16_s v2_i16_t;
typedef struct v3_i16_s v3_i16_t;
typedef struct v4_i16_s v4_i16_t;

// Unsinged 16 bits

typedef struct v2_u16_s v2_u16_t;
typedef struct v3_u16_s v3_u16_t;
typedef struct v4_u16_s v4_u16_t;

// Singed 32 bits

typedef struct v2_i32_s v2_i32_t;
typedef struct v3_i32_s v3_i32_t;
typedef struct v4_i32_s v4_i32_t;

// Unsinged 32 bits

typedef struct v2_u32_s v2_u32_t;
typedef struct v3_u32_s v3_u32_t;
typedef struct v4_u32_s v4_u32_t;

// Singed 64 bits

typedef struct v2_i64_s v2_i64_t;
typedef struct v3_i64_s v3_i64_t;
typedef struct v4_i64_s v4_i64_t;

// Unsinged 64 bits

typedef struct v2_u64_s v2_u64_t;
typedef struct v3_u64_s v3_u64_t;
typedef struct v4_u64_s v4_u64_t;

// Floating point 32 bits

typedef struct v2_f32_s v2_f32_t;
typedef struct v3_f32_s v3_f32_t;
typedef struct v4_f32_s v4_f32_t;

// Floating point 64 bits

typedef struct v2_f64_s v2_f64_t;
typedef struct v3_f64_s v3_f64_t;
typedef struct v4_f64_s v4_f64_t;

// Struct signed 8 bites

struct v2_i8_s {
  union {
    struct {
      i8_t a;
      i8_t b;
    };
    struct {
      i8_t x;
      i8_t y;
    };
    struct {
      i8_t width;
      i8_t height;
    };
  };
};

struct v3_i8_s {
  union {
    struct {
      i8_t a;
      i8_t b;
      i8_t c;
    };
    struct {
      i8_t x;
      i8_t y;
      i8_t z;
    };
    struct {
      i8_t width;
      i8_t height;
      i8_t depth;
    };
  };
};

struct v4_i8_s {
  union {
    struct {
      i8_t a;
      i8_t b;
      i8_t c;
      i8_t d;
    };
    struct {
      i8_t ax;
      i8_t ay;
      i8_t bx;
      i8_t by;
    };
    struct {
      v2_i8_t va;
      v2_i8_t vb;
    };
    struct {
      i8_t x;
      i8_t y;
      i8_t z;
      i8_t w;
    };
    struct {
      i8_t width;
      i8_t height;
      i8_t depth;
      i8_t spissitude;
    };
  };
};

// Struct unsigned 8 bites

struct v2_u8_s {
  union {
    struct {
      u8_t a;
      u8_t b;
    };
    struct {
      u8_t x;
      u8_t y;
    };
    struct {
      u8_t width;
      u8_t height;
    };
  };
};

struct v3_u8_s {
  union {
    struct {
      u8_t a;
      u8_t b;
      u8_t c;
    };
    struct {
      u8_t x;
      u8_t y;
      u8_t z;
    };
    struct {
      u8_t width;
      u8_t height;
      u8_t depth;
    };
  };
};

struct v4_u8_s {
  union {
    struct {
      u8_t a;
      u8_t b;
      u8_t c;
      u8_t d;
    };
    struct {
      u8_t ax;
      u8_t ay;
      u8_t bx;
      u8_t by;
    };
    struct {
      v2_u8_t va;
      v2_u8_t vb;
    };
    struct {
      u8_t x;
      u8_t y;
      u8_t z;
      u8_t w;
    };
    struct {
      u8_t width;
      u8_t height;
      u8_t depth;
      u8_t spissitude;
    };
  };
};

// Struct signed 16 bites

struct v2_i16_s {
  union {
    struct {
      i16_t a;
      i16_t b;
    };
    struct {
      i16_t x;
      i16_t y;
    };
    struct {
      i16_t width;
      i16_t height;
    };
  };
};

struct v3_i16_s {
  union {
    struct {
      i16_t a;
      i16_t b;
      i16_t c;
    };
    struct {
      i16_t x;
      i16_t y;
      i16_t z;
    };
    struct {
      i16_t width;
      i16_t height;
      i16_t depth;
    };
  };
};

struct v4_i16_s {
  union {
    struct {
      i16_t a;
      i16_t b;
      i16_t c;
      i16_t d;
    };
    struct {
      i16_t ax;
      i16_t ay;
      i16_t bx;
      i16_t by;
    };
    struct {
      v2_i16_t va;
      v2_i16_t vb;
    };
    struct {
      i16_t x;
      i16_t y;
      i16_t z;
      i16_t w;
    };
    struct {
      i16_t width;
      i16_t height;
      i16_t depth;
      i16_t spissitude;
    };
  };
};

// Struct unsigned 16 bites

struct v2_u16_s {
  union {
    struct {
      u16_t a;
      u16_t b;
    };
    struct {
      u16_t x;
      u16_t y;
    };
    struct {
      u16_t width;
      u16_t height;
    };
  };
};

struct v3_u16_s {
  union {
    struct {
      u16_t a;
      u16_t b;
      u16_t c;
    };
    struct {
      u16_t x;
      u16_t y;
      u16_t z;
    };
    struct {
      u16_t width;
      u16_t height;
      u16_t depth;
    };
  };
};

struct v4_u16_s {
  union {
    struct {
      u16_t a;
      u16_t b;
      u16_t c;
      u16_t d;
    };
    struct {
      u16_t ax;
      u16_t ay;
      u16_t bx;
      u16_t by;
    };
    struct {
      v2_u16_t va;
      v2_u16_t vb;
    };
    struct {
      u16_t x;
      u16_t y;
      u16_t z;
      u16_t w;
    };
    struct {
      u16_t width;
      u16_t height;
      u16_t depth;
      u16_t spissitude;
    };
  };
};

// Struct signed 32 bites

struct v2_i32_s {
  union {
    struct {
      i32_t a;
      i32_t b;
    };
    struct {
      i32_t x;
      i32_t y;
    };
    struct {
      i32_t width;
      i32_t height;
    };
  };
};

struct v3_i32_s {
  union {
    struct {
      i32_t a;
      i32_t b;
      i32_t c;
    };
    struct {
      i32_t x;
      i32_t y;
      i32_t z;
    };
    struct {
      i32_t width;
      i32_t height;
      i32_t depth;
    };
  };
};

struct v4_i32_s {
  union {
    struct {
      i32_t a;
      i32_t b;
      i32_t c;
      i32_t d;
    };
    struct {
      i32_t ax;
      i32_t ay;
      i32_t bx;
      i32_t by;
    };
    struct {
      v2_i32_t va;
      v2_i32_t vb;
    };
    struct {
      i32_t x;
      i32_t y;
      i32_t z;
      i32_t w;
    };
    struct {
      i32_t width;
      i32_t height;
      i32_t depth;
      i32_t spissitude;
    };
  };
};

// Struct unsigned 8 bites

struct v2_u32_s {
  union {
    struct {
      u32_t a;
      u32_t b;
    };
    struct {
      u32_t x;
      u32_t y;
    };
    struct {
      u32_t width;
      u32_t height;
    };
  };
};

struct v3_u32_s {
  union {
    struct {
      u32_t a;
      u32_t b;
      u32_t c;
    };
    struct {
      u32_t x;
      u32_t y;
      u32_t z;
    };
    struct {
      u32_t width;
      u32_t height;
      u32_t depth;
    };
  };
};

struct v4_u32_s {
  union {
    struct {
      u32_t a;
      u32_t b;
      u32_t c;
      u32_t d;
    };
    struct {
      u32_t ax;
      u32_t ay;
      u32_t bx;
      u32_t by;
    };
    struct {
      v2_u32_t va;
      v2_u32_t vb;
    };
    struct {
      u32_t x;
      u32_t y;
      u32_t z;
      u32_t w;
    };
    struct {
      u32_t width;
      u32_t height;
      u32_t depth;
      u32_t spissitude;
    };
  };
};

// Struct signed 64 bites

struct v2_i64_s {
  union {
    struct {
      i64_t a;
      i64_t b;
    };
    struct {
      i64_t x;
      i64_t y;
    };
    struct {
      i64_t width;
      i64_t height;
    };
  };
};

struct v3_i64_s {
  union {
    struct {
      i64_t a;
      i64_t b;
      i64_t c;
    };
    struct {
      i64_t x;
      i64_t y;
      i64_t z;
    };
    struct {
      i64_t width;
      i64_t height;
      i64_t depth;
    };
  };
};

struct v4_i64_s {
  union {
    struct {
      i64_t a;
      i64_t b;
      i64_t c;
      i64_t d;
    };
    struct {
      i64_t ax;
      i64_t ay;
      i64_t bx;
      i64_t by;
    };
    struct {
      v2_i64_t va;
      v2_i64_t vb;
    };
    struct {
      i64_t x;
      i64_t y;
      i64_t z;
      i64_t w;
    };
    struct {
      i64_t width;
      i64_t height;
      i64_t depth;
      i64_t spissitude;
    };
  };
};

// Struct unsigned 64 bites

struct v2_u64_s {
  union {
    struct {
      u64_t a;
      u64_t b;
    };
    struct {
      u64_t x;
      u64_t y;
    };
    struct {
      u64_t width;
      u64_t height;
    };
  };
};

struct v3_u64_s {
  union {
    struct {
      u64_t a;
      u64_t b;
      u64_t c;
    };
    struct {
      u64_t x;
      u64_t y;
      u64_t z;
    };
    struct {
      u64_t width;
      u64_t height;
      u64_t depth;
    };
  };
};

struct v4_u64_s {
  union {
    struct {
      u64_t a;
      u64_t b;
      u64_t c;
      u64_t d;
    };
    struct {
      u64_t ax;
      u64_t ay;
      u64_t bx;
      u64_t by;
    };
    struct {
      v2_u64_t va;
      v2_u64_t vb;
    };
    struct {
      u64_t x;
      u64_t y;
      u64_t z;
      u64_t w;
    };
    struct {
      u64_t width;
      u64_t height;
      u64_t depth;
      u64_t spissitude;
    };
  };
};

// Floating point 32 bits

struct v2_f32_s {
  union {
    struct {
      f32_t a;
      f32_t b;
    };
    struct {
      f32_t x;
      f32_t y;
    };
    struct {
      f32_t width;
      f32_t height;
    };
  };
};

struct v3_f32_s {
  union {
    struct {
      f32_t a;
      f32_t b;
      f32_t c;
    };
    struct {
      f32_t x;
      f32_t y;
      f32_t z;
    };
    struct {
      f32_t width;
      f32_t height;
      f32_t depth;
    };
  };
};

struct v4_f32_s {
  union {
    struct {
      f32_t a;
      f32_t b;
      f32_t c;
      f32_t d;
    };
    struct {
      f32_t ax;
      f32_t ay;
      f32_t bx;
      f32_t by;
    };
    struct {
      v2_f32_t va;
      v2_f32_t vb;
    };
    struct {
      f32_t x;
      f32_t y;
      f32_t z;
      f32_t w;
    };
    struct {
      f32_t width;
      f32_t height;
      f32_t depth;
      f32_t spissitude;
    };
  };
};

// Floating point 64 bits

struct v2_f64_s {
  union {
    struct {
      f64_t a;
      f64_t b;
    };
    struct {
      f64_t x;
      f64_t y;
    };
    struct {
      f64_t width;
      f64_t height;
    };
  };
};

struct v3_f64_s {
  union {
    struct {
      f64_t a;
      f64_t b;
      f64_t c;
    };
    struct {
      f64_t x;
      f64_t y;
      f64_t z;
    };
    struct {
      f64_t width;
      f64_t height;
      f64_t depth;
    };
  };
};

struct v4_f64_s {
  union {
    struct {
      f64_t a;
      f64_t b;
      f64_t c;
      f64_t d;
    };
    struct {
      f64_t ax;
      f64_t ay;
      f64_t bx;
      f64_t by;
    };
    struct {
      v2_f64_t va;
      v2_f64_t vb;
    };
    struct {
      f64_t x;
      f64_t y;
      f64_t z;
      f64_t w;
    };
    struct {
      f64_t width;
      f64_t height;
      f64_t depth;
      f64_t spissitude;
    };
  };
};

#endif
