/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:11:57 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 11:57:21 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* The  memchr()  function  scans  the  initial n bytes of the memory area
* pointed to by s for the first instance of c.  Both c and the bytes of the
* memory area pointed to by s are interpreted as unsigned char.
* The memchr() and memrchr() functions return a pointer to the matching byte
* or NULL if the character does not occur in the given memory area.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*m;

	m = (void *)s;
	while (n)
	{
		if (*(unsigned char *)m == (unsigned char)c)
			return (m);
		++m;
		--n;
	}
	return (0);
}
