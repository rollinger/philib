/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ndigits_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:37:24 by prolling          #+#    #+#             */
/*   Updated: 2021/07/13 12:39:12 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Returns the number of digits of <n>. The parameter is of long long int.
*/
size_t	ft_ndigits(long long int n)
{
	size_t	x;

	x = 0;
	if (n < 0)
	{
		n *= -1;
		++x;
	}
	while (n >= 10)
	{
		n /= 10;
		++x;
	}
	return (++x);
}
