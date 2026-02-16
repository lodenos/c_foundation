#ifndef SPEC_H
#define SPEC_H

#include <math.h>
#include <stdio.h>

#define spec_assert(condition)                                                 \
  do {                                                                         \
    if (!(condition))                                                          \
      printf("    \033[31mFAILURE\033[0m: %s at %s:%d\n", #condition,          \
             __FILE__, __LINE__);                                              \
    else                                                                       \
      printf("    \033[32mSUCCESS\033[0m\n");                                  \
  } while (0)

#define spec_should_eq(actual, expected) spec_assert(actual == expected)
#define spec_should_be_true(actual) spec_assert(actual != 0)
#define spec_should_be_false(actual) spec_assert(actual == 0)

#define spec_should_be_lt(actual, expected) spec_assert((actual) < (expected))
#define spec_should_be_le(actual, expected) spec_assert((actual) <= (expected))
#define spec_should_be_gt(actual, expected) spec_assert((actual) > (expected))
#define spec_should_be_ge(actual, expected) spec_assert((actual) >= (expected))

#define spec_should_float_eq(actual, expected, tol)                            \
  spec_assert(fabs((actual) - (expected)) < (tol))

// TODO: spec_describe(...)

#define spec_describe(string) printf("%s\n", string)

// TODO: spec_it(...)

#define spec_it(string) printf("  %s\n", string)

#endif
