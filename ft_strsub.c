/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:18:53 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/03 17:52:52 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	x;

	x = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (x < len && s[start] != '\0')
	{
		str[x] = s[start];
		x++;
		start++;
	}
	str[x] = '\0';
	return (str);
}
