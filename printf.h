/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:09:05 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/22 19:24:20 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

# define BASE_L "0123456789abcdef"
# define BASE_U "0123456789ABCDEF"

size_t			ft_pf_putnbr_hex(unsigned long n, char *base);
size_t			ft_pf_putchar(char c);
size_t			ft_pf_putnbr(int n);
size_t			ft_pf_putnbr_ui(unsigned int n);
int				ft_printf(const char *str, ...);
size_t			select_formats(va_list args, char **format, \
size_t numb_char);
size_t			ft_pf_putstr(char *s);
size_t			analize_flags(va_list args, char **format, size_t numb_char);
size_t			hash_flag(va_list args, char **format, \
size_t numb_char);
size_t			put_sign(va_list args, char **format, size_t numb_char);
size_t			handle_zero(va_list args, char **format, \
size_t numb_char);
unsigned int	count_decimal(int nbr);
size_t			handle_dash(va_list args, char **format, \
size_t numb_char);
size_t			handle_empty_space(va_list args, char **format, \
size_t numb_char);
size_t			handle_dot(va_list args, char **format, \
size_t numb_char);
int				ft_pf_atoi(char *str);
size_t			ft_strlen(const char *str);
size_t			field_size(char **format);
size_t			check_with(char **format);
size_t			ft_pf_putchar_fw(char c, size_t field_len);
size_t			select_formats_with_field(va_list args, char **format, \
size_t 			numb_char, size_t field_len);
size_t			ft_pf_putstr_fw(char *s, size_t field_len);
size_t			ft_pf_putnbr_hex_fw(unsigned long n, char *base, size_t field_len);
size_t			ft_pf_putnbr_p_fw(unsigned long n, char *base, size_t field_len);
size_t			ft_pf_putnbr_fw(int n, size_t field_len);
size_t			ft_pf_putnbr_ui_fw(unsigned int n, size_t field_size);
size_t			analize_flags_fw(va_list args, char **format, \
size_t numb_char, size_t field_len);
size_t			handle_dot_fw(va_list args, char **format, \
size_t numb_char, size_t field_len);
size_t			ft_pf_putnbr_p(unsigned long n, char *base);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
#endif
