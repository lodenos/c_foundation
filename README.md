# C Foundation Library

A new modern way to think a C Foundation Library should be.

> Arrogant C library for the 21st century. Built for my own use first.
> IA-assisted, zero tolerance for bullshit code. Single dictator here.
> Bugs, better algorithms, ideas? PRs welcome.

list example
```c
#include <stdio.h>
#include "list.h"

int main(void) {
  list_t* list = NULL;
  list_t* node;
  u64_t* value;

  for (u64_t index = 0; index < 8; ++index) {
    value = (u64_t*)malloc(sizeof(u64_t));
    *value = index * 2;
    list_new_init(&node, &(list_init_t){ .item = value });
    list_push_tail(&list, node);
  }

  list_each(list, node) {
    printf("> item value: %llu\n", *(u64_t*)node->item);
  }

  printf("list[5]->item: %llu\n",  *(u64_t*)list_index(list, 5)->item);

  list_clear(list, free);
  list_delete(list);
  return 0;
}
```
