/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr_fw.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:43:17 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/24 14:32:35 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putnbr_fw(int n, size_t field_len)
{
	long int	numb;
	size_t		numb_char;
	char		array[20];
	size_t		i;
	int		len;
	int 		verify;
	
	numb = n;
	i = 0;
	numb_char = 0;
	verify = 0;
	len = 0;
	if (numb < 0)
	{
		verify = 1;
		numb = -numb;
		len = 1;
	}
	if (numb == 0)
		array[i++] = 48;
	while (numb > 0)
	{
		array[i++] = (numb % 10) + '0';
		numb /= 10;
	}
	len += ft_strlen(array);
	while ((size_t)len < field_len)
	{
		numb_char += ft_pf_putchar(' ');
		field_len--;
	}
	if (verify)
		numb_char += ft_pf_putchar('-');
	while (i > 0)
		numb_char += ft_pf_putchar(array[--i]);
	return (numb_char);
}
