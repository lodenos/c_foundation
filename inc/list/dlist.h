#ifndef DLIST_H
#define DLIST_H

#include "type.h"

// INFO: dlist mean Double Linked List

typedef struct dlist_s dlist_t;
typedef struct dlist_init_s dlist_init_t;

struct dlist_s {
  void* item;
  void* prev;
  void* next;
};

struct dlist_init_s {
  void* item;
};

// constructor

dlist_t* dlist_new(dlist_t** context);
dlist_t* dlist_new_init(dlist_t** context, dlist_init_t* init);

// destructor

void dlist_delete(void* context);

// methodes

dlist_t* dlist_index(dlist_t* context, u64_t index);
dlist_t* dlist_push_head(dlist_t* context, void* item);
dlist_t* dlist_push_tail(dlist_t* context, void* item);
u64_t dlist_size(dlist_t* context);

#endif
