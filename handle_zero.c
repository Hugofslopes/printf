/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:40:00 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/30 13:35:32 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	handle_zero(va_list args, char **format, size_t numb_char)
{
	size_t	f_len;

	(*format)++;
	f_len = field_size(format);
	if (**format == 's')
		numb_char += ft_pf_putstr_fw(va_arg(args, char *), f_len, numb_char);
	else if (**format == 'd' || **format == 'i')
		d_zero(args, numb_char, f_len);
	else if (**format == 'c')
		numb_char += ft_pf_putchar_fw(va_arg(args, int), f_len);
	else if (**format == '.')
		numb_char += analize_dot_fw(args, numb_char, format, f_len);
	else if (**format == 'u')
		numb_char += ft_pf_putnbr_ui_dot(va_arg(args, unsigned long), f_len);
	else if (**format == 'x')
		numb_char += ft_putnbr_hex_dot(va_arg(args, unsigned long), numb_char, \
		f_len, BASE_L);
	else if (**format == 'X')
		numb_char += ft_putnbr_hex_dot(va_arg(args, unsigned long), numb_char, \
		f_len, BASE_U);
	return (numb_char);
}

size_t	d_zero(va_list args, size_t numb_char, size_t f_len)
{
	int	i;

	i = va_arg(args, int);
	if (i >= 0)
		numb_char += ft_pf_putnbr_dot(i, f_len);
	else
	{
		if (f_len == 0)
			numb_char += ft_pf_putnbr_dot(i, f_len);
		else
			numb_char += ft_pf_putnbr_dot(i, f_len - 1);
	}
	return (numb_char);
}
