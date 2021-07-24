/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:16:01 by prolling          #+#    #+#             */
/*   Updated: 2021/05/26 13:09:38 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Strlcpy copies the src string into the dest buffer writing max size bytes and
* ensures a null termination of the string.
* size must be therefor called with strlen() + 1
*/
size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	buf_len;
	size_t	src_len;

	if (!dest || !src)
		return (0);
	src_len = ft_strlen(src);
	if (size)
	{
		if (src_len >= size)
			buf_len = size - 1;
		else
			buf_len = src_len;
		ft_memcpy(dest, src, buf_len);
		dest[buf_len] = '\0';
	}
	return (src_len);
}
