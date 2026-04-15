#ifndef STRING_H
#define STRING_H

#include <stdbool.h>

#include "pointer.h"
#include "type.h"

#define CHAR_IS_NONE        0x00
#define CHAR_IS_ALPHA       0x01
#define CHAR_IS_BLANK       0x02
#define CHAR_IS_CONTROL     0x04
#define CHAR_IS_DIGIT       0x08
#define CHAR_IS_GRAPHICAL   0x10
#define CHAR_IS_PRINTABLE   0x20
#define CHAR_IS_PUNCTUATION 0x40
#define CHAR_IS_SPACE       0x80

#define CHAR_IS_BASE_32     0x01 
#define CHAR_IS_BASE_36     0x02
#define CHAR_IS_BASE_64     0x04
#define CHAR_IS_DIGIT_B     0x08
#define CHAR_IS_DIGIT_O     0x10
#define CHAR_IS_DIGIT_X     0x20

#define BASE_ALPHABET_INVALID 0xFF

#define BASE_SIGN_NEGATIVE 0x00
#define BASE_SIGN_POSITIVE 0x01

typedef struct numeric_base_s numeric_base_t;

struct numeric_base_s {
  u8_t alphabet[256]; // integer -> string
  u8_t sign[2];
  u32_t size;
};

static const u8_t char_lookup_table[256] = {
  [0x00 ... 0x1F] = CHAR_IS_CONTROL,
  [0x20] = CHAR_IS_PRINTABLE | CHAR_IS_SPACE,
  [0x21 ... 0x2F] = CHAR_IS_PRINTABLE | CHAR_IS_GRAPHICAL | CHAR_IS_PUNCTUATION,
  [0x30 ... 0x39] = CHAR_IS_PRINTABLE | CHAR_IS_GRAPHICAL | CHAR_IS_DIGIT,
  [0x3A ... 0x40] = CHAR_IS_PRINTABLE | CHAR_IS_GRAPHICAL | CHAR_IS_PUNCTUATION,
  [0x41 ... 0x5A] = CHAR_IS_PRINTABLE | CHAR_IS_GRAPHICAL | CHAR_IS_ALPHA,
  [0x5B ... 0x60] = CHAR_IS_PRINTABLE | CHAR_IS_GRAPHICAL | CHAR_IS_PUNCTUATION,
  [0x61 ... 0x7A] = CHAR_IS_PRINTABLE | CHAR_IS_GRAPHICAL | CHAR_IS_ALPHA,
  [0x7B ... 0x7E] = CHAR_IS_PRINTABLE | CHAR_IS_GRAPHICAL | CHAR_IS_PUNCTUATION,
  [0x7F] = CHAR_IS_CONTROL,
  [0x80 ... 0xFF] = CHAR_IS_NONE
};

static const u8_t char_lookup_table_base[256] = {};

static inline bool char_is_alpha(u8_t c) {
  return char_lookup_table[c] & CHAR_IS_ALPHA;
}

static inline bool char_is_not_alpha(u8_t c) {
  return !(char_lookup_table[c] & CHAR_IS_ALPHA);
}

static inline bool char_is_alphanumeric(u8_t c) {
  return char_lookup_table[c] & (CHAR_IS_ALPHA | CHAR_IS_DIGIT);
}

static inline bool char_is_not_alphanumeric(u8_t c) {
  return !(char_lookup_table[c] & (CHAR_IS_ALPHA | CHAR_IS_DIGIT));
}

static inline bool char_is_blank(u8_t c) {
  return char_lookup_table[c] & CHAR_IS_BLANK;
}

static inline bool char_is_not_blank(u8_t c) {
  return !(char_lookup_table[c] & CHAR_IS_BLANK);
}

static inline bool char_is_control(u8_t c) {
  return char_lookup_table[c] & CHAR_IS_CONTROL;
}

static inline bool char_is_not_control(u8_t c) {
  return !(char_lookup_table[c] & CHAR_IS_CONTROL);
}

static inline bool char_is_digit(u8_t c) {
  return char_lookup_table[c] & CHAR_IS_DIGIT;
}

static inline bool char_is_not_digit(u8_t c) {
  return !(char_lookup_table[c] & CHAR_IS_DIGIT);
}

static inline bool char_is_digit_hexa(u8_t c) {
  return 0;
}

static inline bool char_is_not_digit_hexa(u8_t c) {
  return 0;
}

static inline bool char_is_digit_octal(u8_t c) {
  return 0;
}

static inline bool char_is_not_digit_octal(u8_t c) {
  return 0;
}

