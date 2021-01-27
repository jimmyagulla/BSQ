##
## EPITECH PROJECT, 2020
## MakeFile
## File description:
## Compil Program
##

CC	=	gcc

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

LIB =	lib/my/libmy.a

CFLAGS	=	-Wall -Werror -Wextra -L./lib/ -lmy -I./include --warn-no-unused-parameter

all: $(NAME)

$(LIB):	
	make -C lib/my

$(NAME): $(LIB)	$(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean  :
	rm -f $(OBJ)
	rm -f *.o
	rm -f lib/my/*.o
	rm -f lib/my/*~
	rm -f lib/my/*#
	rm -f *~
	rm -f *#
	rm -f lib/libmy.a
	rm -f lib/my/libmy.a
	rm -f libmy.a

fclean : clean
	rm -f $(NAME)

re:	fclean all
