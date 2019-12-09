/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:54:04 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 13:11:38 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		otr(char *f, int n)
{
	*f = (8 + '0');
	return (n / 10);
}

char			*ft_itoa(int n)
{
	char		*f;
	size_t		len;

	len = ft_numlen((size_t)n);
	if (!(f = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	f[len] = '\0';
	if (n == -2147483648)
		n = otr(&f[--len], n);
	if (n < 0)
	{
		f[0] = '-';
		n *= -1;
	}
	while (--len)
	{
		f[len] = ((n % 10) + '0');
		n /= 10;
	}
	if (f[0])
		return (f);
	else
		f[len] = ((n % 10) + '0');
	return (f);
}
