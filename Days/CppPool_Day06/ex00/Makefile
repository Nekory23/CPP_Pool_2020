##
## EPITECH PROJECT, 2021
## CppPool Day06 ex00
## File description:
## Makefile
##

NAME	=	my_cat

SRC	=	main.cpp

OBJ	=	$(SRC:.cpp=.o)

CPPFLAGS=	-I./include/

CFLAGS	=	-Werror -Wextra -Wall

all	:	$(OBJ)
		g++ $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
