/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putstr_dot.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:20:37 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/25 15:40:15 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putstr_dot(va_list args, size_t numb_char, size_t len, \
char **format)
{
	const char	*str;

	str = (const char *)va_arg(args, char *);
	if (!str)
		return (ft_pf_putstr("(null)"), 6);
	if (len > ft_strlen(str))
	{
		while (*str)
			numb_char += ft_pf_putchar(*str++);
	}
	else
	{
		while (len >= 1)
		{
			numb_char += ft_pf_putchar(*str++);
			len--;
		}
	}
	(*format)++;
	return (numb_char);
}
