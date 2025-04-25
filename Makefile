CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
HEADER = libft.h $(TEST_PATH)test_utils.h
OPTIONS = -c -I

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
		ft_strdup.c


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
		ft_tolower.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_strncmp.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_strnstr.o \
		ft_atoi.o \
		ft_calloc.o \
		ft_strdup.o

SRC_OTHER = ft_min.c \
		ft_islower.c \
		ft_isupper.c \
		ft_isspace.c \
		ft_trimstart.c \
		$(TEST_PATH)test_utils.c

OBJ_OTHER = ft_min.o \
		ft_islower.o \
		ft_isupper.o \
		ft_isspace.o \
		ft_trimstart.o \
		test_utils.o

# Test

TEST_PATH = ./tests/
TEST_NAME = libft_tests
# TEST_HEADER = $(TEST_PATH)libft.test.h $(TEST_PATH)test_utils.h
TEST_HEADER = $(TEST_PATH)libft.test.h
TEST_OPTIONS = -I $(TEST_HEADER) -o $(TEST_NAME)

TEST_SRC = \
	$(TEST_PATH)libft.test.c \
	$(TEST_PATH)ft_isalpha.test.c \
	$(TEST_PATH)ft_isdigit.test.c \
	$(TEST_PATH)ft_isalnum.test.c \
	$(TEST_PATH)ft_isascii.test.c

TEST_OBJ = \
	libft.test.o \
	ft_isalpha.test.o \
	ft_isdigit.test.o \
	ft_isalnum.test.o \
	ft_isascii.test.o

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(OPTIONS) $(HEADER) $(SRC) $(SRC_OTHER)
	@ar rsc $(NAME) $(OBJ) $(OBJ_OTHER)
	@echo "$(NAME) archive generated ✅"

test: fclean all $(TEST_OBJ)
	@$(CC) $(CFLAGS) $(TEST_OBJ) $(NAME) $(TEST_OPTIONS)
	@clear
	@./$(TEST_NAME)

$(TEST_OBJ): $(TEST_SRC)
	@$(CC) $(CFLAGS) -c $(TEST_SRC)

clean:
	@rm -f $(OBJ) $(OBJ_OTHER) $(TEST_OBJ)
	@echo "File objects were been cleaned 🧼"

fclean: clean
	@rm -f $(NAME) $(TEST_NAME)
	@echo "Everything has been cleaned 🧼"

re: fclean all

.PHONY: all clean fclean re
