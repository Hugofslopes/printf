/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putchar_dash.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:32:42 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 13:19:06 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putchar_dash(char c, size_t field_len)
{
	size_t	numb_char;

	numb_char = 0;
	write(1, &c, 1);
	numb_char++;
	while (field_len > 1)
	{
		write(1, " ", 1);
		field_len--;
		numb_char++;
	}
	return (numb_char);
}
