/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 23:19:19 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 11:46:16 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* The calloc() function allocates memory for an array of nmemb elements of size
* bytes each and returns a pointer to the allocated memory. The memory is set
* to zero. If nmemb or size is 0, then calloc() returns either NULL, or a
* unique pointer value that can later be successfully passed to free().
* size_t: unsigned int (kind of guaranteed to hold array indexes)
* BUG: if nmemb*size > size_t then should return error.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	bytes;

	bytes = nmemb * size;
	arr = malloc(bytes);
	if (bytes && arr)
		ft_bzero(arr, bytes);
	return (arr);
}

/*
* Reallocates new memory on the heap and copies the old bytes.
* Return the new memory block
* NOT TESTED
*/
void	*ft_recalloc(void *old, size_t oldsize, size_t newsize)
{
	void	*new;

	new = (void *)ft_calloc(newsize, 1);
	if (new)
		new = ft_memcpy(new, (const void *)old, oldsize);
	return (new);
}
