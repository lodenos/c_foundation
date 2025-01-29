#ifndef POINTER_H
#define POINTER_H

typedef struct ptr_s ptr_t;

struct ptr_s {
  void* start;
  void* stop;
};

#endif