static inline bool char_is_graphical(u8_t c) {
  return char_lookup_table[c] & CHAR_IS_GRAPHICAL;
}

static inline bool char_is_not_graphical(u8_t c) {
  return !(char_lookup_table[c] & CHAR_IS_GRAPHICAL);
}

static inline bool char_is_printable(u8_t c) {
  return char_lookup_table[c] & CHAR_IS_PRINTABLE;
}

static inline bool char_is_not_printable(u8_t c) {
  return !(char_lookup_table[c] & CHAR_IS_PRINTABLE);
}

static inline bool char_is_punctuation(u8_t c) {
  return char_lookup_table[c] & CHAR_IS_PUNCTUATION;
}

static inline bool char_is_not_punctuation(u8_t c) {
  return !(char_lookup_table[c] & CHAR_IS_PUNCTUATION);
}

static inline bool char_is_space(u8_t c) {
  return char_lookup_table[c] & CHAR_IS_SPACE;
}

static inline bool char_is_not_space(u8_t c) {
  return !(char_lookup_table[c] & CHAR_IS_SPACE);
}


//=============================================================================



static inline bool
str_base_is_valid(u8_t* restrict start, u8_t* restrict stop,
                  numeric_base_t* restrict base) {
  while (start < stop)
    if (base->alphabet[*start] == BASE_ALPHABET_INVALID)
      return false;
  return true;
}

static inline u64_t
str_base_to_u64(u8_t* restrict start, u8_t* restrict stop,
                numeric_base_t* restrict base) {
  u64_t value = 0;

  while (start < stop)
    value = value * base->size + base->alphabet[*start++];
  return value;
}


//=============================================================================


static inline i8_t str_parse_i8(u8_t* restrict start, u8_t* restrict stop) {
  i8_t value = 0;
  i8_t negative = 1;

  if (*start == '-') {
    negative = -negative;
    ++start;
  } else if (*start == '+')
    ++start;
  while (start < stop)
    value = value * 10 + *start++ - '0';
  return value * negative;
}

static inline u8_t str_parse_u8(u8_t* restrict start, u8_t* restrict stop) {
  u8_t value = 0;

  while (start < stop)
    value = value * 10 + *start++ - '0';
  return value;
}

static inline i16_t str_parse_i16(u8_t* restrict start, u8_t* restrict stop) {
  i16_t value = 0;
  i16_t negative = 1;

  if (*start == '-') {
    negative = -negative;
    ++start;
  } else if (*start == '+')
    ++start;
  while (start < stop)
    value = value * 10 + *start++ - '0';
  return value * negative;
}

static inline u16_t str_parse_u16(u8_t* restrict start, u8_t* restrict stop) {
  u16_t value = 0;

  while (start < stop)
    value = value * 10 + *start++ - '0';
  return value;
}

static inline i32_t str_parse_i32(u8_t* restrict start, u8_t* restrict stop) {
  i32_t value = 0;
  i32_t negative = 1;

  if (*start == '-') {
    negative = -negative;
    ++start;
  } else if (*start == '+')
    ++start;
  while (start < stop)
    value = value * 10 + *start++ - '0';
  return value * negative;
}

static inline u32_t str_parse_u32(u8_t* restrict start, u8_t* restrict stop) {
  u32_t value = 0;

  while (start < stop)
    value = value * 10 + *start++ - '0';
  return value;
}

static inline i64_t str_parse_i64(u8_t* restrict start, u8_t* restrict stop) {
  i64_t value = 0;
  i64_t negative = 1;

  if (*start == '-') {
    negative = -negative;
    ++start;
  } else if (*start == '+')
    ++start;
  while (start < stop)
    value = value * 10 + *start++ - '0';
  return value * negative;
}

static inline u64_t str_parse_u64(u8_t* restrict start, u8_t* restrict stop) {
  u64_t value = 0;

  while (start < stop)
    value = value * 10 + *start++ - '0';
  return value;
}


//=============================================================================


static inline void str_reverse(u8_t* restrict left, u8_t* restrict right) {
  u8_t value;

  while (left < right) {
    value = *left;
    *left++ = *right;
    *right-- = value;
  }
}


//=============================================================================


static inline u8_t* str_skip(u8_t* restrict ctx, u8_t* restrict skip_table) {
  while (skip_table[*ctx])
    ++ctx;
  return ctx;
}

static inline u8_t* str_skip_digits(u8_t* restrict ctx) {
  while (char_is_digit(*ctx))
    ++ctx;
  return ctx;
}

