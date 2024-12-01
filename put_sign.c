/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_sign.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:21:04 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/30 13:25:23 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	put_sign(va_list args, char **format, size_t numb_char)
{
	(*format)++;
	if (**format == 'd' || **format == 'i')
		numb_char += put_sign_d(args, numb_char);
	return (numb_char);
}

size_t	put_sign_d(va_list args, size_t numb_char)
{
	long int	numb;

	numb = va_arg(args, int);
	if (numb >= 0)
	{
		numb_char += ft_pf_putchar('+');
		numb_char += ft_pf_putnbr(numb);
	}
	if (numb < 0)
	{
		numb_char += ft_pf_putnbr(numb);
	}
	return (numb_char);
}
