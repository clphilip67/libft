/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:55:00 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 15:11:21 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*str;

	str = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		if (str[x] == (unsigned char)c)
			return (str + x);
		x++;
	}
	return (NULL);
}
