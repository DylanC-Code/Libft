CC = cc
CFLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I libft.h

NAME = libft.a
HEADER = libft.h

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
		ft_tolower.c


OBJ = ft_isalpha.o \
		ft_isdigit.o \
		ft_isalnum.o \
		ft_isascii.o \
		ft_isprint.o \
		ft_strlen.o \
		ft_memset.o \
		ft_bzero.o \
		ft_memcpy.o \
		ft_memmove.o \
		ft_strlcpy.o \
		ft_strlcat.o \
		ft_toupper.o \
		ft_tolower.o

SRC_OTHER = ft_min.c \
		ft_islower.c \
		ft_isupper.c

OBJ_OTHER = ft_min.o \
		ft_islower.o \
		ft_isupper.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC) $(SRC_OTHER)
	ar rc $(NAME) $(OBJ) $(OBJ_OTHER)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_OTHER)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
