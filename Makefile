CC = cc 
CFLAGS = -Wall -Werror -Wextra -I./includes
SRCS = display_error.c stack_init.c main.c swap.c push.c rotate.c revrotate.c freestack.c lst_len.c   sort3.c sort5.c mini.c not_sorted.c  max.c to_index.c radix.c
LIBFT_DIR = libft
LIBFT = libft.a
SRC_DIR = src
OBJ_DIR = build
SRCSDIR=$(addprefix src/,$(SRCS))
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o,$(SRCSDIR))
NAME = push_swap
all: $(NAME)

$(NAME):$(OBJ)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT) .
	$(CC) $(OBJ) $(CFLAGS) -L. -lft -o $(NAME)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	@make -C $(LIBFT_DIR) fclean
	rm -f $(OBJ) $(LIBFT)
fclean: clean
	rm -f $(NAME) $(LIBFT)
re: fclean all

.PHONY: all clean fclean re