/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsrt_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:47:37 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/25 18:44:00 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_with_non_printable(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexa;
	char	cur;
	int		i;

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
