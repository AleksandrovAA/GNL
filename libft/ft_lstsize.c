/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 13:52:13 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 13:59:56 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_lstsize(t_list *begin_list)
{
	size_t	count;

	if (begin_list == NULL)
		return (0);
	count = 1;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}
