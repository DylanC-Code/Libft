CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
HEADER = libft.h

SRC = ft_isalpha.c
	\ ft_isdigit.c
	\ ft_isalnum.c
	\ ft_isascii.c

OBJ = ft_isalpha.o
	\ ft_isdigit.o
	\ ft_isalnum.o
	\ ft_isascii.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
