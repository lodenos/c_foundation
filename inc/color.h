#ifndef COLOR_H
#define COLOR_H

#include "type.h"

typedef struct hsl8_s hsl8_t;
typedef struct hsla8_s hsla8_t;
typedef struct hsl16_s hsl16_t;
typedef struct hsla16_s hsla16_t;

typedef struct rgb8_s rgb8_t;
typedef struct rgba8_s rgba8_t;
typedef struct rgb16_s rgb16_t;
typedef struct rgba16_s rgba16_t;

struct hsl8_s {
  union {
    struct {
      u8_t h;
      u8_t s;
      u8_t l;
    };
    struct {
      u8_t hue;
      u8_t saturation;
      u8_t lightness;
    };
  };
};

struct hsla8_s {
  union {
    struct {
      u8_t h;
      u8_t s;
      u8_t l;
      u8_t a;
    };
    struct {
      u8_t hue;
      u8_t saturation;
      u8_t lightness;
      u8_t alpha;
    };
  };
};

struct hsl16_s {
  union {
    struct {
      u16_t h;
      u16_t s;
      u16_t l;
    };
    struct {
      u16_t hue;
      u16_t saturation;
      u16_t lightness;
    };
  };
};

struct hsla16_s {
  union {
    struct {
      u16_t h;
      u16_t s;
      u16_t l;
      u16_t a;
    };
    struct {
      u16_t hue;
      u16_t saturation;
      u16_t lightness;
      u16_t alpha;
    };
  };
};

struct rgb8_s {
  union {
    struct {
      u8_t r;
      u8_t g;
      u8_t b;
    };
    struct {
      u8_t red;
      u8_t green;
      u8_t blue;
    };
  };
};

struct rgba8_s {
  union {
    struct {
      u8_t r;
      u8_t g;
      u8_t b;
      u8_t a;
    };
    struct {
      u8_t red;
      u8_t green;
      u8_t blue;
      u8_t alpha;
    };
  };
};

struct rgb16_s {
  union {
    struct {
      u16_t r;
      u16_t g;
      u16_t b;
    };
    struct {
      u16_t red;
      u16_t green;
      u16_t blue;
    };
  };
};

struct rgba16_s {
  union {
    struct {
      u16_t r;
      u16_t g;
      u16_t b;
      u16_t a;
    };
    struct {
      u16_t red;
      u16_t green;
      u16_t blue;
      u16_t alpha;
    };
  };
};

#endif
