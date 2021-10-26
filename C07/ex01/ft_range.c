/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:59:38 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/26 21:17:32 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int mini;

	mini = min;
	i = 0;
	if (min >= max)
	{
		range = '\0';
		return (range);
	}
	range = (int*)malloc(sizeof(int) * (max - min) + 1);
	if (range == 0)
		return (0);
	while (i < max - min)
	{
		range[i] = mini;
		mini++;
		i++;
	}
	range[i] = '\0';
	return (range);
}
