#include <stddef.h>
#include "tree/btree.h"

btree_t* btree_insert(btree_t* context, u64_t key, void* value, void (*fn_delete)(void*)) {
  (void)context;
  (void)key;
  (void)value;
  (void)fn_delete;
  return NULL;
}
