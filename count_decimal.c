/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:56:04 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/25 15:41:15 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
