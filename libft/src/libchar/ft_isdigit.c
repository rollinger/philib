/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:52:15 by prolling          #+#    #+#             */
/*   Updated: 2021/07/25 23:21:03 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Returns 1 if c is a digit character
'5' => ASCII int (unsigned int / 1 byte / 0..255)
ft_isdigit('5') => 124 (0..255)
ft_isdigit(-2653765) ??? return (0)
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
