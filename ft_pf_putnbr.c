/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:20:03 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 14:24:24 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putnbr(int n)
{
	long int	numb;
	size_t		numb_char;

	numb = n;
	numb_char = 0;
	if (numb < 0)
	{
		numb_char += ft_pf_putchar('-');
		numb = -numb;
	}
	if (numb > 9)
		ft_pf_putnbr(numb / 10);
	numb_char += ft_pf_putchar((numb % 10) + 48);
	return (numb_char);
}
