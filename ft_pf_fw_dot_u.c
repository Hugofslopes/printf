/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_fw_dot_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:41:47 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/29 17:04:14 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_fw_dot_u(unsigned int nb, size_t len, size_t field_len)
{
	size_t	numb_char;
	int		i;
	int		array[20];

	i = 0;
	numb_char = 0;
	pf_bzero(array, 20);
	while (nb)
	{
		array[i++] = nb % 10;
		nb /= 10;
	}
	numb_char += ft_pf_fw_dot_ub((size_t)i, len, field_len);
	while (i > 0)
		numb_char += ft_pf_putchar(array[--i] + 48);
	return (numb_char);
}

size_t	ft_pf_fw_dot_ub(size_t i, size_t len, size_t field_len)
{
	size_t		number_char;

	number_char = 0;
	if (field_len > i)
	{
		if (field_len > len)
		{
			while (field_len > len && field_len > i)
			{
				number_char += ft_pf_putchar(' ');
				field_len--;
			}
		}
	}
	while (len > i)
	{
		number_char += ft_pf_putchar('0');
		len--;
	}
	return (number_char);
}
