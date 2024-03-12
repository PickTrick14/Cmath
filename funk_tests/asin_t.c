#include "my_main_test.h"

START_TEST(asin_1) {
  for (float i = -1; i <= 1; i += 0.1) {
    long double a = my_asin(i);
    long double b = asin(i);
    ck_assert_ldouble_eq_tol(a, b, 1e-7);
  }
  ck_assert_ldouble_eq_tol(asin(1), my_asin(1), 0.000001L);
}
END_TEST

START_TEST(asin_2) {
  for (float k = -1; k <= 1; k += 0.0772) {
    long double a = my_asin(k);
    long double b = asin(k);
    ck_assert_ldouble_eq_tol(a, b, 0.000001L);
  }
}
END_TEST

START_TEST(asin_3) {
  long double a = my_asin(0);
  long double b = asin(0);
  ck_assert_ldouble_eq_tol(a, b, 0.000001L);
}
END_TEST

START_TEST(asin_4) {
  long double a = my_asin(-1);
  long double b = asin(-1);
  ck_assert_ldouble_eq_tol(a, b, 0.000001L);
}
END_TEST

START_TEST(asin_5) {
  long double a = my_asin(0.4);
  long double b = asin(0.4);
  ck_assert_ldouble_eq_tol(a, b, 0.000001L);
}
END_TEST

START_TEST(asin_6) {
  long double test_val = MY_NAN;
  ck_assert_ldouble_nan(my_asin(test_val));
  ck_assert_ldouble_nan(asin(test_val));
}
END_TEST

START_TEST(asin_7) {
  long double test_val = MY_INF;
  ck_assert_ldouble_nan(my_asin(test_val));
  ck_assert_ldouble_nan(asin(test_val));
}
END_TEST

START_TEST(asin_8) {
  long double test_val = -MY_INF;
  ck_assert_ldouble_nan(my_asin(test_val));
  ck_assert_ldouble_nan(asin(test_val));
}
END_TEST

START_TEST(asin_9) {
  long double test_val = -MY_NAN;
  ck_assert_ldouble_nan(my_asin(test_val));
  ck_assert_ldouble_nan(asin(test_val));
}
END_TEST

START_TEST(asin_10) {
  long double test_val = MY_PI / 4;
  ck_assert_ldouble_eq_tol(my_asin(test_val), asin(test_val), 0.000001L);
}
END_TEST

START_TEST(asin_11) {
  long double test_val = -MY_PI / 4;
  ck_assert_ldouble_eq_tol(my_asin(test_val), asin(test_val), 0.000001L);
}
END_TEST

Suite *suite_my_asin(void) {
  Suite *s24;
  TCase *tc24;
  s24 = suite_create("my_ASIN");
  tc24 = tcase_create("case_ASIN");
  tcase_add_test(tc24, asin_1);
  tcase_add_test(tc24, asin_2);
  tcase_add_test(tc24, asin_3);
  tcase_add_test(tc24, asin_4);
  tcase_add_test(tc24, asin_5);
  tcase_add_test(tc24, asin_6);
  tcase_add_test(tc24, asin_7);
  tcase_add_test(tc24, asin_8);
  tcase_add_test(tc24, asin_9);
  tcase_add_test(tc24, asin_10);
  tcase_add_test(tc24, asin_11);
  suite_add_tcase(s24, tc24);
  return s24;
}