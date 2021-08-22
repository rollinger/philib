/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:51:08 by prolling          #+#    #+#             */
/*   Updated: 2021/08/22 22:52:13 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_fib_recurse(int a, int b, int start, int max)
{
	if (start == max)
		return (a + b);
	else
		return (ft_fib_recurse(b, a + b, start + 1, max));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fib_recurse(0, 1, 2, index));
}
