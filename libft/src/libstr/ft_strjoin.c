/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:28:09 by prolling          #+#    #+#             */
/*   Updated: 2021/08/27 15:37:07 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Allocates (with malloc(3)) and returns a new string, which is the result of
* the concatenation of ’s1’ and ’s2’.
* Returns The new string. NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joined = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!joined)
		return (NULL);
	ft_strlcpy(joined, (char *)s1, len_s1 + 1);
	ft_strlcat(joined, (char *)s2, (len_s1 + len_s2 + 1));
	return (joined);
}

/*
* Safe join makes sure no memory leaks appear with using strjoin
* frees str1 and str2 after the join, i.e. the input get freed. 
* Returns <rstr>
*/
char	*ft_strfjoin(char *str1, char *str2)
{
	char	*rstr;

	if (!str1 && str2)
		rstr = ft_strjoin("", str2);
	else if (str1 && !str2)
		rstr = ft_strjoin((const char *)str1, "");
	else if (str1 && str2)
		rstr = ft_strjoin((const char *)str1, str2);
	if (str1)
		free(str1);
	if (str2)
		free(str2);
	return (rstr);
}