/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 18:53:54 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 11:55:46 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	koko(size_t i, size_t *j, size_t *k)
{
	i -= *k;
	*j = 0;
	*k = 0;
	return (i);
}

char		*ft_strnstr(const char *huge, const char *s2, size_t n)
{
	unsigned char	*h;
	unsigned char	*s;
	size_t			i;
	size_t			j;
	size_t			k;

	i = -1;
	j = 0;
	k = 0;
	h = (unsigned char *)huge;
	s = (unsigned char *)s2;
	if (!*s)
		return ((char *)h);
	while (h[++i])
	{
		while (h[i] == s[j] && s[j++] != '\0' && i++ < n)
			k++;
		if (ft_strlen((const char *)s) == k)
			return ((char *)&h[i - k]);
		else if (k > 0)
			i = koko(i, &j, &k);
	}
	return (0);
}
