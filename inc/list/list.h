#ifndef LIST_H
#define LIST_H

// C-Standard
#include <stdbool.h>
#include <stdlib.h>
// C-Foundation
// #include "arena_allocator.h"
#include <type/type.h>
#include <type/vector.h>

typedef struct list_s list_t;
typedef struct list_init_s list_init_t;

struct list_s {
  void* item;
  list_t* next;
};

struct list_init_s {
  void* item;
};

// typedef struct list_aa_s list_aa_t;

// struct list_aa_s {
//   arena_allocator_t *arena;
//   list_t *pool;
// };

// Allocator

/*
static list_aa_t g_list_aa = {0}; // Singleton

static inline list_t *list_aa_link(void *memory, u64_t num);

static inline list_t *list_aa(u64_t num) {
  u64_t index;
  u64_t num_nodes;
  list_t *head;
  list_t *node;

  printf("> list aa\n");

  if (!g_list_aa.arena) {
    printf(" list aa > arena\n");
    g_list_aa.arena = arena_allocator_new(32);

    printf("> list aa > arena: %d\n", g_list_aa.arena->memory);

    num_nodes = g_list_aa.arena->size / sizeof(list_t);
    g_list_aa.pool = list_aa_link(g_list_aa.arena->memory, num_nodes);
  }
  // pull nodes
  index = 0;
  head = g_list_aa.pool;
  node = head;
  while (index < num) {
    if (!node->next) {
      // Fetch more memory arena
    }
    node = node->next;
    ++index;
  }
  g_list_aa.pool = (list_t *)node->next;
  node->next = NULL;
  return head;
}

static inline list_t *list_aa_link(void *memory, u64_t num) {
  u64_t index = 0;
  list_t *list = (list_t *)memory;

  printf("> list aa link\n");

  while ((index + 1) < num) {
    list[index].item = NULL;
    list[index].next = &list[index + 1];
    ++index;
  }
  return list;
}

static inline list_t *list_aa_relink(void *memory, u64_t num) {
  // relink node by address order
  (void)memory;
  (void)num;
  return NULL;
}*/

// INFO: Constructor

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
  (*ctx)->item = init->item;
  return *ctx;
}

// static inline list_t* list_new_build(list_t** ctx, u64_t num) {
//   return *ctx;
// }

// list_t* list_new_aa(list_t** ctx, list_aa_t* aa) {}
// list_t* list_new_init_aa(list_t** ctx, list_init_t*init) {}
// list_t* list_new_build_aa(list_t** ctx, list_aa_t* aa, u64_t num) {}

// INFO: Destructor

static inline void list_delete(void* ctx) {
  (void)ctx;
}

// INFO: Functions as Methodes Like

// INFO: function -> access

static inline list_t* list_index(list_t* ctx, u64_t index) {
  u64_t idx = 0;

  while (ctx) {
    if (idx == index)
      return ctx;
    ++idx;
    ctx = (list_t*)ctx->next;
  }
  return NULL;
}

static inline list_t* list_head(list_t* ctx) {
  return ctx;
}

static inline list_t* list_tail(list_t* ctx) {
  while (ctx->next)
    ctx = (list_t*)ctx->next;
  return ctx;
}

// INFO: function -> aggregation

// static inline list_t* list_max(list_t* ctx){}(void)ctx;
// return NULL;
// }

static inline list_t* list_max_fn(list_t* ctx) {
  (void)ctx;
  return NULL;
}

static inline list_t* list_min(list_t* ctx) {
  (void)ctx;
  return NULL;
}

static inline list_t* list_min_fn(list_t* ctx) {
  (void)ctx;
  return NULL;
}

static inline list_t* list_sum(list_t* ctx) {
  (void)ctx;
  return NULL;
}

static inline list_t* list_sum_fn(list_t* ctx) {
  (void)ctx;
  return NULL;
}

// static inline list_t*
// list_fold(list_t* ctx, void (*fn)(void*, void*), void* accumulator);

//**`list_fold_left(...)

//   static inline list_reduce(...);

// INFO: function -> combiner

// INFO: function -> conversion from

// TODO: Just an Idea for now

// INFO: function -> conversion to

static inline list_t* list_to_array(list_t* ctx, void* ptr) {
  (void)ctx;
  (void)ptr;
  return NULL;
}

static inline list_t*
list_to_array_fn(list_t* ctx, void (*fn)(void*), void* ptr) {
  (void)fn;
  (void)ptr;
  return ctx;
}

static inline list_t* list_to_array_range(list_t* ctx, void* ptr) {
  (void)ctx;
  (void)ptr;
  return NULL;
}

static inline list_t*
list_to_array_range_fn(list_t* ctx, u64v2_t range, void* ptr) {
  (void)ctx;
  (void)range;
  (void)ptr;
  return NULL;
}

