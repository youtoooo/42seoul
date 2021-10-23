/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:28:32 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/23 15:14:12 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_plus(int *num, int index)
{
	if (index == 2)
		return ;
	num[0] = num[1];
	num[1] = num[2];
	num[2] = num[0] + num[1];
	ft_plus(num, index - 1);
}

int	ft_fibonacci(int index)
{
	int	num[3];

	num[0] = 0;
	num[1] = 1;
	num[2] = 1;
	if (index < 0)
		return (-1);
	if (index > 3)
		ft_plus(num, index - 1);
	else
		return (num[index - 1]);
	return (num[2]);
}
