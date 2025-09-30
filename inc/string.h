#ifndef STRING_H
#define STRING_H

#include "type.h"

#define STRING_GROWTH_FACTOR 2
#define STRING_DEFAULT_SIZE 64

typedef struct string_s string_t;
typedef struct string_init_s string_init_t;

typedef struct string_cmp_s string_cmp_t;

enum StringType {
  STRING_EMPTY        = 0,      // string is empty \0
  STRING_ALPHA        = 1 << 0, // (a-z, A-Z)
  STRING_ALPHANUMERIC = 1 << 1, // (a-z, A-Z, 0-9)
  STRING_BLANK        = 1 << 2, //
  STRING_CONTROL      = 1 << 3, //
  STRING_DIGIT        = 1 << 4, // (0-9)
  STRING_FLOAT        = 1 << 5, // x.xxx
  STRING_GRAPHICAL    = 1 << 6, // Alphanumeric and Punctuation
  STRING_HEXADECIMAL  = 1 << 7, // (0-Ff)
  STRING_LETTER       = 1 << 8, // Lowercase and Uppercase
  STRING_LOWERCASE    = 1 << 9, // 
  STRING_PUNCTUATION  = 1 << 10, //
  STRING_SPACE        = 1 << 11, //
  STRING_UPPERCASE    = 1 << 12, // (A-Z)
};

struct string_s {
  u8_t* data;
  u8_t* ptr_stop;
  u64_t size;
};

struct string_init_s {
  u8_t* data;
  u8_t* ptr_stop;
  u64_t size;
};

struct string_cmp_s {
  u32_t diff;
  u64_t index;
};

// Constructor
string_t* string_new(string_t** context);
string_t* string_new_init(string_t** context, string_init_t* init);

// Destructor
void string_delete(void* context);

// Methods
string_t* string_append(string_t* context, ...);
string_cmp_t string_compare(string_t* left, string_t* right);
string_t* string_copy(string_t* context, string_t* from);
u64_t string_count_substring(string_t* context, string_t* substring);
string_t* string_duplicate(string_t* context);
u8_t* string_find(string_t* context, string_t* substring);
u32_t string_is_type(string_t* context);
string_t* string_flush(string_t* context);

string_t* string_decorator(string_t* context);

string_t* string_from_i8(string_t* context, i8_t value);
string_t* string_from_i16(string_t* context, i16_t value);
string_t* string_from_i32(string_t* context, i32_t value);
string_t* string_from_i64(string_t* context, i64_t value);

string_t* string_from_u8(string_t* context, u8_t value);
string_t* string_from_u16(string_t* context, u16_t value);
string_t* string_from_u32(string_t* context, u32_t value);
string_t* string_from_u64(string_t* context, u64_t value);

string_t* string_from_f32(string_t* context, f32_t value);
string_t* string_from_f64(string_t* context, f64_t value);

string_t* string_reverse(string_t* context);
bool string_start_with(string_t* context, string_t* prefix);
bool string_stop_with(string_t* context, string_t* suffix);
string_t* string_substring(string_t* context, u64_t start, u64_t stop);
string_t* string_to_lowercase(string_t* context);
string_t* string_to_uppercase(string_t* context);

i8_t string_to_i8(string_t* context);
i16_t string_to_i16(string_t* context);
i32_t string_to_i32(string_t* context);
i64_t string_to_i64(string_t* context);

u8_t string_to_u8(string_t* context);
u16_t string_to_u16(string_t* context);
u32_t string_to_u32(string_t* context);
u64_t string_to_u64(string_t* context);

f32_t string_to_f32(string_t* context);
f64_t string_to_f64(string_t* context);


// string_trim
// string_

#endif
