/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 02:06:17 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/12 17:34:35 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*target;

	target = (char *)s;
	c = (char)c;
	i = 0;
	while ((target[i] != (char)c))
	{
		if (target[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)&target[i]);
}
