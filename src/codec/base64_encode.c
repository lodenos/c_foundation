#include "codec/base64.h"

void base64_encode(void* input, u64_t size, void* output) {
  u32_t block;
  u32_t remainder = size % 3;
  u8_t const* in = (u8_t*)input;
  u8_t const* in_end = in + size - remainder;
  u8_t* out = (u8_t*)output;

  while (in < in_end) {
    block = __builtin_bswap32(*(u32_t const*)(void const*)in);
    *out++ = base64_table[(block >> 26) & 0x3F];
    *out++ = base64_table[(block >> 20) & 0x3F];
    *out++ = base64_table[(block >> 14) & 0x3F];
    *out++ = base64_table[(block >> 8) & 0x3F];
    in += 3;
  }
  switch (remainder) {
  case 1:
    block = (u32_t)*in;
    *out++ = base64_table[(block >> 2) & 0x3F];
    *out++ = base64_table[(block << 4) & 0x3F];
    *out++ = '=';
    *out++ = '=';
    break;
  case 2:
    block = __builtin_bswap16(*(u16_t const*)(void const*)in);
    *out++ = base64_table[(block >> 10) & 0x3F];
    *out++ = base64_table[(block >> 4) & 0x3F];
    *out++ = base64_table[(block << 2) & 0x3F];
    *out++ = '=';
    break;
  default:
    break;
  }
  *out = '\0';
}
