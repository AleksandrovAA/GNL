/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 19:35:32 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 11:54:12 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	char			*m;
	unsigned char	*str;

	i = -1;
	if (!f || !s || !(ft_strlen(s) + 1))
		return (0);
	str = (unsigned char *)s;
	if (!(m = ft_memalloc(ft_strlen(s) + 1)))
		return (0);
	while (str[++i])
		m[i] = f(i, str[i]);
	return (m);
}
