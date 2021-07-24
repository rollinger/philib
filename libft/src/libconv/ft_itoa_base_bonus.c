/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:57:10 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 15:01:27 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Takes a unsigned long long number and returns it as a string in the base
* specified as a string. nbr can be passed as a smaller int
*/
char	*ft_untoa_base(unsigned long long int nbr, char *result, char *base)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (base_len < 2 || !base)
		return (NULL);
	if (nbr >= (unsigned long long int)base_len)
	{
		result = ft_untoa_base(nbr / base_len, result, base);
		result = ft_untoa_base(nbr % base_len, result, base);
	}
	else
		*result++ = base[nbr];
	return (result);
}

/*
* Takes a long long number and returns it as a string in the base specified as a
* string. nbr can be passed as a smaller int.
* Different than untoa_base it accepts negative numbers prepending a '-' sign.
*/
char	*ft_ntoa_base(long long int nbr, char *result, char *base)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (base_len < 2 || !base)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		*result++ = '-';
	}
	result = ft_untoa_base((unsigned long long int)nbr, result, base);
	return (result);
}
