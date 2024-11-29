/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr_p_dash.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:45:03 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/29 17:00:45 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putnbr_p_dash(unsigned long n, char *base, size_t field_len)
{
	int		array[11];
	size_t	i;
	size_t	j;
	char	str[10];
	size_t	numb_char;

	numb_char = 0;
	pf_bzero(&str, 10);
	if (n == 0)
	{
		ft_pf_putstr("(nil)");
		return (5);
	}
	field_len -= 2;
	i = 0;
	while (n > 0)
	{
		array[i++] = (n % 16);
		n /= 16;
	}
	j = 0;
	while (i > 0)
		str[j++] = base[array[--i]];
	numb_char += ft_pf_putnbr_p_dash2(str, field_len);
	return (numb_char);
}

size_t	ft_pf_putnbr_p_dash2(char *str, size_t field_len)
{
	size_t	numb_char;
	size_t	len;

	numb_char = 0;
	len = ft_strlen(str);
	numb_char += ft_pf_putstr("0x");
	numb_char += ft_pf_putstr(str);
	while (len < field_len)
	{
		ft_pf_putchar(' ');
		numb_char++;
		field_len--;
	}
	return (numb_char);
}
