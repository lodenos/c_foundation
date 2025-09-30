#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue_s queue_t;
typedef struct queue_init_s queue_init_t;

struct queue_s {
  int a;
};


struct queue_init_s {
  int a;
};

// constructor

queue_t* queue_new(queue_t** context);
queue_t* queue_new_init(queue_t** context, queue_init_t* init);

// destructor

void queue_delete(void* context);

// methodes


#endif
