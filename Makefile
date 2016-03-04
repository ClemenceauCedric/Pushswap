##
## Makefile for Pushswap in /home/clemen_j/tek1/Pushswap/CPE_2015_Pushswap
##
## Made by Cédric Clemenceau
## Login   <clemen_j@epitech.net>
##
## Started on  Thu Nov 19 23:19:33 2015 Cédric Clemenceau
## Last update Sun Nov 22 03:02:32 2015 Cédric Clemenceau
##

CC	=	gcc -o $(NAME) -g -Wall -Wextra

RM	=	rm -f

LDFLAGS	=	-L./lib/ -lmy
CFLAGS	=	-I./my/

SRC	=	lib/main.c \
		lib/fct.c \
		lib/my_getnbr.c \
		lib/push_fct.c \
		lib/push_fct2.c

NAME	=	push_swap

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) $(OBJ) $(LDFLAGS)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
