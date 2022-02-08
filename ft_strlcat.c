/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:11:41 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/04 17:41:57 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	b;
	size_t	k;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	b = ft_strlen(src);
	k = ft_strlen(dest);
	if (dstsize <= k)
		return (b + dstsize);
	while ((i < dstsize - k - 1) && (src[i] != '\0') && dstsize != 0)
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = '\0';
	return (b + k);
}
