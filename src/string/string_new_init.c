#include "string.h"

string_t* string_new_init(string_t** context, string_init_t* init) {
  (void)init;
  return *context;
}
