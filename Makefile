# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 09:37:48 by hfilipe-          #+#    #+#              #
#    Updated: 2025/05/04 14:06:10 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wextra -Wall -fPIE -I includes

SRC_FILES = ft_pf_atoi.c ft_pf_putchar.c ft_pf_putnbr.c ft_pf_putnbr_hex.c \
ft_pf_putnbr_ui.c ft_pf_putstr.c ft_printf.c handle_dash.c handle_dot.c \
handle_empty_space.c handle_zero.c hash_flag.c put_sign.c ft_strlen.c \
field_size.c ft_pf_putstr_fw.c ft_pf_putchar_fw.c ft_pf_putnbr_hex_fw.c \
ft_pf_putnbr_p_fw.c ft_pf_putnbr_fw.c ft_pf_putnbr_ui_fw.c ft_printf_utils.c \
handle_dot_fw.c ft_pf_putnbr_p.c analize_dot_fw.c count_decimal.c \
go_foward_array.c ft_putnbr_hex_dot.c ft_pf_putnbr_ui_dot.c ft_pf_putnbr_dot.c \
ft_pf_putstr_dot.c ft_pf_putnbr_hash_fw.c pf_bzero.c handle_field.c \
ft_pf_putnbr_hash_hex_fw2.c handle_dash_hash.c ft_pf_putnbr_hash_hex_dash.c \
ft_pf_fw_dot_s.c ft_pf_fw_dot_hex.c ft_pf_fw_dot.c ft_pf_fw_dot_u.c \
ft_pf_putchar_dash.c ft_pf_putstr_dash.c ft_pf_putnbr_p_dash.c \
ft_pf_putnbr_dash.c ft_pf_putnbr_ui_dash.c ft_pf_putnbr_hex_dash.c \
handle_dash_dot.c ft_pf_dash_dot.c ft_pf_dash_dot_s.c ft_pf_dash_dot_u.c \
ft_pf_dash_dot_hex.c ft_pf_putnbr_empty.c handle_dot_hash.c \
ft_putnbr_hex_hash_dot.c ft_putnbr_hex_fw_dot.c put_sign_dot.c put_sign_fw.c \
ft_pf_putnbr_sign_fw.c put_sign_fw_dot.c ft_pf_sign_fw_dot.c \
ft_pf_putnbr_sign_dot.c ft_putstr_fd.c ft_putchar_fd.c
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = includes
NAME = libftprintf.a
EXEC = main
MAIN_SRC = main.c
MAIN_OBJ = $(OBJ_DIR)/main.o
EXEC2 = main2
MAIN_SRC2 = main_P.c
MAIN_OBJ2 = $(OBJ_DIR)/main_P.o
EXECTEST = maint
MAIN_TEST = test_printf.c
MAIN_TEST_OBJ = $(OBJ_DIR)/test_printf.o
SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))
DEPS = $(OBJ:.o=.d)
MAIN_DEPS = $(MAIN_OBJ:.o=.d)
MAIN_DEPS2 = $(MAIN_OBJ2:.o=.d)
MAIN_TEST_DEPS = $(MAIN_TEST_OBJ:.o=.d)

all: $(OBJ_DIR) $(NAME)

bonus: all

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -MMD -c $< -o $@

$(MAIN_OBJ): $(MAIN_SRC) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -MMD -c $< -o $@

$(MAIN_OBJ2): $(MAIN_SRC2) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -MMD -c $< -o $@

$(MAIN_TEST_OBJ): $(MAIN_TEST) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -MMD -c $< -o $@

main: $(MAIN_OBJ) $(NAME)
	$(CC) $(CFLAGS) $(MAIN_OBJ) -o $(EXEC) -g -L. -lftprintf

main2: $(MAIN_OBJ2) $(NAME)
	$(CC) $(CFLAGS) $(MAIN_OBJ2) -o $(EXEC2) -g -L. -lftprintf

-include $(DEPS)
-include $(MAIN_DEPS)
-include $(MAIN_DEPS2)
-include $(MAIN_TEST_DEPS)

clean:
	rm -f $(OBJ) $(DEPS) $(MAIN_OBJ) $(MAIN_OBJ2) $(MAIN_TEST_OBJ)
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME) $(EXEC) $(EXEC2) $(EXECTEST)

re: fclean all