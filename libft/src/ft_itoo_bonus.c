/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoo_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:49:24 by prolling          #+#    #+#             */
/*   Updated: 2021/07/13 10:02:43 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Returns a long long number as a octal string. Returns string.
*/
char	*ft_itoo(long long int nbr)
{
	char	*result;

	result = (char *)ft_calloc(sizeof(char), NTOA_MAX_CHAR);
	ft_ntoa_base(nbr, result, OCTALBASE);
	return (result);
}

/*
* Returns a unsiged long long int as a hexadecimal string. Returns string.
*/
char	*ft_uitoo(unsigned long long int nbr)
{
	char	*result;

	result = (char *)ft_calloc(sizeof(char), NTOA_MAX_CHAR);
	ft_untoa_base(nbr, result, OCTALBASE);
	return (result);
}
