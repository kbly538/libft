/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 02:17:50 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:25 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*lastaddr;

	c = (char)c;
	if (c == '\0')
		return (ft_strchr(s, c));
	lastaddr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			lastaddr = s;
		s++;
	}
	return ((char *)lastaddr);
}
