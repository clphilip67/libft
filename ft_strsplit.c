/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clphilip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:10:09 by clphilip          #+#    #+#             */
/*   Updated: 2018/12/04 11:27:30 by clphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_cpy_str(char *dest, char *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static size_t	ft_nb_words(const char *str, char c)
{
	size_t		i;
	size_t		nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (!str[i])
			break ;
		nb++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (nb);
}

static size_t	ft_split_words(const char *str, size_t nb, char **tab, char c)
{
	size_t		index;
	size_t		start;
	size_t		end;

	index = 0;
	start = 0;
	while (index < nb && str[start])
	{
		while (str[start] == c)
			start++;
		end = start;
		while (str[end] && str[end] != c)
			end++;
		if (!(tab[index] = malloc(end - start + 1)))
			return (0);
		ft_cpy_str(tab[index], (char*)str + start, end - start);
		start = end + 1;
		index++;
	}
	return (1);
}

char			**ft_strsplit(char const *str, char c)
{
	size_t		nb;
	char		**tab;

	if (!str)
		return (NULL);
	nb = ft_nb_words(str, c);
	if (!nb)
	{
		if (!(tab = malloc(sizeof(*tab))))
			return (NULL);
		tab[0] = NULL;
		return (tab);
	}
	if (!(tab = malloc((nb + 1) * sizeof(*tab))))
		return (NULL);
	if (!ft_split_words(str, nb, tab, c))
		return (NULL);
	tab[nb] = 0;
	return (tab);
}
