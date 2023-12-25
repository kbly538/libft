/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbilgili <kbilgili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 02:50:43 by kbilgili          #+#    #+#             */
/*   Updated: 2023/07/14 16:52:37 by kbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isnegative(int n)
{
	long	num;

	num = n;
	return (num < 0);
}

static int	getlength(int n)
{
	int		length;
	long	num;

	num = n;
	length = 0;
	while (num)
	{
		num /= 10;
		length++;
	}
	if (length == 0)
		return (1);
	return (length);
}

char	*ft_itoa(int n)
{
	int		nlength;
	char	*numstr;
	size_t	size;
	int		sign;
	long	longn;

	longn = n;
	sign = isnegative(longn);
	nlength = getlength(longn);
	size = nlength + sign + 1;
	numstr = malloc(sizeof(char) * size);
	if (!numstr)
		return (NULL);
	numstr[nlength + sign] = '\0';
	if (sign)
	{
		numstr[0] = '-';
		longn = longn * -1;
	}
	while (nlength-- > 0)
	{
		numstr[nlength + sign] = (longn % 10) + '0' ;
		longn /= 10;
	}
	return (numstr);
}
