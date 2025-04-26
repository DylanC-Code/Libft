CC = cc
CFLAGS = -Wall -Wextra -Werror

LIB_PATH = ../libft.a

NAME = test_libft
OPTIONS = -I. -o $(NAME)

SRC = \
	test_utils.c \
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
	test_ft_memmove.c \
	test_ft_strlcpy.c \
	test_ft_strlcat.c \
	test_ft_toupper.c \
	test_ft_tolower.c \
	test_ft_strchr.c \
	test_ft_strrchr.c \
	test_ft_strncmp.c \
	test_ft_memchr.c \
	test_ft_memcmp.c \
	test_ft_strnstr.c \
	test_ft_atoi.c \
	test_ft_calloc.c \
	test_ft_strdup.c \


OBJ = $(SRC:.c=.o)

all: fclean $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIB_PATH) $(OPTIONS)
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
