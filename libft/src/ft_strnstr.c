/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 21:50:59 by prolling          #+#    #+#             */
/*   Updated: 2021/05/26 16:27:39 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* man strstr - but str-n-str not found
* The strstr() function locates the first occurrence of the string s2
* (excluding the terminating null character) in string s1 and returns a pointer
* to the located string, or a null pointer if the string is not found. If s2
* points to a string with zero length (that is, the string ""), the function
* returns s1.
*
* The strnstr() function locates the first occurrence of the null-terminated
* string s2 in the string s1, where not more than n characters are searched.
* Characters that appear after a ‘\0’ character are not searched
if (!s1)
	return ((char *)(s1 + 1));

*/
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len_s2;

	len_s2 = ft_strlen(s2);
	if (len_s2 == 0)
		return ((char *)s1);
	while (n)
	{
		if (ft_strncmp(s1, s2, len_s2) == 0)
			return ((char *)s1);
		if (n <= len_s2)
			break ;
		++s1,
		--n;
	}
	return (0);
}
