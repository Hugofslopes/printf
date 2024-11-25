/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_field.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:15:08 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/25 16:23:16 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	handle_field(va_list args, char **format, size_t nb_ch, \
size_t f_len)
{
	if (**format == 'c')
		nb_ch += ft_pf_putchar_fw(va_arg(args, int), f_len);
	else if ((**format == '.' && *(*format + 1) == 'd' ) || \
	(**format == '.' && (*(*format + 1) >= '1' || *(*format + 1) <= '9')))
	{
		(*format)++;
		nb_ch += analize_dot_fw(va_arg(args, int), nb_ch, format, f_len);
	}
	else if (**format == 's' || **format == '.')
		nb_ch += ft_pf_putstr_fw(va_arg(args, char *), f_len, format, nb_ch);
	else if (**format == 'p')
		nb_ch += ft_pf_putnbr_p_fw(va_arg(args, unsigned long), BASE_L, f_len);
	else if (**format == 'd' || **format == 'i')
		nb_ch += ft_pf_putnbr_fw(va_arg(args, int), f_len);
	else if (**format == 'u')
		nb_ch += ft_pf_putnbr_ui_fw(va_arg(args, unsigned int), f_len);
	else if (**format == 'x')
		nb_ch += ft_pf_putnbr_hex_fw(va_arg(args, unsigned long), \
		BASE_L, f_len);
	else if (**format == 'X')
		nb_ch += ft_pf_putnbr_hex_fw(va_arg(args, unsigned long), \
		BASE_U, f_len);
	else if (**format == '%')
		nb_ch += ft_pf_putchar('%');
	return (nb_ch);
}
