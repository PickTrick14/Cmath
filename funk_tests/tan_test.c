#include "my_main_test.h"

START_TEST(test_1) {
  double x = 0;
  ck_assert_double_eq_tol(my_tan(x), tan(x), 1e-6);
}
END_TEST

START_TEST(test_2) {
  double x = MY_PI / 2;
  ck_assert_double_infinite(my_tan(x));
}
END_TEST

START_TEST(test_3) {
  double x = MY_PI;
  ck_assert_double_eq_tol(my_tan(x), tan(x), 1e-6);
}
END_TEST

START_TEST(test_4) {
  double x = 3 * MY_PI / 2;
  ck_assert_double_infinite(my_tan(x));
}
END_TEST

START_TEST(test_5) {
  double x = 2 * MY_PI;
  ck_assert_double_eq_tol(my_tan(x), tan(x), 1e-6);
}
END_TEST

START_TEST(test_6) {
  double x = -0.123;
  ck_assert_double_eq_tol(my_tan(x), tan(x), 1e-6);
}
END_TEST

START_TEST(test_7) {
  double x = -1;
  ck_assert_double_eq_tol(my_tan(x), tan(x), 1e-6);
}
END_TEST

START_TEST(test_8) {
  double x = -MY_PI / 2;
  ck_assert_double_infinite(my_tan(x));
}
END_TEST

START_TEST(test_9) {
  double x = MY_INF_POS;
  ck_assert_double_nan(my_tan(x));
}
END_TEST

START_TEST(test_10) {
  double x = MY_INF_NEG;
  ck_assert_double_nan(my_tan(x));
}
END_TEST

START_TEST(test_11) {
  double x = MY_NAN;
  ck_assert_double_nan(my_tan(x));
}
END_TEST

START_TEST(test_12) {
  double x = -10;
  ck_assert_double_eq_tol(my_tan(x), tan(x), 1e-6);
}
END_TEST

START_TEST(test_13) {
  double x = 10;
  ck_assert_double_eq_tol(my_tan(x), tan(x), 1e-6);
}
END_TEST

START_TEST(test_14) {
  double x = -2 * MY_PI;
  ck_assert_double_eq_tol(my_tan(x), tan(x), 1e-6);
}
END_TEST

START_TEST(test_15) {
  double x = MY_PI / 3;
  ck_assert_double_eq_tol(my_tan(x), tan(x), 1e-6);
}
END_TEST

START_TEST(test_16) {
  double x = -MY_PI / 3;
  ck_assert_double_eq_tol(my_tan(x), -tan(MY_PI / 3), 1e-6);
}
END_TEST

Suite *my_tan_tests(void) {
  Suite *suite = suite_create("my_tan_test:");
  TCase *tcase_core = tcase_create("my_tan");

  tcase_add_test(tcase_core, test_1);
  tcase_add_test(tcase_core, test_2);
  tcase_add_test(tcase_core, test_3);
  tcase_add_test(tcase_core, test_4);
  tcase_add_test(tcase_core, test_5);
  tcase_add_test(tcase_core, test_6);
  tcase_add_test(tcase_core, test_7);
  tcase_add_test(tcase_core, test_8);
  tcase_add_test(tcase_core, test_9);
  tcase_add_test(tcase_core, test_10);
  tcase_add_test(tcase_core, test_11);
  tcase_add_test(tcase_core, test_12);
  tcase_add_test(tcase_core, test_13);
  tcase_add_test(tcase_core, test_14);
  tcase_add_test(tcase_core, test_15);
  tcase_add_test(tcase_core, test_16);

  suite_add_tcase(suite, tcase_core);

  return suite;
}