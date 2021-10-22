/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:06:05 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/21 15:13:52 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find(char *str, char *to_find, int i)
{
	int index;
	
	index = 0;
	while (str[i] == to_find[index])
	{
		if (to_find[index + 1] == '\0')
			return (1);
		index++;
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int ok;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			ok = ft_find(str, to_find, i);
			if (ok == 1)
				return (str + i);
		}
		i++;
	}
	return (0);
}
