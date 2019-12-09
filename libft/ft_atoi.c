/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:49:02 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 13:02:09 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_long(size_t *result, int sign)
{
	if (*result > 9223372036854775807 && sign == 1)
		return (-1);
	else if (*result >= 9223372036854775807 && sign == -1)
		return (0);
	if (sign == 1)
		return (*result);
	return (-*result);
}

int				ft_atoi(const char *str)
{
	int		minus;
	size_t	i;
	size_t	result;

	minus = 1;
	i = 0;
	result = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\f' ||
			str[i] == ' ' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
		result = result * 10 + (str[i++] - '0');
	return (check_long(&result, minus));
}
