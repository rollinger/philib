/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_root.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:55:22 by prolling          #+#    #+#             */
/*   Updated: 2021/08/22 22:55:42 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_sqrt(int nb)
{
	int	int_i;
	int	int_ret;

	int_ret = 0;
	int_i = 1;
	while (int_i <= 47000)
	{
		if ((int_i * int_i) == nb)
			return (int_i);
		int_i++;
	}
	return (int_ret);
}
