##
## EPITECH PROJECT, 2021
## CppPool Rush3
## File description:
## makefile
##

NAME	=	MyGKrellm

SRC	=	src/main.cpp						\
		src/core/display_help.cpp			\
		src/core/core.cpp					\
		src/get_infos/user_infos.cpp		\
		src/get_infos/date_time_infos.cpp	\
		src/get_infos/system_infos.cpp		\
		src/get_infos/CPUinfos.cpp			\
		src/get_infos/data.cpp				\
		src/get_infos/ram_infos.cpp			\
		src/graphic/begin_s.cpp				\
		src/graphic/display.cpp				\
		src/text/begin_n.cpp

OBJ	=	$(SRC:.cpp=.o)

CPPFLAGS=	-I./include/

CFLAGS	=	-Werror -Wextra -Wall

LDFLAGS	=	-lncurses -lsfml-graphics -lsfml-window -lsfml-system

all	:	$(OBJ)
		g++ $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS) $(LDFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
