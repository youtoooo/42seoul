/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:33:43 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/09 13:42:28 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void firstlastRow(int col)
{
	int i;
	i = 1;
	
	while(i <= col)
	{
		if(i == 1 || i == col )
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
}

void elseRow(int col)
{
	int i;
	i = 1;
	
	while(i <= col)
	{
		if(i == 1 || i == col )
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}		
}

void rush(int col, int row)
{
	int i;
	i = 1;

	while(i <= row)
	{
		if(i == 1 || i == row)
		{
			firstlastRow(col);
		}
		else
		{
			elseRow(col);
		}
		ft_putchar('\n');
		i++;
	}
}
