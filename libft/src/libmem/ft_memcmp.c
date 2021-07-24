/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 08:56:01 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 11:57:21 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* The memcmp() function compares the first n bytes (each interpreted as
* unsigned char) of the memory areas s1 and s2. The  memcmp() function returns
* an integer less than, equal to, or greater than zero if the first n bytes of
* s1 is found, respectively, to be less than, to match, or be greater than the
* first n bytes of s2.
* For a nonzero return value, the sign is determined by the sign of the between
* difference the first pair of bytes (interpreted as unsigned char) that
* differ in s1 and s2.
* If n is zero, the return value is zero.
* <-1 => s1<s2
*  0 => s1=s2
* >+1 => s1>s2
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;

	c1 = s1;
	c2 = s2;
	while (n)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
		n--;
	}
	return (0);
}
