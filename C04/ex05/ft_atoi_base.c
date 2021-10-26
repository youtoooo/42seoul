 /*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 01:33:06 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/26 16:55:05 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_sign(char *str, int *index)
{
	int i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+' || str[i] == ' ')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*index = i;
	return (sign);
}

int	ft_strstr(char *str,char *base, int i)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (str[i] == base[index])
			return (1);
		index++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int sign;
	int index;
	int result;

	result = 0;
	sign = ft_sign(str, &index);
	size = ft_basecheck(base);
	if (size == 0)
		return (0);
	while (ft_strstr(str, base, index))
	{
		result *= size;
		result += str[index] - '0';
		index++;
	}
	return (result * sign);
}
