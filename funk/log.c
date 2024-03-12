#include "../my_math.h"

long double my_log(double x) {
  long double result = 0;
  if (my_iszero(x)) {
    result = MY_INF_NEG;
  } else if (my_isnan(x) || x < 0 || (x < 0 && my_isinf_neg(x))) {
    result = MY_NAN;
  } else if (my_isinf_pos(x)) {
    result = MY_INF_POS;
  } else {
    long double pow_10 = 0;
    while (x > 1) {
      x /= 10;
      pow_10++;
    }
    x--;
    long double tmp = x;
    result = x;
    int i = 0;
    while (!(my_fabs(tmp) < MY_EPS)) {
      tmp *= (-1) * x * (i + 1) / (i + 2);
      result += tmp;
      i++;
    }
    result += pow_10 * MY_LN10;
  }
  return result;
}