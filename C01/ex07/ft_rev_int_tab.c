/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:18:09 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/20 10:38:27 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int cn1, int cn2)
{
	int	temp;

	temp = tab[cn1];
	tab[cn1] = tab[cn2];
	tab[cn2] = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		swap(tab, i, j);
		j--;
		i++;
	}
}