static inline u8_t* str_skip_whitespace(u8_t* restrict ctx) {
  (void)ctx;
  return 0;
}


//=============================================================================


// static inline u32_t str_token_type(u8_t* restrict start, u8_t* restrict stop) {}


//=============================================================================

static inline u8_t*
i8_to_str_base(u8_t* restrict ctx, numeric_base_t* restrict base,
               i16_t value) {
  u8_t* head = ctx;

  if (value < 0) {
    *head++ = base->sign[BASE_SIGN_NEGATIVE];
    value = -value;
    ++ctx;
  } else if (base->sign[BASE_SIGN_POSITIVE] != BASE_ALPHABET_INVALID) {
    *head++ = base->sign[BASE_SIGN_POSITIVE];
    ++ctx;
  }
  while (value) {
    *head++ = base->alphabet[value % base->size];
    value /= (i8_t)base->size;
  }
  str_reverse(ctx, head - 1);
  return head;
}

static inline u32_t
i8_to_str_base_len(numeric_base_t* restrict base, i8_t value) {
  u32_t size = 0;

  if (value < 0) {
    ++size;
    value = -value;
  } else if (base->sign[BASE_SIGN_POSITIVE] != BASE_ALPHABET_INVALID)
    ++size;
  while (value) {
    value /= (i8_t)base->size;
    ++size;
  }
  return size;
}

static inline u8_t*
u8_to_str_base(u8_t* restrict ctx, numeric_base_t* restrict base, u16_t value) {
  u8_t* head = ctx;

  while (value) {
    *head++ = base->alphabet[value % base->size];
    value /= (u16_t)base->size;
  }
  str_reverse(ctx, head - 1);
  return head;
}

static inline u32_t u8_to_str_base_len(u32_t base_size, u16_t value) {
  u32_t size = 0;

  while (value) {
    value /= (u16_t)base_size;
    ++size;
  }
  return size;
}

static inline u8_t*
i16_to_str_base(u8_t* restrict ctx, numeric_base_t* restrict base,
                i16_t value) {
  u8_t* head = ctx;

  if (value < 0) {
    *head++ = base->sign[BASE_SIGN_NEGATIVE];
    value = -value;
    ++ctx;
  } else if (base->sign[BASE_SIGN_POSITIVE] != BASE_ALPHABET_INVALID) {
    *head++ = base->sign[BASE_SIGN_POSITIVE];
    ++ctx;
  }
  while (value) {
    *head++ = base->alphabet[value % base->size];
    value /= (i16_t)base->size;
  }
  str_reverse(ctx, head - 1);
  return head;
}

static inline u16_t
i16_to_str_base_len(numeric_base_t* restrict base, i16_t value) {
  u32_t size = 0;

  if (value < 0) {
    ++size;
    value = -value;
  } else if (base->sign[BASE_SIGN_POSITIVE] != BASE_ALPHABET_INVALID)
    ++size;
  while (value) {
    value /= (i16_t)base->size;
    ++size;
  }
  return size;
}

static inline u8_t*
u16_to_str_base(u8_t* restrict ctx, numeric_base_t* restrict base, u16_t value) {
  u8_t* head = ctx;

  while (value) {
    *head++ = base->alphabet[value % base->size];
    value /= (u16_t)base->size;
  }
  str_reverse(ctx, head - 1);
  return head;
}

static inline u32_t u16_to_str_base_len(u32_t base_size, u16_t value) {
  u32_t size = 0;

  while (value) {
    value /= (u16_t)base_size;
    ++size;
  }
  return size;
}

static inline u8_t*
i32_to_str_base(u8_t* restrict ctx, numeric_base_t* restrict base,
                i32_t value) {
  u8_t* head = ctx;

  if (value < 0) {
    *head++ = base->sign[BASE_SIGN_NEGATIVE];
    value = -value;
    ++ctx;
  } else if (base->sign[BASE_SIGN_POSITIVE] != BASE_ALPHABET_INVALID) {
    *head++ = base->sign[BASE_SIGN_POSITIVE];
    ++ctx;
  }
  while (value) {
    *head++ = base->alphabet[value % base->size];
    value /= (i32_t)base->size;
  }
  str_reverse(ctx, head - 1);
  return head;
}

static inline u32_t
i32_to_str_base_len(numeric_base_t* restrict base, i32_t value) {
  u32_t size = 0;

  if (value < 0) {
    ++size;
    value = -value;
  } else if (base->sign[BASE_SIGN_POSITIVE] != BASE_ALPHABET_INVALID)
    ++size;
  while (value) {
    value /= (i32_t)base->size;
    ++size;
  }
  return size;
}

