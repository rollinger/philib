/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:47:29 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 11:52:37 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* The  bzero() function erases the data in the n bytes of the memory starting
* at the location pointed to by s, by writing zeros for n bytes at location s
* if n is > 0.
* Returns void.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*m;

	if (!n)
		return ;
	m = s;
	while (--n)
		*(m++) = '\0';
	*m = '\0';
	return ;
}
