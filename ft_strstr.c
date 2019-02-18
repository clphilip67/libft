/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:51:37 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/03 17:48:28 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *pattern;
	const char *start_haystack;

	if (!*needle)
		return (char*)(haystack);
	while (*haystack)
	{
		pattern = needle;
		start_haystack = haystack;
		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (char *)(start_haystack);
		haystack = start_haystack + 1;
	}
	return (NULL);
}
