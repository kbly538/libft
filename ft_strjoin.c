/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:29:03 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:41 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int				s1len;
	int				s2len;
	char			*newstr;
	unsigned int	ix;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * (s1len + s2len) + 1);
	if (!newstr)
		return (NULL);
	ix = 0;
	while (*s1)
		newstr[ix++] = *s1++;
	while (*s2)
		newstr[ix++] = *s2++;
	newstr[ix] = '\0';
	return (newstr);
}
