/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 12:13:59 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 14:56:22 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Prints all n variadic strings on a new line
*/
void	ft_puts(int n, ...)
{
	va_list	args;

	va_start(args, n);
	while (n--)
		ft_putendl(va_arg(args, char *));
	va_end(args);
	return ;
}
