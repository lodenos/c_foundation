#include <stdlib.h>
#include "list/llist.h"

void llist_delete(void* context) {
  llist_t* reference;

  reference = context;
  while (reference) {
    free(reference->item);
    reference = reference->next;
  }
}
