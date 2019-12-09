/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:23:03 by ngale             #+#    #+#             */
/*   Updated: 2019/09/20 21:50:20 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *st1, const char *st2)
{
	unsigned char *s1;
	unsigned char *s2;

	if (!*st2 && *st2 != '\0')
		return (0);
	s1 = (unsigned char *)st1;
	s2 = (unsigned char *)st2;
	while (*s2 != '\0' && *s2 && s1)
		*s1++ = *s2++;
	*s1 = '\0';
	return (st1);
}
