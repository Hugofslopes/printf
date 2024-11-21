/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:20:03 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 14:15:15 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putnbr_hex(int n, char *base)
{
	size_t	numb_char;

	numb_char = 0;
	if (n / 16 > 0)
		ft_pf_putnbr_hex(n / 16, base);
	numb_char += ft_pf_putchar(base[n % 16]);
	return (numb_char);
}
