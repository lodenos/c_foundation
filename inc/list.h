#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdint.h>

typedef uint64_t u64_t;

typedef struct list_s list_t;
typedef struct list_init_s list_init_t;

struct list_s {
  void* item;
  list_t* next;
};

struct list_init_s {
  void* item;
};

// constructor

static inline list_t* list_new(list_t** ctx) {
  *ctx = (list_t*)malloc(sizeof(list_t));
  if (!*ctx)
    return NULL;
  **ctx = (list_t){0};
  return *ctx; 
}

static inline list_t* list_new_init(list_t** ctx, list_init_t* init) {
  *ctx = (list_t*)malloc(sizeof(list_t));
  if (!*ctx)
    return NULL;
  **ctx = (list_t){
    .item = init->item,
    .next = NULL
  };
  return *ctx; 
}

// destructor

static inline void list_delete(void* ctx) {
  list_t* node = (list_t*)ctx;
  list_t* prev;

  while (node) {
    prev = node;
    node = node->next;
    free(prev);
  }
}

// function -> insertion

static inline list_t* list_push_at(list_t** ctx, list_t* node, u64_t index) {
  (void)ctx;
  (void)node;
  (void)index;
  return NULL;
}

static inline list_t* list_push_head(list_t** ctx, list_t* node) {
  node->next = *ctx;
  *ctx = node;
  return node;
}

static inline list_t* list_push_tail(list_t** ctx, list_t* node) {
  list_t* head;

  if (!*ctx) {
    *ctx = node;
    return node;
  }
  head = *ctx;
  while (head->next)
    head = head->next;
  head->next = node;
  return *ctx;
}

// function -> iterator

#define list_each(list, node) for (node = list; node; node = node->next)

// function -> query

static inline list_t* list_index(list_t* ctx, u64_t index) {
  u64_t count;

  count = 0;
  while(ctx) {
    if (count == index)
      return ctx;
    ctx = ctx->next;
    ++count;
  }
  return NULL;
}

static inline u64_t list_size(list_t* ctx) {
  u64_t count;

  count = 0;
  while (ctx) {
    ctx = ctx->next;
    ++count;
  }
  return count;
}

// function -> removal

static inline list_t* list_clear(list_t* ctx, void (*fn)(void*)) {
  list_t* head = ctx;

  while (ctx) {
    fn(ctx->item);
    ctx = ctx->next;
  }
  return head;
}

static inline list_t* list_pop_at(list_t** ctx, u64_t index) {
  (void)ctx;
  (void)index;
  return NULL;
}

static inline list_t* list_pop_head(list_t** ctx) {
  list_t* node;

  node = *ctx;
  *ctx = (*ctx)->next;
  return node;
}

static inline list_t* list_pop_tail(list_t** ctx) {
  (void)ctx;
  return NULL;
}

#endif
