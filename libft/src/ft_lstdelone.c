/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 19:49:06 by prolling          #+#    #+#             */
/*   Updated: 2021/05/21 20:28:40 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Takes as a parameter an element and frees the
* memory of the element’s content using the function
* ’del’ given as a parameter and free the element.
* The memory of ’next’ must not be freed.
* #1. The element to free.
* #2. The address of the function used to delete the
* content.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
	return ;
}
