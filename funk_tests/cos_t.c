#include "my_main_test.h"

START_TEST(cos_1) {
  long double a = my_cos(0);
  long double b = cos(0);
  ck_assert_ldouble_eq_tol(a, b, 0.000001L);
}
END_TEST

START_TEST(cos_2) {
  long double a = my_cos(-1);
  long double b = cos(-1);
  ck_assert_ldouble_eq_tol(a, b, 0.000001L);
}
END_TEST

START_TEST(cos_3) {
  long double a = my_cos(0.4);
  long double b = cos(0.4);
  ck_assert_ldouble_eq_tol(a, b, 0.000001L);
}
END_TEST

START_TEST(cos_4) {
  long double a = my_cos(10);
  long double b = cos(10);
  ck_assert_ldouble_eq_tol(a, b, 0.000001L);
}
END_TEST

START_TEST(cos_5) {
  long double test_val = 1;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_6) {
  long double test_val = -1;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_7) {
  long double test_val = MY_NAN;
  ck_assert_ldouble_nan(my_cos(test_val));
  ck_assert_ldouble_nan(cos(test_val));
}
END_TEST

START_TEST(cos_8) {
  long double test_val = MY_INF;
  ck_assert_ldouble_nan(my_cos(test_val));
  ck_assert_ldouble_nan(cos(test_val));
}
END_TEST

START_TEST(cos_9) {
  long double test_val = -MY_INF;
  ck_assert_ldouble_nan(my_cos(test_val));
  ck_assert_ldouble_nan(cos(test_val));
}
END_TEST

START_TEST(cos_10) {
  long double test_val = -MY_NAN;
  ck_assert_ldouble_nan(my_cos(test_val));
  ck_assert_ldouble_nan(cos(test_val));
}
END_TEST

START_TEST(cos_11) {
  long double test_val = MY_PI;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_12) {
  long double test_val = -MY_PI;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_13) {
  long double test_val = 0.789789;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_14) {
  long double test_val = -0.789789;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_15) {
  long double test_val = 0;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_16) {
  long double test_val = MY_PI / 5;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_17) {
  long double test_val = -MY_PI / 5;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_18) {
  long double test_val = MY_PI / 2;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_19) {
  long double test_val = -MY_PI / 2;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_20) {
  long double test_val = MY_PI / 6;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_21) {
  long double test_val = -MY_PI / 6;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_22) {
  long double test_val = MY_PI / 2;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_23) {
  long double test_val = -MY_PI / 2;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_24) {
  long double test_val = 2 * MY_PI;
  ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
}
END_TEST

START_TEST(cos_25) {
  for (int i = 0; i < 5; ++i) {
    long double test_val = i * MY_PI;
    ck_assert_ldouble_eq_tol(my_cos(test_val), cos(test_val), 0.000001L);
    long double test_val_m = -i * MY_PI;
    ck_assert_ldouble_eq_tol(my_cos(test_val_m), cos(test_val_m), 0.000001L);
  }
}
END_TEST

Suite *suite_my_cos(void) {
  Suite *s24;
  TCase *tc24;
  s24 = suite_create("my_COS");
  tc24 = tcase_create("case_COS");
  tcase_add_test(tc24, cos_1);
  tcase_add_test(tc24, cos_2);
  tcase_add_test(tc24, cos_3);
  tcase_add_test(tc24, cos_4);
  tcase_add_test(tc24, cos_5);
  tcase_add_test(tc24, cos_6);
  tcase_add_test(tc24, cos_7);
  tcase_add_test(tc24, cos_8);
  tcase_add_test(tc24, cos_9);
  tcase_add_test(tc24, cos_10);
  tcase_add_test(tc24, cos_11);
  tcase_add_test(tc24, cos_12);
  tcase_add_test(tc24, cos_13);
  tcase_add_test(tc24, cos_14);
  tcase_add_test(tc24, cos_15);
  tcase_add_test(tc24, cos_16);
  tcase_add_test(tc24, cos_17);
  tcase_add_test(tc24, cos_18);
  tcase_add_test(tc24, cos_19);
  tcase_add_test(tc24, cos_20);
  tcase_add_test(tc24, cos_21);
  tcase_add_test(tc24, cos_22);
  tcase_add_test(tc24, cos_23);
  tcase_add_test(tc24, cos_24);
  tcase_add_test(tc24, cos_25);
  suite_add_tcase(s24, tc24);
  return s24;
}