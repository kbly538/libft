/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 03:42:59 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:25 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*needlestart;
	size_t	i;

	if (ft_strlen(needle) == 0 || (haystack == needle))
		return ((char *)haystack);
	if (ft_strlen(haystack) == 0)
		return (NULL);
	if (ft_strlen(haystack) < len)
		len = ft_strlen(haystack);
	while (len > 0 && haystack)
	{
		if (*haystack == *needle)
		{
			needlestart = (char *)haystack;
			i = 0;
			while (needle[i] && (*(haystack + i) == needle[i]) && len > i)
				i++;
			if (needle[i] == '\0')
				return ((char *)needlestart);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
