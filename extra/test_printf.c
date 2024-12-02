/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:54:38 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/02 16:25:58 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include "colors.h"
#include <stdio.h>
#include <limits.h>

void test ( char *a, unsigned int c);

int main()
{
	
// 	ft_printf("%d", ft_printf("'%#10.5x'", 255));
// 	puts (" ");
// 	printf("%d", printf("'%#10.5x'", 255));
// 	puts ("\n");

// 	ft_printf("%d", ft_printf("'%#10.1x'", 255));
// 	puts (" ");
// 	printf("%d", printf("'%#10.1x'", 255));
// 	puts ("\n");

// 	ft_printf("%d", ft_printf("'%#10.x'", 255));
// 	puts (" ");
// 	printf("%d", printf("'%#10.x'", 255));
// 	puts ("\n");

// 	ft_printf("%d", ft_printf("'%#10.0x'", 255));
// 	puts (" ");
// 	printf("%d", printf("'%#10.0x'", 255));
// 	puts ("\n");

// 	ft_printf("%d", ft_printf("'%#10.5x'", 0));
// 	puts (" ");
// 	printf("%d", printf("'%#10.5x'", 0));
// 	puts ("\n");

// 	ft_printf("%d", ft_printf("'%#0.0x'", 255));
// 	puts (" ");
// 	printf("%d", printf("'%#0.0x'", 255));
// 	puts ("\n");

// 	ft_printf("%d", ft_printf("'%#0.10x'", 255));
// 	puts (" ");
// 	printf("%d", printf("'%#0.10x'", 255));
// 	puts ("\n");

// 	ft_printf("%d", ft_printf("'%#0.0x'", 0));
// 	puts (" ");
// 	printf("%d", printf("'%#0.0x'", 0));
// 	puts ("\n");

// 	ft_printf("%d", ft_printf("'%#1.0x'", 0));
// 	puts (" ");
// 	printf("%d", printf("'%#1.0x'", 0));
// 	puts ("\n");

// 	ft_printf("%d", ft_printf("'%#0.1x'", 0));
// 	puts (" ");
// 	printf("%d", printf("'%#0.1x'", 0));
// 	puts ("\n");



// 	ft_printf("%d", ft_printf("'%+.d'", -1));
// 	puts (" ");
// 	printf("%d", printf("'%+.d'", -1));
// 	puts ("\n");

// ft_printf("%d", ft_printf("'%+.2d'", -2));
// 	puts (" ");
// 	printf("%d", printf("'%+.2d'", -2));

// ft_printf("%d", ft_printf("'%+2.2d'", -2));
// puts (" ");
// printf("%d", printf("'%+2.2d'", -2));
// puts ("\n");

// ft_printf("%d", ft_printf("'%+2.2d'", 2));
// puts (" ");
// printf("%d", printf("'%+2.2d'", 2));
// puts ("\n");

// ft_printf("%d", ft_printf("'%+5.2d'", 2));
// puts (" ");
// printf("%d", printf("'%+5.2d'", 2));
// puts ("\n");

ft_printf("%d", ft_printf("'%+5d'", 2));
puts (" ");
printf("%d", printf("'%+5d'", 2));
puts ("\n");

ft_printf("%d", ft_printf("'%+5d'", -2));
puts (" ");
printf("%d", printf("'%+5d'", -2));
puts ("\n");

	// puts (" ");
	// test("'%+0.2d'", 2);
}
void test ( char *a, unsigned int c)
{
	printf("%d", printf(a, c));
}

