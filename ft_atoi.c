/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:05:19 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 11:28:55 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						i;
	unsigned long long int	result;
	unsigned long long int	neg;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n' || str[i] == \
'\r' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (unsigned long long int)(str[i] - '0');
		i++;
	}
	return (result * neg);
}
