/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_dash.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:54:16 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/22 21:02:01 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

unsigned int	count_decimal(int nbr)
{
	unsigned int	count;

	count = 1;
	while (nbr)
	{
		count ++;
		nbr /= 10;
	}
	return (count);
}

size_t	handle_dash(va_list args, char **format, size_t numb_char)
{
	unsigned int	nbr_of_nbrs;
	unsigned int	total_output;
	int				nbr;

	nbr = (const int)va_arg(args, int);
	nbr_of_nbrs = count_decimal(va_arg(args, int));
	(*format)++;
	total_output = ft_pf_atoi(*format);
	if (nbr_of_nbrs == total_output)
		numb_char += ft_pf_putnbr(nbr);
	if (nbr_of_nbrs <= total_output)
	{
		numb_char += ft_pf_putnbr(nbr);
		while (nbr_of_nbrs < total_output)
		{
			numb_char += ft_pf_putchar(' ');
			nbr_of_nbrs++;
		}
	}
	(*format)++;
	return (numb_char);
}
