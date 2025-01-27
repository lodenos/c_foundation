#ifndef STRING_H
#define STRING_H

#include "type.h"

#define STRING_GROWTH_FACTOR 2

typedef struct string_s string_t;

struct string_s {
  u8_t* data;
  u64_t size;
  u64_t size_ptr;
};

// Constructor
string_t* string_new(string_t** context);

// Destructor
void string_delete(void* context);

// Methods
string_t* string_append(string_t** context, ...);

#endif
