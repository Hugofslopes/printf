/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:08:59 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 18:04:11 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	hash_flag(va_list args, char **format, size_t numb_char)
{
	(*format)++;
	if (**format == 'x')
	{
		numb_char += ft_pf_putstr("0x");
		numb_char += ft_pf_putnbr_hex(va_arg(args, int), BASE_L);
	}
	if (**format == 'X')
	{
		numb_char += ft_pf_putstr("0X");
		numb_char += ft_pf_putnbr_hex(va_arg(args, int), BASE_U);
	}
	return (numb_char);
}
