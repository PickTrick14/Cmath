#include "../my_math.h"

long double my_sqrt(double x) {
  long double result = 0;
  if (my_isinf_neg(x) || x < 0) {
    result = MY_NAN;
  } else if (my_iszero(x)) {
    result = 0;
  } else if (my_isinf_pos(x)) {
    result = MY_INF_POS;
  } else {
    result = my_pow(x, 0.5);
  }
  return result;
}