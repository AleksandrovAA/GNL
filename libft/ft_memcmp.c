/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:51:50 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 12:43:11 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *st1, const void *st2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)st1;
	s2 = (unsigned char *)st2;
	while (n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
