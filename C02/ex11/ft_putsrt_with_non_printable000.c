/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsrt_with_non_printable000.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:47:37 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/19 22:42:42 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(char *hexa)
{
	int index;
	int alpha;

	index = 0;
	while (index <= 9)
	{
		hexa[index] = intdex;
		index++;
	}
	alpha = 'a';
	while (index < 16)
	{
		hexa[index] = alpha;
		alpha++;
		index++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	char hexa[16];
	int	i;

	i = 0;
	ft_hexa(hexa);
	while (str[i])
	{
		char cur = str[i];
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar(hexa[cur / 16]);
			ft_putchar(hexa[cur % 16]);
		}
		i++;
	}
}

int main()
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
