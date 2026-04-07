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

static inline hsl8_t rgb8_to_hsl8(rgb8_t color) {
  const f32_t r = color.r / 255.0f;
  const f32_t g = color.g / 255.0f;
  const f32_t b = color.b / 255.0f;

  const f32_t max = __builtin_fmaxf(r, __builtin_fmaxf(g, b));
  const f32_t min = __builtin_fminf(r, __builtin_fminf(g, b));
  const f32_t delta = max - min;

  f32_t hue;
  f32_t saturation;
  const f32_t lightness = (max + min) * 0.5f;

  if (delta > 0.0f) {
    saturation = (lightness < 0.5f)
      ? delta / (max + min)
      : delta / (2.0f - max - min);
    if (max == r)
      hue = (g < b)
        ? (g - b) / delta + 6.0f
        : (g - b) / delta;
    else if (max == g)
      hue = (b - r) / delta + 2.0f;
    else 
      hue = (r - g) / delta + 4.0f;
    hue *= 1.0f / 6.0f;
  }
  return (hsl8_t){
    .h = (u8_t)(hue * 255.0f),
    .s = (u8_t)(saturation * 255.0f),
    .l = (u8_t)(lightness * 255.0f),
  };
}

static inline hsla8_t rgba8_to_hsla8(rgba8_t color) {
  const f32_t r = color.r / 255.0f;
  const f32_t g = color.g / 255.0f;
  const f32_t b = color.b / 255.0f;

  const f32_t max = __builtin_fmaxf(r, __builtin_fmaxf(g, b));
  const f32_t min = __builtin_fminf(r, __builtin_fminf(g, b));
  const f32_t delta = max - min;

  f32_t hue;
  f32_t saturation;
  const f32_t lightness = (max + min) * 0.5f;

  if (delta > 0.0f) {
    saturation = (lightness < 0.5f)
      ? delta / (max + min)
      : delta / (2.0f - max - min);
    if (max == r)
      hue = (g < b)
        ? (g - b) / delta + 6.0f
        : (g - b) / delta;
    else if (max == g)
      hue = (b - r) / delta + 2.0f;
    else 
      hue = (r - g) / delta + 4.0f;
    hue *= 1.0f / 6.0f;
  }
  return (hsla8_t){
    .h = (u8_t)(hue * 255.0f),
    .s = (u8_t)(saturation * 255.0f),
    .l = (u8_t)(lightness * 255.0f),
    .a = color.a,
  };
}

static inline hsl16_t rgb16_to_hsl16(rgb16_t color) {
  const f32_t r = color.r / 65535.0f;
  const f32_t g = color.g / 65535.0f;
  const f32_t b = color.b / 65535.0f;

  const f32_t max = __builtin_fmaxf(r, __builtin_fmaxf(g, b));
  const f32_t min = __builtin_fminf(r, __builtin_fminf(g, b));
  const f32_t delta = max - min;

  f32_t hue;
  f32_t saturation;
  const f32_t lightness = (max + min) * 0.5f;

  if (delta > 0.0f) {
    saturation = (lightness < 0.5f)
      ? delta / (max + min)
      : delta / (2.0f - max - min);
    if (max == r)
      hue = (g < b)
        ? (g - b) / delta + 6.0f
        : (g - b) / delta;
    else if (max == g)
      hue = (b - r) / delta + 2.0f;
    else 
      hue = (r - g) / delta + 4.0f;
    hue *= 1.0f / 6.0f;
  }
  return (hsl16_t){
    .h = (u16_t)(hue * 65535.0f),
    .s = (u16_t)(saturation * 65535.0f),
    .l = (u16_t)(lightness * 65535.0f),
  };
}

static inline hsla16_t rgba16_to_hsla16(rgba16_t color) {
  const f32_t r = color.r / 65535.0f;
  const f32_t g = color.g / 65535.0f;
  const f32_t b = color.b / 65535.0f;

  const f32_t max = __builtin_fmaxf(r, __builtin_fmaxf(g, b));
  const f32_t min = __builtin_fminf(r, __builtin_fminf(g, b));
  const f32_t delta = max - min;

  f32_t hue;
  f32_t saturation;
  const f32_t lightness = (max + min) * 0.5f;

  if (delta > 0.0f) {
    saturation = (lightness < 0.5f)
      ? delta / (max + min)
      : delta / (2.0f - max - min);
    if (max == r)
      hue = (g < b)
        ? (g - b) / delta + 6.0f
        : (g - b) / delta;
    else if (max == g)
      hue = (b - r) / delta + 2.0f;
    else 
      hue = (r - g) / delta + 4.0f;
    hue *= 1.0f / 6.0f;
  }
  return (hsla16_t){
    .h = (u16_t)(hue * 65535.0f),
    .s = (u16_t)(saturation * 65535.0f),
    .l = (u16_t)(lightness * 65535.0f),
    .a = color.a,
  };
}

