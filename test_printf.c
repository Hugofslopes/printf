/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:54:38 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/22 19:14:25 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "colors.h"

int main()
{
	unsigned int u = -10;
	puts(BG_WHITE BLUE"FIELD WITH UNSIGNED"RESET);
	ft_printf(MAGENTA"FT_PRINTF- \t"RESET);
	ft_printf("\t%d", ft_printf("%12u", u));		
	puts(" ");
	printf(CYAN"PRINTF- \t"RESET);
	printf("\t%d", printf("%12u", u));	
}