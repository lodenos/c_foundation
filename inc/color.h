#ifndef COLOR_H
#define COLOR_H

#include <type/type.h>

typedef struct color_s color_t;

struct color_s {
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

// TODO: HSLA to RGBA
// TODO: RGBA to HSLA

#endif
