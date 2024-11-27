/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_dash_dot.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:16:27 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 14:53:19 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t ft_pf_dash_dot(int nb, size_t len, size_t field_len)
{
	size_t		number_char;
	int			i;
	int			j;
	long int	n;
	int			array[15];

	i = 0;
	n = nb;
	number_char = 0;
	pf_bzero(array, 15);
	if (nb < 0)
		n = -n;
	while (n)
	{
		array[i++] = n % 10;
		n /= 10;
	}
	number_char += ft_pf_dash_dotb((size_t)i, len, field_len, nb);
	j = i;
	while (i >= 0)
		number_char += ft_pf_putchar(array[i--] + 48 );
	number_char += ft_pf_dash_dotc(j, len, field_len);
	return (number_char);
}

size_t ft_pf_dash_dotb(size_t i, size_t len, size_t field_len, int nb)
{
	size_t	number_char;

	number_char = 0;
	if (nb < 0)
		number_char += ft_pf_fw_dotneg(i, len, field_len, nb);
	else
	{
		while (len > i + 1)
		{
			number_char += ft_pf_putchar('0');
			len--;
		}
	}
	return (number_char);
}

size_t ft_pf_dash_dotneg(size_t i, size_t len, size_t field_len, int nb)
{
	size_t	number_char;
	
	number_char = 0;
	i++;
	len++;
	
	if (nb < 0)
		number_char += ft_pf_putchar('-');
	while (len > i + 1)
	{
		number_char += ft_pf_putchar('0');
		len--;
	}
	if (field_len > i)
	{
		if (field_len > len)
			while (field_len > len && field_len > i)
			{
				number_char += ft_pf_putchar(' ');
				field_len--;
			}
	}
	return (number_char);
}
size_t ft_pf_dash_dotc(size_t i, size_t len, size_t field_len)
{
	size_t	numb_char;

	numb_char = 0;
	if (field_len > i)
		{
			if (field_len > len)
				while (field_len > len && field_len > i)
				{
					numb_char += ft_pf_putchar(' ');
					field_len--;
				}
		}
	return (numb_char);
}
