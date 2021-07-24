# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 17:05:05 by prolling          #+#    #+#              #
#    Updated: 2021/07/24 15:11:19 by prolling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libchar = libchar/ft_*.c
libmem = libmem/ft_*.c
libstr = libstr/ft_*.c
libout = libout/ft_*.c
libconv = libconv/ft_*.c
libnbr = libnbr/ft_*.c
libllist = libllist/ft_*.c
sources =
sources_bonus =
sources_own =
headers = libft.h

OBJS		=	$(sources) $(libchar) $(libmem) $(libstr) $(libout) $(libconv) \
	$(libnbr) $(libllist)
OBJS_BONUS	=	$(sources_bonus) #$(sources_bonus:.c=.o)
OBJS_OWN	=	$(sources_own) #$(sources_own:.c=.o)

ifdef WITH_BONUS
	OBJ_SWITCH = $(OBJS) $(OBJS_BONUS)
else
	OBJ_SWITCH = $(OBJS)
endif

NAME = libft.a

FLAGS = -Wall -Wextra -Werror
CC = gcc
LIB = ar rc #su

$(NAME): clean
	gcc -c $(FLAGS) $(OBJ_SWITCH) $(OBJS_OWN)
	ar rc $(NAME) *.o
	ranlib $(NAME)
	mv $(NAME) ../bin/
	rm -f *.o *.gch

all:  bonus

bonus:
	$(MAKE) WITH_BONUS=1 $(NAME)

devtest: $(NAME)
	gcc ../tests/testsuite.c -lft -L../src -o testsuite
	rm -f src/*.o src/*.gch

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all

so: clean
	gcc -shared -o libft.so $(OBJS) $(OBJS_BONUS) $(OBJS_OWN)

.PHONY:	all clean fclean re bonus
