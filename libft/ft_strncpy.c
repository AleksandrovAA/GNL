/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:38:57 by ngale             #+#    #+#             */
/*   Updated: 2019/09/20 21:57:55 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *st1, const char *st2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	if (!*st2 && *st2 != '\0')
		return (0);
	s1 = (unsigned char *)st1;
	s2 = (unsigned char *)st2;
	while (s1 && *s2 != '\0' && n)
	{
		*s1++ = *s2++;
		n--;
	}
	while (n-- && *s1)
		*s1++ = '\0';
	return (st1);
}
