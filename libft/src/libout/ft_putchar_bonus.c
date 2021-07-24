/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 06:26:17 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 14:56:25 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Equivalent to ft_putchar_fd(c, 1)
*/
void	ft_putchar(char c)
{
	ft_putchar_fd(c, STDOUT_FD);
	return ;
}
