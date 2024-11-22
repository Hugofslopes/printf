# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 09:37:48 by hfilipe-          #+#    #+#              #
#    Updated: 2024/11/22 18:49:01 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = ft_pf_atoi.c ft_pf_putchar.c ft_pf_putnbr.c ft_pf_putnbr_hex.c \
ft_pf_putnbr_ui.c ft_pf_putstr.c ft_printf.c handle_dash.c handle_dot.c \
handle_empty_space.c handle_zero.c hash_flag.c put_sign.c ft_strlen.c \
field_size.c ft_pf_putstr_fw.c ft_pf_putchar_fw.c ft_pf_putnbr_hex_fw.c \
ft_pf_putnbr_p_fw.c ft_pf_putnbr_fw.c ft_pf_putnbr_ui_fw.c ft_printf_utils.c \
handle_dot_fw.c ft_pf_putnbr_p.c \
ft_putstr_fd.c ft_putchar_fd.c 
OBJ = $(SRC:.c=.o)
NAME = printft.a
EXEC = main
MAIN_SRC = main.c
EXEC2 = main2
MAIN_SRC2 = main_P.c
EXECTEST = maint
MAIN_TEST = test_printf.c
all: $(NAME)
$(NAME): $(OBJ)
	@ar rcs $@ $^	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

main: $(EXEC)
	$(CC) $(CFLAGS) $(SRC) $(MAIN_SRC) -o $(EXEC) -g

main2: $(EXEC2)
	$(CC) $(CFLAGS) $(SRC) $(MAIN_SRC2) -o $(EXEC2) -g

maint: $(EXECTEST)
	$(CC) $(CFLAGS) $(SRC) $(MAIN_TEST) -o $(EXECTEST) -g

clean:
	@rm -f $(OBJ) $(BONUS_OBJ) $(MAIN_OBJ)

fclean: clean
	@rm -f $(NAME) $(EXEC) $(EXECTEST) $(EXEC2) 

re: fclean all

