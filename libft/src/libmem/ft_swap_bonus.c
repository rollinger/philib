/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 07:49:06 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 12:00:26 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Swaps the two integer values with each other in place. Returns nothing.
*/
void	ft_swapi(int *a, int *b)
{
	int	buf;

	buf = *b;
	*b = *a;
	*a = buf;
	return ;
}

/*
* Swaps the two character values with each other in place. Returns nothing.
*/
void	ft_swapc(char *a, char *b)
{
	char	buf;

	buf = *b;
	*b = *a;
	*a = buf;
	return ;
}

void	ft_swapb(void *a, void *b)
{
	void	buf;

	buf = *b;
	*b = *a;
	*a = buf;
	return ;
}
