/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:20:05 by prolling          #+#    #+#             */
/*   Updated: 2021/05/25 09:54:08 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strrchr() function returns a pointer to the last occurrence of the
* character c in the string s.
* RETURN: The  strchr()  and strrchr() functions return a pointer to the matched
* character or NULL if the character is not found. The terminating null byte is
* considered part of the string, so that if c is specified as '\0', these
* functions return a pointer to the terminator.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*current;

	current = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			current = ((char *)s);
		++s;
	}
	if (c == '\0')
		return ((char *)s);
	return (current);
}
