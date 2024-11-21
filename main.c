/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:01:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 18:04:09 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "colors.h"

int	main(void)
{
	char *ola = "asd";
	int X = 0xff;
	unsigned int u = -10;
	unsigned int u2 = 2147483649;

	puts(BG_WHITE BLUE"TEST STRING"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%s",ola);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%s",ola);
	puts("\n");
	puts(BG_WHITE BLUE"TEST STRING WITH TEXT AFTER"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%sola",ola);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%sola",ola);
	puts("\n");
	puts(BG_WHITE BLUE"TEST STRING WITH TEXT BEFORE"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("ola%s",ola);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("ola%s",ola);
	puts("\n");
	puts(BG_WHITE BLUE"TEST POINTER"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%p",ola);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%p",ola);
	puts("\n");
	puts(BG_WHITE BLUE"TEST HEXA L_CASE WITH #"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%#x",X);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%#x",X);
	puts("\n");
	puts(BG_WHITE BLUE"TEST HEXA L_CASE WITHOUT #"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%x",X);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%x",X);
	puts("\n");
	puts(BG_WHITE BLUE"TEST HEXA U_CASE WITHOUT #"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%#X",X);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%#X",X);
	puts("\n");
	puts(BG_WHITE BLUE"TEST HEXA U_CASE WITHOUT #"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%X",X);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%X",X);
	puts("\n");
	puts(BG_WHITE BLUE"TEST NEGATIVE UNSIGNED"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%u",u);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%u",u);
	puts("\n");
	puts(BG_WHITE BLUE"TEST UNSIGNEDRESET"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%u",u2);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%u",u2);
}