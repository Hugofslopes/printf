CC = gcc
AR = rm -f
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = SRC
OBJ_DIR = OBJ
LIBFT_DIR = libft
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
LIB_NAME = libftprintf.a
all: $(LIB_NAME)
$(LIB_NAME): $(OBJ_FILES)
	@$(MAKE) -C $(LIBFT_DIR) 
	$(AR) $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)/*.o
	@$(MAKE) clean -C $(LIBFT_DIR) 

fclean: clean
	$(RM) $(LIB_NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR) 

re: fclean all