/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr_hex_fw.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:03:50 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/25 10:45:48 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putnbr_hex_fw(unsigned long n, char *base, size_t field_len)
{
	size_t	numb_char;
	int		array[11];
	size_t	i;
	size_t	j;
	size_t	len;
	char 	str[10] = {0};

	j = 0;
	numb_char = 0;
	i = 0;
	while (n > 0)
	{
		array[i++] = (n % 16);
		n /= 16;
	}
	while (i > 0)
		str[j++] = base[array[--i]];
	len = ft_strlen(str);
	j = 0;
	while (len < field_len)
	{
		numb_char += ft_pf_putchar(' ');	
		field_len--;
	}
	numb_char += ft_pf_putstr(str);
	return (numb_char);
}
