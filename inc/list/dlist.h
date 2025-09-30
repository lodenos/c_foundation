#ifndef DLIST_H
#define DLIST_H

// INFO: dlist mean Double Linked List

typedef struct dlist_s dlist_t;

struct dlist_s {
  void* item;
  void* prev;
  void* next;
};

#endif
