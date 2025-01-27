#include "list/llist.h"

u64_t llist_size(llist_t* context) {
  u64_t size;

  size = 0;
  while (context) {
    ++size;
    context = context->next;
  }
  return size;
}
