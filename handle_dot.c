/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_dot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:08:41 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 18:46:48 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	handle_dot(va_list args, char **format, size_t numb_char)
{
	size_t	len;
	const char	*str;

	str = (const char *)va_arg(args, char *);
	(*format)++;
	len = **format - 48;
	while (len >=1)
	{
		ft_pf_putchar(*str);
		str++;
		len--;
		numb_char++;
	}
	(*format)++;
	return (numb_char);
}
