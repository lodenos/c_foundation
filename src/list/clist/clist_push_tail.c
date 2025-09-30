#include <stddef.h>
#include "list/clist.h"

clist_t* clist_push_tail(clist_t* context, void* item, void (*fn_delete)(void*)) {
  (void)context;
  (void)item;
  (void)fn_delete;
  return NULL;
}
