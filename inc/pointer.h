#ifndef POINTER_H
#define POINTER_H

typedef struct fat_ptr_s fat_ptr_t;
typedef struct ptr_s ptr_t;

struct fat_ptr_s {
  void* start;
  void* stop;
  void* (*fn)(void*);
};

struct ptr_s {
  void* start;
  void* stop;
};

#endif
