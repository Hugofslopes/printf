/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:01:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 19:05:03 by hfilipe-         ###   ########.fr       */
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
	char	c = '5';
	int		a = c - 48;

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
	puts("\n");
	puts(BG_WHITE BLUE"TEST DECIMAL"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%d", a);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf ("%d", a);
	puts("\n");
	puts(BG_WHITE BLUE"TEST DASH"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%-5d", a);
	puts(RED"|"RESET);
	printf(CYAN"PRINTF- "RESET);
	printf("%-5d", a);
	puts(RED"|"RESET);
	puts (" ");
	puts(BG_WHITE BLUE"TEST SPACE WITH NUMBER"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%05d", a);
	puts(RED"|"RESET);
	printf(CYAN"PRINTF- "RESET);
	printf("%05d", a);
	puts(RED"|"RESET);
	puts (" ");
	puts(BG_WHITE BLUE"TEST DOT WITH STR (5 CHAR)"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%.5s", ola);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%.5s", ola);
	puts ("\n");
	puts(BG_WHITE BLUE"TEST DOT WITH STR (2 CHAR)"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%.2s", ola);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%.2s", ola);
	puts ("\n");
	puts(BG_WHITE BLUE"TEST DOT WITH STR (0 CHAR)"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%.0s", ola);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%.0s", ola);
	puts ("\n");
	puts(BG_WHITE BLUE"TEST PLUS SIGN WITH POSITIVE"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%+d", 1);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%+d", 1);
	puts ("\n");
	puts(BG_WHITE BLUE"TEST PLUS SIGN WITH NEGATIVE"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("%+d", -1);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%+d", -1);
	puts ("\n");
	puts(BG_WHITE BLUE"TEST ONE STRING, ONE INTEGER, ONE HEXA, ONE POINTER, ONE UNSIGNED INT"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	printf("%s %d %x %X %p %u",ola, -1, 0xab, 0xab, ola, u);
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("%s %d %x %X %p %u",ola, -1, 0xab, 0xab, ola, u);
	puts ("\n");
}