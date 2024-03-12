#include "../my_math.h"

long double my_fmod(double x, double y) {
  long double result = x;
  if (my_isnan(x) || my_isnan(y) || my_isinf(x) || my_iszero(y)) {
    result = MY_NAN;
  } else if (my_isinf(y)) {
    result = x;
  } else {
    int sign = 1;
    if (x < 0) sign *= -1;
    if (y < 0) sign *= -1;
    while (my_fabs(result) >= my_fabs(y)) {
      result -= sign * y;
    }
  }
  return result;
}