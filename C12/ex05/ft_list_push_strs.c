/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 19:52:55 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/08 19:52:55 by hede-car         ###   ########.fr       */
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin_list;
	t_list	*node;

	if (size <= 0)
		return (NULL);
	begin_list = ft_create_elem(strs[size - 1]);
	node = begin_list;
	size -= 1;
	while (size > 0)
	{
		node->next = ft_create_elem(strs[size - 1]);
		node = node ->next;
		size--;
	}
	return (begin_list);
}
