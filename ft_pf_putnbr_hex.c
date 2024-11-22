/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:20:03 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/22 15:09:51 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putnbr_hex(int n, char *base)
{
	size_t	numb_char;
	int		array[20];
	size_t		i;

	numb_char = 0;
	i = 0;
	while (n > 0)
	{
		array[i++] = (n % 16);
		n /= 16;
	}
	while (i > 0)
	numb_char += ft_pf_putchar(base[array[--i]]);
	return (numb_char);
}