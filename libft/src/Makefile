# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 17:05:05 by prolling          #+#    #+#              #
#    Updated: 2021/07/24 15:17:12 by prolling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libchar = libchar/ft_*.c
libmem = libmem/ft_*.c
libstr = libstr/ft_*.c
libout = libout/ft_*.c
libconv = libconv/ft_*.c
libnbr = libnbr/ft_*.c
libllist = libllist/ft_*.c
header = libft.h

SOURCES	=	$(header) $(libchar) $(libmem) $(libstr) $(libout) $(libconv) $(libnbr) \
	$(libllist)

NAME = libft.a
DNAME = libft.so
FLAGS = -Wall -Wextra -Werror
CC = gcc
LIB = ar rc

$(NAME): clean
	gcc -c $(FLAGS) $(SOURCES)
	ar rc $(NAME) *.o
	ranlib $(NAME)
	mv $(NAME) ../bin/
	rm -f *.o *.gch

$(DNAME): clean
	gcc -shared $(SOURCES) -o $(DNAME)
	mv $(DNAME) ../bin/
	rm -f *.o *.gch

all: $(NAME)

lib: 
	$(NAME)

dynlib:
	$(DNAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY:	all clean fclean re
