/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:40:19 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/09 11:40:19 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*list_other_ptr;
	void	*data;

	list_ptr = *begin_list;
	while (list_ptr)
	{
		list_other_ptr = list_ptr->next;
		while (list_other_ptr)
		{
			if (cmp(list_ptr->data, list_other_ptr->data) < 0)
			{
				data = list_other_ptr->data;
				list_other_ptr->data = list_ptr->data;
				list_ptr->data = data;
			}
			list_other_ptr = list_other_ptr->next;
		}
		list_ptr = list_ptr->next;
	}
}