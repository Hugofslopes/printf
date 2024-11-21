/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_sign.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:21:04 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 16:04:02 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	put_sign(va_list args, char **format, size_t numb_char)
{
	if (**format == '+')
	{
		numb_char += ft_pf_putchar('+');
		numb_char += ft_pf_putnbr(va_arg(args, int));
		format++;
	}
	if (**format == '-')
	{
		numb_char += ft_pf_putnbr(va_arg(args, int));
		format++;
	}
	return (numb_char);
}
