/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:19:29 by prolling          #+#    #+#             */
/*   Updated: 2021/06/09 07:07:26 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strchr() function returns a pointer to the first occurrence of the
* character c in the string s.
* RETURN: The  strchr()  and strrchr() functions return a pointer to the matched
* character or NULL if the character is not found. The terminating null byte is
* considered part of the string, so that if c is specified as '\0', these
* functions return a pointer to the terminator.
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
