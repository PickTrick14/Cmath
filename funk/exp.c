#include "../my_math.h"

long double my_exp(double x) {
  long double value_next = 1;
  long double result = 1;
  long double i = 1;
  int flag = 0;

  if (x != x)
    result = MY_NAN;
  else if (x == MY_INF)
    result = MY_INF;
  else if (x == -MY_INF)
    result = 0;
  else {
    while (my_fabs(value_next) > MY_SMALL_EPS && flag != 1) {
      value_next *= x / i;
      i += 1;
      result += value_next;
      if (result > MY_DBL_MAX) {
        result = MY_INF;
        flag = 1;
      }
    }
  }
  return result;
}
