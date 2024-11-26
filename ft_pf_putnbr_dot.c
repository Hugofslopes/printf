/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr_dot.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:00:08 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/26 15:13:34 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putnbr_dot(int n, size_t field_len)
{
	long int	numb;
	char		array[20];
	size_t		i;
	size_t		numb_char;

	pf_bzero(array, 20);
	numb_char = 0;
	numb = n;
	i = 0;
	if (numb < 0)
		numb = -numb;
	if (numb == 0)
		array[i++] = 48;
	while (numb > 0)
	{
		array[i++] = (numb % 10) + '0';
		numb /= 10;
	}
	numb_char += ft_pf_putnbr_dot2(n, field_len, array, i);
	return (numb_char);
}

size_t	ft_pf_putnbr_dot2(int n, size_t field_len, char *array, size_t i)
{
	size_t	len;
	size_t	numb_char;

	numb_char = 0;
	len = ft_strlen(array);
	if (n < 0)
		len += 1;
	while ((size_t)len < field_len)
	{
		numb_char += ft_pf_putchar('0');
		field_len--;
	}
	if (n < 0)
		numb_char += ft_pf_putchar('-');
	while (i > 0)
		numb_char += ft_pf_putchar(array[--i]);
	return (numb_char);
}
