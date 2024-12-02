/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_sign_dot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:53:06 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/02 16:24:22 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	put_sign_dot(va_list args, size_t numb_char, char **format)
{
	size_t		count;
	size_t		count2;
	size_t		dot_len;
	size_t		numb;

	numb = va_arg(args, unsigned int);
	(*format)++;
	dot_len = ft_pf_atoi(*format);
	count = count_decimal(dot_len);
	go_foward_array(format, count);
	count2 = count_decimal(numb);
	if (numb == 0)
		numb_char += ft_pf_putchar('+');
	while (dot_len > count2 && numb > 0)
	{
		numb_char += ft_pf_putchar('0');
		dot_len--;
	}
	if (numb > 0)
	{
		numb_char += ft_pf_putchar('+');
		numb_char += ft_pf_putnbr(numb);
	}
	else if (numb < 0)
	{
		numb_char += ft_pf_putnbr_dot(numb, dot_len);
	}
	return (numb_char);
}
