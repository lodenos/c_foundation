#ifndef PQUEUE_H
#define PQUEUE_H

// INFO: PQueue stand for Priority Queue

typedef struct pqueue_s pqueue_t;
typedef struct pqueue_init_s pqueue_init_t;

struct pqueue_s {
  int a;
};

struct pqueue_init_s {
  int a;
};

// contructor

pqueue_t* pqueue_new(pqueue_t** context);
pqueue_t* pqueue_new_init(pqueue_t** context, pqueue_init_t* init);

// destructor

void pqueue_delete(void* context);

// methods

#endif
