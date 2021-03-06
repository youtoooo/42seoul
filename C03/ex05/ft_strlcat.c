/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyoo <seuyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:03:31 by seuyoo            #+#    #+#             */
/*   Updated: 2021/10/25 13:58:17 by seuyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	slen;
	unsigned int	dlen;

	slen = ft_length(src);
	dlen = ft_length(dest);
	if (dlen >= size)
		return (slen + size);
	slen = 0;
	len = dlen;
	while (src[slen] && dlen + 1 < size)
	{
		dest[dlen] = src[slen];
		dlen++;
		slen++;
	}
	dest[dlen] = '\0';
	slen = ft_length(src);
	return (len + slen);
}
