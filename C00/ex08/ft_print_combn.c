/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:42:45 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/18 21:49:08 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(char *str)
{
	int	i;

	i = 9;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		--i;
	}
}

void	ft_print_com(char *str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (str[i] - 48 + i != 10)
		{
			write (1, ", ", 2);
			return ;
		}
		i++;
	}
}

void	ft_sub(char	*str, int n, int cur)
{
	if (n == 0)
	{
		ft_print_num(str);
		ft_print_com(str);
		return ;
	}	
	while (cur <= 10 - n)
	{
		str[n] = cur + '0';
		ft_sub(str, n - 1, cur + 1);
		cur++;
	}
	return ;
}

void	ft_print_combn(int n)
{
	int i;
	char	str[11];

	i = 0;
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
	ft_sub(str, n, 0);
}
