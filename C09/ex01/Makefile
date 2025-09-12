CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = $(SRC_DIR)

SRC = $(SRC_DIR)/ft_putchar.c \
      $(SRC_DIR)/ft_swap.c \
      $(SRC_DIR)/ft_putstr.c \
      $(SRC_DIR)/ft_strlen.c \
      $(SRC_DIR)/ft_strcmp.c

OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
