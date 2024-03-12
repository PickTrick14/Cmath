#include "../my_math.h"

long double my_cos(double x) {
  long double result = MY_NAN;
  if (x != MY_INF || x != -MY_INF || !(x != x))
    result = my_sin(MY_PI / 2.0 - x);
  return result;
}
