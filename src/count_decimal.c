/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:56:04 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/04 14:02:20 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

unsigned int	count_decimal(int nbr)
{
	unsigned int	count;

	count = 0;
	while (nbr)
	{
		count ++;
		nbr /= 10;
	}
	return (count);
}
