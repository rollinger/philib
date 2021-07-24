/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 08:47:49 by prolling          #+#    #+#             */
/*   Updated: 2021/05/19 09:01:30 by prolling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
* Outputs the character c to given file descriptor.
* Ref: man putchar
* ExtFunc: ssize_t write (int __fd, const void *__buf, size_t __n)
* (https://code.woboq.org/userspace/glibc/posix/unistd.h.html :: 366)
* BUG: does not check if fd is valid.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
