/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:39:11 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/08 21:39:11 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int
(*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*list_ptr;

	list_ptr = *begin_list;
	while (list_ptr && cmp(list_ptr->data, data_ref) == 0)
	{
		*begin_list = list_ptr->next;
		free_fct(list_ptr->data);
		free(list_ptr);
		list_ptr = *begin_list;
	}
	current = *begin_list;
	while (current && current->next)
	{
		if (cmp(current->next->data, data_ref) == 0)
		{
			list_ptr = current->next->next;
			free_fct(current->next->data);
			free(current->next);
			current->next = list_ptr;
		}
		else
			current = current->next;
	}
}
