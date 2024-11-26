/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_fw_dot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:16:27 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/26 21:30:44 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t ft_pf_fw_dot(int i, size_t len, size_t field_len)
{
	size_t		number_char;
	long int	n;
	int			array[15];

	n = i;
	pf_bzero(array, 15);
	if (i < 0)
		n *= -1;
	while (n)
	{
		array[i++] = n % 10;
		n /= 10;
	}

	
	if (field_len > i)
	{
		/* code */
	}
	
	while (field_len > len)
	{
		number_char += ft_pf_putchar(' ');
		field_len--;
	}

	while (len > i)
	{
		number_char += ft_pf_putchar('0');
		len--;
	}
	i = 0;
	while (array[i])
		number_char += ft_pf_putchar(array[i++] + 48 );
	return (number_char);
}
