#include "../my_math.h"

long double my_asin(double x) {
  long double result = MY_NAN;
  if (my_fabs(x) == 1) result = MY_PI / (2 * x);
  if (x > -1 && x < 1) result = MY_PI / 2 - my_acos(x);
  return result;
}