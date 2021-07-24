#include "test.h"

/*
* Entry point for the test program.
*/
int main(void)
{
	const struct CMUnitTest tests[] = {
		cmocka_unit_test(null_test_success),
		cmocka_unit_test(test_ft_bzero),
	};

	printf("::: UNIT TESTS for ___libft___ :::\n");
	return cmocka_run_group_tests(tests, NULL, NULL);
}
