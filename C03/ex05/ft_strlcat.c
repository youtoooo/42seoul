/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:03:31 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/20 12:30:03 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				dlen;
	unsigned int	slen;

	dlen = 0;
	slen = 0;
	while (dest[dlen])
		dlen++;
	while (src[slen])
	{
		if (slen < size -1)
		{
			dest[dlen] = src[slen];
			dlen++;
		}
		slen++;
	}
	dest[i] = '\0';
}
