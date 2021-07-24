/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 06:40:16 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 14:56:25 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Equivalent ft_putendl_fd(s, 1);
*/
void	ft_putendl(char *s)
{
	ft_putendl_fd(s, STDOUT_FD);
	return ;
}
