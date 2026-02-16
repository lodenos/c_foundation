#ifndef POINTER_H
#define POINTER_H

#include "type/type.h"
#include <stdlib.h>

// INFO: Fat-Pointer / Smart-Pointer

typedef struct ptr_s ptr_t;

struct ptr_s {
  void* stop;
  void (*fn)(void*);
} __attribute__((aligned(16))); // assuming void* == 64 bit

static inline void* ptr_get(ptr_t* ptr) {
  return (void*)++ptr;
}

static inline ptr_t* ptr_wrap(void* start, void* stop, void (*fn)(void*)) {
  *((ptr_t*)start) = (ptr_t){
    .stop = stop,
    .fn = fn,
  };
  return (ptr_t*)start;
}

static inline ptr_t* ptr_alloc(u64_t size, void (*fn)(void*)) {
  void* ptr = malloc(sizeof(ptr_t) + size);
  return ptr_wrap(ptr, ptr + size, fn);
}

#endif
