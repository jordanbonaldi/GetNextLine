##
## Makefile for Makefile in /home/Neferett/Makefile
## 
## Made by Bonaldi Jordan
## Login   <Neferett@epitech.net>
## 
## Started on  Fri Oct 14 12:57:09 2016 Bonaldi Jordan
## Last update Tue Jan  3 15:40:00 2017 Bonaldi Jordan
##

SRC	=	main.c	\
		../get_next_line.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	test

CC	=	gcc


CFLAGS  += -Wextra -Wall -Werror

CFLAGS  += -ansi -pedantic -I../

RM	=	rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur

.PHONY: all clean fclean re
