/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:40:00 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 15:31:42 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	handle_zero(va_list args, char **format, size_t numb_char)
{
	(*format)++;
	if (**format >= '1' && **format <= '9')
		numb_char += handle_field(args, format, numb_char);
	return (numb_char);
}
