/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analize_dot_fw.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:59:17 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/25 16:40:29 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	analize_dot_fw(int numb, size_t numb_char, \
char **format, size_t field_len)
{
	if (**format == 'd')
		numb_char += ft_pf_putnbr_fw(numb, field_len);
	if (**format >= 1 || **format <= 9)
	{
		(*format)++;
		numb_char += ft_pf_putnbr_fw(numb, field_len);
	}
	return (numb_char);
}
