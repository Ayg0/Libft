/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:09:47 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/01 16:31:41 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((char)c >= 'A' && (char)c <= 'Z')
		return (c + 32);
	else
		return (c);
}
