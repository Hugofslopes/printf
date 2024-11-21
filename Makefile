# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 09:37:48 by hfilipe-          #+#    #+#              #
#    Updated: 2024/11/21 18:04:11 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = ft_pf_atoi.c ft_pf_putchar.c ft_pf_putnbr.c ft_pf_putnbr_hex.c \
ft_pf_putnbr_ui.c ft_pf_putstr.c ft_printf.c handle_dash.c handle_dot.c \
handle_empty_space.c handle_zero.c hash_flag.c put_sign.c
OBJ = $(SRC:.c=.o)
NAME = printft.a
EXEC = main
MAIN_SRC = main.c
all: $(NAME)
$(NAME): $(OBJ)
	@ar rcs $@ $^	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

main: $(EXEC)
	$(CC) $(CFLAGS) $(SRC) $(MAIN_SRC) -o $(EXEC) -g

clean:
	@rm -f $(OBJ) $(BONUS_OBJ) $(MAIN_OBJ)

fclean: clean
	@rm -f $(NAME) $(EXEC)

re: fclean all

