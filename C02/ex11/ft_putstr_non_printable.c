/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:44:22 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/25 19:10:36 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hexa;
	unsigned char	cur;
	int				i;

	i = 0;
	hexa = "0123456789abcdef";
	while (str[i])
	{
		cur = str[i];
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar(*(hexa + cur / 16));
			ft_putchar(*(hexa + cur % 16));
		}
		i++;
	}
}
