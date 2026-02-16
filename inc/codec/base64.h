#ifndef BASE64_H
#define BASE64_H

#include "type/type.h"

static const u8_t base64_table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                   "abcdefghijklmnopqrstuvwxyz"
                                   "0123456789+/";

void base64_decode(void* input, u64_t size, void* output);
void base64_encode(void* input, u64_t size, void* output);

// u64_t base64_decode_size(...);
// u64_t base64_encode_size(...);

#endif
