/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:49:59 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/26 12:47:03 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (1);
	if (nb % 2 == 0)
		return (1);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (1);
		i += 2;
	}
	return (0);
}

int ft_find_next_prime(int nb)
{
	int	prime;

	prime = ft_is_prime(nb);
	if (prime == 0)
		return (nb);
	while (ft_is_prime(nb))
		nb++;
	return (nb);
}
