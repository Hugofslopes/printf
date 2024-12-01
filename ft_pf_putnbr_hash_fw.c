/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr_hash_fw.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:44:42 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/29 17:25:42 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_pf_putnbr_hash_fw(va_list args, char **format, size_t numb_char)
{
	size_t	len;
	size_t	count;

	numb_char = 0;
	len = ft_pf_atoi(*format);
	count = count_decimal(len);
	go_foward_array(format, count);
	if (**format == '.')
		numb_char += putnbr_hash_fw_dot(va_arg(args, unsigned long), \
		format, numb_char, len);
	else
	{
		if (**format == 'x')
			numb_char += ft_pf_putnbr_hash_hex_fw2(va_arg(args, unsigned long), \
		BASE_L, len - 2, 'l');
		if (**format == 'X')
			numb_char += ft_pf_putnbr_hash_hex_fw2(va_arg(args, unsigned long), \
			BASE_U, len - 2, 'u');
	}
	return (numb_char);
}

size_t	putnbr_hash_fw_dot(unsigned long n, char **format, size_t numb_char, \
size_t len)
{
	size_t	dot_len;
	size_t	count;
	size_t	array_size;

	(*format)++;
	numb_char = 0;
	dot_len = ft_pf_atoi(*format);
	count = count_decimal(dot_len);
	go_foward_array(format, count);
	array_size = c_array_size(n);
	numb_char += print_fw(len, dot_len, array_size, numb_char);
	if (**format == 'x')
	{
		numb_char += ft_pf_putstr("0x");
		numb_char += ft_putnbr_hex_dot(n, 0, dot_len, BASE_L);
	}
	if (**format == 'X')
	{
		numb_char += ft_pf_putstr("0X");
		numb_char += ft_putnbr_hex_dot(n, 0, dot_len, BASE_U);
	}
	return (numb_char);
}

size_t	print_fw(size_t len, size_t dot_len, size_t array_size, \
size_t numb_char)
{
	int	field_with;

	field_with = len - dot_len - array_size - 2;
	while (field_with > 0)
	{
		numb_char += ft_pf_putchar(' ');
		field_with--;
	}
	return (numb_char);
}

size_t	c_array_size(unsigned long n)
{
	int		array[11];
	size_t	i;

	pf_bzero(array, 20);
	i = 0;
	while (n > 0)
	{
		array[i++] = (n % 16);
		n /= 16;
	}
	i--;
	return (i);
}

size_t	print_base(char c)
{
	if (c == 'l')
		ft_pf_putstr("0x");
	if (c == 'u')
		ft_pf_putstr("0X");
	return (1);
}
