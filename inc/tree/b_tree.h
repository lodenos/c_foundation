#ifndef BTREE_H
#define BTREE_H

#include "type.h"

typedef struct btree_s btree_t;
typedef struct btree_init_s btree_init_t;
typedef struct btree_node_s btree_node_t;
typedef struct btree_node_init_s btree_node_init_t;

// https://en.wikipedia.org/wiki/Tree_(abstract_data_type)

struct btree_s {
  btree_node_t* root;
  u32_t (*fn_compare)(u64_t, u64_t);
};

struct btree_init_s {
  u32_t (*fn_compare)(u64_t, u64_t);
};

struct btree_node_s {
  u64_t info;
  u64_t key; // also to cast into void* for extanding the key size

  btree_node_t* parent;
  void* left;
  void* right;
  void  (*delete_left)(void*);
  void  (*delete_right)(void*);
};

struct btree_node_init {
  u32_t (*fn_compare)(u64_t, u64_t);
};

// constructor

btree_t* btree_new(btree_t** context);
btree_t* btree_new_init(btree_t** context, btree_init_t* init);
btree_node_t* btree_node_new(btree_node_t** context);
btree_node_t* btree_node_new_init(btree_node_t** context, btree_node_init_t* init);

// destructor

void btree_delete(void* context);
void btree_node_delete(void* context);

// methodes

btree_t* btree_insert(btree_t* context, u64_t key, void* value, void (*fn_delete)(void*));
void* btree_find(btree_t* context, u64_t key);

// btree_traversal preorder
// btree_traversal inorder
// btree_traversal postorder



#endif
