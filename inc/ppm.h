#ifndef PPM_H
#define PPM_H

#include <stdlib.h>
#include "vector.h"

typedef enum {
  PPM_FORMAT_P1, // ASCII -> Black & White
  PPM_FORMAT_P2, // ASCII -> Grayscale
  PPM_FORMAT_P3, // ASCII -> Color RGB
  PPM_FORMAT_P4, // BINARY -> Black & White
  PPM_FORMAT_P5, // BINARY -> Grayscale
  PPM_FORMAT_P6, // BINARY -> Color RGB
} ppm_format_e;

typedef struct ppm_s ppm_t;
typedef struct ppm_init_s ppm_init_t;

// MAGIC      always  3 bytes
// COMMENT see later 
// RESOLUTION    max 22 bytes 
// MAX VALUE     max  6 bytes

// Header Size -> 31 bytes

struct ppm_s {
  u32_v2_t frame;
  struct {
    void* ptr;
    struct {
      void* header;
      void* image;
    } offset;
  } blob;
  u16_t max_value;
  ppm_format_e format;
};

struct ppm_init_s {
  u32_v2_t frame;
  u16_t max_value;
  ppm_format_e format;
};

static inline ppm_t* ppm_new(ppm_t** ctx) {
  *ctx = (ppm_t*)malloc(sizeof(ppm_t));
  if (!*ctx)
    return NULL;
  **ctx = (ppm_t){
    .frame = (u32_v2_t){
      .width = 0,
      .height = 0,
    },
    .blob = {
      .ptr = NULL,
      .offset = {
        .header = NULL,
        .image = NULL,
      },
    },
    .max_value = 0,
    .format = PPM_FORMAT_P6,
  };
  return *ctx;
}

static inline ppm_t* ppm_new_init(ppm_t** ctx, ppm_init_t* init) {
  (void)ctx;
  (void)init;
  return NULL;
}

static inline void ppm_delete(void* ctx) {
  ppm_t* ptr = (ppm_t*)ctx;

  if (ptr->blob.ptr)
    free(ptr->blob.ptr);
  free(ptr);
}

ppm_t* ppm_decode(ppm_t* ctx, void* ptr_start, void* ptr_stop);

ppm_t* ppm_encode(ppm_t* ctx, void* ptr);

ppm_t* ppm_encode_as(ppm_t* ctx, ppm_format_e format, void* ptr);

#endif
