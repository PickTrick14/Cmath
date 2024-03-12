#include "my_main_test.h"

START_TEST(test_1) {
  double x = 0.123;
  double y = 0.123;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_2) {
  double x = 0.123;
  double y = -0.123;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_3) {
  double x = -0.123;
  double y = 1.123;
  ck_assert_double_nan(my_pow(x, y));
}
END_TEST

START_TEST(test_4) {
  double x = -0.123;
  double y = -0.123;
  ck_assert_double_nan(my_pow(x, y));
}
END_TEST

START_TEST(test_5) {
  double x = 0.123;
  double y = 0;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_6) {
  double x = 0.123;
  double y = -0;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_7) {
  double x = -0.123;
  double y = 0;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_8) {
  double x = -0.123;
  double y = 0;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_9) {
  double x = 0;
  double y = 0;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_10) {
  double x = MY_INF_POS;
  double y = 0;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_11) {
  double x = MY_INF_POS;
  double y = MY_INF_POS;
  ck_assert_double_infinite(my_pow(x, y));
}
END_TEST

START_TEST(test_12) {
  double x = MY_INF_POS;
  double y = MY_INF_NEG;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_13) {
  double x = MY_INF_POS;
  double y = MY_NAN;
  ck_assert_double_nan(my_pow(x, y));
}
END_TEST

START_TEST(test_14) {
  double x = MY_INF_POS;
  double y = 123;
  ck_assert_double_infinite(my_pow(x, y));
}
END_TEST

START_TEST(test_15) {
  double x = MY_INF_POS;
  double y = -123;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_16) {
  double x = MY_INF_POS;
  double y = 0.123;
  ck_assert_double_infinite(my_pow(x, y));
}
END_TEST

START_TEST(test_17) {
  double x = MY_INF_POS;
  double y = -0.123;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_18) {
  double x = MY_INF_NEG;
  double y = 0;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_19) {
  double x = MY_INF_NEG;
  double y = MY_INF_POS;
  ck_assert_double_infinite(my_pow(x, y));
}
END_TEST

START_TEST(test_20) {
  double x = MY_INF_NEG;
  double y = MY_INF_NEG;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_21) {
  double x = MY_INF_NEG;
  double y = MY_NAN;
  ck_assert_double_nan(my_pow(x, y));
}
END_TEST

START_TEST(test_22) {
  double x = MY_INF_NEG;
  double y = 123;
  ck_assert_double_infinite(my_pow(x, y));
}
END_TEST

START_TEST(test_23) {
  double x = MY_INF_NEG;
  double y = -123;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_24) {
  double x = MY_INF_NEG;
  double y = 0.123;
  ck_assert_double_infinite(my_pow(x, y));
}
END_TEST

START_TEST(test_25) {
  double x = MY_INF_NEG;
  double y = -0.123;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_26) {
  double x = 0;
  double y = -0.123;
  ck_assert_double_infinite(my_pow(x, y));
}
END_TEST

START_TEST(test_27) {
  double x = 0;
  double y = 0.123;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_28) {
  double x = 0;
  double y = MY_INF_POS;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_29) {
  double x = 0;
  double y = MY_INF_NEG;
  ck_assert_double_infinite(my_pow(x, y));
}
END_TEST

START_TEST(test_30) {
  double x = 0;
  double y = MY_NAN;
  ck_assert_double_nan(my_pow(x, y));
}
END_TEST

START_TEST(test_31) {
  double x = 0;
  double y = 123;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_32) {
  double x = 0;
  double y = -123;
  ck_assert_double_infinite(my_pow(x, y));
}
END_TEST

START_TEST(test_33) {
  double x = 12;
  double y = 0.123;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_34) {
  double x = 12;
  double y = -0.123;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_35) {
  double x = 2;
  double y = 20;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_36) {
  double x = 2;
  double y = -20;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_37) {
  double x = -2;
  double y = 20;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_38) {
  double x = -2;
  double y = -20;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_39) {
  double x = -2;
  double y = 0.12;
  ck_assert_double_nan(my_pow(x, y));
}
END_TEST

START_TEST(test_40) {
  double x = -2;
  double y = -0.12;
  ck_assert_double_nan(my_pow(x, y));
}
END_TEST

START_TEST(test_41) {
  double x = -2;
  double y = 20;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_42) {
  double x = -10;
  double y = -10;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

START_TEST(test_43) {
  double x = -1;
  double y = MY_INF_POS;
  ck_assert_double_eq_tol(my_pow(x, y), pow(x, y), 1e-6);
}
END_TEST

Suite *my_pow_tests(void) {
  Suite *suite = suite_create("my_pow_tests:");

  TCase *tcase_core = tcase_create("my_pow");

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
  tcase_add_test(tcase_core, test_17);
  tcase_add_test(tcase_core, test_18);
  tcase_add_test(tcase_core, test_19);
  tcase_add_test(tcase_core, test_20);
  tcase_add_test(tcase_core, test_21);
  tcase_add_test(tcase_core, test_22);
  tcase_add_test(tcase_core, test_23);
  tcase_add_test(tcase_core, test_24);
  tcase_add_test(tcase_core, test_25);
  tcase_add_test(tcase_core, test_26);
  tcase_add_test(tcase_core, test_27);
  tcase_add_test(tcase_core, test_28);
  tcase_add_test(tcase_core, test_29);
  tcase_add_test(tcase_core, test_30);
  tcase_add_test(tcase_core, test_31);
  tcase_add_test(tcase_core, test_32);
  tcase_add_test(tcase_core, test_33);
  tcase_add_test(tcase_core, test_34);
  tcase_add_test(tcase_core, test_35);
  tcase_add_test(tcase_core, test_36);
  tcase_add_test(tcase_core, test_37);
  tcase_add_test(tcase_core, test_38);
  tcase_add_test(tcase_core, test_39);
  tcase_add_test(tcase_core, test_40);
  tcase_add_test(tcase_core, test_41);
  tcase_add_test(tcase_core, test_42);
  tcase_add_test(tcase_core, test_43);

  suite_add_tcase(suite, tcase_core);

  return suite;
}
