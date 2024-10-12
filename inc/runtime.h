#ifndef RUNTIME_H
#define RUNTIME_H

#include <sys/time.h>
#include "type.h"

typedef struct runtime_s runtime_t;

struct runtime_s {
  u64_t delta;
  u64_t start;
  u64_t stop;
};

static __inline__ i32_t runtime_start(runtime_t* context) {
  struct timeval record;

  if (gettimeofday(&record, NULL))
    return -1;
  context->start = (record.tv_sec * 1000000) + record.tv_usec;
  return 0;
}

static __inline__ i32_t runtime_stop(runtime_t* context) {
  struct timeval record;

  if (gettimeofday(&record, NULL))
    return -1;
  context->stop = (record.tv_sec * 1000000) + record.tv_usec;
  context->delta = context->stop - context->start;
  return 0;
}

#endif
