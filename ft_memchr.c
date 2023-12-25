/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 03:09:45 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:07 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const void	*p;

	c = (unsigned char)c;
	p = NULL;
	while (n-- > 0)
	{
		if (*(unsigned char *)s == c)
			return ((unsigned char *)s);
		s++;
	}
	return ((unsigned char *) p);
}
