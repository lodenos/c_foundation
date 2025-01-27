#include <stdlib.h>
#include "list/llist.h"

llist_t* llist_new(llist_t** context, llist_init_t* init) {
  if (!context)
    return NULL;
  *context = (llist_t*)malloc(sizeof(llist_t));
  if (!*context)
    return NULL;
  if (init)
    **context = (llist_t){
      .item = init->item,
      .next = init->next
    };
  return *context;
}
