#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <vector.h>

typedef struct i8_m_s i8_m_t;
typedef struct i16_m_s i16_m_t;
typedef struct i32_m_s i32_m_t;
typedef struct i64_m_s i64_m_t;

typedef struct u8_m_s u8_m_t;
typedef struct u16_m_s u16_m_t;
typedef struct u32_m_s u32_m_t;
typedef struct u64_m_s u64_m_t;

typedef struct f32_m_s f32_m_t;
typedef struct f32_m_init_s f32_m_init_t;

typedef struct f64_m_s f64_m_t;
typedef struct f64_m_init_s f64_m_init_t;

typedef struct matrix_s matrix_t;
typedef struct matrix_init_s matrix_init_t;

// Matrix Type
// -> Complex 32, 64
// -> U&I 8,16,32,64
// -> Float 32, 64
// -> hsl, hsla, rgb, rgba

struct i8_m_s {
  u32_v2_t shape;
  i8_t* entries;
};

struct i16_m_s {
  u32_v2_t shape;
  i16_t* entries;
};

struct i32_m_s {
  u32_v2_t shape;
  i32_t* entries;
};

struct i64_m_s {
  u32_v2_t shape;
  i64_t* entries;
};

struct u8_m_s {
  u32_v2_t shape;
  u8_t* entries;
};

struct u16_m_s {
  u32_v2_t shape;
  u16_t* entries;
};

struct u32_m_s {
  u32_v2_t shape;
  u32_t* entries;
};

struct u64_m_s {
  u32_v2_t shape;
  u64_t* entries;
};

struct f32_m_s {
  u32_v2_t shape;
  f32_t* entries;
};

struct f64_m_s {
  u32_v2_t shape;
  f64_t* entries;
};

struct f64_m_init_s {
  u32_v2_t shape;
};

struct matrix_s {
  u32_v2_t shape;
  u16_t entry_size;
  u16_t entry_type;
  void* entries;
};

struct matrix_init_s {
  u32_v2_t shape;
  u16_t entry_size;
  u16_t entry_type;
};

// INFO: Prototypes

static inline void
f64_m_row_axpy(f64_m_t* m, u32_t row_a, u32_t row_b, f64_t s);

static inline void f64_m_row_scale(f64_m_t* m, u32_t row, f64_t s);
static inline void f64_m_row_swap(f64_m_t* m, u32_t row_a, u32_t row_b);
static inline void f64_m_zero(f64_m_t* m);

// INFO: Constructor

static inline f64_m_t* f64_m_new(f64_m_t** ctx) {
  (*ctx) = (f64_m_t*)malloc(sizeof(f64_m_t));
  if (!(*ctx))
    return NULL;
  (*ctx)->entries = (f64_t*)malloc(sizeof(f64_t));
  if (!(*ctx)->entries) {
    free(*ctx);
    return NULL;
  }
  (*ctx)->shape = (u32_v2_t){1, 1};
  return *ctx;
}

static inline f64_m_t* f64_m_new_init(f64_m_t** ctx, f64_m_init_t* init) {
  const u32_t mn = init->shape.m * init->shape.n;

  (*ctx) = (f64_m_t*)malloc(sizeof(f64_m_t) * mn);
  if (!(*ctx))
    return NULL;
  (*ctx)->entries = (f64_t*)malloc(sizeof(f64_t) * mn);
  if (!(*ctx)->entries) {
    free(*ctx);
    return NULL;
  }
  (*ctx)->shape = init->shape;
  return *ctx;
}

// INFO: Destructor

static inline void f64_m_delete(void* ctx) {
  f64_m_t* m = (f64_m_t*)ctx;

  free(m->entries);
  free(m);
}

// INFO: Functions liks Methods

static inline void f64_m_add(f64_m_t const* a, f64_m_t const* b, f64_m_t* w) {
  const u32_t mn = a->shape.m * a->shape.n;
  f64_t const* a_e = a->entries;
  f64_t const* b_e = b->entries;
  f64_t* w_e = w->entries;

  for (u32_t itr = 0; itr < mn; ++itr)
    w_e[itr] = a_e[itr] + b_e[itr];
}

static inline void f64_m_add_s(f64_m_t const* m, f64_t s, f64_m_t* w) {
  const u32_t mn = m->shape.m * m->shape.n;
  f64_t const* m_e = m->entries;
  f64_t* w_e = w->entries;

  for (u32_t itr = 0; itr < mn; ++itr)
    w_e[itr] = m_e[itr] + s;
}

static inline void f64_m_copy(f64_m_t const* m, f64_m_t* w) {
  const u32_t mn = m->shape.m * m->shape.n;
  f64_t const* m_e = m->entries;
  f64_t* w_e = w->entries;

  for (u32_t itr = 0; itr < mn; ++itr)
    w_e[itr] = m_e[itr];
}

