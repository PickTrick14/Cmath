#ifndef SRC_TESTS_TEST_MAIN_H_
#define SRC_TESTS_TEST_MAIN_H_

#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../my_math.h"

Suite *suite_my_abs(void);
Suite *suite_my_acos(void);
Suite *suite_my_asin(void);
Suite *suite_my_atan(void);
Suite *suite_my_ceil(void);
Suite *suite_my_cos(void);
Suite *suite_my_exp(void);
Suite *suite_my_fabs(void);
Suite *my_floor_tests(void);
Suite *my_fmod_tests(void);
Suite *my_log_tests(void);
Suite *my_pow_tests(void);
Suite *my_sin_tests(void);
Suite *my_sqrt_tests(void);
Suite *my_tan_tests(void);

#endif
