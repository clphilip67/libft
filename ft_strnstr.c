/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:18:50 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 10:42:44 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*pattern;
	const char	*start_haystack;
	size_t		x;
	size_t		y;

	y = 0;
	if (!*needle)
		return (char*)(haystack);
	while (*haystack)
	{
		x = 0;
		pattern = needle;
		start_haystack = haystack;
		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
			x++;
		}
		if (!*pattern && x + y <= len)
			return (char *)(start_haystack);
		haystack = start_haystack + 1;
		y++;
	}
	return (NULL);
}
