/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:42:52 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/07 11:58:12 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	how_long(int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return (1);
	while (c)
	{
		c /= 10;
		i++;
	}
	return (i);
}

static int	plas_wn(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	int				c;
	char			*p;
	int				i;

	c = how_long(n) + plas_wn(n);
	i = 0;
	p = (char *)ft_calloc((size_t)(c + 1), sizeof(char));
	if (p == 0)
		return (0);
	if (n == -2147483648 && ft_strlcpy(p, "-2147483648", 12))
		return (p);
	if (plas_wn(n))
	{
		p[i] = '-';
		n *= -1;
	}
	while (n || i == 0)
	{
		p[c - i - 1] = n % 10 + '0';
		n /= 10;
		i++;
	}
	return (p);
}
