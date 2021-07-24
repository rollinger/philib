/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:37:48 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 11:57:19 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* The memmove() function copies n bytes from memory area src to memory area
* dest. The memory areas may overlap: copying takes place as though the bytes in
* src are first copied into a temporary array that does not overlap src or dest,
* and the bytes are then copied from the temporary array to dest. The memmove()
* function returns a pointer to dest.
* memcpy if dest has enough space (dest-src >= n)
* otherwise a reverse write [dest <<< src] from position n to 0.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if ((size_t)(dest - src) >= n)
		return (ft_memcpy(dest, src, n));
	while (n--)
		*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	return (dest);
}
