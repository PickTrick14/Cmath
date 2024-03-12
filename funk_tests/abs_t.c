#include "my_main_test.h"

START_TEST(abs_1) {
  int a = 2147483647;
  ck_assert_int_eq(abs(a), my_abs(a));
}
END_TEST

START_TEST(abs_2) {
  int a = -2147483648;
  ck_assert_int_eq(abs(a), my_abs(a));
}

START_TEST(abs_3) {
  int a = 0;
  ck_assert_int_eq(abs(a), my_abs(a));
}
END_TEST

Suite *suite_my_abs(void) {
  Suite *s24;
  TCase *tc24;
  s24 = suite_create("my_ABS");
  tc24 = tcase_create("case_ABS");
  tcase_add_test(tc24, abs_1);
  tcase_add_test(tc24, abs_2);
  tcase_add_test(tc24, abs_3);
  suite_add_tcase(s24, tc24);
  return s24;
}
