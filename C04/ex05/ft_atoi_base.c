 /*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 01:33:06 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/25 20:00:43 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_basecheck(char *base)
{
	int size;
	int	check;

	size = 0;
	check = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[size])
	{
		check = size + 1;
		if (base[size] == '+' || base[size] == '-' || 
				base[size] == 32 || base[size] >= 9 && base[size] <= 14)
			return (0);
		while (base[check])
		{
			if (base[size] == base[check])
				return (0);
			check++;
		}
		size++;
	}
	return (size);
}

int	ft_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == 32 || (str[*i] >= 9 && str[*i] <= 13))
		i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign *= -1;
		i += 1;
	}
	return (sign);
}

/*int	ft_numer(char *str, char *base)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		while (base[j])
		{

		if (str[i] == base[0])
}*/
void	ft_atoi_base(char *str, char *base)
{
	int	size;
	int sign;
	int index;

	sign = ft_sign(str,&index);
	size = ft_basecheck(base);
	if (size == 0)
		return ;
	printf("%d\n%d\n%d\n", sign, size, index);
}

int main()
{
	char str[] = "  --++-1234";
	char base[] = "012345";
	ft_atoi_base(str, base);
}

