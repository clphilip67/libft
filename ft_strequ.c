/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:05:16 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 11:03:09 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int x;

	x = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
		x++;
	if (s1[x] != '\0' || s2[x] != '\0')
		return (0);
	return (1);
}
