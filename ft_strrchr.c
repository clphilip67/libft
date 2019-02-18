/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 10:49:24 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 10:54:52 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t x;

	x = 0;
	while (s[x])
		x++;
	if (c == 0)
		return ((char *)s + x);
	while (x > 0)
	{
		x--;
		if (s[x] == c)
			return ((char *)s + x);
	}
	return (NULL);
}
