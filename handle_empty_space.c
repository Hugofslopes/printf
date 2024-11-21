/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_empty_space.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:59:40 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 16:03:38 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	handle_empty_space(va_list args, char **format, size_t numb_char)
{
	if (va_arg(args, int) < 0)
		numb_char += ft_pf_putnbr(va_arg(args, int));
	if (va_arg(args, int) >= 0)
	{
		numb_char += ft_pf_putchar(va_arg(args, int));
		numb_char += ft_pf_putnbr(va_arg(args, int));
	}
	format++;
	return (numb_char);
}
