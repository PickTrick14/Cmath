#include "my_main_test.h"

int main() {
  int failed = 0;
  Suite *my_math_tests[] = {
      suite_my_abs(),   suite_my_acos(), suite_my_asin(), suite_my_atan(),
      suite_my_ceil(),  suite_my_cos(),  suite_my_exp(),  suite_my_fabs(),
      my_floor_tests(), my_fmod_tests(), my_log_tests(),  my_pow_tests(),
      my_sin_tests(),   my_sqrt_tests(), my_tan_tests(),  NULL};
  for (int i = 0; my_math_tests[i] != NULL; i++) {
    SRunner *sr = srunner_create(my_math_tests[i]);
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);
    failed += srunner_ntests_failed(sr);
    srunner_free(sr);
  }
  printf("========= FAILED: %d =========\n", failed);
  return failed == 0 ? 0 : 1;
}