static inline u8_t*
u32_to_str_base(u8_t* restrict ctx, numeric_base_t* restrict base, u32_t value) {
  u8_t* head = ctx;

  while (value) {
    *head++ = base->alphabet[value % base->size];
    value /= (u32_t)base->size;
  }
  str_reverse(ctx, head - 1);
  return head;
}

static inline u32_t u32_to_str_base_len(u32_t base_size, u32_t value) {
  u32_t size = 0;

  while (value) {
    value /= (u32_t)base_size;
    ++size;
  }
  return size;
}

static inline u8_t*
i64_to_str_base(u8_t* restrict ctx, numeric_base_t* restrict base,
                i64_t value) {
  u8_t* head = ctx;

  if (value < 0) {
    *head++ = base->sign[BASE_SIGN_NEGATIVE];
    value = -value;
    ++ctx;
  } else if (base->sign[BASE_SIGN_POSITIVE] != BASE_ALPHABET_INVALID) {
    *head++ = base->sign[BASE_SIGN_POSITIVE];
    ++ctx;
  }
  while (value) {
    *head++ = base->alphabet[value % base->size];
    value /= (i64_t)base->size;
  }
  str_reverse(ctx, head - 1);
  return head;
}

static inline u32_t
i64_to_str_base_len(numeric_base_t* restrict base, i64_t value) {
  u32_t size = 0;

  if (value < 0) {
    ++size;
    value = -value;
  } else if (base->sign[BASE_SIGN_POSITIVE] != BASE_ALPHABET_INVALID)
    ++size;
  while (value) {
    value /= (i64_t)base->size;
    ++size;
  }
  return size;
}

static inline u8_t*
u64_to_str_base(u8_t* restrict ctx, numeric_base_t* restrict base, u64_t value) {
  u8_t* head = ctx;

  while (value) {
    *head++ = base->alphabet[value % base->size];
    value /= (u64_t)base->size;
  }
  str_reverse(ctx, head - 1);
  return head;
}

static inline u32_t u64_to_str_base_len(u32_t base_size, u64_t value) {
  u32_t size = 0;

  while (value) {
    value /= (u64_t)base_size;
    ++size;
  }
  return size;
}


//=============================================================================

static inline u8_t* i8_to_str(u8_t* restrict ctx, i8_t number) {
  (void)ctx;
  (void)number;
  return 0;
}

static inline u32_t i8_to_str_len(i8_t value) {
  (void)value;
  return 0;
}

static inline u8_t* u8_to_str(u8_t* restrict ctx, u8_t value) {
  (void)ctx;
  (void)value;
  return 0;
}

static inline u32_t u8_to_str_len(u8_t value) {
  if (value < 10u)
    return 1;
  else if (value < 100u)
    return 2;
  else
    return 3;
}

static inline u8_t* i16_to_str(u8_t* restrict ctx, i16_t value) {
  (void)ctx;
  (void)value;
  return 0;
}

static inline u32_t i16_to_str_len(i16_t value) {
  const u16_t v = (value < 0) ? -value : value;

  if (v < 10u)
    return 1 + (value < 0);
  else if (v < 100u)
    return 2 + (value < 0);
  else if (v < 1000ULL)
    return 3 + (value < 0);
  else if (v < 10000ULL)
    return 4 + (value < 0);
  else
    return 5;
}

static inline u8_t* u16_to_str(u8_t* restrict ctx, u16_t value) {
  (void)ctx;
  (void)value;
  return 0;
}

static inline u32_t u16_to_str_len(u16_t value) {
  if (value < 10u)
    return 1;
  else if (value < 100u)
    return 2;
  else if (value < 1000u)
    return 3;
  else if (value < 10000u)
    return 4;
  else
    return 5;
}

static inline u8_t* i32_to_str(u8_t* restrict ctx, i32_t value) {
  (void)ctx;
  (void)value;
  return 0;
}

static inline u32_t i32_to_str_len(i32_t value) {
  const i32_t v = (value < 0) ? -value : value;

  if (v < 10)
    return 1 + (value < 0);
  else if (v < 100)
    return 2 + (value < 0);
  else if (v < 1000)
    return 3 + (value < 0);
  else if (v < 10000)
    return 4 + (value < 0);
  else if (v < 100000)
    return 5 + (value < 0);
  else if (v < 1000000)
    return 6 + (value < 0);
  else if (v < 10000000)
    return 7 + (value < 0);
  else if (v < 100000000)
    return 8 + (value < 0);
  else if (v < 1000000000)
    return 9 + (value < 0);
  else
    return 10;
}

