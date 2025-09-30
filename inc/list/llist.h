#ifndef LLIST_H
#define LLIST_H

#include "type.h"

// INFO: llist mean Linked List

typedef struct llist_s llist_t;
typedef struct llist_init_s llist_init_t;

struct llist_s {
  void* item;
  void* next;
};

struct llist_init_s {
  void* item;
};

// constructor

llist_t* llist_new(llist_t** context);
llist_t* llist_new_init(llist_t** context, llist_init_t* init);

// destructor

void  llist_delete(void* context);

// methodes

llist_t* llist_index(llist_t* context, u64_t index);
llist_t* llist_push_head(llist_t* context, llist_t* node);
llist_t* llist_push_tail(llist_t* context, llist_t* node);
u64_t llist_size(llist_t* context);

#endif
