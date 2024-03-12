#ifndef MY_MATH_H
#define MY_MATH_H

#define MY_FLT_MAX 3.402823466e+38F
#define MY_DBL_MAX 1.7976931348623158e+308
#define MY_INF 1.0 / 0.0
#define MY_PI 3.14159265358979323846264338327950288
#define MY_SMALL_EPS 0.00000000001L
#define MY_INF 1.0 / 0.0
#define MY_NAN 0.0 / 0.0
#define MY_E 2.71828182845904523536
#define MY_INF_POS 1.0 / 0.0
#define MY_INF_NEG -1.0 / 0.0
#define MY_EPS 1e-16
#define MY_LN10 2.30258509299404568402
#define MY_DBL_MAX 1.7976931348623158e+308
#define my_isnan(x) (x != x)
#define my_isinf(x) (x >= MY_INF_POS || x <= MY_INF_NEG)
#define my_isinf_neg(x) (x <= MY_INF_NEG)
#define my_isinf_pos(x) (x >= MY_INF_POS)
#define my_iszero(x) ((x < MY_EPS && x > -MY_EPS) || x == 0.)
#define my_isfraction(x) ((x < 0 && x > -MY_EPS) || (x > 0 && x < MY_EPS))

int my_abs(int x);
long double my_fabs(double x);
long double my_exp(double x);
long double my_ceil(double x);
long double my_atan(double x);
long double my_cos(double x);
long double my_acos(double x);
long double my_asin(double x);
long double my_floor(double x);
long double my_fmod(double x, double y);
long double my_log(double x);
long double my_pow(double base, double exp);
long double my_sin(double x);
long double my_sqrt(double x);
long double my_tan(double x);

#endif