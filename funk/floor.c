#include "../my_math.h"

long double my_floor(double x) {
  long double result = 0;
  if (my_iszero(x)) {
    result = 0;
  } else if (my_isnan(x)) {
    result = MY_NAN;
  } else if (my_isinf(x)) {
    result = x;
  } else {
    if (x >= 0) {
      result = (long long)x;
    } else if (my_fabs(x - (long long)x) >= MY_EPS) {
      result = (long long)x - 1;
    } else {
      result = (long long)x;
    }
  }
  return result;
}