/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putchar_fw.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:32:42 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/22 14:48:50 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putchar_fw(char c, size_t field_len)
{

	size_t numb_char = 0;
	while (field_len > 1)
	{
		write(1, " ", 1);
		field_len--;
		numb_char++;
	}
	write(1, &c, 1);
	numb_char++;
	return (numb_char);
}