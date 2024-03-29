/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:54:18 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 11:04:24 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int x;

	x = 0;
	if (s != NULL)
	{
		while (s[x] != '\0')
		{
			ft_putchar_fd(s[x], fd);
			x++;
		}
	}
}
