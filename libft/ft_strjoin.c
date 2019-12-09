/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:22:38 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 12:26:35 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *all;

	if (!s1 || !s2 || !(all = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (0);
	if (!(all = ft_strcpy(all, s1)))
		return (0);
	if (!(all = ft_strcat(all, s2)))
		return (0);
	return (all);
}
