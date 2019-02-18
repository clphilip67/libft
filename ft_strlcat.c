/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:51:39 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 14:19:22 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t nb)
{
	size_t x;
	size_t y;
	size_t z;
	size_t w;

	y = 0;
	z = 0;
	w = 0;
	while (s1[w] != '\0')
		w++;
	x = w;
	while (s2[z] != '\0')
		z++;
	while (s2[y] != '\0' && x + 1 < nb)
	{
		s1[x] = s2[y];
		x++;
		y++;
	}
	s1[x] = '\0';
	if (w >= nb)
		return (nb + z);
	return (w + z);
}
