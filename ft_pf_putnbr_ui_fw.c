/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr_ui_fw.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:01:40 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/22 16:08:07 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putnbr_ui_fw(unsigned int n, size_t field_len)
{
	size_t		numb_char;
	char		array[20];
	size_t		i;
	size_t		len;

	i = 0;
	numb_char = 0;
	if (n < 0)
	{
		numb_char += ft_pf_putchar('-');
		n = -n;
	}
	if (n == 0)
		array[i++] = 48;
	while (n > 0)
	{
		array[i++] = (n % 10) + '0';
		n /= 10;
	}
	len = ft_strlen(array);
	while (len < field_len)
	{
		numb_char += ft_pf_putchar(' ');
		field_len--;
	}
	while (i > 0)
		numb_char += ft_pf_putchar(array[--i]);
	return (numb_char);
}
