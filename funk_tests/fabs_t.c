#include "my_main_test.h"

START_TEST(fabs_test) {
  ck_assert_ldouble_nan(fabs(NAN));
  ck_assert_ldouble_nan(my_fabs(MY_NAN));
  ck_assert_ldouble_eq(fabs(-7.0), my_fabs(-7.0));
  ck_assert_ldouble_eq(fabs(-93.1), my_fabs(-93.1));
  ck_assert_ldouble_eq(fabs(123.02), my_fabs(123.02));
  ck_assert_ldouble_eq(fabs(MY_INF), my_fabs(MY_INF));
  ck_assert_ldouble_eq(fabs(-MY_INF), my_fabs(-MY_INF));
  ck_assert_ldouble_eq(fabs(20099.0), my_fabs(20099.0));
  ck_assert_ldouble_eq(fabs(-10009.555), my_fabs(-10009.555));
  ck_assert_ldouble_eq(fabs(-0.10009), my_fabs(-0.10009));
  ck_assert_ldouble_eq(fabs(-1e23), my_fabs(-1e23));
}
END_TEST

Suite *suite_my_fabs(void) {
  Suite *s24;
  TCase *tc24;
  s24 = suite_create("my_FABS");
  tc24 = tcase_create("case_FABS");
  tcase_add_test(tc24, fabs_test);
  suite_add_tcase(s24, tc24);
  return s24;
}