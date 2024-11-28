/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_hash_dot.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:33:07 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/28 11:44:37 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_putnbr_hex_hash_dot(unsigned long n, size_t dash_len, size_t n_zeros, \
char *base)
{
	int		array[11];
	size_t	i;
	size_t	j;
	size_t	numb_char;
	char	str[10];

	numb_char = 0;
	pf_bzero(str, 10);
	j = 0;
	i = 0;
	while (n > 0)
	{
		array[i++] = (n % 16);
		n /= 16;
	}
	while (i > 0)
		str[j++] = base[array[--i]];
	j = 0;
	numb_char += ft_putnbr_hex_hash_dotb(str, dash_len, n_zeros);
	return (numb_char);
}
size_t	ft_putnbr_hex_hash_dotb(char *str, size_t dash_len, size_t n_zeros)
{
	size_t	numb_char;
	size_t	len;
	size_t	n_zeros2;

	n_zeros2 = n_zeros;
	numb_char = 0;
	len = ft_strlen(str);
	while (len < n_zeros)
	{
		numb_char += ft_pf_putchar('0');
		n_zeros--;
	}
	if (len < n_zeros2)
		len = n_zeros2;
	len += 2;
	numb_char += ft_pf_putstr(str);
	if (dash_len > n_zeros2)
		while (dash_len > n_zeros2 && dash_len > len)
		{
			numb_char += ft_pf_putchar(' ');
			dash_len --;
		}
	return (numb_char);
}
