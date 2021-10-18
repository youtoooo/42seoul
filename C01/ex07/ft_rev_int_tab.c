/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:18:09 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/15 01:11:18 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int cn1, int cn2)
{
	int temp;
	temp = tab[cn1];
	tab[cn1] = tab[cn2];
	tab[cn2] = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int j = size - 1;

	while(i < j)
	{
		swap(tab, i, j);
		j--;
		i++;
	}
}
