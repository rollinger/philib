/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:06:37 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 11:37:59 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Returns the character int value decresed by the difference between upper and
* lower character (32).
*/
int	ft_toupper(int c)
{
	if (ft_islower(c) == 1)
		return (c - LOWUPDIFF);
	return (c);
}
