/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divmod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:38:06 by prolling          #+#    #+#             */
/*   Updated: 2021/08/22 22:39:33 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_divmod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	return ;
}

void	ft_inline_divmod(int *a, int *b)
{
	int	int_mod;

	int_mod = *a % *b;
	*a = *a / *b;
	*b = int_mod;
	return ;
}
