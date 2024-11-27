/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analize_dot_fw.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:59:17 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 13:53:56 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	analize_dot_fw(va_list args, size_t numb_char, char **format, \
size_t field_len)
{
	size_t count;
	size_t len;

	(*format)++;
	len = ft_pf_atoi(*format);
	count = count_decimal(len);
	go_foward_array(format, count);
	if (**format == 's')
		numb_char += ft_pf_fw_dot_s(va_arg(args, char *), len, \
		field_len);
	if (**format == 'x')
		numb_char += ft_pf_fw_dot_hex(va_arg(args, unsigned long), len, \
		field_len, BASE_L);
	if (**format == 'X')
		numb_char += ft_pf_fw_dot_hex(va_arg(args, unsigned long), len, \
		field_len, BASE_U);
	if (**format == 'd' || **format == 'i')
		numb_char += ft_pf_fw_dot(va_arg(args, int), len, field_len);
	if (**format == 'u')
		numb_char += ft_pf_fw_dot_u(va_arg(args, unsigned int), len, field_len);
	return (numb_char);
}
