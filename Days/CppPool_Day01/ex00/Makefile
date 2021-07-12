##
## EPITECH PROJECT, 2021
## Cpp_pool day01 ex00
## File description:
## Makefile
##

NAME	=	z

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

CPPFLAGS=	-I./include/

CFLAGS	=	-std=gnu11 -Wextra -Wall

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
