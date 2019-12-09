/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:05:41 by ngale             #+#    #+#             */
/*   Updated: 2019/09/13 16:42:21 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char *ptr;
	unsigned char sign;

	ptr = (unsigned char *)str;
	sign = (unsigned char)c;
	while (len--)
		*(ptr++) = sign;
	return (str);
}
