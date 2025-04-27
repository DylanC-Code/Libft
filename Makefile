CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
OPTIONS = -c -I. -I./tests/

SRC = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \


OBJ = $(SRC:.c=.o)

SRC_OTHER = ft_min.c \
		ft_islower.c \
		ft_isupper.c \
		ft_isspace.c \
		ft_trimstart.c \
		ft_ischarset.c \
		ft_haschar.c \
		# ./tests/test_utils.c

OBJ_OTHER = $(SRC_OTHER:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(OPTIONS) $(SRC) $(SRC_OTHER)
	@ar rsc $(NAME) $(OBJ) $(OBJ_OTHER)
	@echo "$(NAME) archive generated ✅"

clean:
	@rm -f $(OBJ) $(OBJ_OTHER)
	@echo "File objects were been cleaned 🧼"

fclean: clean
	@rm -f $(NAME)
	@echo "Everything has been cleaned 🧼"

re: fclean all

.PHONY: all clean fclean re
