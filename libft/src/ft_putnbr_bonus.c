/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 06:40:20 by prolling          #+#    #+#             */
/*   Updated: 2021/05/28 06:44:54 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Equivalent with void	ft_putnbr_fd(n, 1);
*/
void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, STDOUT_FD);
	return ;
}
