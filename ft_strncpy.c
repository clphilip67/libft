/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 19:29:37 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 14:21:46 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	x;

	x = 0;
	while ((src[x] != '\0') && (x < len))
	{
		dst[x] = src[x];
		x++;
	}
	if (src[x] != '\0')
		return (dst);
	while (x < len)
	{
		dst[x] = '\0';
		x++;
	}
	return (dst);
}
