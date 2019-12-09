/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 11:39:03 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 11:45:04 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		counter_words(char const *str, char c)
{
	size_t				i;
	size_t				count_w;
	char				prev;

	i = 0;
	count_w = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || (prev && prev == c)))
			count_w++;
		prev = str[i++];
	}
	return (count_w);
}

static char		**del(char ***stroka, int i)
{
	while (i)
		free((*stroka)[--i]);
	free(stroka);
	return (NULL);
}

static char		**split(char **stroka, char *s, char c)
{
	char	prev;
	size_t	i;
	size_t	start;
	size_t	n;

	n = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || (prev && prev == c)))
			start = i;
		else if (s[i] == c && i != 0 && prev != c)
			if (!(stroka[n++] = ft_strsub(s, start, i - start)))
				return (del(&stroka, n - 1));
		prev = s[i++];
	}
	if (prev && prev != c)
	{
		if (!(stroka[n++] = ft_strsub(s, start, i - start)))
			return (del(&stroka, n - 1));
	}
	stroka[n] = 0;
	return (stroka);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**stroki;
	size_t	count;

	if (!s)
		return (0);
	count = counter_words(s, c);
	if (!(stroki = (char **)ft_memalloc(sizeof(char *) * (count + 1))))
		return (0);
	split(stroki, (char *)s, c);
	return (stroki);
}
