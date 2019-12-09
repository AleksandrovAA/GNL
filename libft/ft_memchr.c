/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:29:52 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 12:42:17 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	sign;

	ptr = (unsigned char *)str;
	sign = (unsigned char)c;
	while (len)
	{
		if (*ptr == sign)
			return (ptr);
		ptr++;
		len--;
	}
	return (0);
}
