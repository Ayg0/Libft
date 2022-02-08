/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:14:40 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/06 09:29:32 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s3;
	size_t		j;
	size_t		k;

	if (!s1 || !s2)
		return (NULL);
	j = ft_strlen(s1);
	k = ft_strlen(s2);
	s3 = (char *)malloc(j + k + 1);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, j + 1);
	ft_strlcat(s3, s2, j + k + 1);
	return (s3);
}
