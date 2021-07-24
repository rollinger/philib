/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:06:01 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 14:17:07 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* The strlcat() function appends at most (dstsize-strlen(dst)-1) characters of
* src to dst (dstsize being the size of the string buffer dst). If the string
* pointed to by dst contains a null-terminated string that fits into dstsize
* bytes when strlcat() is called, the string pointed to by dst will be a
* null-terminated string that fits in dstsize bytes (including the terminating
* null character) when it completes, and the initial character of src will
* override the null character at the end of dst. If the string pointed to by
* dst is longer than dstsize bytes when strlcat() is called, the string pointed
* to by dst will not be changed.
* The function returns min{dstsize,strlen(dst)}+ strlen(src)
*/
static int	min(int a, int b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	dest += dest_len;
	if (size >= dest_len)
		ft_strlcpy(dest, src, size - dest_len);
	return (min(size, dest_len) + src_len);
}