static inline f64_t f64_m_det(f64_m_t const* m, f64_m_t* aux) {
  u32_t const rows = m->shape.m;
  u32_t const columns = m->shape.n;
  f64_t* aux_e = aux->entries;
  f64_t det = 1.0;
  int sign = 1;

  f64_m_copy(m, aux);
  for (u32_t k = 0; k < rows; ++k) {
    u32_t pivot = k;
    f64_t max_abs = __builtin_fabs(aux_e[k * columns + k]);
    for (u32_t i = k + 1; i < rows; ++i) {
      f64_t abs_v = __builtin_fabs(aux_e[i * columns + k]);
      if (abs_v > max_abs) {
        max_abs = abs_v;
        pivot = i;
      }
    }
    if (pivot != k) {
      f64_m_row_swap(aux, k, pivot);
      sign = -sign;
    }
    {
      f64_t diag = aux_e[k * columns + k];
      det *= diag;
      if (diag == 0.0)
        return 0.0;
      for (u32_t i = k + 1; i < rows; ++i) {
        f64_t factor = aux_e[i * columns + k] / diag;
        f64_m_row_axpy(aux, k, i, -factor);
      }
    }
  }
  return (sign < 0) ? -det : det;
}

static inline void f64_m_div_e(f64_m_t const* a, f64_m_t const* b, f64_m_t* w) {
  const u32_t mn = a->shape.m * a->shape.n;
  f64_t const* a_e = a->entries;
  f64_t const* b_e = b->entries;
  f64_t* w_e = w->entries;

  for (u32_t itr = 0; itr < mn; ++itr)
    w_e[itr] = a_e[itr] / b_e[itr];
}

static inline void f64_m_div_s(f64_m_t const* m, f64_t s, f64_m_t* w) {
  const u32_t mn = m->shape.m * m->shape.n;
  f64_t const* m_e = m->entries;
  f64_t* w_e = w->entries;

  for (u32_t itr = 0; itr < mn; ++itr)
    w_e[itr] = m_e[itr] / s;
}

static inline f64_t f64_m_dot(f64_m_t const* a, f64_m_t const* b) {
  const u32_t mn = a->shape.m * a->shape.n;
  f64_t const* a_e = a->entries;
  f64_t const* b_e = b->entries;
  f64_t sum;

  sum = 0.0;
  for (u32_t itr = 0; itr < mn; ++itr)
    sum += a_e[itr] * b_e[itr];
  return sum;
}

static inline void f64_m_identity(f64_m_t* m) {
  u32_t const rows = m->shape.m;
  u32_t const columns = m->shape.n;
  f64_t* m_e = m->entries;

  f64_m_zero(m);
  for (u32_t itr = 0; itr < rows; ++itr)
    m_e[itr * columns + itr] = 1.0;
}

static inline void f64_m_inv(f64_m_t const* m, f64_m_t* w, f64_m_t* aux) {
  u32_t const rows = m->shape.m;
  u32_t const columns = m->shape.n;
  f64_t* aux_e = aux->entries;

  f64_m_copy(m, aux);
  f64_m_identity(w);
  for (u32_t row = 0; row < rows; ++row) {
    u32_t pivot = row;
    f64_t max_abs = __builtin_fabs(aux_e[row * columns + row]);
    for (u32_t itr = row + 1; itr < rows; ++itr) {
      f64_t abs_v = __builtin_fabs(aux_e[itr * columns + row]);
      if (abs_v > max_abs) {
        max_abs = abs_v;
        pivot = itr;
      }
    }
    if (pivot != row) {
      f64_m_row_swap(aux, row, pivot);
      f64_m_row_swap(w, row, pivot);
    }
    {
      f64_t inv_pivot = 1.0 / aux_e[row * columns + row];
      f64_m_row_scale(aux, row, inv_pivot);
      f64_m_row_scale(w, row, inv_pivot);
    }
    for (u32_t itr = 0; itr < rows; ++itr) {
      f64_t factor;
      if (itr == row)
        continue;
      factor = aux_e[itr * columns + row];
      f64_m_row_axpy(aux, row, itr, -factor);
      f64_m_row_axpy(w, row, itr, -factor);
    }
  }
}

static inline void f64_m_mul(f64_m_t const* a, f64_m_t const* b, f64_m_t* w) {
  u32_t const rows = a->shape.m;
  u32_t const inner = a->shape.n;
  u32_t const columns = b->shape.n;
  f64_t const* a_e = a->entries;
  f64_t const* b_e = b->entries;
  f64_t* w_e = w->entries;
  f64_t sum;

  for (u32_t itr_row = 0; itr_row < rows; ++itr_row) {
    for (u32_t itr_column = 0; itr_column < columns; ++itr_column) {
      sum = 0.0;
      for (u32_t itr_inner = 0; itr_inner < inner; ++itr_inner)
        sum += a_e[itr_row * inner + itr_inner] *
               b_e[itr_inner * columns + itr_column];
      w_e[itr_row * columns + itr_column] = sum;
    }
  }
}

