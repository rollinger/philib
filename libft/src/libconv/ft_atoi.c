/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:25:16 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 15:01:25 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_sign(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

/*
* The atoi() function converts the initial portion of the string pointed to by
* nptr to int. Returns the converted value.
*/
int	ft_atoi(const char *str)
{
	int	int_sign;
	int	int_return;

	int_sign = 1;
	int_return = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		int_sign = ft_sign(*str++);
	while (ft_isdigit(*str))
		int_return = int_return * 10 + (*str++ - '0');
	return (int_return * int_sign);
}
