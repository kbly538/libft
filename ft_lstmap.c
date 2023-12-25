/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:58:29 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:23 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpylst;
	t_list	*addrcpylst;

	if (!lst || !f || !del)
		return (NULL);
	cpylst = ft_lstnew(f(lst->content));
	if (!cpylst)
		return (NULL);
	addrcpylst = cpylst;
	lst = lst->next;
	while (lst)
	{
		cpylst->next = ft_lstnew(f(lst->content));
		if (!cpylst->next)
		{
			ft_lstclear(&cpylst->next, del);
			return (NULL);
		}
		cpylst = cpylst->next;
		lst = lst->next;
	}
	cpylst->next = NULL;
	return (addrcpylst);
}
