#include "../my_math.h"

long double my_acos(double x) {
  long double result = MY_NAN;
  if (x < 1 && x >= 0)
    result = my_atan(my_sqrt(1 - x * x) / x);
  else if (x < 0 && x > -1)
    result = MY_PI + my_atan(my_sqrt(1 - x * x) / x);
  else if (x == 1)
    result = 0;
  else if (x == -1)
    result = MY_PI;
  return result;
}