/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_foward_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:07:57 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/04 14:04:52 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	go_foward_array(char **array, size_t numb)
{
	while (numb)
	{
		(*array)++;
		numb--;
	}
}
