CC = cc
CFLAGS = -Wall -Wextra -Werror

PATH_LIB = ../libft.a

NAME = test_libft
HEADER = test_libft.h
OPTIONS = -I $(HEADER) -o $(NAME)

SRC = \
	test_libft.c \
	test_ft_isalpha.c \
	test_ft_isdigit.c \
	test_ft_isalnum.c \
	test_ft_isascii.c \
	test_ft_isprint.c \
	test_ft_strlen.c \
	test_ft_memset.c \
	test_ft_bzero.c \
	test_ft_memcpy.c \
	test_ft_memmove.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(PATH_LIB) $(OPTIONS)
	@./$(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) *.h.gch *.h.pch
	@echo "Tests file objects were been cleaned 🧼"

fclean: clean
	@rm -f $(NAME)
	@echo "Everything has been cleaned 🧼"

re: fclean all

.PHONY: all clean fclean re
