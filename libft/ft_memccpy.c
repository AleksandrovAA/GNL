/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:01:21 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 12:40:24 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *st1, const void *st2, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	sym;
	size_t			l;

	l = n;
	s1 = (unsigned char *)st1;
	s2 = (unsigned char *)st2;
	sym = (unsigned char)c;
	if (s2 == s1)
		return (st1);
	while (l)
	{
		if (*s2 == sym)
		{
			*s1 = *s2;
			s1++;
			return ((void *)s1);
		}
		*s1++ = *s2++;
		l--;
	}
	return (0);
}
