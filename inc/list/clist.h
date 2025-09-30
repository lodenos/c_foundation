#ifndef CLIST_H
#define CLIST_H

#include "type.h"

// INFO: clist mean Class-like Linked List

typedef struct clist_s      clist_t;
typedef struct clist_init_t clist_init_t;
typedef struct clist_node_s clist_node_t;

struct clist_s {
  clist_node_t* head;
  clist_node_t* tail;
  u64_t size;
};

struct clist_node_s {
  void* item;
  void (*fn_delete)(void*);
  void* prev;
  void* next;
};

// constructor

clist_t* clist_new(clist_t** context);
clist_t* clist_new_init(clist_t** context, clist_init_t* init);

// destructor

void clist_delete(void* context);

// methodes

clist_node_t* clist_index(clist_t* context, u64_t index);
clist_t* clist_push_head(clist_t* context, void* item, void (*fn_delete)(void*));
clist_t* clist_push_tail(clist_t* context, void* item, void (*fn_delete)(void*));
u64_t clist_size(clist_t* context);

#endif
