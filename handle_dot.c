/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_dot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:08:41 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/24 12:54:06 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	handle_dot(va_list args, char **format, size_t numb_char)
{
	size_t	len;
	const char	*str;

	str = (const char *)va_arg(args, char *);
	if (!str)
		{
			ft_pf_putstr("(null)");
			return (6);	
		}
	(*format)++;
	len = ft_pf_atoi(*format);
	if (len > ft_strlen(str))
		{
			while (*str)
			{
				ft_pf_putchar(*str);
				numb_char++;
				str++;
			}
		}
	else
	{
		while (len >= 1)
		{
			ft_pf_putchar(*str++);
			len--;
			numb_char++;
		}
	}
	(*format)++;
	return (numb_char);
}
