/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:16:30 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 11:51:13 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	koko(size_t i, size_t *j, size_t *k)
{
	if (k > 0)
	{
		i -= *k;
		*j = 0;
		*k = 0;
	}
	return (i);
}

char		*ft_strstr(const char *h, const char *s)
{
	size_t			i;
	size_t			j;
	size_t			k;

	i = -1;
	j = 0;
	k = 0;
	if (!*s)
		return ((char *)h);
	while (h[++i])
	{
		while (h[i] == s[j] && s[j] != '\0')
		{
			k++;
			i++;
			j++;
		}
		if (ft_strlen((const char *)s) == k)
			return ((char *)&h[i - k]);
		i = koko(i, &j, &k);
	}
	return (0);
}
