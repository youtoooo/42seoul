/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:17:41 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/13 10:29:29 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (i++ <= 98)
	{
		j = i;
		while (j++ <= 98)
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			write(1, " ", 1);
			ft_putchar(j / 10 + '0');
			ft_putchar(j % 10 + '0');
			if(i != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
