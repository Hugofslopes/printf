/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_fw_dot_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:23:09 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/26 20:49:53 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_fw_dot_s(char *str, size_t len, size_t field_len)
{
	size_t i;
	size_t numb_char;

	i = 0;
	numb_char = 0;
	while (field_len > len)
	{
		numb_char += ft_pf_putchar(' ');
		field_len--;
	}	
	while (len)
	{
		numb_char += ft_pf_putchar(str[i++]);
		len--;
	}
	return (numb_char);
}