// INFO: function -> iterator

#define list_each(list, node) for (node = list; node; node = node->next)

// list_each_index

// INFO: function -> manipulation

// list_compact()
// list_filter()
// list_map()
// list_reverse
// list_shuffle
// list_sort
// list_sample
// list_sample_size
// list_take
// list_take_while

static inline list_t* list_clone(list_t* ctx, void* (*fn)(void*)) {
  (void)ctx;
  (void)fn;
  return NULL;
}

// static inline list_t*
// list_clone_aa(list_t* ctx, list_aa_t* aa, void* (*fn)(void*)) {
//   (void)ctx;
//   (void)aa;
//   (void)fn;
//   return NULL;
// }

static inline list_t* list_copy(list_t* ctx) {
  (void)ctx;
  /*  list_t* head;
    list_t* node = ctx;
    u64_t size = 0;

    while (node) {
      ++size;
      node = (list_t*)node->next;
    }
    head = list_aa(size);
    node = head;
    while (ctx) {
      node->item = ctx->item;
      node = (list_t*)node->next;
      ctx = (list_t*)ctx->next;
    }
    return head;
    */
  return NULL;
}

static inline list_t* list_join(list_t* a, list_t* b) {
  list_t* node = a;

  while (node->next)
    node = (list_t*)node->next;
  node->next = b;
  return a;
}

// INFO: function -> set operations

static inline bool list_empty(list_t* ctx) {
  return !ctx->item;
}

static inline bool
list_include(list_t* ctx, bool (*fn)(void*, void*), void* item) {
  (void)ctx;
  return false;
}

static inline bool list_not_include(list_t* ctx) {
  (void)ctx;
  return false;
}

static inline bool
list_equal(list_t* left, bool (*fn)(void*, void*), list_t* right) {
  (void)left;
  (void)right;
  return false;
}

static inline bool list_not_equal(list_t* ctx) {
  (void)ctx;
  return false;
}

static inline bool list_subset(list_t* ctx) {
  (void)ctx;
  return false;
}

static inline bool list_not_subset(list_t* ctx) {
  (void)ctx;
  return false;
}

static inline bool list_proper_subset(list_t* ctx) {
  (void)ctx;
  return false;
}

static inline bool list_not_proper_subset(list_t* ctx) {
  (void)ctx;
  return false;
}

static inline list_t* list_union(list_t* a, list_t* b) {
  (void)a;
  (void)b;
  return NULL;
}

static inline list_t* list_intersection(list_t* a, list_t* b) {
  (void)a;
  (void)b;
  return NULL;
}

static inline u64_t list_cardinal(list_t* ctx) {
  (void)ctx;
  return 0;
}

static inline list_t* list_difference(list_t* a, list_t* b) {
  (void)a;
  (void)b;
  return NULL;
}

static inline list_t* list_symmetric_difference(list_t* a, list_t* b) {
  (void)a;
  (void)b;
  return NULL;
}

// INFO: function -> insertion

static inline list_t* list_push_at(list_t** ctx, list_t* node, u64_t index) {
  (void)ctx;
  (void)node;
  (void)index;
  return NULL;
}

static inline list_t* list_push_head(list_t** ctx, list_t* node) {
  node->next = *ctx;
  *ctx = node;
  return *ctx;
}

static inline list_t* list_push_tail(list_t** ctx, list_t* node) {
  list_t* knot = *ctx;

  if (!knot) {
    *ctx = node;
    return node;
  }
  while (knot->next)
    knot = knot->next;
  knot->next = node;
  return *ctx;
}

// INFO: function -> query

static inline list_t* list_find(list_t* ctx, void* value) {
  (void)ctx;
  (void)value;
  return NULL;
}

static inline list_t* list_find_fn(list_t* ctx) {
  (void)ctx;
  return NULL;
}

static inline list_t* list_find_all(list_t* ctx, void* value) {
  (void)ctx;
  (void)value;
  return NULL;
}

static inline list_t* list_find_all_fn(list_t* ctx, void* value) {
  (void)ctx;
  (void)value;
  return NULL;
}

static inline u64_t list_size(list_t* ctx) {
  u64_t count = 0;

  while (ctx) {
    ctx = ctx->next;
    ++count;
  }
  return count;
}

// INFO: function -> removal

static inline list_t* list_pop_at(list_t** ctx, u64_t index) {
  (void)ctx;
  (void)index;
  return NULL;
}

static inline list_t* list_pop_head(list_t** ctx) {
  (void)ctx;
  return NULL;
}

static inline list_t* list_pop_tail(list_t** ctx) {
  (void)ctx;
  return NULL;
}

#endif
