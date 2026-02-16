#ifndef DEQUE_H
#define DEQUE_H

#include "arena_allocator.h"

typedef struct deque_s deque_t;
typedef struct deque_init_s deque_init_t;

struct deque_s {
  // 1 page 4096 -> 512
  // Array L1 -> list all chunks
  // chunk_size
  // map - map chunks
  // item_size
  // chunk
  // head
  // tail

  u16_t item_size;

  u16_t segment_size; // INFO: mean the sizeof(type)
};

struct deque_init {
  u16_t toto; // INFO:
};

// INFO: Constructor

static inline deque_t* deque_new(deque_t** ctx){

  // default
  // 1 page for the map
  // 3 pages for the chunk
  //
  arena_allocator_new(u64_t num_pages)

}

deque_t* deque_new_init(deque_t** ctx, deque_init_t* init);

// INFO: Destructor

void deque_delete(void* ctx);

// INFO: Functions as Methodes Like

// INFO: function -> access

void* deque_index(deque_t* ctx, u64_t index);

// INFO: function -> conversion to

deque_t* deque_to_array(deque_t* ctx, void*);

// INFO: function -> insertion

deque_t* deque_push_head(deque_t* ctx, void* item);
deque_t* deque_push_tail(deque_t* ctx, void* item);

// INFO: function -> removal

void* deque_pop_head(deque_t* ctx, void* item);
void* deque_pop_tail(deque_t* ctx, void* item);

#endif
