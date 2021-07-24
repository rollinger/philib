/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:49:24 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 15:01:42 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Returns a long long int as a hexadecimal string. Returns string.
*/
char	*ft_itox(long long int nbr)
{
	char	*result;

	result = (char *)ft_calloc(sizeof(char), NTOA_MAX_CHAR);
	ft_ntoa_base(nbr, result, HEXBASE);
	return (result);
}

/*
* Returns a unsiged long long int as a hexadecimal string. Returns string.
*/
char	*ft_uitox(unsigned long long int nbr)
{
	char	*result;

	result = (char *)ft_calloc(sizeof(char), NTOA_MAX_CHAR);
	ft_untoa_base(nbr, result, HEXBASE);
	return (result);
}
