#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include "vector.h"

typedef struct matrix_s matrix_t;
typedef struct matrix_init_s matrix_init_t;

typedef enum {
  MATRIX_BINARY,
  MATRIX_I8,
  MATRIX_U8,
  MATRIX_I16,
  MATRIX_U16,
  MATRIX_I32,
  MATRIX_U32,
  MATRIX_I64,
  MATRIX_U64,
  MATRIX_F32,
  MATRIX_F64,
} matrix_type_e;

struct matrix_s {
  void* ptr;
  u32_v2_t shape;
  matrix_type_e type;
};

struct matrix_init_s {
  u32_v2_t shape;
  matrix_type_e type;
};

static inline matrix_t* matrix_new(matrix_t** ctx) {
  return NULL;
}

static inline matrix_t* matrix_new_init(matrix_t** ctx, matrix_init_t* init) {
  u32_t size;

  *ctx = (matrix_t*)malloc(sizeof(matrix_t));
  if (!*ctx)
    return NULL;
  size = init->shape.row * init->shape.column;
  (*ctx)->ptr = (void*)malloc(sizeof(f64_t) * size);
  (*ctx)->shape = init->shape;
  (*ctx)->type = init->type;

  return *ctx;
}

static inline void matrix_delete(void* ctx) {
  matrix_t* ptr = (matrix_t*)ctx;

  free(ptr->ptr);
  free(ptr);
}

static inline void i8_matrix_add(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  i8_t* restrict m_a = (i8_t*)a->ptr;
  i8_t* restrict m_b = (i8_t*)b->ptr;
  i8_t* restrict m_c = (i8_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] + m_b[index];
}

static inline void u8_matrix_add(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  u8_t* restrict m_a = (u8_t*)a->ptr;
  u8_t* restrict m_b = (u8_t*)b->ptr;
  u8_t* restrict m_c = (u8_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] + m_b[index];
}

static inline void i16_matrix_add(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  i16_t* restrict m_a = (i16_t*)a->ptr;
  i16_t* restrict m_b = (i16_t*)b->ptr;
  i16_t* restrict m_c = (i16_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] + m_b[index];
}

static inline void u16_matrix_add(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  u16_t* restrict m_a = (u16_t*)a->ptr;
  u16_t* restrict m_b = (u16_t*)b->ptr;
  u16_t* restrict m_c = (u16_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] + m_b[index];
}

static inline void i32_matrix_add(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  i32_t* restrict m_a = (i32_t*)a->ptr;
  i32_t* restrict m_b = (i32_t*)b->ptr;
  i32_t* restrict m_c = (i32_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] + m_b[index];
}

static inline void u32_matrix_add(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  u32_t* restrict m_a = (u32_t*)a->ptr;
  u32_t* restrict m_b = (u32_t*)b->ptr;
  u32_t* restrict m_c = (u32_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] + m_b[index];
}

static inline void i64_matrix_add(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  i64_t* restrict m_a = (i64_t*)a->ptr;
  i64_t* restrict m_b = (i64_t*)b->ptr;
  i64_t* restrict m_c = (i64_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] + m_b[index];
}

static inline void u64_matrix_add(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  u64_t* restrict m_a = (u64_t*)a->ptr;
  u64_t* restrict m_b = (u64_t*)b->ptr;
  u64_t* restrict m_c = (u64_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] + m_b[index];
}

static inline void f32_matrix_add(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  f32_t* restrict m_a = (f32_t*)a->ptr;
  f32_t* restrict m_b = (f32_t*)b->ptr;
  f32_t* restrict m_c = (f32_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] + m_b[index];
}

static inline void f64_matrix_add(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  f64_t* restrict m_a = (f64_t*)a->ptr;
  f64_t* restrict m_b = (f64_t*)b->ptr;
  f64_t* restrict m_c = (f64_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] + m_b[index];
}

static inline void i8_matrix_sub(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  i8_t* restrict m_a = (i8_t*)a->ptr;
  i8_t* restrict m_b = (i8_t*)b->ptr;
  i8_t* restrict m_c = (i8_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] - m_b[index];
}

static inline void u8_matrix_sub(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  u8_t* restrict m_a = (u8_t*)a->ptr;
  u8_t* restrict m_b = (u8_t*)b->ptr;
  u8_t* restrict m_c = (u8_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] - m_b[index];
}

static inline void i16_matrix_sub(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  i16_t* restrict m_a = (i16_t*)a->ptr;
  i16_t* restrict m_b = (i16_t*)b->ptr;
  i16_t* restrict m_c = (i16_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] - m_b[index];
}

static inline void u16_matrix_sub(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  u16_t* restrict m_a = (u16_t*)a->ptr;
  u16_t* restrict m_b = (u16_t*)b->ptr;
  u16_t* restrict m_c = (u16_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] - m_b[index];
}

static inline void i32_matrix_sub(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  i32_t* restrict m_a = (i32_t*)a->ptr;
  i32_t* restrict m_b = (i32_t*)b->ptr;
  i32_t* restrict m_c = (i32_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] - m_b[index];
}

static inline void u32_matrix_sub(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  u32_t* restrict m_a = (u32_t*)a->ptr;
  u32_t* restrict m_b = (u32_t*)b->ptr;
  u32_t* restrict m_c = (u32_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] - m_b[index];
}

static inline void i64_matrix_sub(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  i64_t* restrict m_a = (i64_t*)a->ptr;
  i64_t* restrict m_b = (i64_t*)b->ptr;
  i64_t* restrict m_c = (i64_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] - m_b[index];
}

static inline void u64_matrix_sub(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  u64_t* restrict m_a = (u64_t*)a->ptr;
  u64_t* restrict m_b = (u64_t*)b->ptr;
  u64_t* restrict m_c = (u64_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] - m_b[index];
}

static inline void f32_matrix_sub(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  f32_t* restrict m_a = (f32_t*)a->ptr;
  f32_t* restrict m_b = (f32_t*)b->ptr;
  f32_t* restrict m_c = (f32_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] - m_b[index];
}

static inline void f64_matrix_sub(matrix_t* restrict a, matrix_t* restrict b, matrix_t* restrict c) {
  f64_t* restrict m_a = (f64_t*)a->ptr;
  f64_t* restrict m_b = (f64_t*)b->ptr;
  f64_t* restrict m_c = (f64_t*)c->ptr;
  const u32_t elements = a->shape.row * a->shape.column;

  for (u32_t index = 0; index < elements; ++index)
    m_c[index] = m_a[index] - m_b[index];
}

#endif
