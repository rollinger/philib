/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:10:38 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 14:39:16 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* count blocks of words separated by c(s) returns n of blks found
*/
static size_t	ft_countwordblocks(char const *s, char c)
{
	size_t	blks;
	size_t	word;

	blks = 0;
	word = 0;
	while (*s != '\0')
	{
		if (*s == c)
			word = 0;
		else if ((*s != c) && (word == 0))
		{
			word = 1;
			++blks;
		}
		++s;
	}
	return (blks);
}

/*
* Helper function: walking through s and calloc'ing and memcpy'ing the blocks
* into the **arr. Due to calloc the \0 is there and we can use just memcpy.
* [1,2]; 1=>"blck1\0" 2=>"blck2\0"
*/
static char	**ft_split_words(char **arr, const char *s, const char c)
{
	int	pos;
	int	blk_len;

	pos = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			blk_len = ft_strclen(s, c);
			arr[pos] = (char *)ft_calloc(blk_len + 1, sizeof(char));
			if (!arr[pos])
				return (NULL);
			ft_memcpy(arr[pos], s, (size_t)blk_len);
			s += blk_len;
			pos++;
		}
	}
	return (arr);
}

/*
* Allocates (with malloc(3)) and returns an array of strings obtained by
* splitting ’s’ using the character ’c’ as a delimiter. The array must be
* ended by a NULL pointer. Returns The array of new strings resulting from the
* split. NULL if the allocation fails.
* Allowed functions: malloc, free
* arr = [start,t1,t2,...,0]
*/
char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr = (char **)ft_calloc(ft_countwordblocks(s, c) + 1, sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr = ft_split_words(arr, s, c);
	return (arr);
}
