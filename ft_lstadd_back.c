/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:37:43 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:38 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*currentlast;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	currentlast = ft_lstlast(*lst);
	currentlast->next = new;
}
