/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:40:00 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 16:03:46 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	handle_zero(va_list args, char **format, size_t numb_char)
{
	unsigned int	nbr_of_nbrs;
	unsigned int	total_output;

	nbr_of_nbrs = count_decimal(va_arg(args, int));
	total_output = (**format) - 48;
	if (nbr_of_nbrs == total_output)
		numb_char += ft_pf_putnbr(va_arg(args, int));
	if (nbr_of_nbrs <= total_output)
	{
		while (nbr_of_nbrs < total_output)
		{
			numb_char += ft_pf_putchar('0');
			nbr_of_nbrs++;
		}
		numb_char += ft_pf_putnbr(va_arg(args, int));
	}
	format++;
	return (numb_char);
}