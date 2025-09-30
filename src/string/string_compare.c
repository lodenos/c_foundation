#include "string.h"

string_cmp_t string_compare(string_t* left, string_t* right) {
  (void)left;
  (void)right;
  return (string_cmp_t){
    .diff = 0,
    .index = 0
  };
}
