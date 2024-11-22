/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_dot_fw.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:28:48 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/22 16:35:00 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t			handle_dot_fw(va_list args, char **format, \
size_t numb_char, size_t field_len)
{
	size_t		len;
	const char	*str;
	size_t		str_len;

	str = (const char *)va_arg(args, char *);
	(*format)++;
	len = **format - 48;
	str_len = ft_strlen(str);
	while (len < field_len)
	{
		ft_pf_putchar(' ');
		field_len--;
		numb_char++;
	}
	while (len >= 1)
	{
		ft_pf_putchar(*str);
		str++;
		len--;
		numb_char++;
	}
	(*format)++;
	return (numb_char);
}
