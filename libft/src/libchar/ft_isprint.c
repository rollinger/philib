/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:19:41 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 12:12:34 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Returns 1 if c int is in the printable ascii range
*/
int	ft_isprint(int c)
{
	if ((c >= ' ' && c <= '~'))
		return (1);
	return (0);
}