static inline void f64_m_mul_e(f64_m_t const* a, f64_m_t const* b, f64_m_t* w) {
  const u32_t mn = a->shape.m * a->shape.n;
  f64_t const* a_e = a->entries;
  f64_t const* b_e = b->entries;
  f64_t* w_e = w->entries;

  for (u32_t itr = 0; itr < mn; ++itr)
    w_e[itr] = a_e[itr] * b_e[itr];
}

static inline void f64_m_mul_s(f64_m_t const* m, f64_t s, f64_m_t* w) {
  const u32_t mn = m->shape.m * m->shape.n;
  f64_t const* m_e = m->entries;
  f64_t* w_e = w->entries;

  for (u32_t itr = 0; itr < mn; ++itr)
    w_e[itr] = m_e[itr] * s;
}

static inline void
f64_m_mul_v2(f64_m_t const* m, f64_v2_t const* v, f64_m_t* w) {
  const u32_t rows = m->shape.m;
  f64_t const* m_e = m->entries;
  f64_t* w_e = w->entries;
  u32_t index;

  for (u32_t itr = 0; itr < rows; ++itr) {
    index = itr * 2;
    w_e[itr] = m_e[index] * v->x + m_e[index + 1] * v->y;
  }
}

static inline void
f64_m_mul_v3(f64_m_t const* m, f64_v3_t const* v, f64_m_t* w) {
  const u32_t rows = m->shape.m;
  f64_t const* m_e = m->entries;
  f64_t* w_e = w->entries;
  u32_t index;

  for (u32_t itr = 0; itr < rows; ++itr) {
    index = itr * 3;
    w_e[itr] =
      m_e[index] * v->x + m_e[index + 1] * v->y + m_e[index + 2] * v->z;
  }
}

static inline void
f64_m_mul_v4(f64_m_t const* m, f64_v4_t const* v, f64_m_t* w) {
  const u32_t rows = m->shape.m;
  f64_t const* m_e = m->entries;
  f64_t* w_e = w->entries;
  u32_t index;

  for (u32_t itr = 0; itr < rows; ++itr) {
    index = itr * 4;
    w_e[itr] = m_e[index] * v->x + m_e[index + 1] * v->y +
               m_e[index + 2] * v->z + m_e[index + 3] * v->w;
  }
}

static inline void
f64_m_row_axpy(f64_m_t* m, u32_t row_a, u32_t row_b, f64_t s) {
  u32_t const columns = m->shape.n;
  f64_t* m_e = m->entries;

  for (u32_t itr = 0; itr < columns; ++itr)
    m_e[row_b * columns + itr] += m_e[row_a * columns + itr] * s;
}

static inline void f64_m_row_scale(f64_m_t* m, u32_t row, f64_t s) {
  const u32_t columns = m->shape.n;
  f64_t* m_e = m->entries;

  for (u32_t itr = 0; itr < columns; ++itr)
    m_e[row * columns + itr] *= s;
}

static inline void f64_m_row_swap(f64_m_t* m, u32_t row_a, u32_t row_b) {
  const u32_t columns = m->shape.n;
  f64_t* m_e = m->entries;
  f64_t value;

  for (u32_t itr = 0; itr < columns; ++itr) {
    value = m_e[row_a * columns + itr];
    m_e[row_a * columns + itr] = m_e[row_b * columns + itr];
    m_e[row_b * columns + itr] = value;
  }
}

static inline void f64_m_sub(f64_m_t const* a, f64_m_t const* b, f64_m_t* w) {
  const u32_t mn = a->shape.m * a->shape.n;
  f64_t const* a_e = a->entries;
  f64_t const* b_e = b->entries;
  f64_t* w_e = w->entries;

  for (u32_t itr = 0; itr < mn; ++itr)
    w_e[itr] = a_e[itr] - b_e[itr];
}

static inline void f64_m_sub_s(f64_m_t const* m, f64_t s, f64_m_t* w) {
  const u32_t mn = m->shape.m * m->shape.n;
  f64_t const* m_e = m->entries;
  f64_t* w_e = w->entries;

  for (u32_t itr = 0; itr < mn; ++itr)
    w_e[itr] = m_e[itr] - s;
}

static inline void f64_m_transpose(f64_m_t const* m, f64_m_t* w) {
  f64_t const* m_e = m->entries;
  f64_t* w_e = w->entries;
  const u32_t rows = m->shape.m;
  const u32_t columns = m->shape.n;

  for (u32_t itr_row = 0; itr_row < rows; ++itr_row)
    for (u32_t itr_column = 0; itr_column < columns; ++itr_column)
      w_e[itr_column * rows + itr_row] = m_e[itr_row * columns + itr_column];
}

static inline void f64_m_zero(f64_m_t* m) {
  u32_t const mn = m->shape.m * m->shape.n;
  f64_t* m_e = m->entries;

  for (u32_t itr = 0; itr < mn; ++itr)
    m_e[itr] = 0.0;
}

#endif
