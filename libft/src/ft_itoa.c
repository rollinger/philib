/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:17:28 by prolling          #+#    #+#             */
/*   Updated: 2021/07/13 12:37:42 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Returns a signed long long int as a decimal string. Handles negative numbers.
* Returns a ptr to the allocated string.
*/
char	*ft_itoa(long long int nbr)
{
	char	*result;

	result = (char *)ft_calloc(sizeof(char), NTOA_MAX_CHAR);
	ft_ntoa_base(nbr, result, DECIMALBASE);
	return (result);
}

/*
* Returns a unsiged long long int as a decimal string. Returns a ptr to the
* allocated string.
*/
char	*ft_uitoa(unsigned long long int nbr)
{
	char	*result;

	result = (char *)ft_calloc(sizeof(char), NTOA_MAX_CHAR);
	ft_untoa_base(nbr, result, DECIMALBASE);
	return (result);
}
