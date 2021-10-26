/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:05:01 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/26 03:16:00 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (1 < power)
	{
		n = n * nb;
		power--;
	}
	return (n);
}
