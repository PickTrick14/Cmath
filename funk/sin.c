#include "../my_math.h"

long double my_sin(double x) {
  long double result = 0;
  if (my_isnan(x) || my_isinf(x)) {
    result = MY_NAN;
  } else {
    long double time = 2 * MY_PI;
    if (x < 0) {
      time = -time;
    }
    while (my_fabs(time) < my_fabs(x)) {
      x -= time;
    }
    long double tmp = x;
    result = x;
    int i = 0;
    while (!(my_fabs(tmp) < MY_EPS)) {
      tmp *= (-1) * x * x / (2 * (i + 1)) / (2 * (i + 1) + 1);
      result += tmp;
      i++;
    }
  }
  if (my_iszero(result)) {
    result = 0;
  }
  return result;
}
