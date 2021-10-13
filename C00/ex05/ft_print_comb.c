/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:47:33 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/11 18:18:06 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	numArr[3];
	char	separator[2];

	numArr[0] = '0';
	separator[0] = ',';
	separator[1] = ' ';
	while (numArr[0] <= '7')
	{
		numArr[1] = numArr[0] + 1;
		while (numArr[1] <= '8')
		{
			numArr[2] = numArr[1] + 1;
			while (numArr[2] <= '9')
			{
				write(1, numArr, 3);
				if (numArr[0] != '7' || numArr[1] != '8' || numArr[2] != '9')
				{
					write(1, separator, 2);
				}
				numArr[2]++;
			}
			numArr[1]++;
		}
		numArr[0]++;
	}
}
