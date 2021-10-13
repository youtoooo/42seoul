/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:55:33 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/09 18:07:24 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void firstlastY(x)
{
	int i;
	i = 1;

	while( i <= x )
	{
		if( i == 1 )
		{
			ft_putchar('A');
		}
		else if( i == x )
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
}

void elseY(x)
{
	int i;
	i = 1;

	while( i <= x )
	{
		if( i == 1 || i == x )
		{
			ft_putchar('B');
		}
		else 
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void rush(int x, int y)
{
	int i;
	i = 1;

	while(i <= y)
	{
		if( i == 1 || i == y )
		{
			firstlastY(x);
		}
		else
		{
			elseY(x);
		}
		ft_putchar('\n');
		i++;
	}
}

