#include "my_main_test.h"

START_TEST(acos_test_1) {
  for (float k = -1; k <= 1; k += 0.1) {
    long double a = my_acos(k);
    long double b = acos(k);
    ck_assert_ldouble_eq_tol(a, b, 1e-7);
  }
}
END_TEST

START_TEST(acos_test_2) {
  for (float k = -1; k <= 1; k += 0.0305) {
    long double a = my_acos(k);
    long double b = acos(k);
    ck_assert_ldouble_eq_tol(a, b, 0.000001L);
  }
}
END_TEST

START_TEST(acos_test_3) {
  long double test_val = 1;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_4) {
  long double test_val = -1;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_5) {
  long double test_val = MY_NAN;
  ck_assert_ldouble_nan(my_acos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(acos_test_6) {
  long double test_val = MY_INF;
  ck_assert_ldouble_nan(my_cos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(acos_test_7) {
  long double test_val = -MY_INF;
  ck_assert_ldouble_nan(my_acos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(acos_test_8) {
  long double test_val = -MY_NAN;
  ck_assert_ldouble_nan(my_acos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(acos_test_9) {
  long double test_val = MY_PI;
  ck_assert_ldouble_nan(my_acos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(acos_test_10) {
  long double test_val = -MY_PI;
  ck_assert_ldouble_nan(my_acos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(acos_test_11) {
  long double test_val = 0.789789;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_12) {
  long double test_val = -0.789789;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_13) {
  long double test_val = 0;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_14) {
  long double test_val = MY_PI / 5;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_15) {
  long double test_val = -MY_PI / 5;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_16) {
  long double test_val = MY_PI / 9;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_17) {
  long double test_val = -MY_PI / 9;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_18) {
  long double test_val = MY_PI / 6;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_19) {
  long double test_val = -MY_PI / 6;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_20) {
  long double test_val = MY_PI / 21;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_21) {
  long double test_val = -MY_PI / 21;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_22) {
  long double test_val = MY_PI / 99;
  ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
}
END_TEST

START_TEST(acos_test_23) {
  for (int i = 0; i < 5; ++i) {
    long double test_val = i * 0.01 * MY_PI;
    ck_assert_ldouble_eq_tol(my_acos(test_val), acos(test_val), 0.000001L);
    long double test_val_m = -i * 0.01 * MY_PI;
    ck_assert_ldouble_eq_tol(my_acos(test_val_m), acos(test_val_m), 0.000001L);
  }
}
END_TEST

Suite *suite_my_acos(void) {
  Suite *s24;
  TCase *tc24;
  s24 = suite_create("my_ACOS");
  tc24 = tcase_create("case_ACOS");
  tcase_add_test(tc24, acos_test_1);
  tcase_add_test(tc24, acos_test_2);
  tcase_add_test(tc24, acos_test_3);
  tcase_add_test(tc24, acos_test_4);
  tcase_add_test(tc24, acos_test_5);
  tcase_add_test(tc24, acos_test_6);
  tcase_add_test(tc24, acos_test_7);
  tcase_add_test(tc24, acos_test_8);
  tcase_add_test(tc24, acos_test_9);
  tcase_add_test(tc24, acos_test_10);
  tcase_add_test(tc24, acos_test_11);
  tcase_add_test(tc24, acos_test_12);
  tcase_add_test(tc24, acos_test_13);
  tcase_add_test(tc24, acos_test_14);
  tcase_add_test(tc24, acos_test_15);
  tcase_add_test(tc24, acos_test_16);
  tcase_add_test(tc24, acos_test_17);
  tcase_add_test(tc24, acos_test_18);
  tcase_add_test(tc24, acos_test_19);
  tcase_add_test(tc24, acos_test_20);
  tcase_add_test(tc24, acos_test_21);
  tcase_add_test(tc24, acos_test_22);
  tcase_add_test(tc24, acos_test_23);

  suite_add_tcase(s24, tc24);
  return s24;
}