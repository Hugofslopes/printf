/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_empty_space.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:59:40 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/27 16:02:59 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	handle_empty_space(va_list args, char **format, size_t numb_char)
{
	(*format)++;
	if (**format >= '1' && **format <= '9')
		numb_char += handle_field(args, format, numb_char);
	if (**format == '0')
		numb_char += handle_zero(args, format, numb_char);
	return (numb_char);
}
