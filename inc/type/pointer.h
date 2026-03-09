#ifndef POINTER_H
#define POINTER_H

#include "type/type.h"
#include <stdlib.h>

typedef struct fat_ptr_s fat_ptr_t;
typedef struct type_ptr_s type_ptr_t;

struct fat_ptr_s {
  void (*fn_delete)(void*);
  void* stop;
};

struct type_ptr_s {
  void (*fn_delete)(void*);
};

static inline void* fat_ptr_unwrap(fat_ptr_t* ctx) {
  return ++ctx;
}

static inline fat_ptr_t*
fat_ptr_alloc(uint64_t size, void (*fn_delete)(void*)) {
  void* ptr;
  uint64_t total_size = sizeof(fat_ptr_t) + size;

  ptr = malloc(total_size);
  if (!ptr)
    return NULL;
  *(fat_ptr_t*)ptr = (fat_ptr_t){
    .fn_delete = fn_delete,
    .stop = ptr + total_size,
  };
  return ptr;
}

static void fat_ptr_delete(void* ctx) {
  free(ctx);
}

static inline fat_ptr_t*
fat_ptr_wrap(void* start, void* stop, void (*fn_delete)(void*)) {
  *(fat_ptr_t*)start = (fat_ptr_t){
    .fn_delete = fn_delete,
    .stop = stop,
  };
  return start;
}

#endif
