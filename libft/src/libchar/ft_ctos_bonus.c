/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctos_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:10:51 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 15:02:43 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_ctos(int c)
{
	char	*s;

	s = (char *)ft_calloc(sizeof(char), 2);
	if (s)
		s[0] = c;
	return (s);
}
