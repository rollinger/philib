/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:55:57 by prolling          #+#    #+#             */
/*   Updated: 2021/05/25 09:42:05 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The  strdup() function returns a pointer to a new string which is a duplicate
* of the string s.  Memory for the new string is obtained with malloc(3), and
* can be freed with free(3).
* The strdup() function returns a pointer to a new string which is a duplicate
* of the string s.  Memory for the new string is obtained with malloc(3), and
* can be freed with free(3).
* => better use strlcpy than memcpy.
*/
char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	s_len;

	s_len = ft_strlen(s);
	new = malloc(sizeof(char) * (s_len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, (char *)s, s_len + 1);
	return (new);
}
