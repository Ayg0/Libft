/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:40:46 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/04 18:39:55 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*v;

	v = (unsigned char *) s;
	if (n == 0)
		return (0);
	while (n)
	{
		if (*v == (unsigned char)c)
			return ((void *)v);
		v++;
		n--;
	}
	if (c == '\0' && *v == '\0')
		return ((void *)v);
	return (0);
}
