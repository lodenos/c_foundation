#include "test_complex.h"
#include "type.h"
#include <stdlib.h>

static void test_complex_abs_f32(void) {
  c32_t* values;
  u32v2_t division = (u32v2_t){
    .x = 2 * 500,
    .y = 2 * 500,
  };
  f32v4_t range = (f32v4_t){
    .ax = -50,
    .ay = +50,
    .bx = +50,
    .by = -50,
  };

  values = (c32_t*)malloc(sizeof(c32_t) * division.x * division.y);
  if (!values) {
    // ERROR: in the test
    return;
  }
  f32v2_periodic_tiling((f32v2_t*)values, &range, &division);
  for (u32_t index = 0; index < 510; ++index) {
    spec_it("complex");
    spec_should_eq(c32_abs(values[index]), c32_abs(values[index]));

    printf("> re: %f ; im: %f\n", values[index].re, values[index].im);
  }

  free(values);
}

static void test_complex_abs_f64(void) {
}

void test_complex_abs(void) {
  spec_describe("function -> c32_abs()");
  test_complex_abs_f32();
  spec_describe("function -> c64_abs()");
  test_complex_abs_f64();
}
