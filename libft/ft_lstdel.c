/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:50:16 by ngale             #+#    #+#             */
/*   Updated: 2019/09/26 12:58:59 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;

	if (!del)
		return ;
	while ((current = *alst) != NULL)
	{
		(*alst) = (*alst)->next;
		ft_lstdelone(&current, del);
	}
	free(*alst);
	*alst = NULL;
}
