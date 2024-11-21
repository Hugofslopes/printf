/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr_ui.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:32:44 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/21 14:06:54 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_pf_putnbr_ui(unsigned int n)
{
	size_t	numb_char;

	numb_char = 0;
	if (n < 0)
	{
		numb_char += ft_pf_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_pf_putnbr_ui(n / 10);
	numb_char += ft_pf_putchar((n % 10) + 48);
	return (numb_char);
}
