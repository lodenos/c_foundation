#include "string.h"
#include <stdlib.h>

string_t* string_new(string_t** context) {
   if (!context)
    return NULL;
  *context = (string_t*)malloc(sizeof(string_t));
  if (!*context)
    return NULL;
  (*context)->data = (u8_t*)malloc(sizeof(u8_t) * STRING_DEFAULT_SIZE);
  if (!(*context)->data) 
    return free(*context), NULL;
  return *context;
}
