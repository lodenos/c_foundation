#include <stddef.h>
#include "list/llist.h"

llist_t* llist_index(llist_t* context, u64_t index) {
  u64_t itr;

  itr = 0;
  while (context) {
    if (itr == index)
      return context;
    context = context->next;
    ++itr;
  }
  return NULL;
}
