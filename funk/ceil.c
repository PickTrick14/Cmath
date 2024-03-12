#include "../my_math.h"

long double my_ceil(double x) {
  long double result = (long long int)x;
  if (x != x)
    result = MY_NAN;
  else if (x < -MY_FLT_MAX || x > MY_FLT_MAX)
    result = x;

  else if (my_fabs(x) > 0. && x != result) {
    if (x > 0) result += 1;
  }
  return result;
}
