/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:17:41 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/15 01:34:59 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = -1;
	while (n1++ <= 98)
	{
		n2 = n1;
		while (n2++ <= 98)
		{
			ft_putchar(n1 / 10 + '0');
			ft_putchar(n1 % 10 + '0');
			write(1, " ", 1);
			ft_putchar(n2 / 10 + '0');
			ft_putchar(n2 % 10 + '0');
			if(n1 != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
