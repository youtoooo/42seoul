/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 02:57:50 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/20 10:39:00 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int num)
{
	int	temp;

	temp = tab[num];
	tab[num] = tab[num + 1];
	tab[num + 1] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap(tab, j);
			}
			j++;
		}
		i++;
	}
}
