/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:59:44 by prolling          #+#    #+#             */
/*   Updated: 2021/05/25 08:51:50 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Returns 1 if c int is a unsigned 7-bit char value (ascii char)
* checks whether c is a 7-bit unsigned char value that fits into the ASCII
* character set.
* #define        __isascii(c)        (((c) & ~0x7f) == 0)
* See: See: https://code.woboq.org/userspace/glibc/ctype/ctype.h.html#100 :: 99
* any_int bitwise_and flipped_7bit_zero (1111111) == 0
* See: https://www.tutorialspoint.com/cprogramming/c_bitwise_operators.htm
* bitwise operation, no matter value of c, if and-ed with a flipped 7-bit
* (7xzeros) should be 0 if c is a 7-bit value
*/
int	ft_isascii(int c)
{
	if (((c) & ~0x7f) == 0)
		return (1);
	return (0);
}
