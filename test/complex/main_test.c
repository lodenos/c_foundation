#include "spec.h"
#include "test_complex.h"
#include <stdlib.h>

int main(void) {
  // INFO: describe -> Complex Number
  spec_describe("Complex Number");
  test_complex_abs();
  test_complex_abs_2();
  test_complex_arg();
  test_complex_add();
  test_complex_add_n();
  test_complex_div();
  test_complex_div_n();
  test_complex_exp();
  test_complex_ln();
  test_complex_mul();
  test_complex_mul_n();
  test_complex_pow();
  test_complex_pow_n();
  test_complex_sub();
  test_complex_sub_n();

  return EXIT_SUCCESS;
}
