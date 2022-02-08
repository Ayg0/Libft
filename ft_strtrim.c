/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:25:57 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/07 13:09:11 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	put_it(char *dst, char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		up;
	size_t		end;
	char		*p;

	i = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (s1[i] == 0)
		return ((char *)ft_calloc(1, 1));
	up = i;
	while (end >= up && ft_strchr(set, s1[end - 1]))
		end--;
	p = (char *)ft_calloc((end - up) + 1, sizeof(char));
	if (p == 0)
		return (0);
	put_it(p, (char *)(s1 + up), end - up);
	return (p);
}
