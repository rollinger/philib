/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 15:18:03 by prolling          #+#    #+#             */
/*   Updated: 2021/05/20 11:55:59 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Returns 1 if c is a uppercase alphabetical character
*/
int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
