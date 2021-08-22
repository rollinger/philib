# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 17:05:05 by prolling          #+#    #+#              #
#    Updated: 2021/08/22 13:03:21 by prolling         ###   ########.fr        #
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

TEST_SOURCES = ../test/*.c ../test/*.h
TEST_NAME = testsuite

NAME = libft.a
DNAME = libft.so
FLAGS = -Wall -Wextra -Werror
CC = gcc
LIB = ar rc

DEBUGGER = gdb
DEBUG_NAME = debug

$(NAME): fclean
	gcc -c $(FLAGS) $(SOURCES)
	ar rc $(NAME) *.o
	ranlib $(NAME)
	mv $(NAME) ../bin/
	rm -f *.o *.gch

$(DNAME): fclean
	gcc -shared $(SOURCES) -o $(DNAME)
	mv $(DNAME) ../bin/
	rm -f *.o *.gch

testrun: fclean
	gcc $(FLAGS) $(TEST_SOURCES) $(SOURCES) -lcmocka -o $(TEST_NAME)
	./$(TEST_NAME)
	mv $(TEST_NAME) ../bin/

debug: $(NAME)
	gcc $(FLAGS) -g $(TEST_SOURCES) $(SOURCES) -lcmocka -o $(DEBUG_NAME)
	$(DEBUGGER) $(DEBUG_NAME)
	mv $(DEBUG_NAME) ../bin/

all: $(NAME)

lib:
	$(NAME)

dynlib:
	$(DNAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) $(DNAME) $(TEST_NAME) $(DEBUG_NAME)

re : fclean all

.PHONY:	all clean fclean re
