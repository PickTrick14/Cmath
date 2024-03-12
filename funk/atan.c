#include "../my_math.h"

long double my_atan(double x) {
  long double result = 0;
  if (x == MY_INF)
    return MY_PI / 2;
  else if (x == -MY_INF)
    return -MY_PI / 2;
  else if (x != x)
    return x;
  else if (x == 1)
    return 0.785398163;
  else if (x == -1)
    return -0.785398163;
  else if (-1. < x && x < 1.) {
    for (register int i = 0; i < 5000; i++)
      result += my_pow(-1, i) * my_pow(x, 1 + (2 * i)) / (1 + (2 * i));
  } else {
    for (register int i = 0; i < 7000; i++)
      result += my_pow(-1, i) * my_pow(x, -1 - (2 * i)) / (1 + (2 * i));
    result = MY_PI * my_sqrt(x * x) / (2 * x) - result;
  }
  return result;
}