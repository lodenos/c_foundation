#ifndef VECTOR_H
#define VECTOR_H

#include "type/type.h"

typedef struct i8v2_s i8v2_t;
typedef struct i8v3_s i8v3_t;
typedef struct i8v4_s i8v4_t;

typedef struct i16v2_s i16v2_t;
typedef struct i16v3_s i16v3_t;
typedef struct i16v4_s i16v4_t;

typedef struct i32v2_s i32v2_t;
typedef struct i32v3_s i32v3_t;
typedef struct i32v4_s i32v4_t;

typedef struct i64v2_s i64v2_t;
typedef struct i64v3_s i64v3_t;
typedef struct i64v4_s i64v4_t;

typedef struct u8v2_s u8v2_t;
typedef struct u8v3_s u8v3_t;
typedef struct u8v4_s u8v4_t;

typedef struct u16v2_s u16v2_t;
typedef struct u16v3_s u16v3_t;
typedef struct u16v4_s u16v4_t;

typedef struct u32v2_s u32v2_t;
typedef struct u32v3_s u32v3_t;
typedef struct u32v4_s u32v4_t;

typedef struct u64v2_s u64v2_t;
typedef struct u64v3_s u64v3_t;
typedef struct u64v4_s u64v4_t;

typedef struct f32v2_s f32v2_t;
typedef struct f32v3_s f32v3_t;
typedef struct f32v4_s f32v4_t;

typedef struct f64v2_s f64v2_t;
typedef struct f64v3_s f64v3_t;
typedef struct f64v4_s f64v4_t;

struct i8v2_s {
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
      i8_t horizontal;
      i8_t vertical;
    };
    struct {
      i8_t row;
      i8_t column;
    };
    struct {
      i8_t start;
      i8_t stop;
    };
    struct {
      i8_t width;
      i8_t height;
    };
  };
};

struct i8v3_s {
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

struct i8v4_s {
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
      i8v2_t va;
      i8v2_t vb;
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
    struct {
      i8_t north;
      i8_t east;
      i8_t south;
      i8_t west;
    };
    struct {
      i8_t top;
      i8_t right;
      i8_t bottom;
      i8_t left;
    };
    struct {
      i8_t top_left;
      i8_t top_right;
      i8_t bottom_right;
      i8_t bottom_left;
    };
  };
};

struct i16v2_s {
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
      i16_t horizontal;
      i16_t vertical;
    };
    struct {
      i16_t row;
      i16_t column;
    };
    struct {
      i16_t start;
      i16_t stop;
    };
    struct {
      i16_t width;
      i16_t height;
    };
  };
};

struct i16v3_s {
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

struct i16v4_s {
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
      i16v2_t va;
      i16v2_t vb;
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
    struct {
      i16_t north;
      i16_t east;
      i16_t south;
      i16_t west;
    };
    struct {
      i16_t top;
      i16_t right;
      i16_t bottom;
      i16_t left;
    };
    struct {
      i16_t top_left;
      i16_t top_right;
      i16_t bottom_right;
      i16_t bottom_left;
    };
  };
};

struct i32v2_s {
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
      i32_t horizontal;
      i32_t vertical;
    };
    struct {
      i32_t row;
      i32_t column;
    };
    struct {
      i32_t start;
      i32_t stop;
    };
    struct {
      i32_t width;
      i32_t height;
    };
  };
};

struct i32v3_s {
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

struct i32v4_s {
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
      i32v2_t va;
      i32v2_t vb;
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
    struct {
      i32_t north;
      i32_t east;
      i32_t south;
      i32_t west;
    };
    struct {
      i32_t top;
      i32_t right;
      i32_t bottom;
      i32_t left;
    };
    struct {
      i32_t top_left;
      i32_t top_right;
      i32_t bottom_right;
      i32_t bottom_left;
    };
  };
};

struct i64v2_s {
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
      i64_t horizontal;
      i64_t vertical;
    };
    struct {
      i64_t row;
      i64_t column;
    };
    struct {
      i64_t start;
      i64_t stop;
    };
    struct {
      i64_t width;
      i64_t height;
    };
  };
};

struct i64v3_s {
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

struct i64v4_s {
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
      i64v2_t va;
      i64v2_t vb;
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
    struct {
      i64_t north;
      i64_t east;
      i64_t south;
      i64_t west;
    };
    struct {
      i64_t top;
      i64_t right;
      i64_t bottom;
      i64_t left;
    };
    struct {
      i64_t top_left;
      i64_t top_right;
      i64_t bottom_right;
      i64_t bottom_left;
    };
  };
};

