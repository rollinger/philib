/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwr_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:03:19 by prolling          #+#    #+#             */
/*   Updated: 2021/08/22 22:49:22 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_iterative_power(int nb, int power)
{
	int	int_p;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	int_p = nb;
	while (power > 1)
	{
		int_p = int_p * nb;
		power--;
	}
	return (int_p);
}

int	ft_recursive_power(int nb, int power)
{
	int	int_p;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	int_p = nb;
	if (power > 1)
		int_p = nb * ft_recursive_power(nb, --power);
	return (int_p);
}
