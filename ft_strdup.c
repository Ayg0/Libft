/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:43:34 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/05 10:31:15 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*bo;

	i = ft_strlen(s1);
	bo = (char *)ft_calloc(i + 1, sizeof(char));
	if (bo == 0)
		return (0);
	i = 0;
	while (s1[i])
	{
		bo[i] = s1[i];
		i++;
	}
	return (bo);
}
