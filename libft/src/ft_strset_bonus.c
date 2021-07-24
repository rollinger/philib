/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:01:01 by prolling          #+#    #+#             */
/*   Updated: 2021/07/22 16:02:18 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strset() function returns a pointer to the first occurrence of any char
* from the string s2 at the position of occurrence in the string s1.
* RETURN: like the strchr()  and strrchr() functions return a pointer to
* the matched character or NULL if the character is not found.
*/
char	*ft_strset(const char *s1, const char *s2)
{
	while (*s1 != '\0')
	{
		if (ft_strchr(s2, *s1))
			return ((char *)s1);
		++s1;
	}
	return (NULL);
}
