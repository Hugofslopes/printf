/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fw_dot.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:16:02 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/02 14:49:50 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_hex_fw_dot(unsigned int n, size_t len, size_t dot_len, char c)
{
	size_t			numb_char;
	int				i;
	int				array[8];
	unsigned int	nbr;

	i = 0;
	numb_char = 0;
	nbr = n;
	pf_bzero(array, 8);
	if (n > 0)
		len -=2;
	while (n > 0)
	{
		array[i++] = n % 16;
		n /= 16;
	}
	i--;
	if (len > dot_len && (int)len -1  > i)
	{
		while (len > dot_len && (int)len - 1 > i)
		{
			numb_char += ft_pf_putchar(' ');
			len--;
		}
	}
	if (nbr > 0)
	{
		if (c == 'l')
			numb_char += ft_pf_putstr("0x");
		else
			numb_char += ft_pf_putstr("0X");
	}
	if ((int)dot_len > i)
	{
		while ((int)dot_len - 1 > i)
		{
			numb_char += ft_pf_putchar('0');
			dot_len--;
		}
	}
	if (c == 'l')
	{
		while(i > -1)
			numb_char += ft_pf_putchar(BASE_L[array[i--]]);
	}
	else
	{
		while(i > -1)
			numb_char += ft_pf_putchar(BASE_U[array[i--]]);
	}
	return (numb_char);
}

