/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_ui.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:32:44 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/19 17:36:56 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_putnbr_fd_ui(unsigned int n, int fd)
{
	unsigned int numb;

	numb = n;
	if (numb < 0)
	{
		ft_putchar_fd('-', fd);
		numb = -numb;
	}
	if (numb > 9)
		ft_putnbr_fd(numb / 10, fd);
	ft_putchar_fd((numb % 10) + 48, fd);
}