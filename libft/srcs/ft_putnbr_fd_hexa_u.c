/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_hexa_u.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:52:33 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/19 17:53:08 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd_hexa_l(int n, int fd)
{
	char *base;

	base = "0123456789ABCDEF";
	if (n / 16 > 0)
		ft_putnbr_base_fd(n / 16, fd);
	ft_putchar_fd(base[n % 16], fd);
}