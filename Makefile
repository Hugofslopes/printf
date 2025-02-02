# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 09:37:48 by hfilipe-          #+#    #+#              #
#    Updated: 2025/01/09 11:20:40 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = ft_pf_atoi.c ft_pf_putchar.c ft_pf_putnbr.c ft_pf_putnbr_hex.c \
ft_pf_putnbr_ui.c ft_pf_putstr.c ft_printf.c handle_dash.c handle_dot.c \
handle_empty_space.c handle_zero.c hash_flag.c put_sign.c ft_strlen.c \
field_size.c ft_pf_putstr_fw.c ft_pf_putchar_fw.c ft_pf_putnbr_hex_fw.c \
ft_pf_putnbr_p_fw.c ft_pf_putnbr_fw.c ft_pf_putnbr_ui_fw.c ft_printf_utils.c \
handle_dot_fw.c ft_pf_putnbr_p.c analize_dot_fw.c count_decimal.c\
go_foward_array.c ft_putnbr_hex_dot.c ft_pf_putnbr_ui_dot.c ft_pf_putnbr_dot.c\
ft_pf_putstr_dot.c ft_pf_putnbr_hash_fw.c pf_bzero.c handle_field.c \
ft_pf_putnbr_hash_hex_fw2.c handle_dash_hash.c ft_pf_putnbr_hash_hex_dash.c \
ft_pf_fw_dot_s.c ft_pf_fw_dot_hex.c ft_pf_fw_dot.c ft_pf_fw_dot_u.c\
ft_pf_putchar_dash.c ft_pf_putstr_dash.c ft_pf_putnbr_p_dash.c \
ft_pf_putnbr_dash.c ft_pf_putnbr_ui_dash.c ft_pf_putnbr_hex_dash.c \
handle_dash_dot.c ft_pf_dash_dot.c ft_pf_dash_dot_s.c ft_pf_dash_dot_u.c \
ft_pf_dash_dot_hex.c ft_pf_putnbr_empty.c handle_dot_hash.c \
ft_putnbr_hex_hash_dot.c ft_putnbr_hex_fw_dot.c put_sign_dot.c put_sign_fw.c \
ft_pf_putnbr_sign_fw.c put_sign_fw_dot.c ft_pf_sign_fw_dot.c \
ft_pf_putnbr_sign_dot.c 
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
EXEC = main
MAIN_SRC = tests_main/main.c 
EXEC2 = main2
MAIN_SRC2 = tests_main/main_P.c tests_main/ft_putstr_fd.c
INCLUDE= tests_main/colors.h

all: $(NAME)
$(NAME): $(OBJ)
	@ar rcs $@ $^	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: all

main: $(EXEC)
	$(CC) -I$(INCLUDE) $(CFLAGS) $(SRC) $(MAIN_SRC) -o $(EXEC) -g

main2: $(EXEC2)
	$(CC) -I$(INCLUDE) $(CFLAGS) $(SRC) $(MAIN_SRC2) -o $(EXEC2) -g

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) $(EXEC) $(EXECTEST) $(EXEC2) 

re: fclean all

