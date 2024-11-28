/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:08:59 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/28 12:51:52 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	hash_flag(va_list args, char **format, size_t numb_char)
{
	(*format)++;
	numb_char = 0;
	if (**format >= '1' && **format <= '9')
		numb_char += ft_pf_putnbr_hash_fw(args, format, numb_char);
	else if (**format == '.')
		numb_char += handle_dot_hash(va_arg(args, unsigned long), format, \
		numb_char);
	else if (**format == '-')
		numb_char += handle_dash_hash(args, format, numb_char);
	else
	{
		if (**format == 'x')
		{
			numb_char += ft_pf_putstr("0x");
			numb_char += ft_pf_putnbr_hex(va_arg(args, unsigned long), BASE_L);
		}
		if (**format == 'X')
		{
			numb_char += ft_pf_putstr("0X");
			numb_char += ft_pf_putnbr_hex(va_arg(args, unsigned long), BASE_U);
		}
	}
	return (numb_char);
}
