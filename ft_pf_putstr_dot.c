/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putstr_dot.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:20:37 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/29 17:01:22 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putstr_dot(va_list args, size_t numb_char, size_t len)
{
	const char	*str;

	numb_char = 0;
	str = (const char *)va_arg(args, char *);
	if (!str)
		return (0);
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
	return (numb_char);
}
