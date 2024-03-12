#include "my_main_test.h"

START_TEST(test_1) {
  double x = 0;
  ck_assert_double_infinite(my_log(x));
}
END_TEST

START_TEST(test_2) {
  double x = 1;
  ck_assert_double_eq_tol(my_log(x), log(x), 1e-6);
}
END_TEST

START_TEST(test_3) {
  double x = 0.5;
  ck_assert_double_eq_tol(my_log(x), log(x), 1e-6);
}
END_TEST

START_TEST(test_4) {
  double x = MY_E;
  ck_assert_double_eq_tol(my_log(x), log(x), 1e-6);
}
END_TEST

START_TEST(test_5) {
  double x = MY_PI;
  ck_assert_double_eq_tol(my_log(x), log(x), 1e-6);
}
END_TEST

START_TEST(test_6) {
  double x = -10;
  ck_assert_double_nan(my_log(x));
}
END_TEST

START_TEST(test_7) {
  double x = MY_INF_NEG;
  ck_assert_double_nan(my_log(x));
}

START_TEST(test_8) {
  double x = MY_INF_POS;
  ck_assert_double_infinite(my_log(x));
}
END_TEST

START_TEST(test_9) {
  double x = MY_NAN;
  ck_assert_double_nan(my_log(x));
}
END_TEST

START_TEST(test_10) {
  double x = 12345678987;
  ck_assert_double_eq_tol(my_log(x), log(x), 1e-6);
}
END_TEST

START_TEST(test_11) {
  double x = -12345678987;
  ck_assert_double_nan(my_log(x));
}
END_TEST

START_TEST(test_12) {
  double x = 0.12321321;
  ck_assert_double_eq_tol(my_log(x), log(x), 1e-6);
}
END_TEST

START_TEST(test_13) {
  double x = 123213.123213453;
  ck_assert_double_eq_tol(my_log(x), log(x), 1e-6);
}
END_TEST

Suite *my_log_tests(void) {
  Suite *suite = suite_create("my_log_tests:");

  TCase *tcase_core = tcase_create("my_log");

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

  suite_add_tcase(suite, tcase_core);

  return suite;
}
