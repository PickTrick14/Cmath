#include "my_main_test.h"

START_TEST(test_1) {
  double x = 123;
  double y = 123;
  ck_assert_double_eq_tol(my_fmod(x, y), fmod(x, y), 1e-6);
}

START_TEST(test_2) {
  double x = 123;
  double y = 0.1;
  ck_assert_double_eq_tol(my_fmod(x, y), fmod(x, y), 1e-6);
}

START_TEST(test_3) {
  double x = -123;
  double y = -0.1;
  ck_assert_double_eq_tol(my_fmod(x, y), fmod(x, y), 1e-6);
}

START_TEST(test_4) {
  double x = MY_INF_POS;
  double y = 12.12;
  ck_assert_double_nan(my_fmod(x, y));
}

START_TEST(test_5) {
  double x = 123;
  double y = 12.12;
  ck_assert_double_eq_tol(my_fmod(x, y), fmod(x, y), 1e-6);
}

START_TEST(test_6) {
  double x = 123;
  double y = MY_INF_POS;
  ck_assert_double_eq_tol(my_fmod(x, y), fmod(x, y), 1e-6);
}

START_TEST(test_7) {
  double x = MY_NAN;
  double y = 2345678;
  ck_assert_double_nan(my_fmod(x, y));
}

START_TEST(test_8) {
  double x = MY_INF_POS;
  double y = MY_INF_NEG;
  ck_assert_double_nan(my_fmod(x, y));
}

START_TEST(test_9) {
  double x = -0.1002;
  double y = 0.23;
  ck_assert_double_eq_tol(my_fmod(x, y), fmod(x, y), 1e-6);
}

START_TEST(test_10) {
  double x = 12;
  double y = -3;
  ck_assert_double_eq_tol(my_fmod(x, y), fmod(x, y), 1e-6);
}

START_TEST(test_11) {
  double x = 0.34534;
  double y = 0.3235232;
  ck_assert_double_eq_tol(my_fmod(x, y), fmod(x, y), 1e-6);
}

START_TEST(test_12) {
  double x = 3;
  double y = -3;
  ck_assert_double_eq_tol(my_fmod(x, y), fmod(x, y), 1e-6);
}

START_TEST(test_13) {
  double x = 3;
  double y = 0;
  ck_assert_double_nan(my_fmod(x, y));
}

Suite *my_fmod_tests(void) {
  Suite *suite = suite_create("my_fmod_test:");
  TCase *tcase_core = tcase_create("my_fmod");

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