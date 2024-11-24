/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:54:38 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/22 21:04:20 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "colors.h"

int main()
{
	char *ola = "asd";
	puts(BG_WHITE BLUE"TEST DOT WITH STR (5 CHAR)"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%.5s", ola));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%.5s", ola));
	puts ("\n");
}