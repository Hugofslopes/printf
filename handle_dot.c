/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_dot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:08:41 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/25 15:52:17 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	handle_dot(va_list args, char **format, size_t nb_ch)
{
	size_t	len;
	size_t	count;

	(*format)++;
	len = ft_pf_atoi(*format);
	count = count_decimal(len);
	go_foward_array(format, count);
	if (**format == 's')
		nb_ch += ft_pf_putstr_dot(args, nb_ch, len, format);
	if (**format == 'x')
	{
		nb_ch += ft_putnbr_hex_dot(va_arg(args, unsigned long), nb_ch, \
		len, BASE_L);
		(*format)++;
	}
	if (**format == 'X')
	{
		nb_ch += ft_putnbr_hex_dot(va_arg(args, unsigned long), \
		nb_ch, len, BASE_U);
		(*format)++;
	}
	else
		handle_dot2(args, format, nb_ch, len);
	return (nb_ch);
}

size_t	handle_dot2(va_list args, char **format, size_t nb_ch, size_t len)
{
	if (**format == 'i' || **format == 'd')
		nb_ch += ft_pf_putnbr_dot(va_arg(args, unsigned long), len);
	if (**format == 'u')
		nb_ch += ft_pf_putnbr_ui_dot(va_arg(args, unsigned long), len);
	return (nb_ch);
}
