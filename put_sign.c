/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_sign.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:21:04 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 19:00:22 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	put_sign(va_list args, char **format, size_t numb_char)
{
	long int	numb;
	
	numb = va_arg(args, int);
	if (numb >= 0)
	{
		numb_char += ft_pf_putchar('+');
		numb_char += ft_pf_putnbr(numb);
	}
	if (numb < 0)
	{
		numb_char += ft_pf_putnbr(numb);
	}
	(*format)++;
	return (numb_char);
}
