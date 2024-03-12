#include "../my_math.h"

long double my_tan(double x) {
  long double result = 0;
  if (my_iszero(x)) {
    result = 0;
  } else if (my_isnan(x) || my_isinf(x)) {
    result = MY_NAN;
  } else {
    long double coss = my_sin(MY_PI / 2 - x);
    if (my_iszero(coss)) {
      result = MY_INF_POS;
    } else {
      result = my_sin(x) / coss;
    }
  }
  return result;
}