struct u8v2_s {
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
      u8_t horizontal;
      u8_t vertical;
    };
    struct {
      u8_t row;
      u8_t column;
    };
    struct {
      u8_t start;
      u8_t stop;
    };
    struct {
      u8_t width;
      u8_t height;
    };
  };
};

struct u8v3_s {
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

struct u8v4_s {
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
      u8v2_t va;
      u8v2_t vb;
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
    struct {
      u8_t north;
      u8_t east;
      u8_t south;
      u8_t west;
    };
    struct {
      u8_t top;
      u8_t right;
      u8_t bottom;
      u8_t left;
    };
    struct {
      u8_t top_left;
      u8_t top_right;
      u8_t bottom_right;
      u8_t bottom_left;
    };
  };
};

struct u16v2_s {
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
      u16_t horizontal;
      u16_t vertical;
    };
    struct {
      u16_t row;
      u16_t column;
    };
    struct {
      u16_t start;
      u16_t stop;
    };
    struct {
      u16_t width;
      u16_t height;
    };
  };
};

struct u16v3_s {
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

struct u16v4_s {
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
      u16v2_t va;
      u16v2_t vb;
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
    struct {
      u16_t north;
      u16_t east;
      u16_t south;
      u16_t west;
    };
    struct {
      u16_t top;
      u16_t right;
      u16_t bottom;
      u16_t left;
    };
    struct {
      u16_t top_left;
      u16_t top_right;
      u16_t bottom_right;
      u16_t bottom_left;
    };
  };
};

struct u32v2_s {
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
      u32_t horizontal;
      u32_t vertical;
    };
    struct {
      u32_t row;
      u32_t column;
    };
    struct {
      u32_t start;
      u32_t stop;
    };
    struct {
      u32_t width;
      u32_t height;
    };
  };
};

struct u32v3_s {
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

struct u32v4_s {
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
      u32v2_t va;
      u32v2_t vb;
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
    struct {
      u32_t north;
      u32_t east;
      u32_t south;
      u32_t west;
    };
    struct {
      u32_t top;
      u32_t right;
      u32_t bottom;
      u32_t left;
    };
    struct {
      u32_t top_left;
      u32_t top_right;
      u32_t bottom_right;
      u32_t bottom_left;
    };
  };
};

struct u64v2_s {
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
      u64_t horizontal;
      u64_t vertical;
    };
    struct {
      u64_t row;
      u64_t column;
    };
    struct {
      u64_t start;
      u64_t stop;
    };
    struct {
      u64_t width;
      u64_t height;
    };
  };
};

struct u64v3_s {
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

struct u64v4_s {
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
      u64v2_t va;
      u64v2_t vb;
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
    struct {
      u64_t north;
      u64_t east;
      u64_t south;
      u64_t west;
    };
    struct {
      u64_t top;
      u64_t right;
      u64_t bottom;
      u64_t left;
    };
    struct {
      u64_t top_left;
      u64_t top_right;
      u64_t bottom_right;
      u64_t bottom_left;
    };
  };
};

struct f32v2_s {
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
      f32_t horizontal;
      f32_t vertical;
    };
    struct {
      f32_t row;
      f32_t column;
    };
    struct {
      f32_t start;
      f32_t stop;
    };
    struct {
      f32_t width;
      f32_t height;
    };
  };
};

struct f32v3_s {
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

struct f32v4_s {
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
      f32v2_t va;
      f32v2_t vb;
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
    struct {
      f32_t north;
      f32_t east;
      f32_t south;
      f32_t west;
    };
    struct {
      f32_t top;
      f32_t right;
      f32_t bottom;
      f32_t left;
    };
    struct {
      f32_t top_left;
      f32_t top_right;
      f32_t bottom_right;
      f32_t bottom_left;
    };
  };
};

struct f64v2_s {
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
      f64_t horizontal;
      f64_t vertical;
    };
    struct {
      f64_t row;
      f64_t column;
    };
    struct {
      f64_t start;
      f64_t stop;
    };
    struct {
      f64_t width;
      f64_t height;
    };
  };
};

struct f64v3_s {
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

struct f64v4_s {
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
      f64v2_t va;
      f64v2_t vb;
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
    struct {
      f64_t north;
      f64_t east;
      f64_t south;
      f64_t west;
    };
    struct {
      f64_t top;
      f64_t right;
      f64_t bottom;
      f64_t left;
    };
    struct {
      f64_t top_left;
      f64_t top_right;
      f64_t bottom_right;
      f64_t bottom_left;
    };
  };
};

#endif
