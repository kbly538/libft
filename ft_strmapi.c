/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:47:25 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:24 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		length;
	int		i;

	length = ft_strlen(s);
	dst = malloc(sizeof(char) * length + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = (char)f(i, (char)s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
