/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:32:21 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:10 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1len;
	char	*newstr;

	s1len = ft_strlen(s1);
	newstr = malloc(s1len + 1);
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, s1, s1len);
	newstr[s1len] = '\0';
	return (newstr);
}
