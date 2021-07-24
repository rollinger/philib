/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:42:10 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 12:27:15 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Returns the length of the string s, not counting the \0 character
* allocating string memory based on strlen must be strlen+1 make space for the
* required null termination byte.
*/
size_t	ft_strlen(const char *s)
{
	size_t	int_len;

	int_len = 0;
	while (s[int_len] != '\0')
		int_len++;
	return (int_len);
}
