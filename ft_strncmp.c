/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:02:35 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/04 11:17:34 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*q1;
	unsigned char	*q2;

	q1 = (unsigned char *)s1;
	q2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (q1[i] == q2[i] && q1[i] && q2[i] && i < n - 1)
	{
		i++;
	}
	return (q1[i] - q2[i]);
}
