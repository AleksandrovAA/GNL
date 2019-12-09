/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 22:36:36 by ngale             #+#    #+#             */
/*   Updated: 2019/09/25 22:36:44 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (!s || !(tmp = ft_strnew(len)))
		return (0);
	while (i < len)
	{
		tmp[i] = s[i + start];
		i++;
	}
	return (tmp);
}
