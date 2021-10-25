/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 00:19:42 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/25 16:59:06 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char **argv, int i)
{
	char *temp;

	temp = argv[i];
	argv[i] = argv[i + 1];
	argv[i + 1] = temp;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{	
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] > argv[i + 1][j])
				ft_swap(argv, i);
			j++;
		}
		i++;
	}
	return (0);
}
