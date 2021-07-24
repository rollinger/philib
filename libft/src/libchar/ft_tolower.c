/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:53:55 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 11:37:55 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Returns the character int value increased by the difference between upper and
* lower character (32).
*/
int	ft_tolower(int c)
{
	if (ft_isupper(c) == 1)
		return (c + LOWUPDIFF);
	return (c);
}
