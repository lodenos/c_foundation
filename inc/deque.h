#ifndef DEQUE_H 
#define DEQUE_H

#include <stdlib.h>
#include "type.h"

#include <stdio.h>

typedef struct deque_s deque_t;
typedef struct deque_init_s deque_init_t;

struct deque_s {
  struct {
    void** ptr;
    u64_t capacity;
    u64_t count;
    u64_t offset;
    u64_t shift;
    u64_t mask;
    u64_t item_size;
  } chunk;
  u64_t size;
};

struct deque_init {
  u64_t count;
  u64_t offset;
  u64_t shift;
};

// constructor

static inline deque_t* deque_new(deque_t** ctx) {
  *ctx = (deque_t*)malloc(sizeof(deque_t));
  if (!*ctx)
    return NULL;
  **ctx = (deque_t){
    .chunk.capacity = 4096,
    .chunk.count = 1,
    .chunk.item_size = sizeof(void*),
    .chunk.offset = 0,
    .chunk.mask = (1ULL << 9) - 1,
    .chunk.shift = 9,
    .size = 0,
  };
  (*ctx)->chunk.ptr = (void**)malloc(sizeof(void*));
  *((*ctx)->chunk.ptr) = (void*)malloc((*ctx)->chunk.capacity);
  return *ctx;
}

deque_t* deque_new_init(deque_t** ctx, deque_init_t* init) {
  (void)ctx;
  (void)init;
  return NULL;
}

// destructor

void deque_delete(void* ctx) {
  (void)ctx;
}

// function -> insertion

static inline deque_t* deque_push_head(deque_t* ctx, void* item) {
  void** ptr;
  u64_t block;
  u64_t local;

  printf("> deque push head: \n");
  if (!ctx->chunk.offset) {
    ptr = (void**)malloc((ctx->chunk.count + 1) * sizeof(void*));
    if (!ptr)
      return NULL;
    __builtin_memcpy(ptr + 1, ctx->chunk.ptr, ctx->chunk.count * sizeof(void*));
    ptr[0] = (void*)malloc(ctx->chunk.capacity * ctx->chunk.item_size);
    if (!ptr[0]) {
      free(ptr);
      return NULL;
    }
    free(ctx->chunk.ptr);
    ctx->chunk.ptr = ptr;
    ++ctx->chunk.count;
    ctx->chunk.offset = ctx->chunk.capacity;
  }

  --ctx->chunk.offset;
  block = ctx->chunk.offset >> ctx->chunk.shift;
  local = ctx->chunk.offset & ctx->chunk.mask;
  __builtin_memcpy(ctx->chunk.ptr[block] + local * ctx->chunk.item_size, &item, ctx->chunk.item_size);
  ++ctx->size;
  return ctx;
}

static inline deque_t* deque_push_tail(deque_t* ctx, void* item) {
  void** ptr;
  const u64_t idx = ctx->chunk.offset + ctx->size;
  const u64_t block = idx >> ctx->chunk.shift;
  const u64_t local = idx & ctx->chunk.mask;

  if (block >= ctx->chunk.count) {
    ptr = (void**)malloc((ctx->chunk.count + 1) * sizeof(void*));
    if (!ptr)
      return NULL;
    __builtin_memcpy(ptr, ctx->chunk.ptr, ctx->chunk.count * sizeof(void*));
    ptr[block] = (void*)malloc(ctx->chunk.capacity * ctx->chunk.item_size);
    if (!ptr[block]) {
      free(ptr);
      return NULL;
    }
    free(ctx->chunk.ptr);
    ctx->chunk.ptr = ptr;
    ++ctx->chunk.count;
  }
  __builtin_memcpy(ctx->chunk.ptr[block] + local * ctx->chunk.item_size, &item, ctx->chunk.item_size);
  ++ctx->size;
  return ctx;
}

// function -> iterator 

//#define deque_each(ctx, item)

// function -> query

static inline void* deque_index(deque_t* ctx, u64_t index) {
  const u64_t idx = ctx->chunk.offset + index;
  const u64_t block = idx >> ctx->chunk.shift;
  const u64_t local = idx & ctx->chunk.mask;
  return ctx->chunk.ptr[block] + local * ctx->chunk.item_size;
}

static inline u64_t deque_size(deque_t* ctx) {
  return ctx->size;
}

// function -> removal

static inline deque_t* deque_clear(deque_t* ctx, void (*fn)(void)) {
  (void)ctx;
  (void)fn;
  return NULL;
}

static inline void* deque_pop_head(deque_t* ctx) {
  (void)ctx;
  return NULL;
}

static inline void* deque_pop_tail(deque_t* ctx) {
  if (!ctx->size)
    return NULL;
  return deque_index(ctx, --ctx->size);
}

#endif
