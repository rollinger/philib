#include "test.h"

/* A test case that does nothing and succeeds. */
void null_test_success(void **state)
{
	(void) state; /* unused */
	return ;
}

/* ft_bzero Test Case */
void test_ft_bzero(void **state)
{
	void	*m1 = (void *)malloc(10);
	void	*m2 = (void *)malloc(10);
	ft_memset(m1, 'X', 10);
	ft_memset(m1, 0, 5);
	ft_bzero(m2, 5);
	assert_memory_equal (m1, m2, 5);
	assert_memory_not_equal (m1, m2, 10);
	ft_memset(m2 + 5, 'X', 5);
	assert_memory_equal (m1, m2, 10);
	ft_bzero(m1, 10);
	ft_bzero(m2, 10);
	assert_memory_equal (m1, m2, 10);
	(void) state; /* unused */
	return ;
}
