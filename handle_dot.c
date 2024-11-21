/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_dot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:08:41 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 16:03:27 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	handle_dot(va_list args, char **format, size_t numb_char)
{
	size_t	number_of_char;
	char	*str;

	str = va_arg(args, char *);
	number_of_char = (**format) - 48;
	while (numb_char)
	{
		ft_pf_putchar(*str);
		str++;
		numb_char --;
	}
	return (numb_char);
}
