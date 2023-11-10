SRC		=	workshop.c

OBJ		=	$(SRC:.c=.o)

NAME	=	display

C_FLAGS =	-l csfml-graphics

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) -g $(C_FLAGS)

clean:
		rm -f *.c~
		rm -f $(OBJ)
		rm -f vgcore.*

fclean:	clean
		rm -f $(NAME)

re: fclean all clean

.PHONY = all clean fclean re lib