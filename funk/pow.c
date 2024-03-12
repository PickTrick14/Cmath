#include "../my_math.h"

long double my_int_pow(double base, long long exp) {
  long double result = base;
  if (exp == 0) {
    result = 1;
  } else if (exp == 1) {
    result = base;
  } else if (exp % 2) {
    result = base * my_int_pow(base, exp - 1);
  } else if (result != 0) {
    result = my_int_pow(base * base, exp / 2);
  }
  return result;
}

long double my_pow(double base, double exp) {
  long double res = 0;
  long double int_exp = my_floor(exp);
  if (exp == 0 || base == 1) {
    res = 1;
  } else if (my_isnan(exp) || my_isnan(base)) {
    res = MY_NAN;
  } else if (exp == MY_INF) {
    if (my_fabs(base) == 1)
      res = 1;
    else if (my_fabs(base) > 1)
      res = MY_INF;
    else
      res = 0;
  } else if (base == -MY_INF && exp != -MY_INF) {
    if (exp < 0)
      res = 0;
    else
      res = my_int_pow(-1, my_fabs(exp)) * MY_INF;
  } else if (base < 0 && my_floor(exp) != exp) {
    res = MY_NAN;
  } else if (exp < 0) {
    if (base == 0)
      res = MY_INF;
    else
      res = 1 / my_pow(base, -1 * exp);
  } else if (exp > MY_FLT_MAX || exp == int_exp) {
    res = my_int_pow(base, (long long)exp);
  } else {
    res = my_exp(my_log(base) * (exp - int_exp)) * my_int_pow(base, int_exp);
  }
  return res;
}
