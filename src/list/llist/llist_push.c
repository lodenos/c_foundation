#include <stddef.h>
#include "list/llist.h"

// INFO: llist_push push the node to the tail of the Linked List

llist_t* llist_push(llist_t* context, llist_t* node) {
  llist_t const* reference = context;

  if (!reference || !node)
    return NULL;
  while (reference->next)
    reference = reference->next;
  return context;
}
