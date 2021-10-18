/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:42:45 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/18 04:24:23 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *str)
{
	int i;

	i = 0;
	if (str[i]  < str[i + 1])
	{
		while(str[i])
		{
			ft_putchar(str[i] + '0');
			i++;
		}
	}	
}

void	ft_sub(char *str, int n, int n1)
{
	int	i;

	i = 0;
	while(i <= 10 - n)
	{
//		str[n1] = i;
		if(n == 1)
			ft_print(str);
		if(n != 1)
			ft_sub(str,n--,n1++);
		i++;
//		str[i + 1] = str[i] + 1
	}
}


void	ft_print_combn(int n)
{
	char str[10] = {0, };
	int i;

	i = 0;
/*	while (i < n)
	{
		str[i] = i;
		i++;
	}*/
	ft_sub(str, n, 0);
}

int main()
{
	ft_print_combn(2);
	return (0);
}
