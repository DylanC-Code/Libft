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


OBJ = $(SRC:.c=.o)

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
	$(TEST_PATH)ft_isascii.test.c \
	$(TEST_PATH)ft_isprint.test.c \
	$(TEST_PATH)ft_strlen.test.c \
	$(TEST_PATH)ft_memset.test.c \
	$(TEST_PATH)ft_bzero.test.c

TEST_OBJ = $(patsubst ./tests/%.c,tests/%.o,$(TEST_SRC))

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(OPTIONS) $(HEADER) $(SRC) $(SRC_OTHER)
	@ar rsc $(NAME) $(OBJ) $(OBJ_OTHER)
	@echo "$(NAME) archive generated ✅"

test: fclean all $(TEST_OBJ)
	@$(CC) $(CFLAGS) $(TEST_OBJ) $(NAME) $(TEST_OPTIONS)
	@clear
	@./$(TEST_NAME)

tests/%.o: ./tests/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(OBJ_OTHER) $(TEST_OBJ)
	@echo "File objects were been cleaned 🧼"

fclean: clean
	@rm -f $(NAME) $(TEST_NAME)
	@echo "Everything has been cleaned 🧼"

re: fclean all

.PHONY: all clean fclean re