static inline u32_t u32_to_str_len(u32_t value);

static inline u8_t* u32_to_str(u8_t* restrict ctx, u32_t value) {
  u32_t size;
  u8_t* head;

  size = u32_to_str_len(value);
  head = ctx + size;
  ctx = head - 1;
  while (size) {
    *ctx = '0' + (value % 10);
    value = value / 10;
    --ctx;
    --size;
  }
  return head;
}

static inline u32_t u32_to_str_len(u32_t value) {
  if (value < 10u)  
    return 1;
  else if (value < 100u)
    return 2;
  else if (value < 1000u)
    return 3;
  else if (value < 10000u)
    return 4;
  else if (value < 100000u)
    return 5;
  else if (value < 1000000u)
    return 6;
  else if (value < 10000000u)
    return 7;
  else if (value < 100000000u)
    return 8;
  else if (value < 1000000000u)
    return 9;
  else
    return 10;
}

static inline u32_t i64_to_str_len(i64_t value);

static inline u8_t* i64_to_str(u8_t* restrict ctx, i64_t value) {
  u32_t size;
  u8_t* head;

  size = i64_to_str_len(value);
  head = ctx + size;
  if (value < 0) {
    value = -value;
    *ctx = '-';
    --size;
  }
  ctx = head - 1;
  while (size) {
    *ctx = '0' + (value % 10);
    value = value / 10;
    --ctx;
    --size;
  }
  return head;
}

static inline u32_t i64_to_str_len(i64_t value) {
  const i64_t v = (value < 0) ? -value : value;

  if (v < 10ll)
    return 1 + (value < 0);
  else if (v < 100ll)
    return 2 + (value < 0);
  else if (v < 1000ll)
    return 3 + (value < 0);
  else if (v < 10000ll)
    return 4 + (value < 0);
  else if (v < 100000ll)
    return 5 + (value < 0);
  else if (v < 1000000ll)
    return 6 + (value < 0);
  else if (v < 10000000ll)
    return 7 + (value < 0);
  else if (v < 100000000ll)
    return 8 + (value < 0);
  else if (v < 1000000000ll)
    return 9 + (value < 0);
  else if (v < 10000000000ll)
    return 10 + (value < 0);
  else if (v < 100000000000ll)
    return 11 + (value < 0);
  else if (v < 1000000000000ll)
    return 12 + (value < 0);
  else if (v < 10000000000000ll)
    return 13 + (value < 0);
  else if (v < 100000000000000ll)
    return 14 + (value < 0);
  else if (v < 1000000000000000ll)
    return 15 + (value < 0);
  else if (v < 10000000000000000ll)
    return 16 + (value < 0);
  else if (v < 100000000000000000ll)
    return 17 + (value < 0);
  else if (v < 1000000000000000000ll)
    return 18 + (value < 0);
  else
    return 19;
}

static inline u32_t u64_to_str_len(u64_t value);

static inline u8_t* u64_to_str(u8_t* restrict ctx, u64_t value) {
  u32_t size;
  u8_t* head;

  size = u64_to_str_len(value);
  head = ctx + size;
  ctx = head - 1;
  while (size) {
    *ctx = '0' + (value % 10);
    value = value / 10;
    --ctx;
    --size;
  }
  return head;
}

static inline u32_t u64_to_str_len(u64_t value) {
  if (value < 10ull)
    return 1;
  else if (value < 100ull)
    return 2;
  else if (value < 1000ull)
    return 3;
  else if (value < 10000ull)
    return 4;
  else if (value < 100000ull)
    return 5;
  else if (value < 1000000ull)
    return 6;
  else if (value < 10000000ull)
    return 7;
  else if (value < 100000000ull)
    return 8;
  else if (value < 1000000000ull)
    return 9;
  else if (value < 10000000000ull)
    return 10;
  else if (value < 100000000000ull)
    return 11;
  else if (value < 1000000000000ull)
    return 12;
  else if (value < 10000000000000ull)
    return 13;
  else if (value < 100000000000000ull)
    return 14;
  else if (value < 1000000000000000ull)
    return 15;
  else if (value < 10000000000000000ull)
    return 16;
  else if (value < 100000000000000000ull)
    return 17;
  else if (value < 1000000000000000000ull)
    return 18;
  else if (value < 10000000000000000000ull)
    return 19;
  else
    return 20;
}

#endif
