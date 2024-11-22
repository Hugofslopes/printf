/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:40:00 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/22 20:59:58 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	handle_zero(va_list args, char **format, size_t numb_char)
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
		while (nbr_of_nbrs < total_output)
		{
			numb_char += ft_pf_putchar('0');
			nbr_of_nbrs++;
		}
		numb_char += ft_pf_putnbr(nbr);
	}
	(*format)++;
	return (numb_char);
}
