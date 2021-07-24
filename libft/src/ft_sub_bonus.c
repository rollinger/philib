/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 12:13:59 by prolling          #+#    #+#             */
/*   Updated: 2021/07/09 13:07:26 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Subtract a variable number of integers up. returns an integer.
*/
int	ft_sub(int n, ...)
{
	va_list	args;
	int		result;

	result = 0;
	va_start(args, n);
	while (n--)
		result -= va_arg(args, int);
	va_end(args);
	return (result);
}
