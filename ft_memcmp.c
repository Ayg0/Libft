/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:13:18 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/11 23:19:09 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;
	size_t			i;

	if (n == 0)
		return (0);
	one = (unsigned char *) s1;
	two = (unsigned char *) s2;
	i = 0;
	while ((one[i] == two[i]) && i < n - 1)
	{
		i++;
	}
	return (one[i] - two[i]);
}
