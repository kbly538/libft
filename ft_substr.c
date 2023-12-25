/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:21:00 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:26 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*addrsubstr;

	if (!s)
		return (NULL);
	if ((ft_strlen(s) - start) <= len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		len = 0;
	substr = NULL;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	addrsubstr = substr;
	s = s + start;
	while (len--)
		*substr++ = *s++;
	*substr = '\0';
	return (addrsubstr);
}
