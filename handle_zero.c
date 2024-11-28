/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:40:00 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/28 14:33:50 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	handle_zero(va_list args, char **format, size_t numb_char)
{
	size_t	f_len;

	(*format)++;
	f_len = field_size(format);
	if (**format == 's')
		numb_char += ft_pf_putstr_fw(va_arg(args, char *), f_len, numb_char);
	if (**format == 'd' || **format == 'i')
		numb_char += ft_pf_putnbr_dot(va_arg(args, int), f_len);
	if (**format == 'c')
		numb_char += ft_pf_putchar_fw(va_arg(args, int), f_len);
	if (**format == '.')
		numb_char += analize_dot_fw(args, numb_char, format, f_len);
	if (**format == 'u')
		numb_char += ft_pf_putnbr_ui_dot(va_arg(args, unsigned long), f_len);
	return (numb_char);
}
