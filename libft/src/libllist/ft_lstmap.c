/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 17:35:32 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 15:10:37 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Iterates the list ’lst’ and applies the function ’f’ to the content of each
* element. Creates a new list resulting of the successive applications of
* the function ’f’. The ’del’ function is used to delete the content of an
* element if needed.
* #1. The adress of a pointer to an element.
* #2. The adress of the function used to iterate on the list.
* #3. The adress of the function used to delete the content of an element if
* needed.
* Return The new list. NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	const t_list	*lstp;
	void			*f_ret;
	t_list			*lst_ret;
	t_list			*lst_new;

	lst_ret = NULL;
	lst_new = NULL;
	lstp = lst;
	while (lstp)
	{
		f_ret = f(lstp->content);
		if (f_ret)
		{
			lst_new = ft_lstnew(f_ret);
			if (!lst_new)
			{
				ft_lstclear(&lst, del);
				return (NULL);
			}
			ft_lstadd_back(&lst_ret, lst_new);
		}
		lstp = lstp->next;
	}
	return (lst_ret);
}