static inline rgb8_t hsl8_to_rgb8(hsl8_t color) {
  const f32_t h = (360.0f * color.h) / 255.0f;
  const f32_t s = color.s / 255.0f;
  const f32_t l = color.l / 255.0f;
  const f32_t c = (1.0f - __builtin_fabsf(2.0f * l - 1.0f)) * s;
  const f32_t x = c * (1.0f - __builtin_fabsf(__builtin_fmodf(h / 60.0f, 2.0f) - 1.0f));
  const f32_t m = l - c / 2.0f;

  if (h < 60.0f)
    return (rgb8_t){
      .r = (u8_t)((c + m) * 255.0f),
      .g = (u8_t)((x + m) * 255.0f),
      .b = (u8_t)(m * 255.0f),
    };
  else if (h < 120.0f)
    return (rgb8_t){
      .r = (u8_t)((x + m) * 255.0f),
      .g = (u8_t)((c + m) * 255.0f),
      .b = (u8_t)(m * 255.0f),
    };
  else if (h < 180.0f)
    return (rgb8_t){
      .r = (u8_t)(m * 255.0f),
      .g = (u8_t)((c + m) * 255.0f),
      .b = (u8_t)((x + m) * 255.0f),
    };
  else if (h < 240.0f)
    return (rgb8_t){
      .r = (u8_t)(m * 255.0f),
      .g = (u8_t)((x + m) * 255.0f),
      .b = (u8_t)((c + m) * 255.0f),
    };
  else if (h < 300.0f)
    return (rgb8_t){
      .r = (u8_t)((x + m) * 255.0f),
      .g = (u8_t)(m * 255.0f),
      .b = (u8_t)((c + m) * 255.0f),
    };
  else
    return (rgb8_t){
      .r = (u8_t)((c + m) * 255.0f),
      .g = (u8_t)(m * 255.0f),
      .b = (u8_t)((x + m) * 255.0f),
    };
}

static inline rgba8_t hsla8_to_rgba8(hsla8_t color) {
  const f32_t h = (360.0f * color.h) / 255.0f;
  const f32_t s = color.s / 255.0f;
  const f32_t l = color.l / 255.0f;
  const f32_t c = (1.0f - __builtin_fabsf(2.0f * l - 1.0f)) * s;
  const f32_t x = c * (1.0f - __builtin_fabsf(__builtin_fmodf(h / 60.0f, 2.0f) - 1.0f));
  const f32_t m = l - c / 2.0f;

  if (h < 60.0f)
    return (rgba8_t){
      .r = (u8_t)((c + m) * 255.0f),
      .g = (u8_t)((x + m) * 255.0f),
      .b = (u8_t)(m * 255.0f),
      .a = color.a,
    };
  else if (h < 120.0f)
    return (rgba8_t){
      .r = (u8_t)((x + m) * 255.0f),
      .g = (u8_t)((c + m) * 255.0f),
      .b = (u8_t)(m * 255.0f),
      .a = color.a,
    };
  else if (h < 180.0f)
    return (rgba8_t){
      .r = (u8_t)(m * 255.0f),
      .g = (u8_t)((c + m) * 255.0f),
      .b = (u8_t)((x + m) * 255.0f),
      .a = color.a,
    };
  else if (h < 240.0f)
    return (rgba8_t){
      .r = (u8_t)(m * 255.0f),
      .g = (u8_t)((x + m) * 255.0f),
      .b = (u8_t)((c + m) * 255.0f),
      .a = color.a,
    };
  else if (h < 300.0f)
    return (rgba8_t){
      .r = (u8_t)((x + m) * 255.0f),
      .g = (u8_t)(m * 255.0f),
      .b = (u8_t)((c + m) * 255.0f),
      .a = color.a,
    };
  else
    return (rgba8_t){
      .r = (u8_t)((c + m) * 255.0f),
      .g = (u8_t)(m * 255.0f),
      .b = (u8_t)((x + m) * 255.0f),
      .a = color.a,
    };
}

