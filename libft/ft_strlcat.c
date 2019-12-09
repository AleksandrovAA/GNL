/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:33:36 by ngale             #+#    #+#             */
/*   Updated: 2019/09/20 21:52:06 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *st1, const char *append, size_t n)
{
	size_t	check;
	char	*s1;
	size_t	len1;
	size_t	len2;

	check = 1;
	s1 = (char *)st1;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(append);
	if (n <= len1)
		check = 0;
	len2 += (check ? len1 : n);
	while (*s1 != '\0')
	{
		s1++;
		n--;
	}
	while (*append != '\0' && --n && check)
	{
		*s1++ = *append++;
	}
	*s1 = '\0';
	return (len2);
}
