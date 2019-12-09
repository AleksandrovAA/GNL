/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:51:13 by ngale             #+#    #+#             */
/*   Updated: 2019/09/20 21:55:58 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*s1;
	unsigned char	n;

	s1 = (char *)s;
	n = (unsigned char)c;
	while (*s1 && *s1 != n)
		s1++;
	if (*s1 == n)
		return (s1);
	else
		return (0);
}
