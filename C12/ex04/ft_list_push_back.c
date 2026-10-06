/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 19:25:47 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/08 19:25:47 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
//#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last;
	t_list	*node;

	last = ft_create_elem(data);
	node = *begin_list;
	if (!*begin_list)
		*begin_list = last;
	else
	{
		while (node->next)
			node = node->next;
		node->next = last;
	}
}
