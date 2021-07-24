/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 20:44:38 by prolling          #+#    #+#             */
/*   Updated: 2021/07/24 15:10:34 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
* Returns the last element of the list.
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return ((void *)0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
