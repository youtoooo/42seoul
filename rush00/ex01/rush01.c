/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:14:39 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/09 18:05:50 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void firstRow(col)
{
	int i;
	i = 1;
	
	while(i <= col)
	{
		if(i == 1)
		{
			ft_putchar('/');
		}
		else if(i == col)
		{
			ft_putchar('.');
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
}

void lastRow(col)
{
	int i;
	i = 1;
	
	while(i <= col)
	{
		if(i == 1)
		{
			ft_putchar('.');
		}
		else if(i == col)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
}

void elseRow(col)
{
	int i;
	i = 1;

	while( i <= col)
	{
		if(i == 1)
		{
			ft_putchar('*');
		}
		else if(i == col)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void rush(int row, int col)
{
	int i;
	i = 1;

	while(i <= row)
	{
		if(i == 1)
		{
			firstRow(col);
		}
		else if(i == row)
		{
			lastRow(col);
		}
		else
		{
			elseRow(col);
		}
		ft_putchar('\n');
		i++;
	}
}
