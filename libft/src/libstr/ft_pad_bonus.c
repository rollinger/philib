/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pad_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:51:41 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 14:58:24 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* ft_lpad and ft_rpad pad the <str> with <c> for a total of <size>bytes. If the
* size <= strlen(str) nothing happens. The function returns a ptr to the new
* allocated str.
*/

/**
char *ft_pad_fragment()
*/
char	*ft_seqc(size_t n, int c)
{
	char	*seq;
	char	*m;

	if (!n || !c)
		return (NULL);
	seq = (char *)ft_calloc(sizeof(char), n + 1);
	if (!seq)
		return (NULL);
	m = seq;
	while (n--)
		*m++ = (unsigned char)c;
	return (seq);
}

/***/
char	*ft_lpad(char *str, size_t size, int c)
{
	char	*padding;

	padding = ft_seqc(size - ft_strlen(str), c);
	if (padding)
		return (ft_strjoin(padding, str));
	return (NULL);
}

/***/
char	*ft_rpad(char *str, size_t size, int c)
{
	char	*padding;

	padding = ft_seqc(size - ft_strlen(str), c);
	if (padding)
		return (ft_strjoin(str, padding));
	return (NULL);
}
