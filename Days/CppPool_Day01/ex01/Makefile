##
## EPITECH PROJECT, 2021
## Cpp_pool day01 ex00
## File description:
## Makefile
##

NAME	=	menger

SRC	=	main.c		\
		menger.c

OBJ	=	$(SRC:.c=.o)

CPPFLAGS=	-I./

CFLAGS	=	-std=gnu11 -Wextra -Wall

LDFLAGS	=	-lm

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS) $(LDFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
