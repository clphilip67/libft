/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:04:08 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 14:12:12 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			x;
	unsigned char	*str;
	unsigned char	d;

	d = c;
	x = 0;
	str = (unsigned char *)b;
	while (x < len)
	{
		str[x] = d;
		x++;
	}
	return (str);
}
