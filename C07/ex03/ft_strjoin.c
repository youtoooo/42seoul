/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:18:59 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/27 00:46:58 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_totallen(char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char *ft_comb(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	sp;
	int index;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[index++] = strs[i][j++];
		str[index++] = sep[sp++];
		i++;
	}
	str[index] = '\0';
	return (str);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*comb;
	int 	len;

	if (size == 0)
	{
		comb = (char*)malloc(sizeof(char));
		comb = '\0';
		return (0);
	}
	size = ft_totallen(strs, size) + ft_strlen(sep) + 1;
	comb = (char*)malloc(sizeof(char) * size);
	comb = ft_comb(size, strs, sep, str);
	return (comb);
}
