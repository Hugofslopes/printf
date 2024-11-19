/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:17:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/19 18:03:46 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
	va_list args;
    va_start(args, format);
	char	c;
	char	*str;
	int		d;
	int 	x;

	while (*format)
	{
        if (*format == '%')
		{
            format++;
			if (*format == 'c')
			{
				c = va_arg(args, char);
				ft_putchar_fd(c, 0);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				ft_putstr_fd(str, 0);
			}
			else if (*format == 'p')
			{
				x = va_arg(args, int);
				ft_puttnbr_hexa_l(x, 0);
			}
			else if (*format == 'd')
			{
				x = va_arg(args, int);
				ft_putnbr_fd(d, 0);
			}
			else if (*format == 'i')
			{
				x = va_arg(args, int);
				ft_putnbr_fd(d, 0);
			}
			else if (*format == 'u')
			{
				x = va_arg(args, unsigned int);
				ft_putnbr_fd_ui(d, 0);
			}
			else if (*format == 'x')
			{
			x = va_arg(args, int);
				ft_puttnbr_hexa_l(x, 0);
			}
			else if (*format == 'X')
			{
				x = va_arg(args, int);
				ft_puttnbr_hexa_u(x, 0);
			}
			else if (*format == '%')
			{
				c = va_arg(args, char);
				ft_putchar_fd('%', 0);
			}
		}
		format++;
	}
	va_end(args);
}
