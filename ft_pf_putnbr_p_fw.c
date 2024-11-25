/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr_p_fw.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:45:03 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/25 16:14:02 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putnbr_p_fw(unsigned long n, char *base, size_t field_len)
{
	int		array[11];
	size_t	i;
	size_t	j;
	char	str[10];
	size_t	numb_char;

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
	numb_char += ft_pf_putnbr_p_fw3(i, str, base, field_len);
	return (numb_char);
}

size_t	ft_pf_putnbr_p_fw3(size_t i, char *str, char *base, size_t field_len)
{
	size_t	numb_char;
	size_t	j;
	size_t	len;

	numb_char = 0;
	len = ft_strlen(str);
	j = 0;
	while (len < field_len)
	{
		ft_pf_putchar(' ');
		numb_char++;
		field_len--;
	}
	numb_char += ft_pf_putstr("0x");
	numb_char += ft_pf_putstr(str);
	return (numb_char);
}
