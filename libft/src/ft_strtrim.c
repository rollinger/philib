/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:44:26 by prolling          #+#    #+#             */
/*   Updated: 2021/05/25 09:58:46 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
* specified in ’set’ removed from the beginning and the end of the string.
* #1. The string to be trimmed.
* #2. The reference set of characters to trim.
* Returns: The trimmed string. NULL if the allocation fails.
* [m1,m2,ca,cb,m2,cd,ce,m3] => [ca,cb,m2,cd,ce]
* determines true start and end by strchr s[i] in the sep_buf from both ends of
* of the string. having alloc mem, it calls strlcpy from start to end +1 and
* returns the result pointer.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*s2;
	size_t	start;
	size_t	end;

	s2 = (char *)s1;
	result = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			++start;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			--end;
		result = (char *)malloc(sizeof(char) * (end - start + 1));
		if (result)
			ft_strlcpy(result, &s2[start], (end - start + 1));
	}
	return (result);
}
