#include "my_main_test.h"

START_TEST(atan_1) {
  long double a = my_atan(0);
  long double b = atan(0);
  ck_assert_ldouble_eq_tol(a, b, 0.000001L);
}
END_TEST

START_TEST(atan_2) {
  long double a = my_atan(-1);
  long double b = atan(-1);
  ck_assert_ldouble_eq_tol(a, b, 0.000001L);
}
END_TEST

START_TEST(atan_3) {
  long double a = my_atan(0.4);
  long double b = atan(0.4);
  ck_assert_ldouble_eq_tol(a, b, 0.000001L);
}
END_TEST

START_TEST(atan_4) {
  long double test_val = 1;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_5) {
  long double test_val = -1;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_6) {
  long double test_val = MY_NAN;
  ck_assert_ldouble_nan(my_atan(test_val));
  ck_assert_ldouble_nan(atan(test_val));
}
END_TEST

START_TEST(atan_7) {
  long double test_val = MY_INF;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_8) {
  long double test_val = -MY_INF;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_9) {
  long double test_val = -MY_NAN;
  ck_assert_ldouble_nan(my_atan(test_val));
  ck_assert_ldouble_nan(atan(test_val));
}
END_TEST

START_TEST(atan_10) {
  long double test_val = MY_PI;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_11) {
  long double test_val = -MY_PI;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_12) {
  long double test_val = 0.789789;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_13) {
  long double test_val = -0.789789;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_14) {
  long double test_val = 0;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_15) {
  long double test_val = MY_PI / 5;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_16) {
  long double test_val = -MY_PI / 5;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_17) {
  long double test_val = MY_PI / 2;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_18) {
  long double test_val = -MY_PI / 2;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_19) {
  long double test_val = MY_PI / 6;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_20) {
  long double test_val = -MY_PI / 6;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_21) {
  long double test_val = MY_PI / 2;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_22) {
  long double test_val = -MY_PI / 2;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

START_TEST(atan_23) {
  long double test_val = 2 * MY_PI;
  ck_assert_ldouble_eq_tol(my_atan(test_val), atan(test_val), 0.000001L);
}
END_TEST

Suite *suite_my_atan(void) {
  Suite *s24;
  TCase *tc24;
  s24 = suite_create("my_ATAN");
  tc24 = tcase_create("case_ATAN");
  tcase_add_test(tc24, atan_1);
  tcase_add_test(tc24, atan_2);
  tcase_add_test(tc24, atan_3);
  tcase_add_test(tc24, atan_4);
  tcase_add_test(tc24, atan_5);
  tcase_add_test(tc24, atan_6);
  tcase_add_test(tc24, atan_7);
  tcase_add_test(tc24, atan_8);
  tcase_add_test(tc24, atan_9);
  tcase_add_test(tc24, atan_10);
  tcase_add_test(tc24, atan_11);
  tcase_add_test(tc24, atan_12);
  tcase_add_test(tc24, atan_13);
  tcase_add_test(tc24, atan_14);
  tcase_add_test(tc24, atan_15);
  tcase_add_test(tc24, atan_16);
  tcase_add_test(tc24, atan_17);
  tcase_add_test(tc24, atan_18);
  tcase_add_test(tc24, atan_19);
  tcase_add_test(tc24, atan_20);
  tcase_add_test(tc24, atan_21);
  tcase_add_test(tc24, atan_22);
  tcase_add_test(tc24, atan_23);

  suite_add_tcase(s24, tc24);
  return s24;
}
