/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:27:05 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 11:57:20 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* The memccpy() function copies no more than n bytes from memory area src to
* memory area dest, stopping when the character c is found. If the memory areas
* overlap, the results are undefined.
* The memccpy() function returns a pointer to the next character in dest after
* c, or NULL if c was not found in the first n characters of src.
*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*m;

	m = dest;
	while (n)
	{
		*m = *(unsigned char *)src;
		if (*m == (unsigned char)c)
			return (++m);
		++m;
		++src;
		--n;
	}
	return (NULL);
}
