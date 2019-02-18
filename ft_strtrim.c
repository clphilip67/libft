/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:55:13 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/03 17:47:51 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_space(char c)
{
	if (c == ' ' || c == ',' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

static int	ft_start(char const *s)
{
	int		x;

	x = 0;
	while (s[x] != '\0' && ft_space(s[x]) == 1)
		x++;
	return (x);
}

static int	ft_end(char const *s)
{
	int		y;

	y = 0;
	while (s[y] != '\0')
		y++;
	while (y >= 0 && (ft_space(s[y]) == 1 || s[y] == '\0'))
		y--;
	return (y);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		x;
	int		y;
	int		z;

	if (!s)
		return (NULL);
	y = ft_end(s);
	x = ft_start(s);
	if (x > y)
		x = 0;
	if (!(str = (char*)malloc(y - x + 2)))
		return (NULL);
	z = 0;
	while (x <= y)
	{
		str[z] = s[x];
		z++;
		x++;
	}
	str[z] = '\0';
	return (str);
}
