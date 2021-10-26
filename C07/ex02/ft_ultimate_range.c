/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:46:30 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/26 21:16:20 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int mini;

	i = 0;
	mini = min;
	if (min >= max)
	{
		*range = '\0';
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * (max - min) + 1);
	if (range == 0)
		return (-1);
	while (i < max - min)
	{
		*range[i] = mini;
		mini++;
		i++;
	}
	*range[i] = '\0';
	return (max - min);
}
