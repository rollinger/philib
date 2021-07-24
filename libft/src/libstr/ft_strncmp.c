/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:11:46 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 14:16:42 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* The  strncmp() function compares the two strings s1 and s2 for only the first
* (at most) n bytes of s1 and s2.
* It returns an integer less than, equal to, or greater than zero if s1 is
* found, respectively, to be less than, to match, or be greater than s2.
* <-1 => s1<s2
*  0 => s1=s2
* >+1 => s1>s2
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;

	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	while (n)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		if (!*c1 || !*c2)
			break ;
		c1++;
		c2++;
		n--;
	}
	return (0);
}
