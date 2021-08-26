/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 10:15:40 by prolling          #+#    #+#             */
/*   Updated: 2021/08/26 10:16:40 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Returns the absolute value of a long long int
*/
long long int  ft_abs(long long int nbr)
{
	if (nbr < 0)
		return (nbr *-1);
	return (nbr);
}
