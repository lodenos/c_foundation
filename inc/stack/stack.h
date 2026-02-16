#ifndef STACK_H
#define STACK_H

#include "type/type.h"
#include <stddef.h>
#include <stdlib.h>

#include <stdio.h>

#define STACK_CHUNK_GROWTH_FACTOR 2
#define STACK_DEFAULT_ITEM_PER_CHUNK 4096

typedef struct stack_s stack_t;
typedef struct stack_init_s stack_init_t;

// 1 page - 4096 Bytes - 512 chunks

struct stack_s {
  struct {
    struct {
      void** start;
      void** index;
      void** stop;
    } chunks;
    struct {
      void* start;
      void* index;
      void* stop;
    } chunk;
    u64_t item_size;
    u64_t item_per_chunk;
    void (*fn_delete)(void*); // for auto-delete items & polymorphism
  } pvt;                      // a.k.a. private
};

struct stack_init_s {
  u64_t item_size;
  u64_t item_per_chunk;
  void (*fn_delete)(void*);
};

// INFO: Constructor

static inline stack_t* stack_new(stack_t** ctx) {
  *ctx = (stack_t*)malloc(sizeof(stack_t));

  (*ctx)->pvt.item_size = sizeof(void*);
  (*ctx)->pvt.item_per_chunk = STACK_DEFAULT_ITEM_PER_CHUNK;
  (*ctx)->pvt.fn_delete = NULL;

  // 512 chunks = 1 page size -> 4096 Bytes
  (*ctx)->pvt.chunks.start = (void**)malloc(4096);
  (*ctx)->pvt.chunks.index = (*ctx)->pvt.chunks.start;
  (*ctx)->pvt.chunks.stop = (*ctx)->pvt.chunks.start + 4096;

  // default 512 items for 8 Bytes per item
  (*ctx)->pvt.chunk.start = (void*)malloc(4096 * (*ctx)->pvt.item_size);
  (*ctx)->pvt.chunk.index = (*ctx)->pvt.chunk.start;
  (*ctx)->pvt.chunk.stop =
    (*ctx)->pvt.chunk.start + 4096 * (*ctx)->pvt.item_size;

  *(*ctx)->pvt.chunks.start = (*ctx)->pvt.chunk.start;

  return *ctx;
}

static inline stack_t* stack_new_init(stack_t** ctx, stack_init_t* init) {
  (void)ctx;
  (void)init;
  return NULL;
}

// INFO: Destructor

static inline void stack_delete(void* ctx) {
  (void)ctx;
}

// INFO: Functions as Methodes Like

// INFO: function -> access

static inline void* stack_index(stack_t* ctx, u64_t index) {
  switch (ctx->pvt.item_size) {
  case 1:
    return ((u8_t**)ctx->pvt.chunks.start[index >> 12])[index & 0xFFF];
  case 2:
    return ((u16_t**)ctx->pvt.chunks.start[index >> 12])[index & 0xFFF];
  case 4:
    return ((u32_t**)ctx->pvt.chunks.start[index >> 12])[index & 0xFFF];
  case 8:
    return ((u64_t**)ctx->pvt.chunks.start[index >> 12])[index & 0xFFF];
  default:
    return 0;
  }
}

// INFO: function -> iterator

// stack_each(...)

// INFO: function -> insertion

// stack_push_list
// stack_push_stack

static inline stack_t* stack_push(stack_t* ctx, void* item) {
  if (ctx->pvt.chunk.index == ctx->pvt.chunk.stop) {
    if (ctx->pvt.chunks.index == ctx->pvt.chunks.stop) {
    }

    printf("> stack push new chunk: %lu\n", (u64_t)item);

    // printf(">> start -> addr: %p\n", ctx->pvt.chunks.start);
    // printf(">> index -> addr: %p\n", ctx->pvt.chunks.index);
    // printf(">> stop  -> addr: %p\n\n", ctx->pvt.chunks.stop);

    ctx->pvt.chunks.index += 1;

    *ctx->pvt.chunks.index = malloc(4096 * ctx->pvt.item_size);

    ctx->pvt.chunk.start = *ctx->pvt.chunks.index;
    ctx->pvt.chunk.index = ctx->pvt.chunk.start;
    ctx->pvt.chunk.stop =
      (u8_t*)ctx->pvt.chunk.start + 4096 * ctx->pvt.item_size;
  }

  // printf("> push value: %lu\n", (u64_t)item);

  switch (ctx->pvt.item_size) {
  case 1:
    *((u8_t*)ctx->pvt.chunk.index) = (u8_t)item;
    break;
  case 2:
    *((u16_t*)ctx->pvt.chunk.index) = (u16_t)item;
    break;
  case 4:
    *((u32_t*)ctx->pvt.chunk.index) = (u32_t)item;
    break;
  case 8:
    *((u64_t*)ctx->pvt.chunk.index) = (u64_t)item;
    break;
  default:
    break;
  }
  ctx->pvt.chunk.index += ctx->pvt.item_size;
  return ctx;
}

// INFO: function -> manipulation

static inline stack_t* stack_clone(stack_t* ctx) {
  (void)ctx;
  return NULL;
}

static inline stack_t* stack_copy(stack_t* ctx) {
  (void)ctx;
  return NULL;
}

static inline stack_t* stack_swap(stack_t* ctx, u64_t index_a, u64_t index_b) {
  (void)ctx;
  (void)index_a;
  (void)index_b;
  return NULL;
}

// INFO: function -> query

static inline bool stack_empty(stack_t* ctx) {
  return ctx->pvt.chunks.start == ctx->pvt.chunks.index;
}

static inline u64_t stack_size(stack_t* ctx) {
  // return ctx->pvt.index;
}

// INFO: function -> removal

// stack_flush(...) provide the funciton to delete

static inline void* stack_pop(stack_t* ctx) {
  (void)ctx;
  // index -1;
  return NULL;
}

#endif
