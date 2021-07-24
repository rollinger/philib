/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:48:12 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 11:57:18 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* The  memcpy() function copies n bytes from memory area src to memory area
* dest. The memory areas must not overlap.  Use memmove(3) if the memory areas
* do overlap. The memcpy() function returns a pointer to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*m;

	if (!dest && !src)
		return ((void *)0);
	m = dest;
	while (n)
	{
		*m = *(unsigned char *)src;
		++m;
		++src;
		--n;
	}
	return (dest);
}
