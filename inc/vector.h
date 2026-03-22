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

#endif
