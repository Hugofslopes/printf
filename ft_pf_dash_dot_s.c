/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_dash_dot_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:23:09 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 14:39:53 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_dash_dot_s(char *str, size_t len, size_t field_len)
{
	size_t i;
	size_t numb_char;
	size_t len2;

	i = 0;
	numb_char = 0;
	len2 = len;
	while (len)
	{
		numb_char += ft_pf_putchar(str[i++]);
		len--;
	}
	while (field_len > len2)
	{
		numb_char += ft_pf_putchar(' ');
		field_len--;
	}	
	return (numb_char);
}
