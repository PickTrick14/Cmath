#include "my_main_test.h"

START_TEST(exp_1) {
  double a = 0;
  ck_assert_ldouble_eq_tol(exp(a), my_exp(a), 0.000001L);
}
END_TEST

START_TEST(exp_2) {
  double a = 20;
  ck_assert_ldouble_eq_tol(exp(a), my_exp(a), 0.000001L);
}
END_TEST

START_TEST(exp_3) {
  double a = -20;
  ck_assert_ldouble_eq_tol(exp(a), my_exp(a), 0.000001L);
}
END_TEST

START_TEST(exp_4) {
  double a = 0.000123;
  ck_assert_ldouble_eq_tol(exp(a), my_exp(a), 0.000001L);
}
END_TEST

START_TEST(exp_5) {
  double a = -0.120001;
  ck_assert_ldouble_eq_tol(exp(a), my_exp(a), 0.000001L);
}
END_TEST

START_TEST(exp_6) {
  double a = 123123123;
  ck_assert_ldouble_infinite(exp(a));
  ck_assert_ldouble_infinite(my_exp(a));
}
END_TEST

START_TEST(exp_7) {
  double a = MY_NAN;
  ck_assert_ldouble_nan(exp(a));
  ck_assert_ldouble_nan(my_exp(a));
}
END_TEST

START_TEST(exp_8) {
  double a = MY_INF;
  ck_assert_ldouble_infinite(exp(a));
  ck_assert_ldouble_infinite(my_exp(a));
}
END_TEST

Suite *suite_my_exp(void) {
  Suite *s24;
  TCase *tc24;
  s24 = suite_create("my_EXP");
  tc24 = tcase_create("case_EXP");
  tcase_add_test(tc24, exp_1);
  tcase_add_test(tc24, exp_2);
  tcase_add_test(tc24, exp_3);
  tcase_add_test(tc24, exp_4);
  tcase_add_test(tc24, exp_5);
  tcase_add_test(tc24, exp_6);
  tcase_add_test(tc24, exp_7);
  tcase_add_test(tc24, exp_8);
  suite_add_tcase(s24, tc24);
  return s24;
}