#ifndef POINTER_H
#define POINTER_H

#include <stdlib.h>
#include "type.h"

typedef struct ptr_s ptr_t;

struct ptr_s {
  void* start;
  void* stop;
};

static __inline__ void* malloc_ptr(ptr_t* ptr, u64_t size) {
  ptr->start = malloc(size);
  ptr->stop = (u8_t*)ptr->start + size;
  return ptr->start;
}

#endif
