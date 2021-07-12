##
## EPITECH PROJECT, 2021
## CppPool Day03 
## File description:
## makefile
##

NAME	=	libstring.a

SRC	=	init_str.c	\
		assign_str.c	\
		append_str.c	\
		at_str.c	\
		clear_str.c	\
		size_str.c	\
		compare_str.c	\
		copy_str.c	\
		c_str.c		\
		empty_str.c	\
		find_str.c	\
		insert_str.c	\
		to_int_str.c

OBJ     =       $(SRC:.c=.o)

CPPFLAGS=       -I./include/

CFLAGS  =       -std=gnu11 -Wextra -Wall

all	:	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
