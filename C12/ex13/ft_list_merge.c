/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:10:50 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/09 11:10:50 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list_ptr;

	list_ptr = *begin_list1;
	if (!list_ptr)
		*begin_list1 = begin_list2;
	else
	{
		while (list_ptr->next)
			list_ptr = list_ptr->next;
		list_ptr->next = begin_list2;
	}
}
