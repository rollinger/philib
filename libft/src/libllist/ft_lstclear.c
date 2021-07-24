/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 19:45:28 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 15:10:17 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Deletes and frees the given element and every
* successor of that element, using the function ’del’
* and free(3).
* Finally, the pointer to the list must be set to
* NULL.
* Parameters
* #1. The adress of a pointer to an element.
* #2. The adress of the function used to delete the
* content of the element.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt;

	if (lst)
	{
		while (*lst)
		{
			nxt = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = nxt;
		}
	}
	return ;
}
