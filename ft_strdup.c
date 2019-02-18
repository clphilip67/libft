/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:48:12 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 14:38:53 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		x;
	int		i;
	char	*str;

	i = 0;
	x = 0;
	while (src[i] != '\0')
		i++;
	if (!(str = (char*)malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	while (x <= i)
	{
		str[x] = src[x];
		x++;
	}
	return (str);
}
