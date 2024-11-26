/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_dash_dot_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:50:22 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 14:33:52 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t ft_pf_dash_dot_hex(unsigned long n, size_t len, size_t field_len, char *base)
{
	size_t	numb_char;
	size_t	i;
	size_t	j;
	int		array[20];
	
	i = 0;
	j = 0;
	numb_char = 0;
	pf_bzero(array, 20);
	while (n)
	{
		array[i++] = n % 16;
		n /= 16;
	}
	if (len > i)
		numb_char += len_is_big_dash(len, i);
	while(array[j])
		numb_char += ft_pf_putchar(base[array[j++]]);
	while (field_len > i && field_len > len)
		{
			numb_char += ft_pf_putchar(' ');
			field_len--;
		}
	return (numb_char);
}

size_t len_is_big_dash(size_t len, size_t i)
{
	size_t	numb_char;

	numb_char = 0;
	while (len > i)
	{
		numb_char += ft_pf_putchar('0');
		len--;
	}
	return (numb_char);
}