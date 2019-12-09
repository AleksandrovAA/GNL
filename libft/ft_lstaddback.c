/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 13:43:54 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 14:02:49 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstaddback(t_list **a, void const *content, size_t size)
{
	t_list	*element;

	element = *a;
	if (*a == NULL)
		*a = ft_lstnew(content, size);
	else
	{
		while (element->next)
			element = element->next;
		element->next = ft_lstnew(content, size);
	}
}
