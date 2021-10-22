/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 00:19:42 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/22 01:01:48 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	temp;

	i = 1;
	while (i < argc)
	{	
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] > argv[i][j + 1])
			{
				temp = argv[i][j];
				argv[i][j] = argv[i][j + 1];
				argv[i][j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (0);
}
