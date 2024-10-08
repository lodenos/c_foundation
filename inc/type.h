#ifndef TYPE_H
#define TYPE_H

// NOTE: This is just the basic type redefinition.

typedef signed char i8_t;
typedef short int   i16_t;
typedef int         i32_t;
typedef long int    i64_t;

typedef unsigned char       u8_t;
typedef unsigned short int  u16_t;
typedef unsigned int        u32_t;
typedef unsigned long int   u64_t;

typedef __fp16  f16_t;
typedef float   f32_t;
typedef double  f64_t;

// NOTE: for struct fp8, u8_t sign: 1; exponnt: 3; ...

#endif
