/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 23:07:17 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:26 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (*(set + i))
	{
		if (c == *(set + i++))
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	ix;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	else if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (ft_isinset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_isinset(s1[end - 1], set))
		end--;
	dst = malloc(sizeof(char) * (end - start + 1));
	if (!dst)
		return (NULL);
	ix = 0;
	while (start < end)
		dst[ix++] = s1[start++];
	dst[ix] = '\0';
	return (dst);
}
