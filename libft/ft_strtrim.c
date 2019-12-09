/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 22:49:50 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 11:49:45 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ch(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	char	*st;
	char	*dest;
	size_t	count;
	size_t	end;

	if (!s)
		return (0);
	i = ft_strlen(s);
	st = (char *)s;
	end = i;
	count = 0;
	while (*s != '\0' && ch(*s++))
		i--;
	if (!i)
		return (ft_strnew(0));
	while (--end && ch(st[end]))
		count++;
	count = i - count;
	if (!(dest = ft_strnew(count)))
		return (0);
	dest = ft_strncpy(dest, &st[ft_strlen(st) - i], count);
	return (dest);
}
