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
  void* next;
};

// CONSTRUCTOR

llist_t* llist_new(llist_t** context, llist_init_t* init);

// DESTRUCTOR

void  llist_delete(void* context);

// METHODES

llist_t* llist_index(llist_t* context, u64_t index);
llist_t* llist_push(llist_t* context, llist_t* node);
u64_t llist_size(llist_t* context);

#endif
