/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 06:32:07 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 14:56:21 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Equivalent to ft_putstr_fd(s, 1);
*/
void	ft_putstr(char *s)
{
	ft_putstr_fd(s, STDOUT_FD);
	return ;
}
