#ifndef ARENA_ALLOCATOR_H
#define ARENA_ALLOCATOR_H

#include "type/type.h"
#include <sys/mman.h>
#include <unistd.h>

typedef struct arena_allocator_s arena_allocator_t;
typedef struct arena_allocator_root_s arena_allocator_root_t;

struct arena_allocator_s {
  u64_t size;
  void* memory;
};

struct arena_allocator_root_s {
  arena_allocator_root_t* next;
  u64_t num_arenas;
};

// INFO: Singleton

static arena_allocator_root_t* g_a_a_root = NULL;

// INFO: Constructor

static inline arena_allocator_t* arena_allocator_new(u64_t num_pages) {
  u64_t index;
  arena_allocator_t* arena;
  i32_t page_size = getpagesize();

  if (!g_a_a_root)
    arena_allocator_root_new(&g_a_a_root);

  arena = (arena_allocator_t*)g_a_a_root[1];

  while (index < g_a_a_root->num_arenas) {
    if (arena[index].memory == NULL) {
      arena->memory = mmap(NULL, page_size * num_pages, PROT_READ | PROT_WRITE,
                           MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
      arena->size = page_size * num_pages;
      return &arena[index];
    }
  }
  return NULL;
}

static inline arena_allocator_root_t*
arena_allocator_root_new(arena_allocator_root_t** root) {
  // page =  4096 then  255 arenas
  // page = 16384 then 1023 arenas
  i32_t page_size = getpagesize();

  *root = mmap(NULL, page_size, PROT_READ | PROT_WRITE,
               MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
  **root = (arena_allocator_root_t){
    .next = NULL,
    .num_arenas =
      (page_size - sizeof(arena_allocator_root_t)) / sizeof(arena_allocator_t),
  };
  return *root;
}

// INFO: Destructor

static inline void arena_allocator_delete(void* ctx) {
  arena_allocator_t* arena = ctx;

  munmap(arena->memory, arena->size);
}

static inline void arena_allocator_root_delete(void* ctx) {
  arena_allocator_root_t* arena = ctx;
}

#endif
