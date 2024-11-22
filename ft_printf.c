/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:17:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/22 16:34:59 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	size_t	numb_char;
	size_t	numb_char_formats;
	char	*strgs;
	size_t	field_len;

	i = 0;
	numb_char = 0;
	numb_char_formats = 0;
	field_len = 0;
	va_start(args, str);
	strgs = (char *)str;
	while(*strgs)
	{
		if (*strgs == '%')
		{
			field_len += check_with(&strgs - i);
			if (!field_len)
				numb_char += select_formats(args , &strgs - i, numb_char_formats);
			if(field_len)
				numb_char += select_formats_with_field(args , &strgs - i, numb_char_formats, field_len);
		if (*strgs)
			strgs++;
		}
		if (*strgs)
			numb_char += ft_pf_putchar(*strgs++);
	
	}
	va_end(args);
	return (numb_char);
}

size_t select_formats_with_field(va_list args, char **format, \
size_t numb_char, size_t field_len)
{
	if (**format == 'c')
		numb_char += ft_pf_putchar_fw(va_arg(args, int), field_len);
	else if (**format == 's')
		numb_char += ft_pf_putstr_fw(va_arg(args, char *), field_len);
	else if (**format == 'p')
		numb_char += ft_pf_putnbr_p_fw(va_arg(args, int), BASE_L, field_len);
	else if (**format == 'd' || **format == 'i')
		numb_char += ft_pf_putnbr_fw(va_arg(args, int), field_len);
	else if (**format == 'u')
		numb_char += ft_pf_putnbr_ui_fw(va_arg(args, unsigned int), field_len);
	else if (**format == 'x')
		numb_char += ft_pf_putnbr_hex_fw(va_arg(args, int), BASE_L, field_len);
	else if (**format == 'X')
		numb_char += ft_pf_putnbr_hex_fw(va_arg(args, int), BASE_U, field_len);
	else if (**format == '%')
		numb_char += ft_pf_putchar('%');
	else
		numb_char += analize_flags_fw(args, format, numb_char, field_len);
	return (numb_char);	
}

size_t	select_formats(va_list args, char **format, size_t numb_char)
{
	if (**format == 'c')
		numb_char += ft_pf_putchar(va_arg(args, int));
	else if (**format == 's')
		numb_char += ft_pf_putstr(va_arg(args, char *));
	else if (**format == 'p')
	{
		numb_char += ft_pf_putstr("0x");
		numb_char += ft_pf_putnbr_hex(va_arg(args, int), BASE_L);
	}
	else if (**format == 'd' || **format == 'i')
		numb_char += ft_pf_putnbr(va_arg(args, int));
	else if (**format == 'u')
		numb_char += ft_pf_putnbr_ui(va_arg(args, unsigned int));
	else if (**format == 'x')
		numb_char += ft_pf_putnbr_hex(va_arg(args, int), BASE_L);
	else if (**format == 'X')
		numb_char += ft_pf_putnbr_hex(va_arg(args, int), BASE_U);
	else if (**format == '%')
		numb_char += ft_pf_putchar('%');
	else
		numb_char += analize_flags(args, format, numb_char);
	return (numb_char);	
}

size_t	analize_flags(va_list args, char **format, size_t numb_char)
{
	while (**format)
	{
		while (**format == '#' || **format == '+' || **format == '0' || \
		**format == '-' || **format == '.')
		{
			if (**format == '#')
				numb_char += hash_flag(args, format, numb_char);
			if (**format == '+')
				numb_char += put_sign(args, format, numb_char);
			if (**format == '0')
				numb_char += handle_zero(args, format, numb_char);
			if (**format == '-')
				numb_char += handle_dash(args, format, numb_char);
			if (**format == '.')
				numb_char += handle_dot(args, format, numb_char);
			if (**format == ' ')
				numb_char += handle_empty_space(args, format, numb_char);
		}
		return(numb_char);
	}
	return (numb_char);
}

size_t	analize_flags_fw(va_list args, char **format, size_t numb_char, size_t field_len)
{
	while (**format)
	{
		while (**format == '#' || **format == '+' || **format == '0' || \
		**format == '-' || **format == '.')
		{
			if (**format == '#')
				numb_char += hash_flag(args, format, numb_char);
			if (**format == '+')
				numb_char += put_sign(args, format, numb_char);
			if (**format == '0')
				numb_char += handle_zero(args, format, numb_char);
			if (**format == '-')
				numb_char += handle_dash(args, format, numb_char);
			if (**format == '.')
				numb_char += handle_dot_fw(args, format, numb_char, field_len);
			if (**format == ' ')
				numb_char += handle_empty_space(args, format, numb_char);
		}
		return(numb_char);
	}
	return (numb_char);
}
