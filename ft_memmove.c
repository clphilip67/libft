/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:23:55 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 10:56:29 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*copy_dst;
	char	*copy_src;
	size_t	x;

	if (src == dst)
		return (dst);
	copy_src = (char *)src;
	copy_dst = (char *)dst;
	if (src < dst)
	{
		x = len;
		while (x-- > 0)
			copy_dst[x] = copy_src[x];
	}
	else
	{
		x = 0;
		while (x < len)
		{
			copy_dst[x] = copy_src[x];
			x++;
		}
	}
	return (dst);
}
