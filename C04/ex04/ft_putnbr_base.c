/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:26:50 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/23 01:32:31 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_size(char *base)
{
	int	size;
	int check;

	size = 0;
	check = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[size])
	{
		check = size + 1;
		if (base[size] == '+' || base[size] == '-')
			return (0);
		while (base[check])
		{
			if (base[size] == base[check])
				return (0);
			check++;
		}
		size++;
	}
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = ft_size(base);
	if (size == 0)
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr >= size)
		ft_putnbr_base(nbr / size, base);
	ft_putchar(base[nbr % size]);
}
