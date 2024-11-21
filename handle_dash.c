/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_dash.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:54:16 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 16:03:21 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

unsigned int	count_decimal(int nbr)
{
	unsigned int	count;

	count = 0;
	while (nbr)
	{
		count ++;
		nbr /= nbr;
	}
	return (count);
}

size_t	handle_dash(va_list args, char **format, size_t numb_char)
{
	unsigned int	nbr_of_nbrs;
	unsigned int	total_output;

	nbr_of_nbrs = count_decimal(va_arg(args, int));
	total_output = **format++;
	if (nbr_of_nbrs == total_output)
		numb_char += ft_pf_putnbr(va_arg(args, int));
	if (nbr_of_nbrs <= total_output)
	{
		numb_char += ft_pf_putnbr(va_arg(args, int));
		while (nbr_of_nbrs < total_output)
		{
			numb_char += ft_pf_putchar(' ');
			nbr_of_nbrs++;
		}
	}
	return (numb_char);
}
