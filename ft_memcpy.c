/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:18:04 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/05 18:27:31 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;

	if (!dst && !src)
		return (0);
	s = (char *) src;
	d = (char *) dst;
	if (n != 0)
	{
		while (n)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
	}
	return (dst);
}
