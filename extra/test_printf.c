/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:54:38 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/02 18:48:16 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include "colors.h"
#include <stdio.h>
#include <limits.h>

int test ( char *a, int c);

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

// ft_printf("%d", ft_printf("'%+5d'", 2));
// puts (" ");
// printf("%d", printf("'%+5d'", 2));
// puts ("\n");

// ft_printf("%d", ft_printf("'%+5d'", -2));
// puts (" ");
// printf("%d", printf("'%+5d'", -2));
// puts ("\n");

// ft_printf("%d", ft_printf("'%+5.2d'", -2));
// puts (" ");
// printf("%d", printf("'%+5.2d'", -2));
// puts ("\n");

// ft_printf("%d", ft_printf("'%+5.2d'", 2));
// puts (" ");
// printf("%d", printf("'%+5.2d'", 2));
// puts ("\n");

// ft_printf("%d", ft_printf("'%+5.d'", 2));
// puts (" ");
// printf("%d", printf("'%+5.0d'", 2));
// puts ("\n");

// ft_printf("%d", ft_printf("'%+5.0d'", 2));
// puts (" ");
// printf("%d", printf("'%+5.0d'", 2));
// puts ("\n");

// ft_printf("%d", ft_printf("'%+0.0d'", 2));
// puts (" ");
// printf("%d", test("'%+0.0d'", 2));
// puts ("\n");

// ft_printf("%d", ft_printf("'%+0.5d'", 2));
// puts (" ");
// printf("%d", test("'%+0.5d'", 2));
// puts ("\n");

// ft_printf("%d", ft_printf("'%+0.5u'", 2));
// puts (" ");
// printf("%d", test("'%+0.5u'", 2));
// puts ("\n");

ft_printf("%d", ft_printf("'#-0.5x'", 2));
puts (" ");
test("'#-0.5x'", 2);
puts ("\n");

ft_printf("%d", ft_printf("'#-10.5x'", 2));
puts (" ");
test("'#-10.5x'", 2);
puts ("\n");

}
int test ( char *a, int c)
{
	return(printf("%d", printf(a, c)));
}

