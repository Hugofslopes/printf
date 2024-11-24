/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putstr_fw.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:49:58 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/24 12:47:10 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putstr_fw(char *s, size_t field_len, char **format, \
size_t numb_char)
{
	size_t	str_len;

	if (!s)
		{
			ft_pf_putstr("(null)");
			return (6);	
		}
	if (**format == 's')
	{
		numb_char = 0;
		str_len = ft_strlen(s);
		while (field_len > str_len)
		{
			ft_pf_putchar(' ');
			field_len--;
			numb_char++;
		}
		while (*s)
			numb_char += ft_pf_putchar(*s++);
	}
	else if (**format == '.')
		numb_char += handle_dot_fw(s, format, numb_char, field_len);

	return (numb_char);
}
