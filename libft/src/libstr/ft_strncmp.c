/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:11:46 by prolling          #+#    #+#             */
/*   Updated: 2021/08/22 13:12:07 by prolling         ###   ########.fr       */
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
	while (n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (!*s1 || !*s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	return (0);
}
