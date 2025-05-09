/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_P.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:34:25 by passunca          #+#    #+#             */
/*   Updated: 2025/05/04 13:59:52 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
}


#define SEP "~~~~~~~~~~~~~~~~~~~~\n"
#define RLR "12345678901234567890\n"
#include <limits.h>

void	ft_putstr_fd(char *s, int fd);

static void ft_test(int n, char *frmt, char *specif);

void test_c(void);
void test_s(void);
void test_di(void);
void test_u(void);
void test_x(void);
void test_p(void);
void test_f(void);

int main(void)
{
	test_c();
	test_s();
	test_di();
	test_u();
	test_x();
	test_f();

	return (0);
}

void test_c(void)
{
	char *str = NULL;

	ft_putstr_fd(SEP, 1);
	printf("TESTING %%c\n");
	ft_putstr_fd(SEP, 1);
	str = "'%-7c'\n";
	printf(str, 'z');
	ft_printf(str, 'z');
	str = "'%7c'\n";
	printf(str, 'z');
	ft_printf(str, 'z');
	str = "'%07c'\n";
	printf(str, 'z');	
	ft_printf(str, 'z');
	str = "'%3c...%2c'\n";
	printf(str, 'z', 'Z');
	ft_printf(str, 'z', 'Z');
	// printf("'%5%'\n");
	ft_printf("'%5%'\n");	
	// printf("'%-5%'\n");
	ft_printf("'%-5%'\n");
}

void test_s(void)
{
	ft_putstr_fd(SEP, 1);
	printf("TESTING %%s\n");
	char *str = NULL;
	char *s_hidden = "Zedr0\0asdasd\0";
	static char *s_hidden2 = "hi low\0don't print me lol\0";
	ft_putstr_fd(SEP, 1);
	ft_test(1, "'%-7.3s'", "Zedro0");
	ft_test(2, "'%7.3s'", "Zedro0");
	ft_test(3, "'%07.3s'", "Zedro0");
	ft_test(4, "'%10.s'", s_hidden);
	ft_test(5, "'%3.s'", NULL);
	ft_putstr_fd(SEP, 1);
	ft_putstr_fd("Test6:\n", 1);
	printf("'%3s%2s'\n","Zedr0 ", "Blah blah");
	ft_printf("'%3s%2s'\n","Zedr0 ", "Blah blah");
	ft_test(7, "'% 7.3s'", "Zedro0");
	ft_test(8, "'%-7.3s'", "Zedro0");
	ft_test(9, "'%7.3s'", "Zedro0");
	ft_test(10, "'%.s'", "Zedro0");
	ft_test(11, "'%.0s'", "Zedro0");
	ft_test(12, "'%.0s'", NULL);
	
	ft_putstr_fd(SEP, 1);
	str = "'%3.7s%7.7s'\n";
	printf(str, "hello", "whirl");
	ft_printf(str, "hello", "whirl");
	ft_putstr_fd(SEP, 1);
	str = "'%7.7s%3.7s'\n";
	printf(str, "hello", "whirl");
	ft_printf(str, "hello", "whirl");	
	ft_test(2, "'%3.s'", "Zedr0\0crashTest");
	ft_test(3, "'%.0s'", s_hidden);
	ft_test(4, "'%.7s'", "Zedr0");
	ft_test(5, "' %.1s'", "");
	ft_test(6, "'%.09s'", s_hidden);
	ft_test(7, "'%.03s'", NULL);
	ft_test(3, "'%.0s'", s_hidden2);
	ft_test(8, "'%.09s'", s_hidden2);
}

void test_di(void)
{
	ft_putstr_fd(SEP, 1);
	printf("TESTING %%d\n");

	ft_putstr_fd(SEP, 1);
	printf("Test1:\n");
	printf("'%d'\n", 42);
	ft_printf("'%d'\n", 42);
	
	printf("Test2:\n");
	printf("'%-3d'\n", 42);
	ft_printf("'%-3d'\n", 42);
	
	printf("Test3:\n");
	printf("'%11d'\n", 42);
	ft_printf("'%11d'\n", 42);
	
	printf("Test4:\n");
	printf("'%-12d'\n", 42);
	ft_printf("'%-12d'\n", 42);
	
	printf("Test5:\n");
	printf("'%07d'\n", 42);
	ft_printf("'%07d'\n", 42);
	
	printf("Test6:\n");
	printf("'%4.d'\n", 42);
	ft_printf("'%4.d'\n", 42);
	
	printf("Test7:\n");
	printf("'%.d'\n", 42);
	ft_printf("'%.d'\n", 42);
	
	printf("Test8:\n");
	printf("'%.d.%3.7d'\n", 42, 420);
	ft_printf("'%.d.%3.7d'\n", 42, 420);
	
	printf("Test9:\n");
	printf("'%.d.%3.7d'\n", 42, 420);
	ft_printf("'%.d.%3.7d'\n", 42, 420);
	
	printf("Test10:\n");
	printf("' :% d'\n", 42);
	ft_printf("' :% d'\n", 42);
	
	printf("Test11:\n");
	printf("' :% d'\n", -42);
	ft_printf("' :% d'\n", -42);
	
	printf("Test12:\n");
	printf("' :%+d'\n", 42);
	ft_printf("' :%+d'\n", 42);
	
	printf("Test13:\n");
	printf("' :%+d'\n", -42);
	ft_printf("' :%+d'\n", -42);
	
	printf("Test14:\n");
	char *str = "'%-9d'\n";
	printf(str, INT_MIN);
	ft_printf(str, INT_MIN);
	
	printf("Test15:\n");
	char *str2 = "'%7i'\n";
	printf(str2, -14);
	ft_printf(str2, -14);

	printf("Test16:\n");
	char *str3 = "'%10.5i'\n";
	printf(str3, -216);
	ft_printf(str3, -216);
}

void test_u(void)
{
	ft_putstr_fd(SEP, 1);
	ft_printf("TESTING %%u\n");

	ft_putstr_fd(SEP, 1);
	printf("Test1:\n");
	printf("' %u '", 42);
	printf("\n");
	ft_printf("' %u '", 42);
	printf("\n");
	
	ft_putstr_fd(SEP, 1);
	printf("Test2:\n");
	printf("' %-u '", -7);
	printf("\n");
	ft_printf("' %-u '", -7);
	printf("\n");

	ft_putstr_fd(SEP, 1);
	printf("Test3:\n");
	printf("' %-22u '", -99);
	printf("\n");
	ft_printf("' %-22u '", -99);
	printf("\n");

	ft_putstr_fd(SEP, 1);
	printf("Test4:\n");
	printf("' %22u '", -99);
	printf("\n");
	ft_printf("' %22u '", -99);
	printf("\n");

	ft_putstr_fd(SEP, 1);
	printf("Test5:\n");
	printf("' %020u '", -99);
	printf("\n");
	ft_printf("' %020u '", -99);
	printf("\n");

	ft_putstr_fd(SEP, 1);
	printf("Test5:\n");
	printf("' %20.10u '", 5);
	printf("\n");
	ft_printf("' %20.10u '", 5);
	printf("\n");

	ft_putstr_fd(SEP, 1);
	printf("Test5:\n");
	printf("' %10.u '", 5);
	printf("\n");
	ft_printf("' %10.u '", 5);
	printf("\n");
}

void test_x(void)
{
	ft_putstr_fd(SEP, 1);
	printf("TESTING %%x\n");
	
	char *ptr = "Zedr0";
	ft_putstr_fd(SEP, 1);
	ft_test(1, "'%x'", ptr);
	ft_test(2, "'%X'", ptr);
	ft_test(3, "'%#x'", ptr);
	ft_test(4, "'%#X'", ptr);
	ft_test(5, "'%#12X'", ptr);
	ft_test(6, "'%#12x'", ptr);
	ft_test(7, "'%#-12X'", ptr);
	ft_test(10, "'%#2.13X'", ptr);
	ft_test(11, "'%02.13X'", ptr); 
	ft_test(12, "'%-02.13X'", ptr);
	ft_test(13, "'%-#2.13X'", ptr);
	ft_test(14, "'%-13.3X'", ptr);
}

void test_f(void)
{
	ft_putstr_fd(SEP, 1);
	printf("TESTING %%f\n");

	printf("OG : '%d'\n", 42);
	ft_printf("FT : '%d'\n", 42);

	printf("OG : '%f'\n", -42.4242);
	ft_printf("FT : '%f'\n", -42.4242);

}


static void ft_test(int n, char *frmt, char *specif)
{
	printf("Test%d:\n", n);
	printf(frmt, specif);
	printf("\n");
	ft_printf(frmt, specif);
	printf("\n");
	ft_putstr_fd(RLR, 1);
		
}
