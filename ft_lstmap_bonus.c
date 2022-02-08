/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:58:13 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/11/10 18:15:53 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*follow;

	if (!lst)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
		return (NULL);
	follow = newlst;
	lst = lst->next;
	while (lst)
	{
		follow->next = ft_lstnew(f(lst->content));
		if (!(follow->next))
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		follow = follow->next;
		lst = lst->next;
	}
	return (newlst);
}
