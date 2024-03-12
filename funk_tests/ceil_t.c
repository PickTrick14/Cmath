#include "my_main_test.h"

START_TEST(ceil_1) {
  double a = 12345678912345678;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_2) {
  double a = -12345678912345678;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_3) {
  double a = 1.23456789;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_4) {
  double a = -1.23456789;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_5) {
  double a = 1.7976931348623158e+308;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_6) {
  double a = -1.7976931348623158e+308;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_7) {
  double a = 0;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_8) {
  double a = -3.3;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_9) {
  double a = MY_INF;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_10) {
  double a = -MY_INF;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_11) {
  double a = -0;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_12) {
  double a = -0.0000000000001;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_13) {
  double a = 0.0000000000001;
  ck_assert_ldouble_eq(ceil(a), my_ceil(a));
}
END_TEST

START_TEST(ceil_14) { ck_assert_ldouble_nan(my_ceil(NAN)); }
END_TEST

Suite *suite_my_ceil(void) {
  Suite *s24;
  TCase *tc24;
  s24 = suite_create("my_CEIL");
  tc24 = tcase_create("case_CEIL");
  tcase_add_test(tc24, ceil_1);
  tcase_add_test(tc24, ceil_2);
  tcase_add_test(tc24, ceil_3);
  tcase_add_test(tc24, ceil_4);
  tcase_add_test(tc24, ceil_5);
  tcase_add_test(tc24, ceil_6);
  tcase_add_test(tc24, ceil_7);
  tcase_add_test(tc24, ceil_8);
  tcase_add_test(tc24, ceil_9);
  tcase_add_test(tc24, ceil_10);
  tcase_add_test(tc24, ceil_11);
  tcase_add_test(tc24, ceil_12);
  tcase_add_test(tc24, ceil_13);
  tcase_add_test(tc24, ceil_14);
  suite_add_tcase(s24, tc24);
  return s24;
}