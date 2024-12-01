/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:54:38 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/01 12:02:15 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include "colors.h"
#include <stdio.h>
#include <limits.h>

void test ( char *a, char c);

int main()
{
	ft_printf("%.c", 'a');

puts (" ");
	test("%.c", 'a');

puts (" ");
	// puts (" ");
	// printf("%x", 0);
	//printf("'%02.13X'", ptr);

	//printf("\t%d", printf(str, "hello", "whirl"));
	// puts (" ");
	//printf("\t%d", printf("'%.0s'", NULL));
	// 
	//printf(str, "hello", "whirl");


}	

void test ( char *a, char c)
{
	printf(a, c);
}
