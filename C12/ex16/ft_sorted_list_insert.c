/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:10:15 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/09 12:10:15 by hede-car         ###   ########.fr       */
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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;
	t_list	*list_ptr;
	
	new = ft_create_elem(data);
	list_ptr = *begin_list;
	if (!list_ptr || (cmp(list_ptr->data, new->data) >= 0))
	{
		new->next = list_ptr;
		*begin_list = new;
	}
	else
	{
		while (list_ptr->next && (cmp(list_ptr->next->data, new->data) > 0))
			list_ptr= list_ptr->next;
		new->next = list_ptr->next;
		list_ptr->next = new;
	}
}
