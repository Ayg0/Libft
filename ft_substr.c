/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:15:58 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/05 10:19:00 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	c;

	i = 0;
	if (!s)
		return (NULL);
	c = ft_strlen(s);
	if (len > c)
		len = c;
	p = (char *)ft_calloc((len + 1), sizeof(char));
	if (!p)
		return (NULL);
	if (start <= c)
	{
		while (*(s + start) && len)
		{
			p[i] = *(s + start);
			i++;
			s++;
			len--;
		}
	}
	return (p);
}
