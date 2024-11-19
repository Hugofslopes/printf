/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:17:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/19 19:04:51 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
	va_list args;
    va_start(args, str);
	size_t	i;

	i = 0;
	while(str)
	{
		if (*str == '%')
		{
			while (*str != '%' || *str != '\0')
			{
				i++;
				str++;
			}
			select_formats(args - i, str);
		}
		str++;
	}

	va_end(args);
}

int select_formats(va_list args, const char *format)
{

        if (*format == '%')
		{
            format++;
			if (*format == '0')
				//fill the empty spaces with 0. need to do string lenght of the rest of the output and thens put the rest with 0
			if (*format == '+')
				//call function putnbr and show + if its positiv or - if negative  (%d, %i)
			if (*format == ' ')
				//call function epspaco put space before output (alinha os prints) adiciona um space adicioanl se for positivo
			if (*format == '#')
				//call function to add 0x if x or 0X if X before the rest of number 
			if (*format == 'c')
				ft_putchar_fd(va_arg(args, char), 0);
			else if (*format == 's')
				ft_putstr_fd(va_arg(args, char *), 0);
			else if (*format == 'p')
				ft_puttnbr_hexa_l(va_arg(args, int), 0);
			else if (*format == 'd')
				ft_putnbr_fd(va_arg(args, int), 0);
			else if (*format == 'i')
				ft_putnbr_fd(va_arg(args, int), 0);
								 // needs to round the number 
			else if (*format == 'u')
				ft_putnbr_fd_ui(va_arg(args, unsigned int), 0);
			else if (*format == 'x')
				ft_puttnbr_hexa_l(va_arg(args, int), 0);
			else if (*format == 'X')
				ft_puttnbr_hexa_u(va_arg(args, int), 0);
			else if (*format == '%')
				ft_putchar_fd('%', 0);
		}
		format++;
	}
