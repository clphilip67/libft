/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:45:49 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 11:16:16 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoa_length(int n)
{
	size_t		length;

	if (n == 0)
		return (1);
	length = 0;
	if (n < 0)
		length++;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char			*ft_itoa(int n)
{
	size_t		length;
	size_t		start;
	char		*s;

	length = ft_itoa_length(n);
	if (!(s = (char *)malloc(length + 1)))
		return (NULL);
	s[length] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		start = 1;
	}
	else
		start = 0;
	while (length-- > start)
	{
		s[length] = '0' + n % 10 * (n < 0 ? -1 : 1);
		n /= 10;
	}
	return (s);
}
