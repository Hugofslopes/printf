/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_dash_hash.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:26:38 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/26 15:00:59 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t handle_dash_hash(va_list args, char **format, size_t numb_char)
{
	size_t	len;
	size_t	count;

	(*format)++;
	len = ft_pf_atoi(*format);
	count = count_decimal(len);
	go_foward_array(format, count);
	if (**format == '.')
		numb_char += putnbr_hash_fw_dot(va_arg(args, unsigned long), \
		format, numb_char, len);
	else
	{
		if (**format == 'x')
		{
			numb_char += ft_pf_putnbr_hash_hex_fw2(va_arg(args, unsigned long), \
		BASE_L, len - 2, 'l');
		}
		if (**format == 'X')
		{
			numb_char += ft_pf_putstr("0x");
			numb_char += ft_pf_putnbr_hash_hex_fw2(va_arg(args, unsigned long), \
			BASE_U, len - 2, 'u');
		}
	}
	return (numb_char);
}
size_t	putnbr_hash_dash_dot(unsigned long n, char **format, size_t numb_char, \
size_t len)
{
	size_t	dot_len;
	size_t	count;
	size_t	array_size;

	(*format)++;
	dot_len = ft_pf_atoi(*format);
	count = count_decimal(dot_len);
	go_foward_array(format, count);
	array_size = c_array_size(n);
	if (**format == 'x')
	{
		numb_char += ft_pf_putstr("0x");
		numb_char += ft_putnbr_hex_dot(n, numb_char, dot_len, BASE_L);
	}
	if (**format == 'X')
	{
		numb_char += ft_pf_putstr("0X");
		numb_char += ft_putnbr_hex_dot(n, numb_char, dot_len, BASE_U);
	}
	numb_char += print_fw(len, dot_len, array_size, numb_char);
	return (numb_char);
	(*format)++;
	return (numb_char);
}