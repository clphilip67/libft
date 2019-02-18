/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:26:04 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 15:39:54 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n && s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
		x++;
	if (x == n)
		return (0);
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
