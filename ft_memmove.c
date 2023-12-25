/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 02:14:46 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:51:54 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	i = 0;
	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	if (!from && !to)
		return (NULL);
	if (to > from)
	{
		while (len-- > 0)
			*(to + len) = *(from + len);
		return (dst);
	}
	else if (from > to && (from - to) < (int)len)
	{
		while (i++ < len)
		{
			*to++ = *from++;
		}
		return (dst);
	}
	ft_memcpy(to, from, len);
	return (dst);
}
