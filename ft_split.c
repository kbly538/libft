/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 01:04:17 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:08 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	tokencount(char const *s, char c)
{
	int	i;
	int	in;
	int	count;

	i = 0;
	in = 0;
	count = 0;
	while (s[i])
	{
		if (c == s[i])
			in = 0;
		else if (c != s[i] && in == 0)
		{
			in = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static void	freeallocations(char **arr)
{
	while (*arr != NULL)
	{
		free(*arr);
		arr++;
	}
}

static char	*extractword(char const *src, char c, int *tokenix)
{
	char	*temp;
	int		start;
	int		end;

	temp = NULL;
	while (src[*tokenix])
	{
		while (src[*tokenix] == c)
			(*tokenix)++;
		if (src[*tokenix] != c && src[*tokenix] != '\0')
		{
			start = (*tokenix)++;
			while (src[*tokenix] != c && src[*tokenix] != '\0')
				(*tokenix)++;
			end = *tokenix;
			temp = ft_substr(src, start, end - start);
			return (temp);
		}
	}
	return (temp);
}

static char	**tokenize(char const *src, char c, char **tokenarr)
{
	int		arrix;
	int		tokenix;
	char	*token;

	arrix = 0;
	tokenix = 0;
	while (src[tokenix] && arrix < tokencount(src, c))
	{
		token = extractword(src, c, &tokenix);
		if (token)
			tokenarr[arrix++] = token;
		else
		{
			freeallocations(tokenarr);
		}
	}
	tokenarr[arrix] = (void *)('\0');
	return (tokenarr);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = malloc(sizeof(char *) * (tokencount(s, c) + 1));
	if (!split)
		return (NULL);
	split = tokenize(s, c, split);
	return (split);
}