static inline rgb16_t hsl16_to_rgb16(hsl16_t color) {
  const f32_t h = (360.0f * color.h) / 65535.0f;
  const f32_t s = color.s / 65535.0f;
  const f32_t l = color.l / 65535.0f;
  const f32_t c = (1.0f - __builtin_fabsf(2.0f * l - 1.0f)) * s;
  const f32_t x = c * (1.0f - __builtin_fabsf(__builtin_fmodf(h / 60.0f, 2.0f) - 1.0f));
  const f32_t m = l - c / 2.0f;

  if (h < 60.0f)
    return (rgb16_t){
      .r = (u16_t)((c + m) * 65535.0f),
      .g = (u16_t)((x + m) * 65535.0f),
      .b = (u16_t)(m * 65535.0f),
    };
  else if (h < 120.0f)
    return (rgb16_t){
      .r = (u16_t)((x + m) * 65535.0f),
      .g = (u16_t)((c + m) * 65535.0f),
      .b = (u16_t)(m * 65535.0f),
    };
  else if (h < 180.0f)
    return (rgb16_t){
      .r = (u16_t)(m * 65535.0f),
      .g = (u16_t)((c + m) * 65535.0f),
      .b = (u16_t)((x + m) * 65535.0f),
    };
  else if (h < 240.0f)
    return (rgb16_t){
      .r = (u16_t)(m * 65535.0f),
      .g = (u16_t)((x + m) * 65535.0f),
      .b = (u16_t)((c + m) * 65535.0f),
    };
  else if (h < 300.0)
    return (rgb16_t){
      .r = (u16_t)((x + m) * 65535.0),
      .g = (u16_t)(m * 65535.0),
      .b = (u16_t)((c + m) * 65535.0),
    };
  else
    return (rgb16_t){
      .r = (u16_t)((c + m) * 65535.0),
      .g = (u16_t)(m * 65535.0),
      .b = (u16_t)((x + m) * 65535.0),
    };
}

static inline rgba16_t hsla16_to_rgba16(hsla16_t color) {
  const f32_t h = (360.0f * color.h) / 65535.0f;
  const f32_t s = color.s / 65535.0f;
  const f32_t l = color.l / 65535.0f;
  const f32_t c = (1.0f - __builtin_fabsf(2.0f * l - 1.0f)) * s;
  const f32_t x = c * (1.0f - __builtin_fabsf(__builtin_fmodf(h / 60.0f, 2.0f) - 1.0f));
  const f32_t m = l - c / 2.0f;

  if (h < 60.0f)
    return (rgba16_t){
      .r = (u16_t)((c + m) * 65535.0f),
      .g = (u16_t)((x + m) * 65535.0f),
      .b = (u16_t)(m * 65535.0f),
      .a = color.a,
    };
  else if (h < 120.0f)
    return (rgba16_t){
      .r = (u16_t)((x + m) * 65535.0f),
      .g = (u16_t)((c + m) * 65535.0f),
      .b = (u16_t)(m * 65535.0f),
      .a = color.a,
    };
  else if (h < 180.0f)
    return (rgba16_t){
      .r = (u16_t)(m * 65535.0f),
      .g = (u16_t)((c + m) * 65535.0f),
      .b = (u16_t)((x + m) * 65535.0f),
      .a = color.a,
    };
  else if (h < 240.0f)
    return (rgba16_t){
      .r = (u16_t)(m * 65535.0f),
      .g = (u16_t)((x + m) * 65535.0f),
      .b = (u16_t)((c + m) * 65535.0f),
      .a = color.a,
    };
  else if (h < 300.0f)
    return (rgba16_t){
      .r = (u16_t)((x + m) * 65535.0f),
      .g = (u16_t)(m * 65535.0f),
      .b = (u16_t)((c + m) * 65535.0f),
      .a = color.a,
    };
  else
    return (rgba16_t){
      .r = (u16_t)((c + m) * 65535.0f),
      .g = (u16_t)(m * 65535.0f),
      .b = (u16_t)((x + m) * 65535.0f),
      .a = color.a,
    };
}

#endif
