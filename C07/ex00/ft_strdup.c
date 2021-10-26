/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:32:42 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/26 16:38:15 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	size;
	char	*str;

	while (src[size])
		size++;
	str = (char*)malloc(sizeof(char) * (size + 1));
	size = 0;
	while (src[size])
	{
		str[size] = src[size];
		size++;
	}
	str[size] = '\0';
	return (str);
}
