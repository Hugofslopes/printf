/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:54:38 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/22 16:35:02 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main()
{
	unsigned int i;
	i = -2;	
	printf("\t%d", printf("'%7.3s'", "Zedro0"));	
	puts("\n");
	ft_printf("\t%d", ft_printf("'%7.3s'", "Zedro0"));		

}