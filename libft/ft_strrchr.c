/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:00:36 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 12:16:22 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	unsigned char	*s;
	unsigned char	*m;
	char			n;
	size_t			i;

	s = (unsigned char *)s1;
	i = 0;
	m = 0;
	n = (char)c;
	while (*s)
	{
		m = s++;
		i++;
	}
	s = (unsigned char *)s1;
	while ((int)i >= 0)
	{
		if (s[i] == n)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
