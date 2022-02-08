/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:29:35 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/07 12:12:25 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	s = (char *) src;
	d = (char *) dst;
	i = 0;
	if (!d && !s)
		return (NULL);
	if ((src + (len - 1)) >= dst && (src + (len - 1)) <= (dst + (len - 1)))
	{
		while (len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
		return (dst);
	}
	while (len)
	{
		d[i] = s[i];
		i++;
		len--;
	}
	return (dst);
}
